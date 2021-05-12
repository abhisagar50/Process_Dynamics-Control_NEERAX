///peltion on/ff
void bt0PopCallback(void *ptr)  // Release event for dual state button bt0
{
  uint32_t number1 = 0;  // Create variable to store value we are going to get
  bt0.getValue(&number1);  // Read value of dual state button to know the state (0 or 1)

  if(number1 == 1){  // If dual state button is equal to 1 (meaning is ON)...
    peltion=1;  // Turn ON 
  }else{  // Since the dual state button is OFF...
   peltion =0; // Turn OFF 
  }
}  // End of release event

///motor on/off

void bt10PopCallback(void *ptr)  // Release event for dual state button bt0
{
  uint32_t number8 = 0;  // Create variable to store value we are going to get
  bt10.getValue(&number8);  // Read value of dual state button to know the state (0 or 1)

  if(number8 == 1){  // If dual state button is equal to 1 (meaning is ON)...
    motor=1;  // Turn ON 
  }else{  // Since the dual state button is OFF...
   motor =0; // Turn OFF 
  }
}  // End of release event




///// fan on/off
void bt11PopCallback(void *ptr)  // Release event for dual state button bt0
{
  uint32_t number3 = 0;  // Create variable to store value we are going to get
  bt11.getValue(&number3);  // Read value of dual state button to know the state (0 or 1)

  if(number3 == 1){  // If dual state button is equal to 1 (meaning is ON)...
    fan=1;  // Turn ON 
  }else{  // Since the dual state button is OFF...
   fan =0; // Turn OFF 
  }
}  // End of release event

//coil on/off
void bt12PopCallback(void *ptr)  // Release event for dual state button bt0
{
  uint32_t number4 = 0;  // Create variable to store value we are going to get
  bt12.getValue(&number4);  // Read value of dual state button to know the state (0 or 1)

  if(number4 == 1){  // If dual state button is equal to 1 (meaning is ON)...
    coil=1;  // Turn ON 
  }else{  // Since the dual state button is OFF...
   coil =0; // Turn OFF 
  }
}  // End of release event


///temp increase
void b21PushCallback(void *ptr)  // Press event for button b21
{
  temp_cont = temp_cont + 1;  // Subtract 1 to the current value of the counter

  Serial2.print("n22.val=");  // This is sent to the nextion display to set what object name (before the dot) and what atribute (after the dot) are you going to change.
  Serial2.print(temp_cont);  // This is the value you want to send to that object and atribute mentioned before.
  Serial2.write(0xff);  // We always have to send this three lines after each command sent to the nextion display.
  Serial2.write(0xff);
  Serial2.write(0xff);
}  // End of press event

//temp decres
void b22PushCallback(void *ptr)  // Press event for button b22
{
  temp_cont = temp_cont - 1;  // Subtract 1 to the current value of the counter

  Serial2.print("n22.val=");  // This is sent to the nextion display to set what object name (before the dot) and what atribute (after the dot) are you going to change.
  Serial2.print(temp_cont);  // This is the value you want to send to that object and atribute mentioned before.
  Serial2.write(0xff);  // We always have to send this three lines after each command sent to the nextion display.
  Serial2.write(0xff);
  Serial2.write(0xff);
}  // End of press event

void b0PushCallback(void *ptr)  // next page  0
{
  Serial2.print("page 1");  // Sending this it's going to tell the nextion display to go to page 0.
  Serial2.write(0xff);  // We always have to send this three lines after each command sent to the nextion display.
  Serial2.write(0xff);
  Serial2.write(0xff);
}  // End of press event

////////back page 1

void b10PushCallback(void *ptr)  // back page 1
{
  Serial2.print("page 0");  // Sending this it's going to tell the nextion display to go to page 0.
  Serial2.write(0xff);  // We always have to send this three lines after each command sent to the nextion display.
  Serial2.write(0xff);
  Serial2.write(0xff);
}  // End of press event

/////// next page 1
void b11PushCallback(void *ptr)  // next page 1
{
  Serial2.print("page 2");  // Sending this it's going to tell the nextion display to go to page 0.
  Serial2.write(0xff);  // We always have to send this three lines after each command sent to the nextion display.
  Serial2.write(0xff);
  Serial2.write(0xff);
}  // End of press event

///back page 2
void b20PushCallback(void *ptr)  // back page 2
{
  Serial2.print("page 1");  // Sending this it's going to tell the nextion display to go to page 0.
  Serial2.write(0xff);  // We always have to send this three lines after each command sent to the nextion display.
  Serial2.write(0xff);
  Serial2.write(0xff);
}  // End of press event
void page0PushCallback(void *ptr)  // If page 0 is loaded on the display, the following is going to execute:
{
  CurrentPage = 0;  // Set variable as 0 so from now on arduino knows page 0 is loaded on the display
}  // End of press event


// Page change event:
void page1PushCallback(void *ptr)  // If page 1 is loaded on the display, the following is going to execute:
{
  CurrentPage = 1;  // Set variable as 1 so from now on arduino knows page 1 is loaded on the display
}  // End of press event


// Page change event:
void page2PushCallback(void *ptr)  // If page 2 is loaded on the display, the following is going to execute:
{
  CurrentPage = 2;  // Set variable as 2 so from now on arduino knows page 2 is loaded on the display
}  // End of press event

