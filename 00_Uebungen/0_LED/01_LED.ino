/* Befehle:
pinMode(PIN, OUTPUT oder INPUT); <- definiert den PIN, OUTPUT gibt Strom und INPUT misst den Strom am PIN, PIN mit der Zahl auf dem SensorKit ersetzen (ohne D)
digitalWrite (PIN, HIGH oder LOW); <- schaltet etwas EIN (HIGH) oder AUS (LOW) - PIN mit der Zahl auf dem SensorKit ersetzen (ohne D), dann HIGH oder LOW
delay(ZEIT); <- macht eine Pause mit der ZEIT in millisekunden
*/

void setup() // Hier beginnt das Setup
{ 
pinMode(4, INPUT); //Beim Button wird Strom gemessen.
//TODO: Pin XX wird als Ausgang definiert - XX mit der Zahl für die LED auf dem SensorKit ersetzen (ohne D), YY mit OUTPUT oder INPUT ersetzen
pinMode(XX, YY); 

} // Hier endet ein Programmabschnitt

void loop() // Hier beginnt das Hauptprogramm
{ 

//TODO: warte 1 Sekunde //TEST: Verändere die Zeit - was passiert?

//TODO: schalte die LED wieder aus

//TODO: warte 1 Sekunde //TEST: Verändere die Zeit - was passiert?

  
} // Hier endet ein Programmabschnitt

