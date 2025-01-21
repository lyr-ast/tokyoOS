#include <system.h>

// Read a byte from an I/O port
uint8_t inb(uint16_t port) {
    uint8_t result;
    __asm__ volatile ("inb %1, %0" : "=a" (result) : "Nd" (port));
    return result;
}

// Write a byte to an I/O port
void outb(uint16_t port, uint8_t value) {
    __asm__ volatile ("outb %0, %1" : : "a" (value), "Nd" (port));
}

void panic() {
    asm volatile("cli"); 
    while (1) {
        asm volatile("hlt"); 
    }
}

