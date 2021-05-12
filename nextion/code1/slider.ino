//MOTOR SLIDER
void h0PopCallback(void *ptr)  // Release event for slider
{
  uint32_t number2 = 0;  // Create variable to store value of slider
  h0.getValue(&number2);  // Read the value of the slider
  
  // I got a problem where sometimes I received a 0 instead of the correct slider value.
  // To fix this I will put a condition that if I get a 0, I am going to read again the slider to make sure I get the real value.
  // I am going to do this a few times because sometimes it takes a few tries to get the correct value.
  // The problem looks like it have something to do with touch events. Everytime the display sends a touch event,
  // we need to wait that data to finish transmiting before we can get another data from the display (in this case
  // we want the slider position). For this reason it's important to use a high Serial2 baud (ideally 115200)
  // so it doesn't have to wait too long for the touch event to finish sending the data.

  // The "Are you sure is 0?" begins:
  if(number2==0){  // If I got a 0, then recheck:
    h0.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h0.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h0.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h0.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h0.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h0.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h0.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h0.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h0.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h0.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h0.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h0.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h0.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h0.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h0.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h0.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h0.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h0.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h0.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h0.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h0.getValue(&number2);  // Read the value of the slider
  }
  // The "Are you sure is 0?" ended. At this point, if the slider keep showing as 0, then it really is at 0.

  // Now is going to send the value it received by the slider:
  Serial2.print("n20.val=");  // This is sent to the nextion display to set what object name (before the dot) and what atribute (after the dot) are you going to change.
  Serial2.print(number2);  // This is the value you want to send to that object and atribute mentioned before.
  Serial2.write(0xff);  // We always have to send this three lines after each command sent to the nextion display.
  Serial2.write(0xff);
  Serial2.write(0xff);
  motordelay=number2;
}  // End of release event

/////coilm delay

void h1PopCallback(void *ptr)  // Release event for slider
{
  uint32_t number2 = 0;  // Create variable to store value of slider
  h1.getValue(&number2);  // Read the value of the slider
  
  // I got a problem where sometimes I received a 0 instead of the correct slider value.
  // To fix this I will put a condition that if I get a 0, I am going to read again the slider to make sure I get the real value.
  // I am going to do this a few times because sometimes it takes a few tries to get the correct value.
  // The problem looks like it have something to do with touch events. Everytime the display sends a touch event,
  // we need to wait that data to finish transmiting before we can get another data from the display (in this case
  // we want the slider position). For this reason it's important to use a high Serial2 baud (ideally 115200)
  // so it doesn't have to wait too long for the touch event to finish sending the data.

  // The "Are you sure is 0?" begins:
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  if(number2==0){  // If I got a 0, then recheck:
    h1.getValue(&number2);  // Read the value of the slider
  }
  // The "Are you sure is 0?" ended. At this point, if the slider keep showing as 0, then it really is at 0.

  // Now is going to send the value it received by the slider:
  Serial2.print("n21.val=");  // This is sent to the nextion display to set what object name (before the dot) and what atribute (after the dot) are you going to change.
  Serial2.print(number2);  // This is the value you want to send to that object and atribute mentioned before.
  Serial2.write(0xff);  // We always have to send this three lines after each command sent to the nextion display.
  Serial2.write(0xff);
  Serial2.write(0xff);
  coildelay=number2;
}  // End of release event


