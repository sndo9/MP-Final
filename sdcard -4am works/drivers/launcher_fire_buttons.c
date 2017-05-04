#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/mman.h>
#include "launcher_commands.h"


#define LAUNCHER_NODE           "/dev/mummy0"


//addresses
#define BTN_ADDRESS 0x41200000
#define SW_ADDRESS  0x41240000


static void launcher_cmd(int fd, int cmd) {
  int retval = 0;
  
  retval = write(fd, &cmd, 1);
  while (retval != 1) {
    if (retval < 0) {
      fprintf(stderr, "Could not send command to %s (error %d)\n", LAUNCHER_NODE, retval);
    } 

    else if (retval == 0) {
      fprintf(stdout, "Command busy, waiting...\n");
    }
  }


  if (cmd == LAUNCHER_FIRE) {
    usleep(5000000);
  }

}

int main() {
	
	//printf("Made it\n");
	char c;
	int fd;
	int fd2;
	int cmd = LAUNCHER_STOP;
	char *dev = LAUNCHER_NODE;
	unsigned int duration = 500;
	int* button = NULL;
	
	
	fd = open(dev, O_RDWR);
	fd2 = open("/dev/mem", O_RDWR);
	//fd = -1;
	if(fd == -1) {
		perror("Couldn't open the file: %m");
		exit(1);
	}

	button = mmap(NULL, 1, PROT_READ, MAP_SHARED, fd2, 0x41240000);
	
	while(1) {
	printf("buttons = %d\n", *button);
	cmd = 0;
	
	if(*button & 0x01){
		cmd = LAUNCHER_FIRE;
	}
	
	else if(*button & 0x10){
		cmd = LAUNCHER_UP;
	}
	
	else if(*button & 0x02){
		cmd = LAUNCHER_DOWN;
	}
	
	else if(*button & 0x08){
		cmd = LAUNCHER_RIGHT;
	}
	
	else if(*button & 0x04){
		cmd = LAUNCHER_LEFT;
	}
	
	else if(*button & 0x08 && *button & 0x10){
		cmd = LAUNCHER_UP_RIGHT;
	}
	
	else if(*button & 0x04 && *button & 0x10){
		cmd = LAUNCHER_UP_LEFT;
	}
	
	else if(*button & 0x08 && *button & 0x02){
		cmd = LAUNCHER_DOWN_RIGHT;
	}
	
	else if(*button & 0x04 && *button & 0x02){
		cmd = LAUNCHER_DOWN_LEFT;
	}
	
	else {
		cmd = 0x20;
	}
	//fprintf(stdout, "cmd is %d", cmd);
	usleep(duration);
	printf("cmd is %d\n", cmd);
	launcher_cmd(fd, cmd);
	usleep(duration * 1000);
	launcher_cmd(fd, LAUNCHER_STOP);
	
	
	
	}
	close(fd);
	return 0;
}
	
	
	
	
	
	
	
	