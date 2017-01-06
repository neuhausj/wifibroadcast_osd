#include "altimu10v5.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#ifdef ALTIMU10V5


void altimu10v5_read(telemetry_data_t *td, uint8_t *buf, int buflen) {
    dataExchange data;
    int fd;
    char * myfifo = "/tmp/myfifo";
    //char buf[1024];

    /* open, read, and display the message from the FIFO */
    fd = open(myfifo, O_RDONLY);
    read(fd,data, sizeof(data));
    //#printf("Received: %s\n", data);
    close(fd);

	td->heading = data.heading;
	td->altitude = data.altitude; 
	td->roll = data.roll;
	td->pitch = data.pitch; 
	
	td->fix = 0;
	td->sats = 0;
	td->latitude = 0; 
	td->longitude = 0;
	td->voltage = 0;
	td->ampere = 0;
	td->speed = 0;
}
#endif
