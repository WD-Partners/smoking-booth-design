/*
 *  이 소스는 에듀이노(Eduino)에 의해서 번역, 수정, 작성되었고 소유권 또한 에듀이노의 것입니다. 
 *  소유권자의 허락을 받지 않고 무단으로 수정, 삭제하여 배포할 시 법적인 처벌을 받을 수 있습니다. 
 *  
 *  에듀이노 미세먼지 키트 기본예제 
 *  - 온습도센서(DHT-11) 사용예제 -
 *  온습도 센서(DHT-11)를 이용해서 시리얼 모니터로 온도 및 습도값을 출력하는 예제코드 입니다. 
 *  
 */

#include <DHT.h>
#define DHTPIN A1
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup(){
  Serial.begin(9600);
}

void loop() {
  int h = dht.readHumidity();
  int t = dht.readTemperature();

   Serial.print("humidity:");
   Serial.println(h);
   Serial.print("temperature:");
   Serial.println(t);
   delay(1000);
}

