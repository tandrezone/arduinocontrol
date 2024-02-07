String read()
{
  // if there's any serial available, read it:
  data = Serial.readString();
  return data;
}

bool write(char *val)
{
  // Serial.println("write");
  while (Serial.available() > 0)
  {
    Serial.write(val);
  }
}