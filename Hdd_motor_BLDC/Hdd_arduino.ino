int in1 = 8;
int in2 = 9;
int in3 = 10;
int b, c;
float val;
int analogPin = A0;
int digitalPin = A1;
void setup()
{
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(analogPin,INPUT);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  Serial.begin(9600); 
}

void loop()
{ digitalRead(digitalPin);
  if( digitalPin ==1)
{
  for(b=0;b<200;b++){
  digitalWrite(in1, HIGH);
  delay(10);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  delay(10);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  delay(10);
  digitalWrite(in3, LOW);
  c++;
  val = analogRead(analogPin);
  }
  for(b=0;b<100;b++){
  digitalWrite(in1, HIGH);
  delay(8);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  delay(8);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  delay(8);
  digitalWrite(in3, LOW);
  c++;
  val = analogRead(analogPin);
  }
  for(b=0;b<100;b++){
  digitalWrite(in1, HIGH);
  delay(6);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  delay(6);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  delay(6);
  digitalWrite(in3, LOW);
  c++;
  val = analogRead(analogPin);
  }
  for(b=0;b<100;b++){
  digitalWrite(in1, HIGH);
  delay(4);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  delay(4);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  delay(4);
  digitalWrite(in3, LOW);
   c++;
   val = analogRead(analogPin);
   }
  while(b<1000){
  digitalWrite(in1, HIGH);
  delay(3);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  delay(3);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  delay(3);
  digitalWrite(in3, LOW);
   c++;
   val = analogRead(analogPin);
   }}
   if(digitalPin ==0){
    for(b=0;b<200;b++){
  digitalWrite(in1, HIGH);
  delay(10);
  digitalWrite(in1, LOW);  
  digitalWrite(in3, HIGH);
  delay(10);
  digitalWrite(in3, LOW);
  digitalWrite(in2, HIGH);
  delay(10);
  digitalWrite(in2, LOW);
  c++;
  val = analogRead(analogPin);
  }
     for(b=0;b<100;b++){
  digitalWrite(in1, HIGH);
  delay(8);
  digitalWrite(in1, LOW);  
  digitalWrite(in3, HIGH);
  delay(8);
  digitalWrite(in3, LOW);
  digitalWrite(in2, HIGH);
  delay(8);
  digitalWrite(in2, LOW);
  c++;
  val = analogRead(analogPin);
  }
   for(b=0;b<100;b++){
  digitalWrite(in1, HIGH);
  delay(6);
  digitalWrite(in1, LOW);  
  digitalWrite(in3, HIGH);
  delay(6);
  digitalWrite(in3, LOW);
  digitalWrite(in2, HIGH);
  delay(6);
  digitalWrite(in2, LOW);
  c++;
  val = analogRead(analogPin);
  }
   for(b=0;b<100;b++){
  digitalWrite(in1, HIGH);
  delay(4);
  digitalWrite(in1, LOW);  
  digitalWrite(in3, HIGH);
  delay(4);
  digitalWrite(in3, LOW);
  digitalWrite(in2, HIGH);
  delay(4);
  digitalWrite(in2, LOW);
  c++;
  val = analogRead(analogPin);
  }
   if(b<1200){
  digitalWrite(in1, HIGH);
  delay(3);
  digitalWrite(in1, LOW);  
  digitalWrite(in3, HIGH);
  delay(3);
  digitalWrite(in3, LOW);
  digitalWrite(in2, HIGH);
  delay(3);
  digitalWrite(in2, LOW);
  c++;
  val = analogRead(analogPin);
  }
    }
}


