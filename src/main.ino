bool SETUP_DONE = false;
int ledPIN = 13;
String data = "data";
char *buffer;
String dataform;
bool debug = true;

void setup()
{
  Serial.begin(9600);
  pinMode(ledPIN, OUTPUT);
}

void loop()
{
  while (Serial.available() > 0)
  {
    String datafrom = read();
    buffer = convertStingToChar(dataform);
    dataform.trim();
    parsing(dataform);
    Serial.println(datafrom);
    // write(buffer);
  }
}


