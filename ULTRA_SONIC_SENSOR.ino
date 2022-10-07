long duration;
int distance;
void setup()
{
pinMode(13,OUTPUT);
pinMode(8,INPUT);
pinMode(7,OUTPUT);
pinMode(12,OUTPUT);
Serial.begin(9600);
}
void loop()
{
digitalWrite(13,1);
delayMicroseconds(2);
digitalWrite(13,0);
delayMicroseconds(10);

long duration=pulseIn(8,1);
distance=0.034*duration/2;
Serial.print("distance in cm:");
Serial.println(distance);
delay(1000);

if((distance<=25))
{
digitalWrite(7,1);
digitalWrite(12,1);
delay(100);
digitalWrite(12,0);
digitalWrite(7,0);
}
else if((distance>25))
{
digitalWrite(7,0);
digitalWrite(12,0);
}

}
