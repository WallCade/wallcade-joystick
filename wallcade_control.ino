

void setup(){
  for(int x=0; x<26; x++){
    pinMode(x, INPUT_PULLUP);
  }
}

void loop(){
  //Up
  if(!digitalRead(0)){
    Joystick.button(1,1);
  }else if(digitalRead(0)){
    Joystick.button(1,0);
  }
  //Down
  if(!digitalRead(1)){
    Joystick.button(2,1);
  }else if(digitalRead(1)){
    Joystick.button(2,0);
  }
  //Left
  if(!digitalRead(2)){
    Joystick.button(3,1);
  }else if(digitalRead(2)){
    Joystick.button(3,0);
  }
  //Right
  if(!digitalRead(3)){
    Joystick.button(4,1);
  }else if(digitalRead(3)){
    Joystick.button(4,0);
  }
  //Button 1
  if(!digitalRead(4)){
    Joystick.button(5,1);
  }else if(digitalRead(4)){
    Joystick.button(5,0);
  }
  //Button 2
  if(!digitalRead(5)){
    Joystick.button(6,1);
  }else if(digitalRead(5)){
    Joystick.button(6,0);
  }
  //Button 3
  if(!digitalRead(6)){
    Joystick.button(7,1);
  }else if(digitalRead(6)){
    Joystick.button(7,0);
  }
  //Start
  if(!digitalRead(7)){
    Joystick.button(8,1);
  }else if(digitalRead(7)){
    Joystick.button(8,0);
  }
  //Coin
  if(!digitalRead(24)){
    Joystick.button(16,1);
  }else if(digitalRead(24)){
    Joystick.button(16,0);
  }
}
