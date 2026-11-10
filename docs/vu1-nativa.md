# VU1 nativa (TWR-27, decisión 22)

El rendimiento de la pelea depende de que la VU1 corra por bloques nativos y no por el camino genérico.
Medido en el Lenovo (RTX 4060, cargador, `performance`), pelea Rumble 1 ON 1:

| Estado | VU1 (ns/ciclo) | Imágenes/s | Cuadros defectuosos |
|---|---|---|---|
| Sin micromemorias (intérprete) | ~50 | 8-15 | 0 de 40 |
| 10 micromemorias | ~34-50 | ~10-15 | — |
| 39 micromemorias + backend nativo "lean" (`vu1n_gen.py`) | 3,6 | 48-60 | **4 de 40** (polígonos gigantes, 1 pantalla negra) |
| 39 micromemorias + compilado por pares (**por defecto**) | 7,9 | 47 de media (mín. 32, máx. 60) | 0 de 40 |

Conclusión: la GPU no era el cuello (Intel y RTX dan lo mismo con la VU1 lenta); lo era la cobertura de microcódigo.
El backend "lean" da ~25 % más pero produce polígonos gigantes; `GOW_VU1N_VERIFY` da 602 de 2000 ejecuciones con el
MAC final distinto (memoria y paquetes GIF iguales). Queda **apagado por defecto**; no se ha encontrado aún la causa.

> Trampa: con el backend nativo habilitado (por defecto en GoW) pero **sin bloques generados**, el despachador salta el
> microcódigo compilado por pares y cae al intérprete (49 ns/ciclo). Por eso `src/warriors_overrides.cpp` fija
> `GOW_VU1_NATIVE_OFF=1` al detectar el juego (`TWR_VU1N=1` lo deja activo).

## Cómo se activa

1. `scripts/build-linux.sh` pasa al CMake `PS2X_VU1_MICROCODE_DIR=games/warriors/vu1_micro` y
   `PS2X_VU1_GENERATOR_SOURCE=tools/vu1/generar_vu1.cpp` si hay `*.bin` en esa carpeta (microcódigo compilado por pares).
   El backend "lean" es opt-in: `TWR_VU1N=1 scripts/build-linux.sh` añade `PS2X_VU1N_GEN_OVERRIDE=tools/vu1/vu1n_gen.py`
   (el CMake de GoW lo busca en `../../../tools/vu1`, su disposición) y en ejecución hace falta `TWR_VU1N=1`.
2. Las micromemorias son datos del juego: `games/warriors/vu1_micro/` está en `.gitignore`.

## Cómo capturar más cobertura

```bash
mkdir -p /ruta/cap && GOW_VU1_CAPTURA=/ruta/cap <runner>   # el valor es una CARPETA (con "1" no escribe nada)
cp -n /ruta/cap/vu1_*.bin games/warriors/vu1_micro/
cmake -S PS2Recomp -B build/ps2recomp && ninja -C build/ps2recomp ps2EntryRunner
```

Jugar todas las rutas (menús, selección, carga, pelea). Para ver lo que falta: `GOW_VU1N_DIAG=1` imprime
`[vu1n-miss] pc=… hits=…` (contadores acumulativos: quedarse con el máximo por pc). Con 39 programas quedan 54 pc
sin cubrir (~41 mil aciertos). Entradas extra (solo backend lean): `games/warriors/vu1n_heads.txt` (no hizo falta).

## Pendiente

- Causa del MAC distinto / polígonos gigantes del backend lean (podría recuperar ~25 %); no es necesario para el DoD.
El instalador/launcher (TWR-20/26) debe generar `vu1_micro` (captura al primer arranque o pasada de cobertura)
porque no se puede distribuir.
