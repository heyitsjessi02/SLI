void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 Serial.println("Should be 6:");
 Serial.println(add(4,2));
 delay(2000);
 Serial.println("Should be 49");
 Serial.println(multiply(7,7));
 delay(2000);
 Serial.println("Should be 10");
 Serial.println(divide(100,10)); 
 delay(2000);
 Serial.println("If you favorite number is not 7, should be not my favorite");
 Serial.println(bestNumber(7));
 delay(2000);
 Serial.println(yourMother("Hi."));
 delay(10000);
}

//write a function that adds two numbers and returns the sum
int add(int x, int y){
 int sum = x + y;
 return sum;
}

//write a function that multiplies two integers and returns the total
int multiply(int b, int y){
  int product = b * y;
  return product;
}

//write a function that divides the first parameter by the second
int divide(int r, int e){
  int quotient = r/e;
  return quotient;
}

//write a funtion that returns the string "Best number" if
// the number from the parameter matches your favorite number
String bestNumber(int myFavorite){
  
  String response;
  //complete the if statement
  if(myFavorite == 21){
    response = "Yas!!! Go gurrrrrl!!!!";
  }
  else{
    response = "Not my favorite";
  }
  return response;
}

//chatbot

String yourMother(String message){
String response;
  if(message == "Bruh"){
    response = "Don't even.";
}
else if(message == "Hi."){
  response = "Stop. Don't talk to me. You loser lame-o wanna be. Like o totally.";
}
else if(message == "What's up?"){
  response = "The ceiling.";
}
else if( message == "What's 9 + 10?"){
  response = "19.";
}
else if( message == "Do you believe in bromance?"){
  response = "Ye. Ye. Ye.";
}
else if( message == "Who's my father?"){
  response = "Your mother.";
}
else if (message == "Do you think I need anything?"){
  response = "Yes, you need a life.";
}
else{
  response = "You are really funny!!!";
}
}


