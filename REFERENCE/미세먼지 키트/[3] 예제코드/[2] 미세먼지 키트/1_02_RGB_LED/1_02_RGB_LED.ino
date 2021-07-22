/*
 *  이 소스는 에듀이노(Eduino)에 의해서 번역, 수정, 작성되었고 소유권 또한 에듀이노의 것입니다. 
 *  소유권자의 허락을 받지 않고 무단으로 수정, 삭제하여 배포할 시 법적인 처벌을 받을 수 있습니다. 
 *  
 *  에듀이노 미세먼지 키트 기본예제 
 *  - RGB LED 사용예제 -
 *    
 *  RGB LED를 이용한 LED출력 예제 입니다. 
 *  일정 기간을 간격으로 LED의 색이 변하는 예제입니다.
 *  
 */
 
int redPin = 11;
int greenPin = 10;
int bluePin = 9;
 
void setup()
{
 pinMode(redPin, OUTPUT);
 pinMode(greenPin, OUTPUT);
 pinMode(bluePin, OUTPUT); 
}
 
void loop()
{

  setColor(255, 0, 0); // red
  delay(1000);
  setColor(0, 255, 0); // green
  delay(1000);
  setColor(0, 0, 255); // blue
  delay(1000);
}
 

void setColor(int red, int green, int blue)
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue); 
}

