#include <WiFi.h>   // Utilisation de la librairie WiFi.h
#include <WebServer.h>   // Utilisation de la librairie WebServer.h

const char* ssid = "ecreall_wifi";  // Mettre le ssid de votre réseau Wifi
const char* password = "L3r345w1f1d3sL45n47";   // Mettre le mot de passe de votre réseau Wifi
WebServer server(80);  // Permet l'affichage de la page d'accueil 

void handleRoot(){  // Page d'accueil La page HTML est mise dans le String page

//  Syntaxe d'écriture pour être compatible avec le C++ / Arduino

// String page = " xxxxxxxx ";

// page += " xxxxx ";

// etc ...
  String page = "<!DOCTYPE html>";  // Début page HTML
    page += "<head>";
    page += "    <title>Serveur ESP32</title>";
    page += "    <meta http-equiv='refresh' content='60' name='viewport' content='width=device-width, initial-scale=1' charset='UTF-8'/>";
    page += "</head>";
    page += "<body lang='fr'>";
    page += "    <h1>Serveur</h1>";
    page += "    <p>Ce serveur est hébergé sur un ESP32</p>";
    page += "    <i>Créé par Tommy Desrochers</i>";
    page += "</body>";
    page += "</html>";  // Fin page HTML

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
