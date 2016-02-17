/*
	Bruno Leandro Piske
	17/02/2016
*/

#ifndef IO_H
#define IO_H

#include <Arduino.h>

class IO {
	public:
		IO(int pin);
		void liga();
		void desliga();
		void inverte();
	
	private:
		int pino;
};

#endif