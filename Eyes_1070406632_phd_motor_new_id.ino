
//int motor[8] = {0, 0, 0, 0, 0, 0, 0, 0};
char id;
int data = 0;

void setup() {
Serial.begin(9600);
  //pinMode(led,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);

  analogWrite(3, 255);
  analogWrite(4, 255);
  analogWrite(5, 255);
  analogWrite(6, 255);
  analogWrite(7, 255);
  analogWrite(8, 255);
  analogWrite(9, 255);
  analogWrite(10, 255);

  
}



void loop() {
  // put your main code here, to run repeatedly:
while (Serial.available() >1){
id = Serial.read();
data = Serial.read();

if (id==1){
  analogWrite(3, data);
  Serial.print("Motor 1 = ");
  Serial.println(data);
}

if (id==2){
  analogWrite(4, data);
  Serial.print("Motor 2 = ");
  Serial.println(data);
}

if (id==3){
  analogWrite(5, data);
  Serial.print("Motor 3 = ");
  Serial.println(data);
}
if (id==4){
  analogWrite(6, data);
  Serial.print("Motor 4 = ");
  Serial.println(data);
}
if (id==5){
  analogWrite(7, data);
  Serial.print("Motor 5 = ");
  Serial.println(data);
}
if (id==6){
  analogWrite(8, data);
  Serial.print("Motor 6 = ");
  Serial.println(data);
}
if (id==7){
  analogWrite(9, data);
  Serial.print("Motor 7 = ");
  Serial.println(data);
}
if (id==8){
  analogWrite(10, data);
  Serial.print("Motor 8 = ");
  Serial.println(data);
}
}
}

//{
 // motor [0] = Serial.read();
 // motor [1] = Serial.read();
  //motor [2] = Serial.read();
 // motor [3] = Serial.read();
 // motor [4] = Serial.read();
  //motor [5] = Serial.read();
 // motor [6] = Serial.read();
 // motor [7] = Serial.read();

 // Serial.print("Motor 1 = ");
 // Serial.println(motor [0]);
 // Serial.print("Motor 2 = ");
  //Serial.println(motor [1]);
  //Serial.print("Motor 3 = ");
 // Serial.println(motor [2]);
 // Serial.print("Motor 4 = ");
 // Serial.println(motor [3]);
 // Serial.print("Motor 5 = ");
 // Serial.println(motor [4]);
 // Serial.print("Motor 6 = ");
 // Serial.println(motor [5]);
 // Serial.print("Motor 7 = ");
 // Serial.println(motor [6]);
 // Serial.print("Motor 8 = ");
 // Serial.println(motor [7]);

  
 // analogWrite(2, motor [0]);
 // analogWrite(3 ,motor [1]);
 // analogWrite(4, motor [2]);
 // analogWrite(5, motor [3]);
 // analogWrite(6, motor [4]);
 // analogWrite(7, motor [5]);
 // analogWrite(8, motor [6]);
 // analogWrite(9, motor [7]);
  
 // digitalWrite(led, value);
//} //end serial
//}
