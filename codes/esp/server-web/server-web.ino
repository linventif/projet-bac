#include <WiFi.h>   // Utilisation de la librairie WiFi.h
#include <WebServer.h>   // Utilisation de la librairie WebServer.h

const char* ssid = "SuberDeep";  // Mettre le ssid de votre réseau Wifi
const char* password = "21436587";   // Mettre le mot de passe de votre réseau Wifi
WebServer server(80);  // Permet l'affichage de la page d'accueil 

void handleRoot(){  // Page d'accueil La page HTML est mise dans le String page

//  Syntaxe d'écriture pour être compatible avec le C++ / Arduino

// String page = " xxxxxxxx ";

// page += " xxxxx ";

// etc ...
  String page = "<!DOCTYPE html>";  // Début page HTML
    page += "<html>    "; 
    page += "    <head>"; 
    page += "        <meta charset='utf-8' />"; 
    page += "        <html lang='fr'>     "; 
    page += "        <title>Linventif ・ Projet Serre</title>"; 
    page += "    </head>"; 
    page += "    <style>"; 
    page += "        body {"; 
    page += "    color:black;"; 
    page += "    background-color:#2c2f33;"; 
    page += "    font-family: Calibri;"; 
    page += "    text-align: center;"; 
    page += "}"; 
    page += ""; 
    page += "#body {"; 
    page += "	text-align: center;"; 
    page += "    margin: auto;"; 
    page += "    width: 88%;"; 
    page += "    margin-top: 2.5%;"; 
    page += "    display: flex;"; 
    page += "    justify-content: space-between;"; 
    page += "}"; 
    page += ""; 
    page += ""; 
    page += ".content {"; 
    page += "    position: relative;"; 
    page += "}"; 
    page += "  "; 
    page += ".content p {"; 
    page += "    margin: 0;"; 
    page += "    position: absolute;"; 
    page += "    top: 50%;"; 
    page += "    left: 50%;"; 
    page += "    transform: translate(-50%, -50%);"; 
    page += "}"; 
    page += ""; 
    page += "/* - - - - - - - - - - - - - - - - - */"; 
    page += ""; 
    page += "#top {"; 
    page += "    width: 100%;"; 
    page += "	display: grid;"; 
    page += "	grid-template-columns: repeat(2, 1fr);"; 
    page += "	grid-gap: 30px;"; 
    page += "	grid-auto-rows: minmax(auto, auto);    "; 
    page += "}"; 
    page += ""; 
    page += "#bottom {"; 
    page += "    grid-column: 1/3;"; 
    page += "    padding: 20px;"; 
    page += "    background-color:#42474d;"; 
    page += "    border-radius: 20px;"; 
    page += "}"; 
    page += ""; 
    page += "/* - - - - - - - - - - - - - - - - - */"; 
    page += ""; 
    page += ".case {"; 
    page += "    height: auto;"; 
    page += "    padding: 20px;"; 
    page += "    background-color:#42474d;"; 
    page += "    border-radius: 20px;"; 
    page += "}"; 
    page += ""; 
    page += "/* - - - - - - - - - - - - - - - - - */"; 
    page += ""; 
    page += ".grid_2c {"; 
    page += "    margin-top: 20px;"; 
    page += "	display: grid;"; 
    page += "	grid-template-columns: repeat(2, 1fr);"; 
    page += "	grid-gap: 20px;"; 
    page += "}"; 
    page += ".grid_3c {"; 
    page += "    margin-top: 20px;"; 
    page += "	display: grid;"; 
    page += "	grid-template-columns: repeat(3, 1fr);"; 
    page += "	grid-gap: 20px;"; 
    page += "}"; 
    page += ""; 
    page += ".title {"; 
    page += "    background-color: rgb(89, 100, 202);"; 
    page += "    border-radius: 10px;"; 
    page += "    height: auto;"; 
    page += "    padding: 10px;"; 
    page += "}"; 
    page += ""; 
    page += ".subtitle {"; 
    page += "    background-color: rgb(45, 133, 173);"; 
    page += "    border-radius: 10px 10px 0px 0px;"; 
    page += "    height: 60px;"; 
    page += "    padding: 10px;"; 
    page += "}"; 
    page += ""; 
    page += ".grid_2c .content {"; 
    page += "    background-color: rgb(86, 157, 190);"; 
    page += "    border-radius: 0px 0px 10px 10px;"; 
    page += "    height: 200px;"; 
    page += "    padding: 10px;"; 
    page += "}"; 
    page += ""; 
    page += ".grid_3c .content {"; 
    page += "    background-color: rgb(86, 157, 190);"; 
    page += "    border-radius: 0px 0px 10px 10px;"; 
    page += "    height: 230px;"; 
    page += "    padding: 10px;"; 
    page += "}"; 
    page += "    </style>"; 
    page += "    <body>"; 
    page += "        <div id='body'>"; 
    page += "            <div id='top'>"; 
    page += "                <div class='case'>"; 
    page += "                    <div class='title'>"; 
    page += "                        <h1>Température</h1>"; 
    page += "                    </div>"; 
    page += "                    <div class='grid_2c'>"; 
    page += "                        <div>"; 
    page += "                            <div class='subtitle'>"; 
    page += "                                <h2>Intérieur</h2>"; 
    page += "                            </div>"; 
    page += "                            <div class='content'>"; 
    page += "                                <p>23°C</p>"; 
    page += "                            </div>"; 
    page += "                        </div>"; 
    page += "                        <div>"; 
    page += "                            <div class='subtitle'>"; 
    page += "                                <h2>Extérieur</h2>"; 
    page += "                            </div>"; 
    page += "                            <div class='content'>"; 
    page += "                                <p>16°C</p>"; 
    page += "                            </div>"; 
    page += "                        </div>  "; 
    page += "                    </div>                                  "; 
    page += "                </div>"; 
    page += "                <div class='case'>    "; 
    page += "                    <div class='title'><h1>"; 
    page += "                        Humidité</h1>"; 
    page += "                    </div>    "; 
    page += "                    <div class='grid_2c'>"; 
    page += "                        <div>"; 
    page += "                            <div class='subtitle'>"; 
    page += "                                <h2>Intérieur</h2>"; 
    page += "                            </div>"; 
    page += "                            <div class='content'>"; 
    page += "                                <p>22%</p>"; 
    page += "                            </div>"; 
    page += "                        </div>"; 
    page += "                        <div>"; 
    page += "                            <div class='subtitle'>"; 
    page += "                                <h2>Extérieur</h2>"; 
    page += "                            </div>"; 
    page += "                            <div class='content'>"; 
    page += "                                <p>48%</p>"; 
    page += "                            </div>"; 
    page += "                        </div>  "; 
    page += "                    </div>                      "; 
    page += "                </div>"; 
    page += "                <div id='bottom'>     "; 
    page += "                    <div class='title'>"; 
    page += "                        <h1>Vent</h1>"; 
    page += "                    </div>    "; 
    page += "                    <div class='grid_3c'>"; 
    page += "                        <div>"; 
    page += "                            <div class='subtitle'>"; 
    page += "                                <h2>Vitesse</h2>"; 
    page += "                            </div>"; 
    page += "                            <div class='content'>"; 
    page += "                                <p>13m.s - 48,8km.h</p>"; 
    page += "                            </div>"; 
    page += "                        </div>"; 
    page += "                        <div>"; 
    page += "                            <div class='subtitle'>"; 
    page += "                                <h2>Direction</h2>"; 
    page += "                            </div>"; 
    page += "                            <div class='content'>"; 
    page += "                                <p>Sud</p>"; 
    page += "                            </div>"; 
    page += "                        </div>"; 
    page += "                        <div>"; 
    page += "                            <div class='subtitle'>"; 
    page += "                                <h2>Préssion Atmosphérique</h2>"; 
    page += "                            </div>"; 
    page += "                            <div class='content'>"; 
    page += "                                <p>1.1 bar - 1100 paskal</p>"; 
    page += "                            </div>"; 
    page += "                        </div>"; 
    page += "                    </div>"; 
    page += "                </div>                "; 
    page += "            </div>            "; 
    page += "        </div>"; 
    page += "    </body>"; 
    page += "</html>"; 
    
    server.send(200, "text/html", page);  // Envoie de la page HTML
}

void handleNotFound(){  // Page Not found
  server.send(404, "text/plain","404: Not found");
}

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("\n");
  WiFi.begin(ssid, password);  // Initialisation du Wifi
  Serial.print("Attente de connexion ...");

  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    delay(100);
  }

  Serial.println("\n");  // Affichage "Connexion établie" et de l'adresse IP
  Serial.println("Connexion etablie !");
  Serial.print("Adresse IP: ");
  Serial.println(WiFi.localIP());

  server.on("/", handleRoot);  // Chargement de la page d'accueil
  server.onNotFound(handleNotFound);  // Chargement de la page "Not found"
  server.begin();  // Initialisation du serveur web
  Serial.println("Serveur web actif");
}

void loop() {
  server.handleClient();  // Attente de demande du client
}
