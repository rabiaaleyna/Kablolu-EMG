#include <SimpleKalmanFilter.h>
  SimpleKalmanFilter simpleKalmanFilter1(2, 2, 0.1);
int ADC1;
    
void setup() 
{
  Serial.begin(115200);
     

}
void loop() 
{
   
  ADC1 = analogRead(A0);
  float real_value1 = ADC1; //y ekseni
  float estimated_value1 = simpleKalmanFilter1.updateEstimate(real_value1);
   Serial.print(real_value1);
  Serial.print(",");
   Serial.println(estimated_value1);
    delay(1);
  } 
 
