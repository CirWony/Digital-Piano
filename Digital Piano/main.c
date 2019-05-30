#include <stdint.h>
#include "DAC.h"
#include "Piano.h"
#include "Sound.h"
#include "SysTickInts.h"
#include "msp432p401r.h"

void main(void){
    DAC_Init();
    SysTick_Init(0);

    uint8_t Data = 0;
    uint8_t KeyNote;

    while(1) {
        KeyNote = Piano_In();

        if (KeyNote == 0x01)
            Sound_Play(Data,0x9F);

        else if (KeyNote == 0x02)
            Sound_Play(Data,0xB3);

        else if (KeyNote == 0x03)
            Sound_Play(Data,0x97);

        else if (KeyNote == 0x04)
            Sound_Play(Data,0x125);

        else if (KeyNote == 0x05)
            Sound_Play(Data,0x82);

        else if (KeyNote == 0x06)
            Sound_Play(Data,0x95);

        else if (KeyNote == 0x07)
            Sound_Play(Data,0x58);

        else
            DAC_Out(0);
    }
}
