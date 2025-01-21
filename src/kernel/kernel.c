#include <stddef.h>
#include <stdint.h>
#include <disp.h>
#include <limine.h>
#include <system.h>
#include <print.h>
#include <serial.h>


// Kernel entry point
void _start(void) {
    initialiseFrameBuffer();
    if (initSerial(COM1) != 0) {
        print("Error: Failed to initialize COM1 serial port.\n");
        panic();  // Halt the system if serial fails
    }
    print("hi");
    panic();
}
