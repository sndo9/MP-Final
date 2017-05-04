Use BT06 module

UART0 over JA PMOD does not work, UART0 maybe wrong speed
	Maybe check with pico scope, without this working we have no bluetooth

Linux files in sdcard folder, follow MP-3 pdf to boot

PCORE for lockout implemented, code is 525
	Need to build button reading into launcher_fire_button.c to get code
	devmem or mmap that value to 0x76600000 sould unlock file
	devmem or mmap sould then read 1 in 0x76600000

Single board turret control works, need to workout communication

UART0 baudrate error will likely prevent us from fixing this
