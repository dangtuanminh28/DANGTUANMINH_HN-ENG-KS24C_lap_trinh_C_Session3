#include<stdio.h>
int main(){
// khai bao bien
   float a;
   float h;
   float S;  
   printf("nhap do dai canh cua tam giac: ");
   scanf("%f", &a);
   printf("nhap chieu cao cua tam giac: ");
   scanf("%f", &h);
// cong thuc tinh dien tich cua tam giac
   S = (a*h)/2;
   printf("vay dien tich cua tam giac la: %f\n", S);
	return 0;
}	
