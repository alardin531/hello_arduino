int redPin = 13;
char ab;
void setup() {
    Serial.begin(9600);
    pinMode(redPin, OUTPUT);
}
void loop() {
    
    if (Serial.available()>0)
    {
        ab=Serial.read();
        Serial.print(ab);
        if (ab=='h'||ab=='H'){
            h();
        }
        else if(ab=='e'||ab=='E'){
            e();
        }
        else if(ab=='l'){
            l();
        }
        else if(ab==' '){
            sp();
        }
        else if(ab=='o'){
            o();
        }
        else  {
            Serial.println("input error! please try again");
        }
    }
    
}

void sp(){
    Serial.print("");
}
void h(){
    for(int i=0;i<4;i++){
        digitalWrite(redPin,HIGH);
        delay(300);
        digitalWrite(redPin,LOW);
        delay(300);
    }
}
void e(){
    digitalWrite(redPin,HIGH);
    delay(300);
    digitalWrite(redPin,LOW);
    delay(300);
}
void l(){
    digitalWrite(redPin,HIGH);
    delay(300);
    digitalWrite(redPin,LOW);
    delay(300);
    digitalWrite(redPin,HIGH);
    delay(1000);
    digitalWrite(redPin,LOW);
    delay(300);
}
void o(){
    for(int i=0;i<3;i++){
        digitalWrite(redPin,HIGH);
        delay(1000);
        digitalWrite(redPin,LOW);
        delay(300);
    }
    
    
}






















