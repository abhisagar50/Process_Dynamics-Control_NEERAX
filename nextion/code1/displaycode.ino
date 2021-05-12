void screen(){
  if(CurrentPage==0){
Serial2.print("n0.val=");  // This is sent to the nextion display to set what object name (before the dot) and what atribute (after the dot) are you going to change.
  Serial2.print(temp1);  // This is the value you want to send to that object and atribute mentioned before.
  Serial2.write(0xff);  // We always have to send this three lines after each command sent to the nextion display.
  Serial2.write(0xff);
  Serial2.write(0xff);


///temp2
Serial2.print("n1.val=");  // This is sent to the nextion display to set what object name (before the dot) and what atribute (after the dot) are you going to change.
  Serial2.print(temp2);  // This is the value you want to send to that object and atribute mentioned before.
  Serial2.write(0xff);  // We always have to send this three lines after each command sent to the nextion display.
  Serial2.write(0xff);
  Serial2.write(0xff);

//humid 1
Serial2.print("n2.val=");  // This is sent to the nextion display to set what object name (before the dot) and what atribute (after the dot) are you going to change.
  Serial2.print(humid1);  // This is the value you want to send to that object and atribute mentioned before.
  Serial2.write(0xff);  // We always have to send this three lines after each command sent to the nextion display.
  Serial2.write(0xff);
  Serial2.write(0xff);

//humid2
Serial2.print("n3.val=");  // This is sent to the nextion display to set what object name (before the dot) and what atribute (after the dot) are you going to change.
  Serial2.print(humid2);  // This is the value you want to send to that object and atribute mentioned before.
  Serial2.write(0xff);  // We always have to send this three lines after each command sent to the nextion display.
  Serial2.write(0xff);
  Serial2.write(0xff);
}

if(CurrentPage=2){

  //delay motor
  Serial2.print("n20.val=");  // This is sent to the nextion display to set what object name (before the dot) and what atribute (after the dot) are you going to change.
  Serial2.print(motordelay);  // This is the value you want to send to that object and atribute mentioned before.
  Serial2.write(0xff);  // We always have to send this three lines after each command sent to the nextion display.
  Serial2.write(0xff);
  Serial2.write(0xff);

  //delay coil
  Serial2.print("n21.val=");  // This is sent to the nextion display to set what object name (before the dot) and what atribute (after the dot) are you going to change.
  Serial2.print(coildelay);  // This is the value you want to send to that object and atribute mentioned before.
  Serial2.write(0xff);  // We always have to send this three lines after each command sent to the nextion display.
  Serial2.write(0xff);
  Serial2.write(0xff);

//temp count
Serial2.print("n22.val=");  // This is sent to the nextion display to set what object name (before the dot) and what atribute (after the dot) are you going to change.
  Serial2.print(temp_cont);  // This is the value you want to send to that object and atribute mentioned before.
  Serial2.write(0xff);  // We always have to send this three lines after each command sent to the nextion display.
  Serial2.write(0xff);
  Serial2.write(0xff);

  
}
  

  nexLoop(nex_listen_list); 
  }
