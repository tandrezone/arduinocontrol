String error = "Error";
int PIN;
String PIN_MODE;
String PIN_IO;
double PIN_DATA;



int analogPin0 = A0;
int analogPin1 = A1;
int analogPin2 = A2;
int analogPin3 = A3;
int analogPin4 = A4;
int analogPin5 = A5;

int pinArray[] = {analogPin0,analogPin1,analogPin2,analogPin3,analogPin4,analogPin5};



// parsing and processing
String *parsing(String data_read)
{
  //"1,DIGITAL,WRITE,1"
  array parts = explode(data_read,",");
  if(sizeof(parts) < 4) {
    error = "instrution could not be parsed"
    write(error);
    return parts;
  }
  PIN = pinArray[parts[0]];
  PIN_MODE = parts[1];
  //#define INPUT 0x0
  //#define OUTPUT 0x1
  PIN_IO = parts[2];
  //#define HIGH 0x1
  //#define LOW  0x0
  PIN_DATA = parts[3];

}

bool processing() {
 pinMode(PIN,PIN_IO);


}