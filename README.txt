Use BT06 module

UART0 over JA PMOD does not work, UART0 maybe wrong speed
	Maybe check with pico scope, without this working we have no bluetooth
	and likely no communication.
	Can be tested with "echo 5 > /dev/ttyPS1"
	/dev/ttyPS1 is the uart0 port while /dev/ttyPS0 is putty

Linux files in sdcard folder, follow MP-3 pdf to boot

PCORE for lockout implemented, code is 525
	Need to build button reading into launcher_fire_button.c to get code
	devmem or mmap that value to 0x76600000 sould unlock file
	devmem or mmap sould then read 1 in 0x76600000

	lockout works, upon saving 525 to address 0x76600000 the value of address
	0x76600000 becomes one. In turret control program check 0x76600004 before allowing
	turret control.

	part two of lockout I can to next time I am in lab, need to add a condition to check the 
	"security" pins value, 4 lines of code.

Single board turret control works, need to workout communication

UART0 baudrate error will likely prevent us from fixing this
