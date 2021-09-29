cd C:\AAA_driver2
copy C:\Prime\DevelopWDK\Dev_KView\x64\Win8.1Release\KServer.pdb
copy C:\Prime\DevelopWDK\Dev_KView\x64\Win8.1Release\KViewPackage\KServer.*
devcon update KServer.inf root\KServer
pause
