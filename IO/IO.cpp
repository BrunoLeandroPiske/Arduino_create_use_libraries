/*
	Bruno Leandro Piske
	17/02/2016
*/

#include "IO.h"

IO::IO(int pin)
{
	pinMode(pin, OUTPUT);
	pino = pin;
}

void IO::liga()
{
	digitalWrite(pino, HIGH);
}

void IO::desliga()
{
	digitalWrite(pino, LOW);
}

void IO::inverte()
{
	digitalWrite(pino, !digitalRead(pino));
}