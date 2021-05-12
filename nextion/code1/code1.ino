
#include <Nextion.h>

int variable1 = 0;  // Create a variable to have a counter going up by one on each cycle
int counter = 0;  // Create a variable to have a counter for the + and - buttons
int CurrentPage = 0;  // Create a variable to store which page is currently loaded
int temp_cont=25;
int peltion=0;
int fan=0;
int motor=0;
int coil=0;
int motordelay=20;
int coildelay=20;
int temp1=0;
int temp2=0;
int humid1=0;
int humid2=0;

// Format: <type of object> <object name> = <type of object>(<page id>, <object id>, "<object name>");


NexButton b0 = NexButton(0, 6, "b0");  // Button next page 0
NexButton b10 = NexButton(1, 1, "b10");  // Button back page 1
NexButton b11 = NexButton(1, 8, "b11");  // Button next page 1

NexButton b20 = NexButton(2, 1, "b20");  // Button back page 2
NexButton b21 = NexButton(2, 7, "b21");  // Button increase temp
NexButton b22 = NexButton(2, 8, "b22");  // Button decrase temp


NexDSButton bt0 = NexDSButton(0, 11, "bt0");  // dual peltion
NexDSButton bt10 = NexDSButton(1, 5, "bt10");  // Dual fan
NexDSButton bt11 = NexDSButton(1, 6, "bt11");  // Dual motor
NexDSButton bt12 = NexDSButton(1, 7, "bt12");  // Dual state button added


NexSlider h0 = NexSlider(2, 2, "h0");  // Slider  MOTOR DELAY
NexSlider h1 = NexSlider(2, 3, "h1");  // Slider COIL DELAY


//NexNumber n0 = NexNumber(0, 7, "n0");  // temp 1
//NexNumber n1 = NexNumber(0, 8, "n1");  // temp 2
//NexNumber n2 = NexNumber(0, 9, "n2");  // humid 1
//NexNumber n3 = NexNumber(0, 10, "n");  // humid 2
//NexNumber n20 = NexNumber(2, 9, "n20");  // delay moto
//NexNumber n21 = NexNumber(2, 10, "n21");  // delay coil
//NexNumber n22 = NexNumber(2, 11, "n23");  // temp control


NexPage page0 = NexPage(0, 0, "page0");  // Page added as a touch event
NexPage page1 = NexPage(1, 0, "page1");  // Page added as a touch event
NexPage page2 = NexPage(2, 0, "page2");  // Page added as a touch event


NexTouch *nex_listen_list[] = 
{
//  &n0,//temp1
//  &n1,//temp2
//  &n2,//humid1
//  &n3,//humid2
//  &n20,//delay m
//  &n21,//delay coil
//  &n22,//temp control

  &bt0,//peltion
  &bt10,//motor
  &bt11,//fan
  &bt12,//coil
  
  &b0,//next page 0
  &b10,//back page 1
  &b11,//next page 1
  &b20,//back page 2
  
  &b21,//inc
  &b22,//decere
   &h0,  // Slider added timer
    &h1,  // Slider added coil
    
  &page0,  // Page added as a touch event
  &page1,  // Page added as a touch event
  &page2,  // Page added as a touch event
  NULL  // String terminated
};


void setup() {
Serial.end();
  Serial.begin(115200);
  Serial2.begin(9600);  // Start Serial2 comunication at baud=9600


  delay(500);  // This dalay is just in case the nextion display didn't start yet, to be sure it will receive the following command.
  Serial2.print("baud=115200");  
  Serial2.write(0xff);  // We always have to send this three lines after each command sent to nextion.
  Serial2.write(0xff);
  Serial2.write(0xff);

  Serial2.end();  // End the Serial2 comunication of baud=9600

  Serial2.begin(115200);  // Start Serial2 comunication at baud=115200

//pages
b0.attachPush(b0PushCallback);
b10.attachPush(b10PushCallback);
b11.attachPush(b11PushCallback);
b20.attachPush(b20PushCallback);

//dual button
bt0.attachPop(bt0PopCallback);
bt10.attachPop(bt10PopCallback);
bt11.attachPop(bt11PopCallback);
bt12.attachPop(bt12PopCallback);

//incre and decre
  b21.attachPush(b21PushCallback); 
  b22.attachPush(b22PushCallback);

//slider
h0.attachPop(h0PopCallback);
h1.attachPop(h1PopCallback);


//page

  page0.attachPush(page0PushCallback);  // Page press event
  page1.attachPush(page1PushCallback);  // Page press event
  page2.attachPush(page2PushCallback);  // Page press event

  
}

void loop() {
 screen();

}
