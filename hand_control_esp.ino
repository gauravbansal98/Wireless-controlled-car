#include <ESP8266WiFi.h>
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>

const char* ssid = "gaurav";
const char* password = "12345678";
WiFiServer server(80);

void setup() {
  Serial.begin(115200);
  delay(10);

  // Connect to WiFi network
  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print("...");
  }
  Serial.println("");
  Serial.println("WiFi connected");

  // Start the server
  server.begin();
  Serial.println("Server started");

  // Print the IP address
  Serial.print("Use this URL to connect: ");
  Serial.print("http://");
  Serial.print(WiFi.localIP());
  Serial.println("/");
  Serial.print('X');

}

void loop()
{
  // Check if a client has connected
  WiFiClient client = server.available();
  if (!client) {
    return;
  }

  // Wait until the client sends some data
  // Serial.println("new client");

  while (!client.available()) {
    delay(1);
    }
  String request = client.readStringUntil('\r');
  client.flush();
Serial.println(request);

 if (request.indexOf("/c") != -1)
  {
    Serial.println('c');
  }
   else if (request.indexOf("/d") != -1)
  {
    Serial.println('d');
  }
  else if (request.indexOf("/e") != -1)
  {
    Serial.println('e');
  }
   else if (request.indexOf("/f") != -1)
  {
    Serial.println('f');
  }
   else if (request.indexOf("/g") != -1)
  {
    Serial.println('g');
  }
  else if (request.indexOf("/h") != -1)
  {
    Serial.println('h');
  }
   if (request.indexOf("/i") != -1)
  {
    Serial.println('i');
  }
   else if (request.indexOf("/j") != -1)
  {
    Serial.println('j');
  }
   else if (request.indexOf("/k") != -1)
  {
    Serial.println('k');
  }
   else if (request.indexOf("/l") != -1)
  {
    Serial.println('l');
  }
   else if (request.indexOf("/m") != -1)
  {
    Serial.println('m');
  }
   else if (request.indexOf("/n") != -1)
  {
    Serial.println('n');
  } 
  else if (request.indexOf("/o") != -1)
  {
    Serial.println('o');
  } 
  else if (request.indexOf("/p") != -1)
  {
    Serial.println('p');
  }
  else if (request.indexOf("/q") != -1)
  {
    Serial.println('q');
   }
   else if (request.indexOf("/r") != -1)
  {
    Serial.println('r');
  }
     else if (request.indexOf("/s") != -1)
  {
    Serial.println('s');
  }
     else if (request.indexOf("/t") != -1)
  {
    Serial.println('t');
  }
    else if (request.indexOf("/u") != -1)
  {
    Serial.println('u');
  }
     else if (request.indexOf("/v") != -1)
  {
    Serial.println('v');
  }
     else if (request.indexOf("/w") != -1)
  {
    Serial.println('w');
  }
     else if (request.indexOf("/x") != -1)
  {
    Serial.println('x');
  }
     else if (request.indexOf("/y") != -1)
  {
    Serial.println('y');
  }
     else if (request.indexOf("/z") != -1)
  {
    Serial.println('z');
  }
     else if (request.indexOf("/aa") != -1)
  {
    Serial.println('1');
  }
     else if (request.indexOf("/bb") != -1)
  {
    Serial.println('2');
  }
     else if (request.indexOf("/cc") != -1)
  {
    Serial.println('3');
  }
      else if (request.indexOf("/A") != -1)
  {
    Serial.println('A');
  }
      else if (request.indexOf("/B") != -1)
  {
    Serial.println('B');
  }
      else if (request.indexOf("/C") != -1)
  {
    Serial.println('C');
  }
       else if (request.indexOf("/D") != -1)
  {
    Serial.println('D');
  }
       else if (request.indexOf("/E") != -1)
  {
    Serial.println('E');
  }
       else if (request.indexOf("/F") != -1)
  {
    Serial.println('F');
  }
       else if (request.indexOf("/G") != -1)
  {
    Serial.println('G');
  }
       else if (request.indexOf("/H") != -1)
  {
    Serial.println('H');
  }
       else if (request.indexOf("/I") != -1)
  {
    Serial.println('I');
  }
       else if (request.indexOf("/J") != -1)
  {
    Serial.println('J');
  }
       else if (request.indexOf("/K") != -1)
  {
    Serial.println('K');
  }
       else if (request.indexOf("/L") != -1)
  {
    Serial.println('L');
  }
       else if (request.indexOf("/M") != -1)
  {
    Serial.println('M');
  }
       else if (request.indexOf("/N") != -1)
  {
    Serial.println('N');
  }
       else if (request.indexOf("/O") != -1)
  {
    Serial.println('O');
  }
       else if (request.indexOf("/P") != -1)
  {
    Serial.println('P');
  }
       else if (request.indexOf("/Q") != -1)
  {
    Serial.println('Q');
  }
       else if (request.indexOf("/R") != -1)
  {
    Serial.println('R');
  }
       else if (request.indexOf("/S") != -1)
  {
    Serial.println('S');
  }
       else if (request.indexOf("/T") != -1)
  {
    Serial.println('T');
  }
       else if (request.indexOf("/U") != -1)
  {
    Serial.println('U');
  }
       else if (request.indexOf("/V") != -1)
  {
    Serial.println('V');
  }
       else if (request.indexOf("/W") != -1)
  {
    Serial.println('W');
  }
       else if (request.indexOf("/X") != -1)
  {
    Serial.println('X');
  }
       else if (request.indexOf("/Y") != -1)
  {
    Serial.println('Y');
  }
       else if (request.indexOf("/Z") != -1)
  {
    Serial.println('Z');
  }
       else if (request.indexOf("/AA") != -1)
  {
    Serial.println('4');
  }
       else if (request.indexOf("/BB") != -1)
  {
    Serial.println('5');
  }
       else if (request.indexOf("/CC") != -1)
  {
    Serial.println('6');
  }
    
}

