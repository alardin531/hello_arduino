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
        else if(ab=='a'){
            a();
        }
        else if(ab=='b'){
            b();
        }
        else if(ab=='c'){
            c();
        }
        else if(ab=='d'){
            d();
        }
        else if(ab=='f'){
            f();
        }
        else if(ab=='g'){
            g();
        }
        else if(ab=='i'){
            i();
        }
        else if(ab=='j'){
            j();
        }
        else if(ab=='k'){
            k();
        }
        else if(ab=='m'){
            m();
        }
        else if(ab=='n'){
            n();
        }
        else if(ab=='p'){
            p();
        }
        else if(ab=='q'){
            q();
        }
        else if(ab=='r'){
            r();
        }
        else if(ab=='s'){
            s();
        }
        else if(ab=='t'){
            t();
        }
        else if(ab=='u'){
            u();
        }
        else if(ab=='v'){
            v();
        }
        else if(ab=='w'){
            w();
        }
        else if(ab=='x'){
            x();
        }
        else if(ab=='y'){
            y();
        }
        else if(ab=='z'){
            z();
        }
        else  {
            Serial.println("input error!");
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
void a(){
    digitalWrite(redPin,HIGH);
    delay(300);
    digitalWrite(redPin,LOW);
    delay(300);
    digitalWrite(redPin,HIGH);
    delay(1000);
    digitalWrite(redPin,LOW);
    delay(300);
}
void b(){
    digitalWrite(redPin,HIGH);
    delay(300);
    digitalWrite(redPin,LOW);
    delay(300);
    digitalWrite(redPin,HIGH);
    delay(1000);
    digitalWrite(redPin,LOW);
    delay(300);
}
void c(){
    digitalWrite(redPin,HIGH);
    delay(300);
    digitalWrite(redPin,LOW);
    delay(300);
    digitalWrite(redPin,HIGH);
    delay(1000);
    digitalWrite(redPin,LOW);
    delay(300);
}
void d(){
    digitalWrite(redPin,HIGH);
    delay(300);
    digitalWrite(redPin,LOW);
    delay(300);
    digitalWrite(redPin,HIGH);
    delay(1000);
    digitalWrite(redPin,LOW);
    delay(300);
}
void f(){
    digitalWrite(redPin,HIGH);
    delay(300);
    digitalWrite(redPin,LOW);
    delay(300);
    digitalWrite(redPin,HIGH);
    delay(1000);
    digitalWrite(redPin,LOW);
    delay(300);
}
void g(){
    digitalWrite(redPin,HIGH);
    delay(300);
    digitalWrite(redPin,LOW);
    delay(300);
    digitalWrite(redPin,HIGH);
    delay(1000);
    digitalWrite(redPin,LOW);
    delay(300);
}
void i(){
    digitalWrite(redPin,HIGH);
    delay(300);
    digitalWrite(redPin,LOW);
    delay(300);
    digitalWrite(redPin,HIGH);
    delay(1000);
    digitalWrite(redPin,LOW);
    delay(300);
}
void j(){
    digitalWrite(redPin,HIGH);
    delay(300);
    digitalWrite(redPin,LOW);
    delay(300);
    digitalWrite(redPin,HIGH);
    delay(1000);
    digitalWrite(redPin,LOW);
    delay(300);
}
void k(){
    digitalWrite(redPin,HIGH);
    delay(300);
    digitalWrite(redPin,LOW);
    delay(300);
    digitalWrite(redPin,HIGH);
    delay(1000);
    digitalWrite(redPin,LOW);
    delay(300);
}
void m(){
    digitalWrite(redPin,HIGH);
    delay(300);
    digitalWrite(redPin,LOW);
    delay(300);
    digitalWrite(redPin,HIGH);
    delay(1000);
    digitalWrite(redPin,LOW);
    delay(300);
}
void n(){
    digitalWrite(redPin,HIGH);
    delay(300);
    digitalWrite(redPin,LOW);
    delay(300);
    digitalWrite(redPin,HIGH);
    delay(1000);
    digitalWrite(redPin,LOW);
    delay(300);
}
void p(){
    digitalWrite(redPin,HIGH);
    delay(300);
    digitalWrite(redPin,LOW);
    delay(300);
    digitalWrite(redPin,HIGH);
    delay(1000);
    digitalWrite(redPin,LOW);
    delay(300);
}
void q(){
    digitalWrite(redPin,HIGH);
    delay(300);
    digitalWrite(redPin,LOW);
    delay(300);
    digitalWrite(redPin,HIGH);
    delay(1000);
    digitalWrite(redPin,LOW);
    delay(300);
}
void r(){
    digitalWrite(redPin,HIGH);
    delay(300);
    digitalWrite(redPin,LOW);
    delay(300);
    digitalWrite(redPin,HIGH);
    delay(1000);
    digitalWrite(redPin,LOW);
    delay(300);
}
void s(){
    digitalWrite(redPin,HIGH);
    delay(300);
    digitalWrite(redPin,LOW);
    delay(300);
    digitalWrite(redPin,HIGH);
    delay(1000);
    digitalWrite(redPin,LOW);
    delay(300);
}
void t(){
    digitalWrite(redPin,HIGH);
    delay(300);
    digitalWrite(redPin,LOW);
    delay(300);
    digitalWrite(redPin,HIGH);
    delay(1000);
    digitalWrite(redPin,LOW);
    delay(300);
}
void u(){
    digitalWrite(redPin,HIGH);
    delay(300);
    digitalWrite(redPin,LOW);
    delay(300);
    digitalWrite(redPin,HIGH);
    delay(1000);
    digitalWrite(redPin,LOW);
    delay(300);
}
void v(){
    digitalWrite(redPin,HIGH);
    delay(300);
    digitalWrite(redPin,LOW);
    delay(300);
    digitalWrite(redPin,HIGH);
    delay(1000);
    digitalWrite(redPin,LOW);
    delay(300);
}
void w(){
    digitalWrite(redPin,HIGH);
    delay(300);
    digitalWrite(redPin,LOW);
    delay(300);
    digitalWrite(redPin,HIGH);
    delay(1000);
    digitalWrite(redPin,LOW);
    delay(300);
}
void x(){
    digitalWrite(redPin,HIGH);
    delay(300);
    digitalWrite(redPin,LOW);
    delay(300);
    digitalWrite(redPin,HIGH);
    delay(1000);
    digitalWrite(redPin,LOW);
    delay(300);
}
void y(){
    digitalWrite(redPin,HIGH);
    delay(300);
    digitalWrite(redPin,LOW);
    delay(300);
    digitalWrite(redPin,HIGH);
    delay(1000);
    digitalWrite(redPin,LOW);
    delay(300);
}
void z(){
    digitalWrite(redPin,HIGH);
    delay(300);
    digitalWrite(redPin,LOW);
    delay(300);
    digitalWrite(redPin,HIGH);
    delay(1000);
    digitalWrite(redPin,LOW);
    delay(300);
}





