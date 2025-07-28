set GameDir=E:/SteamLibrary/steamapps/common/DEATH STRANDING DIRECTORS CUT

copy /Y "%~dp0..\x64\Release\mod_loader.dll" "%GameDir%/mod.dll"

:: Enable this line for androidk
adb push "../x64/Release/mod_loader.dll" "/sdcard/DS/mod.dll"