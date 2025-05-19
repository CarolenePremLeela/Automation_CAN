//Master Module

#include

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int smokesensor1=A0;

int smokesensor2=A1;

int smokesensor3=A2;

int buzzer=10;

int smokethre1=400;

int smokethre2=350;

int smokethre3=250;

void setup() {

lcd.begin(16,2);

pinMode(buzzer,OUTPUT);

Serial.begin(9600);

lcd.setCursor(0,0);

lcd.setCursor(0,0);

lcd.print("Sensor Interfacing");

lcd.setCursor(0,1);

lcd.print("With CAN Protocol");

delay(1000);

delay(500);

for(int i=0; i<=5; i++){

lcd.setCursor(0,0);

lcd.print("Initialising ");

delay(1000);

lcd.setCursor(0,0);

lcd.print("Initialising.");

delay(1000);

lcd.setCursor(0,0);

lcd.print("Initialising..");

delay(1000);

lcd.setCursor(0,0);

lcd.print("Initialising...");

delay(1000);

lcd.setCursor(0,0);

lcd.print("Initialising....");

delay(1000);

}

}

void loop() {

smokesensor1=analogRead(smokesensor1);

smokesensor2=analogRead(smokesensor2);

smokesensor3=analogRead(smokesensor3);

Serial.print("SEN1=");

Serial.print(smokesensor1);

delay(1000);

Serial.print("SEN2=");

Serial.print(smokesensor2);

delay(1000);

Serial.print("SEN3=");

Serial.print(smokesensor3);

delay(1000);

Serial.println();

delay(1000);

}

//Slave Module

#include

LiquidCrystal lcd(12,11,5,4,3,2);

int sensor=A0;

int sensorvalue=0;

int ledpin=2;

int ledpin1=13;

int sensor1=A1;

int temp;

void setup() {

pinMode(ledpin,OUTPUT);

pinMode(ledpin1,OUTPUT);

lcd.begin(16,2);

lcd.setCursor(0,0);

lcd.print("sensorvalue=");

lcd.setCursor(0,1);

lcd.print("temp=");

Serial.begin(9600);

// put your setup code here, to run once:

}

void loop() {

sensorvalue=analogRead(A0);

Serial.print("SENSORVALUE=");

Serial.println(sensorvalue);

lcd.setCursor(0,0);

lcd.print(sensorvalue);

delay(1000);

if(digitalRead(ledpin)==HIGH)

{

digitalWrite(ledpin,LOW);


}

else

{

digitalWrite(ledpin,HIGH);

}

Serial.print("TEMPERATURE=");

temp=analogRead(A1);

Serial.println(temp);

lcd.setCursor(0,1);

lcd.print(temp);

delay(1000);

if(digitalRead(ledpin1)==HIGH)

{

digitalWrite(ledpin1,LOW);


}

else

{

digitalWrite(ledpin1,HIGH);

}

delay(1000);


// put your main code here, to run repeatedly:

}


// put your main code here, to run repeatedly:
