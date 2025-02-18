char Incoming_value = 0;
void setup() {
  // put your setup code  here, to run once:
Serial.begin(9600);
pinMode(6,OUTPUT);
pinMode(5,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);

}

void  loop() {
  if (Serial.available()  > 0)
    {
      Incoming_value = Serial.read();
      Serial.pvvrint(Incoming_value);
      Serial.print("/n");
      if (Incoming_value == '0')
        digitalWrite(6,HIGH);
      else if(Incoming_value == '1')
        digitalWrite(6,LOW);
         if (Incoming_value == '9')
        digitalWrite(5,HIGH);
      else if(Incoming_value == '2')
        digitalWrite(5,LOW);
         if (Incoming_value == '3')
        digitalWrite(7,HIGH);
      else if(Incoming_value == '4')
        digitalWrite(7,LOW);
         if (Incoming_value == '5')
        digitalWrite(8,HIGH);
      else if(Incoming_value == '6')
        digitalWrite(8,LOW);
         if (Incoming_value == '7')
        digitalWrite(9,HIGH);
      else if(Incoming_value == '8')
        digitalWrite(9,LOW);
    }
}
