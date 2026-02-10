  const int leftBackward = 3;
  const int leftForward = 5;
  
  const int rightForward = 6;
  const int rightBackward = 9;

//  rotation sensors, not verified pins yet
  const int rotationLeft = 10;
  const int rotationRight = 11;

void setup() {
  // put your setup code here, to run once:
  //A1 -> 3
  //A2 -> 5
  //B1 -> 6
  //B2 -> 9
  //R1 -> 10
  //R2 -> 11



  pinMode(leftForward, OUTPUT);
  pinMode(leftBackward, OUTPUT);
  pinMode(rightForward, OUTPUT);
  pinMode(rightBackward, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  // added the other part of the code to make it move forward
  analogWrite(leftForward, 255);
  digitalWrite(leftBackward, LOW);
  
  //eg, right wheel goes forward, needs to turn off right backward
  analogWrite(rightForward, 238);
  digitalWrite(rightBackward, LOW);

}
