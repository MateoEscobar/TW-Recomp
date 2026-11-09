# VU1 nativa (TWR-27, decisión 22)

El rendimiento de la pelea depende de que la VU1 corra por bloques nativos y no por el camino genérico.
Medido en el Lenovo (RTX 4060, cargador, `performance`), pelea Rumble 1 ON 1:

| Estado | VU1 por ventana de 5 s | ns/ciclo VU1 | Imágenes/s |
|---|---|---|---|
| Sin micromemorias (solo intérprete/genérico) | ~4,15 s | ~50 | 8-15 |
| 10 micromemorias (título/menús) | ~3,8 s | ~34-40 | ~15 |
| 39 micromemorias (capturadas en la pelea) | ~1,0 s | 3,6 | 48-60 |

Conclusión: la GPU no era el cuello (Intel y RTX dan lo mismo con VU1 genérica); lo era la cobertura de microcódigo.

## Cómo se activa

1. `scripts/build-linux.sh` pasa al CMake `PS2X_VU1_MICROCODE_DIR=games/warriors/vu1_micro`,
   `PS2X_VU1_GENERATOR_SOURCE=tools/vu1/generar_vu1.cpp` y `PS2X_VU1N_GEN_OVERRIDE=tools/vu1/vu1n_gen.py`
   si hay `*.bin` en esa carpeta. Sin el override, el CMake de GoW busca `vu1n_gen.py` en `../../../tools/vu1`
   (su disposición) y el backend nativo no se genera sin avisar.
2. Las micromemorias son datos del juego: `games/warriors/vu1_micro/` está en `.gitignore`.

## Cómo capturar más cobertura

```bash
mkdir -p /ruta/cap && GOW_VU1_CAPTURA=/ruta/cap <runner>   # el valor es una CARPETA (con "1" no escribe nada)
cp -n /ruta/cap/vu1_*.bin games/warriors/vu1_micro/
cmake -S PS2Recomp -B build/ps2recomp && ninja -C build/ps2recomp ps2EntryRunner
```

Jugar todas las rutas (menús, selección, carga, pelea). Para ver lo que falta: `GOW_VU1N_DIAG=1` imprime
`[vu1n-miss] pc=… hits=…` (contadores acumulativos: quedarse con el máximo por pc). Con 39 programas quedan 54 pc
sin cubrir (~41 mil aciertos). Entradas extra: `games/warriors/vu1n_heads.txt` (no hizo falta).

## Pendiente

El instalador/launcher (TWR-20/26) debe generar `vu1_micro` (captura al primer arranque o pasada de cobertura)
porque no se puede distribuir.
