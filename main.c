#include"../MCAL/DIO/DIO.h"
#include<avr/delay.h>
void main()
{


DIO_voidSetPinDirection(PORTA_ID,PIN0_ID,OUTPUT);

while(1){
DIO_voidSetPinValue(PORTA_ID,PIN0_ID,HIGH);
_delay_ms(1000);

DIO_voidSetPinValue(PORTA_ID,PIN0_ID,LOW);

_delay_ms(1000);
}
}
