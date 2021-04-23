#include <wire.h>
#include <Adafruit_SI1145.h>

Adafruit_SI1145 uv = Adafruit_SI1145();

void setup(){
	Serial.begin(9600);	
	uv.begin();
}

void loop() {
	float UVIndex = uv.readUV();
	UVindex /= 100.0;

	Serial.print(UVIndex);

	delay(120000);
}