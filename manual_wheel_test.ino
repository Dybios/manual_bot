#define motor1 9
#define motor2 10
#define motor3 11
#define fwpin 2
#define bkpin 3
#define lfpin 4
#define rtpin 5

int num=0;
 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  pinMode(motor3, OUTPUT);
  pinMode(fwpin, INPUT);
  pinMode(bkpin, INPUT);
  pinMode(lfpin, INPUT);
  pinMode(rtpin, INPUT);

  digitalWrite(fwpin, HIGH);
  digitalWrite(bkpin, HIGH);
  digitalWrite(lfpin, HIGH);
  digitalWrite(rtpin, HIGH);
}

void forward() {
  int i=0, j=0;
  while(i<150 && j<150){
    analogWrite(motor1, i);
    analogWrite(motor2, j);
    Serial.print(i);
    Serial.print("\t");
    Serial.println(j);
    i=i+20;
    j=j+20;
  }
}

void back() {
  int i=0, j=0;
  while(i<150 && j<150){
    analogWrite(motor1, i);
    analogWrite(motor2, j);
    Serial.print(i);
    Serial.print("\t");
    Serial.println(j);
    i=i+20;
    j=j+20;
  }
}

void left() {
  int i=0, j=0;
  while(i<150 && j<150){
    analogWrite(motor1, i);
    analogWrite(motor2, j);
    Serial.print(i);
    Serial.print("\t");
    Serial.println(j);
    i=i+20;
    j=j+20;
  }
}

void right() {
  int i=0, j=0;
  while(i<150 && j<150){
    analogWrite(motor1, i);
    analogWrite(motor2, j);
    Serial.print(i);
    Serial.print("\t");
    Serial.println(j);
    i=i+20;
    j=j+20;
  }
}

void loop() {
  // put your main code here, to run repeatedly:

//  if (fwpin == LOW) {
//    Serial.println("Forward");
//    forward();
//  }
//  if(bkpin == LOW) {
//    Serial.println("Backwards");
//    back();
//  }
//  if(lfpin == LOW) {
//    Serial.println("Left");
//    left();
//  }
//  if (rtpin == LOW) {
//    Serial.println("Right");
//    right();
//  }

  forward();
}
