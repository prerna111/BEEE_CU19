int inPin = 5;  
int val = 0;    

void setup() {
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);  
  pinMode(9,OUTPUT);  
  pinMode(10,OUTPUT);  
  Serial.begin(9600);    
}

void loop(){
  int d=analogRead(A0);
  Serial.println(d);'
  delay(1000);
  if(d>350)
  {
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
  }
  else
  {
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  }
}
 
 
 
