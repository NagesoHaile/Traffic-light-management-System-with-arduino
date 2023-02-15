
int Line1[] = {13,12,11};// Red, Yellow,Green
int Line2[] = {10,9,8};// Red, Yellow,Green
int Line3[] = {7,6,5};// Red, Yellow,Green
int Line4[] = {4,3,2};// Red, Yellow,Green

void setup(){
  // put your setup code here, to run once:
  for(int i=0; i<3; i++){
    pinMode(Line1[i],OUTPUT);
    pinMode(Line2[i],OUTPUT);
    pinMode(Line3[i],OUTPUT);
    pinMode(Line4[i],OUTPUT);
    
  }

}

void loop(){
  //put your main code here, to run repeatedly:  
    digitalWrite(Line1[2],HIGH);    
    digitalWrite(Line2[0],HIGH);
    digitalWrite(Line3[0],HIGH);
    digitalWrite(Line4[0],HIGH);
    delay(4000);//go time
    digitalWrite(Line1[2],LOW);    
    digitalWrite(Line3[0],LOW);
    digitalWrite(Line1[1],HIGH);
    digitalWrite(Line3[1],HIGH);
    delay(4000);//wait time

    
    
    digitalWrite(Line1[1],LOW);
    digitalWrite(Line3[1],LOW);
    digitalWrite(Line1[0],HIGH);
    digitalWrite(Line3[2], HIGH);
    delay(4000);//go time
    digitalWrite(Line3[2],LOW);
    digitalWrite(Line4[0],LOW);
    digitalWrite(Line3[1],HIGH);
    digitalWrite(Line4[1],HIGH);
 
    delay(4000); //wait time
   
    digitalWrite(Line3[1],LOW);
    digitalWrite(Line4[1],LOW);
    digitalWrite(Line3[0],HIGH);
    digitalWrite(Line4[2],HIGH);
    
    delay(4000);//go time
    digitalWrite(Line4[2],LOW);
    digitalWrite(Line2[0],LOW);
    digitalWrite(Line4[1],HIGH);
    digitalWrite(Line2[1],HIGH);
    delay(4000);//wait time
    digitalWrite(Line4[1],LOW);
    digitalWrite(Line2[1],LOW);
    digitalWrite(Line4[0],HIGH);
    digitalWrite(Line2[2],HIGH);
    delay(4000);//go time
    digitalWrite(Line2[2],LOW);
    digitalWrite(Line1[0],LOW);
    digitalWrite(Line2[1],HIGH);
    digitalWrite(Line1[1],HIGH);
    delay(4000);//wait time
    digitalWrite(Line2[1],LOW);
    digitalWrite(Line1[1],LOW);
      
}
