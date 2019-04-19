int c;
void setup()
{
  Serial.begin(9600);
   pinMode(2, OUTPUT);
    pinMode(4, OUTPUT);
   pinMode(6, OUTPUT);
    pinMode(8, OUTPUT);
     pinMode(10, OUTPUT);
      pinMode(12, OUTPUT);
        pinMode(A1, OUTPUT);
         pinMode(A4, OUTPUT);
          digitalWrite(8, HIGH);  
digitalWrite(10, HIGH);
digitalWrite(12, HIGH);

  digitalWrite(4, HIGH);  
  digitalWrite(A1, LOW);
  digitalWrite(2, LOW);
  delay(1000);
  digitalWrite(A1, HIGH);  
  digitalWrite(6, HIGH);
   digitalWrite(A4, HIGH);
    delay(1000);
      digitalWrite(A1, LOW);  
      digitalWrite(4, LOW); 
        digitalWrite(6, LOW);
        delay(1000);
          digitalWrite(2, LOW);
              digitalWrite(4, LOW);
              digitalWrite(6, LOW);
              digitalWrite(A1, LOW);
              digitalWrite(A4, LOW);
        delay(1000);
              digitalWrite(4, HIGH); 
              digitalWrite(6, HIGH);
               digitalWrite(A4, HIGH);
}

void loop()
{
   
   if (Serial.available() > 0)
  {
    c = Serial.read();
    Serial.println(c);
  }
  else
  {
    delay(100);
  }
  if (c=='1')
  {
    Serial.println("on");
    digitalWrite(10, LOW);
  }

if (c=='0')
{
  Serial.println("off");
  digitalWrite(10, HIGH);
}
  c='\0';
}
