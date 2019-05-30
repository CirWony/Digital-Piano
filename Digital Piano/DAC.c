#include "DAC.H"

void DAC_Init(){
    P4->SEL0 &= ~0x3F;
    P4->SEL1 &= ~0x3F;
    P4->DIR |= 0x3F;
}

void DAC_Out(uint8_t WeeWoo){
    P4->OUT = WeeWoo;
}
