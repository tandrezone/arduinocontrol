char *buffer;

char *convertStringToChar(String val)
{
  val.toCharArray(buffer, sizeof(buffer));
  return buffer;
}

String convertCharToString(char *val)
{
  return String String(chArray);
}

array explode(char *data, char delim)
{
  char *token;
  array explodedData;
  int index = 0;

  for (token = strtok(str, delim); token; token = strtok(NULL, delim))
  {
    explodedData[index] = token;
    index++;
  }
  return explodedData;
}