#include <Arduino.h>

int hour = 0;
int minutes = 0;
unsigned long now = 0;
int hour_L = 0;
int hour_R = 0;
int minutes_L = 0;
int minutes_R = 0;

// Buttons
int hour_button = 0;
int minute_button = 1;
int hour_button_pressed = 0;
int minute_button_pressed = 1;

//Number pins
int D1 = 2;
int D2 = 3;
int D3 = 4;
int D4 = 5;

//Segment pins
int A = 6;
int B = 7;
int C = 8;
int D = 9;
int E = 10;
int F = 11;
int G = 12;
int DOT = 13;


void readButton(){
  hour_button_pressed = digitalRead(hour_button);
  minute_button_pressed = digitalRead(minute_button);
}


//SELECT DIGIT TO PRINT
void print_D1(){
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
  digitalWrite(DOT, LOW);
}

void print_D2(){
  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
  digitalWrite(DOT, HIGH);
}

void print_D3(){
  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);
  digitalWrite(D4, HIGH);
  digitalWrite(DOT, LOW);
}

void print_D4(){
  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, LOW);
  digitalWrite(DOT, LOW);
}

//PRINT NUMBERS
void print_0() // writing 0
{
  digitalWrite(A, HIGH);   
  digitalWrite(B, HIGH);   
  digitalWrite(C, HIGH);   
  digitalWrite(D, HIGH);   
  digitalWrite(E, HIGH);   
  digitalWrite(F, HIGH);   
  digitalWrite(G, LOW);
  // digitalWrite(DOT, LOW);
}

void print_1() // writing 1
{
  digitalWrite(A, LOW);   
  digitalWrite(B, HIGH);   
  digitalWrite(C, HIGH);   
  digitalWrite(D, LOW);   
  digitalWrite(E, LOW);   
  digitalWrite(F, LOW);   
  digitalWrite(G, LOW);
  // digitalWrite(DOT, LOW);
}

void print_2() // writing 2
{
  digitalWrite(A, HIGH);   
  digitalWrite(B, HIGH);   
  digitalWrite(C, LOW);   
  digitalWrite(D, HIGH);   
  digitalWrite(E, HIGH);   
  digitalWrite(F, LOW);   
  digitalWrite(G, HIGH);
  // digitalWrite(DOT, LOW);
}

void print_3() // writing 3
{
  digitalWrite(A, HIGH);   
  digitalWrite(B, HIGH);   
  digitalWrite(C, HIGH);   
  digitalWrite(D, HIGH);   
  digitalWrite(E, LOW);   
  digitalWrite(F, LOW);   
  digitalWrite(G, HIGH);
  // digitalWrite(DOT, LOW);
}

void print_4() // writing 4
{
  digitalWrite(A, LOW);   
  digitalWrite(B, HIGH);   
  digitalWrite(C, HIGH);   
  digitalWrite(D, LOW);   
  digitalWrite(E, LOW);   
  digitalWrite(F, HIGH);   
  digitalWrite(G, HIGH);
  // digitalWrite(DOT, LOW);
}

void print_5() // writing 5
{
  digitalWrite(A, HIGH);   
  digitalWrite(B, LOW);   
  digitalWrite(C, HIGH);   
  digitalWrite(D, HIGH);   
  digitalWrite(E, LOW);   
  digitalWrite(F, HIGH);   
  digitalWrite(G, HIGH);
  // digitalWrite(DOT, LOW);
}

void print_6() // writing 6
{
  digitalWrite(A, HIGH);   
  digitalWrite(B, LOW);   
  digitalWrite(C, HIGH);   
  digitalWrite(D, HIGH);   
  digitalWrite(E, HIGH);   
  digitalWrite(F, HIGH);   
  digitalWrite(G, HIGH);
  // digitalWrite(DOT, LOW);
}

void print_7() // writing 7
{
  digitalWrite(A, HIGH);   
  digitalWrite(B, HIGH);   
  digitalWrite(C, HIGH);   
  digitalWrite(D, LOW);   
  digitalWrite(E, LOW);   
  digitalWrite(F, LOW);   
  digitalWrite(G, LOW);
  // digitalWrite(DOT, LOW);
}

void print_8() // writing 8
{
  digitalWrite(A, HIGH);   
  digitalWrite(B, HIGH);   
  digitalWrite(C, HIGH);   
  digitalWrite(D, HIGH);   
  digitalWrite(E, HIGH);   
  digitalWrite(F, HIGH);   
  digitalWrite(G, HIGH);
  // digitalWrite(DOT, LOW);
}

