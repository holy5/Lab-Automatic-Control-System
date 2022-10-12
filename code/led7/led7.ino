#include "Encoder.h"

//Pin connected to latch pin (ST_CP) of 74HC595
const int latchPin = 8;
//Pin connected to clock pin (SH_CP) of 74HC595
const int clockPin = 3;
//Pin connected to Data in (DS) of 74HC595
const int dataPin = 9;

const int sensor = 4; // Sensor pin

Encoder knobLeft(2, 12); 

int count = 0;
int trieu = 0;
int tramnghin = 0;
int chucnghin = 0;
int nghin = 0;
int tram = 0;
int chuc = 0;
int donvi = 0;
long no_pulse = 1234;  
long a = 0;

void setup() {
	
	pinMode(latchPin, OUTPUT);
	pinMode(dataPin, OUTPUT);
	pinMode(clockPin, OUTPUT);
	pinMode(sensor, INPUT);

}
void loop() {

	if (digitalRead(sensor) == 0) knobLeft.write(0); // Neu chua gan Cam bien tiem can thi comment dong nay

	no_pulse = knobLeft.read();

	a = abs(no_pulse);

	trieu = a / 1000000;

	a = a % 1000000;
	tramnghin = a / 100000;

	a = a % 100000;
	chucnghin = a / 10000;

	a = a % 10000;
	nghin = a / 1000;

	a = a % 1000;
	tram = a / 100;

	a = a % 100;
	chuc = a / 10;

	donvi = a % 10;
			
		so(donvi);
		so(chuc);
		so(tram);
		so(nghin);
		so(chucnghin);
		so(tramnghin);
		so(trieu);
		if (no_pulse >= 0){
			so(10)	
		} else{
			so(11);		
		}			
		digitalWrite(latchPin, LOW);
		digitalWrite(latchPin, HIGH;

		
}

void so(int num)
{

	switch (num) {
	case 0:
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // dau cham
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh g
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh f
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh e
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh d
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh c
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh b
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh a
		break;
	case 1:
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // dau cham
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh g
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh f
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh e
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh d
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh c
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh b
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh a
		break;
	case 2:
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // dau cham
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh g
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh f
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh e
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh d
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh c
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh b
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh a
		break;
	case 3:
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // dau cham
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh g
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh f
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh e
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh d
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh c
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh b
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh a
		break;
	case 4:
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // dau cham
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh g
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh f
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh e
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh d
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh c
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh b
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh a
		break;
	case 5:
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // dau cham
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh g
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh f
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh e
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh d
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh c
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh b
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh a
		break;
	case 6:
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // dau cham
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh g
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh f
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh e
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh d
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh c
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh b
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh a
		break;
	case 7:
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // dau cham
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh g
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh f
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh e
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh d
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh c
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh b
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh a
		break;
	case 8:
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // dau cham
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh g
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh f
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh e
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh d
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh c
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh b
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh a
		break;
	case 9:
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // dau cham
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh g
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh f
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh e
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh d
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh c
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh b
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh a
		break;
	case 10: // so duong
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // dau cham
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh g
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh f
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh e
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh d
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh c
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh b
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh a
		break;
	case 11: // so am 
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // dau cham
		digitalWrite(dataPin, LOW); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh g
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh f
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh e
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh d
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh c
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh b
		digitalWrite(dataPin, HIGH); digitalWrite(clockPin, LOW); digitalWrite(clockPin, HIGH);  // canh a
		break;
	}
}
