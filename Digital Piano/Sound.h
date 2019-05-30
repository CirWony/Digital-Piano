#ifndef SOUND_H_
#define SOUND_H_
#include <stdint.h>
#include "SysTickInts.h"
#include "msp432p401r.h"

void Sound_Init();
void Sound_Play(uint8_t Note, uint32_t Time);


#endif /* SOUND_H_ */
