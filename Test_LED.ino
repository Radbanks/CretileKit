#include <NetLogic.h>
#include <DHT.h>
#include <NetLogicDHT.h>

void setup()
{
  NetLogic.start();
}

void loop()
{
  NetLogic.local.writeOUT(1,99);
  delay( 1 * 1000  );
  NetLogic.local.writeOUT(1,99);
  delay( 1 * 1000  );
}
