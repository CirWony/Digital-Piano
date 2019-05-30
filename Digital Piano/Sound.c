#include "Sound.h"
#include "DAC.h"

const uint8_t wave[32]= {
 8,9,11,12,13,14,14,15,15,15,14,
 14,13,12,11,9,8,7,5,4,3,2,
 2,1,1,1,2,2,3,4,5,7};


const uint8_t Guitar[64] = {
 20,20,20,19,16,12,8,4,3,5,10,17,
 26,33,38,41,42,40,36,29,21,13,9,
 9,14,23,34,45,52,54,51,45,38,31,
 26,23,21,20,20,20,22,25,27,29,
 30,29,27,22,18,13,11,10,11,13,13,
 13,13,13,14,16,18,20,20,20};

void Sound_Init(){
    DAC_Init();
}

void Sound_Play(uint8_t Note, uint32_t Time){
    SysTick->LOAD = Time;
    while (Note <= sizeof(wave) ){
        DAC_Out(wave[Note]);
        Note = 0x3F&(Note + 1);
    }
}
