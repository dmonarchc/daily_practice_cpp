# copiar_proyecto.ps1

# Mostrar directorios disponibles en la carpeta actual
Write-Host "Carpetas disponibles:"
Get-ChildItem -Directory | Select-Object -ExpandProperty Name

# Pedir al usuario la carpeta origen (se puede usar autocompletado con Tab en consola)
$origen = Read-Host "Ingresa el nombre de la carpeta a copiar"

# Verificar si existe
if (!(Test-Path $origen)) {
    Write-Host "❌ La carpeta '$origen' no existe." -ForegroundColor Red
    exit
}

# Pedir al usuario el nuevo nombre
$destino = Read-Host "Ingresa el nuevo nombre para la copia"

# Evitar sobrescribir sin preguntar
if (Test-Path $destino) {
    Write-Host "❌ La carpeta '$destino' ya existe." -ForegroundColor Yellow
    exit
}

# Copiar la carpeta
Copy-Item -Recurse $origen $destino
Write-Host "✅ Carpeta '$origen' copiada como '$destino'." -ForegroundColor Green
