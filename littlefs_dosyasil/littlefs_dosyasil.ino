#include <LittleFS.h>
void setup()
{
 Serial.begin(115200);
 File f;
 LittleFS.begin();
 LittleFS.remove("/test.txt");
 
}
void loop()
{
}
