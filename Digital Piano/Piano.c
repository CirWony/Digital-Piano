#include "Piano.h"
#include "DAC.h"

#define PIANO (*((volatile uint8_t*)0x40004C40))

void Piano_Init(){
    P5->SEL0 &= ~0x07;
    P5->SEL1 &= ~0x07;
    P5->DIR &= ~0x07;
}

int Piano_In(){
    return (PIANO&0x07);
}
