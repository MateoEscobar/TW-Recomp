# scripts\build-windows.ps1
# Compila TW-Recomp para Windows (x64 MSVC + Ninja) y opcionalmente empaqueta el .zip portable.
#
# Requisitos:
#   - Visual Studio 2022 Build Tools con C++ (o VS completo)
#   - CMake 3.21+ y Ninja en el PATH
#   - Ejecutar desde un "x64 Native Tools Command Prompt for VS 2022"
#     (o equivalente — cmake fallará con punteros de 32 bits si no)
#
# Uso:
#   scripts\build-windows.ps1                          # solo compilar (Release)
#   scripts\build-windows.ps1 -Config Debug            # compilar en Debug
#   scripts\build-windows.ps1 -Package                 # compilar + empaquetar .zip en dist\
#   scripts\build-windows.ps1 -Package -Output D:\rel  # idem, directorio personalizado
[CmdletBinding()]
param(
    [ValidateSet('Release', 'Debug', 'RelWithDebInfo')]
    [string]$Config = 'Release',

    [switch]$Package,

    [string]$Output = ''
)

$ErrorActionPreference = 'Stop'
$ROOT = Split-Path -Parent $PSScriptRoot

Write-Host "== Configurando (CMake + Ninja, $Config)..."
cmake -B "$ROOT\build" -G Ninja "-DCMAKE_BUILD_TYPE=$Config" -DPS2X_ENABLE_SCCACHE=OFF
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

Write-Host "== Compilando..."
cmake --build "$ROOT\build" --parallel
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

if (-not $Package) {
    Write-Host "== Build completado. Usa -Package para generar el .zip portable."
    exit 0
}

if (-not $Output) { $Output = Join-Path $ROOT 'dist' }

$StagingRoot = Join-Path $Output 'TW-Recomp'
$StagingBin  = Join-Path $StagingRoot 'bin'

Write-Host "== Instalando binarios en $StagingBin..."
cmake --install "$ROOT\build" --prefix $StagingRoot
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

# Renombrar el ejecutable principal al nombre esperado por el usuario final
$RunnerExe = Join-Path $StagingBin 'ps2EntryRunner.exe'
$FinalExe  = Join-Path $StagingBin 'TW-Recomp.exe'
if (Test-Path $RunnerExe) {
    Move-Item -Force $RunnerExe $FinalExe
}

# Incluir archivos de uso inmediato
Copy-Item "$ROOT\games\warriors\config.ini.template" "$StagingBin\" -ErrorAction SilentlyContinue
Copy-Item "$ROOT\README.md"                          "$StagingBin\" -ErrorAction SilentlyContinue

$Version = if ($env:GITHUB_REF_NAME) { $env:GITHUB_REF_NAME } else { 'dev' }
$ZipName = "TW-Recomp-$Version-windows.zip"
$ZipPath = Join-Path $Output $ZipName

Write-Host "== Empaquetando $ZipName..."
Compress-Archive -Path "$StagingBin\*" -DestinationPath $ZipPath -Force
Write-Host "==> $ZipPath"
