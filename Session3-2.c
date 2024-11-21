#include<stdio.h>
int main(){
// khai bao bien so thuc
   float Celsius;
   printf("moi ban nhap nhiet do theo do C:");
   scanf("%f", &Celsius);
//  cong thuc tinh do Celsius sang do Fahrenheit
   float Fahrenheit = (Celsius * 9/5) + 32;
// in ra ket qua 
   printf("vay ket qua la: %f", Fahrenheit);
 return 0;	
}
