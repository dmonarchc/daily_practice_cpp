# clean_exe.ps1
# Borra todos los archivos .exe dentro de daily_practice_cpp y subcarpetas

$targetPath = "C:\Users\ciste\OneDrive\Escritorio\Code\Cpp\daily_practice_cpp"

Get-ChildItem -Path $targetPath -Recurse -Filter *.exe | Remove-Item -Force

Write-Host "Limpieza completa de archivos .exe en $targetPath"