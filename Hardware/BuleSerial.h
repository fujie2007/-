#ifndef __BULE_SERIAL_H
#define __BULE_SERIAL_H

#include <stdio.h>

extern char BuleSerial_RxPacket[];
extern uint8_t BuleSerial_RxFlag;

void BuleSerial_Init(void);
void BuleSerial_SendByte(uint8_t Byte);
void BuleSerial_SendArray(uint8_t *Array, uint16_t Length);
void BuleSerial_SendString(char *String);
void BuleSerial_SendNumber(uint32_t Number, uint8_t Length);
void BuleSerial_Printf(char *format, ...);

#endif
