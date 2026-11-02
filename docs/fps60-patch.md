# 60 FPS Patch — análisis y proceso de actualización

Ticket: TWR-23  
Rama: feature/TWR-23-patch-60fps

---

## Arquitectura general

El sistema de 60 fps tiene tres capas ya implementadas:

| Capa | Archivo | Qué hace |
|------|---------|----------|
| Paso de pelea | `game_overrides.cpp` / `warriorsVStep()` | Intercepta `sub_00102060` (fight step) y cambia `$a0=2` (30 fps) → `1` (60 fps) |
| Tasa de animación | `game_overrides.cpp` / `warriorsPredictAhead()` | Dobla N para slam-dive prediction a 60 fps |
| Tabla de pacing | `games/warriors/fps60_sites.txt` | Lista de PCs de stores que deben avanzar a mitad de velocidad |

La tercera capa es la que requiere análisis: sin `fps60_sites.txt` poblado, el juego corre al doble de velocidad (todos los timers/contadores se actualizan 2× por segundo real en vez de 1×).

---

## Tipos de sites en fps60_sites.txt

```
0xPC f    # float accumulator: store old + (new-old)/2 en cada frame
0xPC h    # rate assignment: multiplica el valor × 0.5 en cada store
0xPC d    # countdown timer: dobla el valor inicial en cada armado
0xPC D    # duration (pair de d): dobla el valor inicial
0xPC i    # integer counter: aplica el store solo en frames pares
0xPC j    # integer acc large step: store old + step/2
0xPC:ra f # vector float (sqc2): distingue por (pc, caller)
@0xADDR u # address rule: pace el store en esa dirección independiente del PC
```

---

## Proceso de análisis (PS2X_STEPCENSUS)

### Paso 1 — Capturar el step census

Desde la raíz del repo (`/var/www/html/ports/ps2/TW-Recomp`):

```bash
PS2X_STEPCENSUS=games/warriors/census_out.csv \
  ./build/ps2xRuntime/ps2EntryRunner games/warriors/SLUS_212.15
```

El runner escribe periódicamente `census_out.csv` (cada 600 frames render) y al salir.

**Qué jugar durante la captura** (15–20 minutos mínimo):
- Jugar varios combates completos (Rumble Mode o Story Mode, múltiples peleas)
- Incluir diferentes movimientos: golpes normales, cargas especiales, tomas, dashes, caídas, slam-dive
- Jugar con al menos 2 personajes distintos
- Dejar que los enemigos también actúen (para capturar stores de AI)
- Completar al menos una pelea larga (>2 min) para asegurar muestras suficientes

**Importante**: El census solo captura stores durante frames de pelea activa (gate `ps2HalfStepFightActive()`).

### Paso 2 — Clasificar los sites

Desde la raíz del repo:

```bash
python3 docs/classify_census.py games/warriors/census_out.csv > /tmp/fps60_candidates.txt
```

El script genera un archivo con los candidatos clasificados. Revisar manualmente:
- Descartar sites que correspondan a lógica de render/GS (PC en rango 0x43xxxx–0x4bxxxx)
- Descartar sites con `per_frame` muy bajo (<0.5) si parecen eventos únicos
- Para sites `h` (rate assignment), verificar que el valor sea efectivamente una tasa de animación

### Paso 3 — Verificar con PS2X_FPS60=1

```bash
PS2X_FPS60=1 ./build/ps2xRuntime/ps2EntryRunner games/warriors/SLUS_212.15
```

Verificaciones:
- [ ] Los personajes se mueven a velocidad visual normal (no el doble)
- [ ] Las animaciones corren suavemente al doble de fluidez
- [ ] Las físicas de ragdoll se ven correctas
- [ ] El movimiento de cámara es fluido sin saltos
- [ ] Los efectos de partículas (humo, sangre) son correctos
- [ ] La UI y timers corren a tiempo real (no 2× rápido)
- [ ] No hay crashes ni corrupciones de memoria durante 10+ minutos

---

## Reglas de clasificación automática

El script `classify_census.py` asigna kind según estas heurísticas:

| Kind | Condición |
|------|-----------|
| `f` | `fplaus ≥ 55%`, `chain ≥ 30%`, `fdelta_pct ≥ 35%`, `per_frame ∈ [0.3, 3.5]`, `size=4` |
| `h` | `fplaus ≥ 55%`, `chain < 25%`, `same < 75%`, `per_frame ∈ [0.3, 2.5]`, `size=4` |
| `d` | `fplaus < 45%`, `idelta < 0`, `idelta_pct ≥ 45%`, `per_frame ∈ [0.3, 2.5]` |
| `i` | `fplaus < 45%`, `idelta = 1`, `idelta_pct ≥ 45%`, `chain ≥ 25%`, `per_frame ∈ [0.3, 2.5]` |
| `j` | `fplaus < 45%`, `|idelta| ≥ 2`, `chain ≥ 35%`, `idelta_pct ≥ 45%`, `per_frame ∈ [0.3, 3.5]` |
| `f` (vec) | size=16, `fplaus ≥ 60%`, `chain ≥ 30%`, `fdelta_pct ≥ 35%`, `ra ≠ 0` |

Los sites con `per_frame > 4` (loops de matrices) y `same_pct > 90%` (constantes) se omiten automáticamente.

---

## Referencia BT3-Recomp

El mismo framework en `/var/www/html/ports/ps2/BT3-Recomp/games/bt3/fps60_sites.txt` tiene **205 entries** como referencia de magnitud y formato esperado.

---

## Iteraciones conocidas

Después de la primera iteración puede ser necesario:

1. **Sites con `per_frame` ≈ 0.5**: Ejecutados cada otro frame por el engine (30 Hz parity `func_23D160`). Ya son half-rate — usar kind `u` (address rule) en vez de `i`.

2. **Bugs de freeze/crash**: Usar `PS2X_ADDRWATCH=<addr>` para rastrear el escritor de una dirección específica que se corrompe.

3. **Animaciones a velocidad incorrecta**: Buscar sites `h` faltantes (rate assignments del clip de animación activo).

4. **Hclip teleport slam**: Ver comentario `[hclip]` en `ps2_stepcensus.cpp`. La función `FUN_001c4520` sirve todos los clips — el site `h` necesita un tercer token con el clip slot id para no afectar el slam.
