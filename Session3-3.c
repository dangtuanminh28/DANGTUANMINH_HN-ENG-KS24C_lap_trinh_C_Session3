#include<stdio.h>
int main(){
// khai bao bien
  int radius;
  const float PI = 3.14;
  printf("nhap ban kinh hinh tron: ");
  scanf("%d",&radius);
// cong thuc tinh chu vi hinh tron
  float perimeter = 2 * PI * radius;
  printf("chu vi hinh tron la: %.2f\n",perimeter);
// cong thuc tinh dien tich hinh tron  
  float acreage = PI * radius * radius;
  printf("dien tich hinh tron la: %.2f",acreage);
  return 0;
}   
