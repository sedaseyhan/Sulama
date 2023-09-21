int yled=6;
int kled=4;
int buzzer=8;
int sensFire=5;

bool bilgi;


void setup(){
  pinMode(yled,OUTPUT);
  pinMode(kled,OUTPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(sensFire,INPUT);
  
}


void loop (){
 bilgi=digitalRead(sensFire);
 if(bilgi==0){
  digitalWrite(yled,0);
  digitalWrite(kled,1);
  digitalWrite(buzzer,0);
  delay (10000);
  digitalWrite(kled,0);
  digitalWrite(buzzer,1);
  delay (2500);
}
else{
  digitalWrite(yled,1);
  digitalWrite(kled,0);
  digitalWrite(buzzer,0);
}
}