void print_9() // writing 9
{
  digitalWrite(A, HIGH);   
  digitalWrite(B, HIGH);   
  digitalWrite(C, HIGH);   
  digitalWrite(D, HIGH);   
  digitalWrite(E, LOW);   
  digitalWrite(F, HIGH);   
  digitalWrite(G, HIGH);
  // digitalWrite(DOT, LOW);
}


void printTime(){
  hour_R = hour%10;
  hour_L = hour/10;
  minutes_R = minutes%10;
  minutes_L = minutes/10;

if(hour == 0 && minutes == 0){
    // Print 00:00
  print_D1();
  print_0();
  delay(1);
  print_D2();
  print_0();
  delay(1);
  print_D3();
  print_0();
  delay(1);
  print_D4();
  print_0();
  delay(1);
}

// Print Digit 1
switch (hour_L)
{
  case 0:
    print_D1();
    print_0();
    delay(1);
    break;
  case 1:
    print_D1();
    print_1();
    delay(1);
    break;
  case 2:
    print_D1();
    print_2();
    delay(1);
    break;
default:
  break;
}


// Print Digit 2
  switch (hour_R)
  {
  case 0:
    print_D2();
    print_0();
    delay(1);
    break;
  case 1:
    print_D2();
    print_1();
    delay(1);
    break;
  case 2:
    print_D2();
    print_2();
    delay(1);
    break;
  case 3:
    print_D2();
    print_3();
    delay(1);
    break;
  case 4:
    print_D2();
    print_4();
    delay(1);
    break;
  case 5:
    print_D2();
    print_5();
    delay(1);
    break;
  case 6:
    print_D2();
    print_6();
    delay(1);
    break;
  case 7:
    print_D2();
    print_7();
    delay(1);
    break;
  case 8:
    print_D2();
    print_8();
    delay(1);
    break;
  case 9:
    print_D2();
    print_9();
    delay(1);
    break;
  default:
    break;
  }

// Print Digit 3
switch (minutes_L)
{
  case 0:
    print_D3();
    print_0();
    delay(1);
    break;
  case 1:
    print_D3();
    print_1();
    delay(1);
    break;
  case 2:
    print_D3();
    print_2();
    delay(1);
    break;
  case 3:
    print_D3();
    print_3();
    delay(1);
    break;
  case 4:
    print_D3();
    print_4();
    delay(1);
    break;
  case 5:
    print_D3();
    print_5();
    delay(1);
    break;
default:
  break;
}

// Print Digit 4
switch (minutes_R)
{
  case 0:
    print_D4();
    print_0();
    delay(1);
    break;
  case 1:
    print_D4();
    print_1();
    delay(1);
    break;
  case 2:
    print_D4();
    print_2();
    delay(1);
    break;
  case 3:
    print_D4();
    print_3();
    delay(1);
    break;
  case 4:
    print_D4();
    print_4();
    delay(1);
    break;
  case 5:
    print_D4();
    print_5();
    delay(1);
    break;
  case 6:
    print_D4();
    print_6();
    delay(1);
    break;
  case 7:
    print_D4();
    print_7();
    delay(1);
    break;
  case 8:
    print_D4();
    print_8();
    delay(1);
    break;
  case 9:
    print_D4();
    print_9();
    delay(1);
    break;
default:
  break;
}

}

void setup(){
  pinMode(13, OUTPUT);     
  pinMode(12, OUTPUT);     
  pinMode(11, OUTPUT);     
  pinMode(10, OUTPUT);     
  pinMode(9, OUTPUT);     
  pinMode(8, OUTPUT);     
  pinMode(7, OUTPUT);     
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT); 
  pinMode(4, OUTPUT); 
  pinMode(3, OUTPUT); 
  pinMode(2, OUTPUT);

  pinMode(hour_button, INPUT);
  pinMode(minute_button, INPUT);
}

void loop(){
  readButton();
  // Set hours
  if(hour_button_pressed == HIGH){
    if(hour < 23){
      hour ++;
    }else{
      hour = 0;
    }
    delay(200);
  }  

  // Set minutes
  if(minute_button_pressed == HIGH){
    if(minutes < 60){
      minutes ++;
    }
    if(minutes == 60 && hour < 23){
      hour ++;
      minutes = 0;
    }
    if(minutes == 60 && hour >= 23){
      hour = 0;
      minutes = 0;
    }
    delay(200);
  }

  // Increase time each minute
  if(millis() > now + 60000){//each minute
    now = millis();
    if(minutes < 60){
      minutes ++;
    }
    if(minutes == 60 && hour < 23){
      hour ++;
      minutes = 0;
    }
    if(minutes == 60 && hour >= 23){
      hour = 0;
      minutes = 0;
    }

  }
  printTime();
}
