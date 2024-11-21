#include<stdio.h>
int main(){
// khai bao bien
   float toan;
   float van;
   float anh;
   float average;
   float sum;   
   printf("nhap so thuc diem toan: ");
   scanf("%f", &toan);
   printf("nhap so thuc diem van: ");
   scanf("%f", &van);
   printf("nhap so thuc diem anh: ");
   scanf("%f", &anh);
// cong thuc tinh tong diem
   sum = toan + van + anh;
   printf("vay tong diem la: %.2f\n", sum);
// cong thuc tinh diem trung binh
   average = sum/3; 
   printf("vay diem trung binh la: %.2f", average);
	return 0;
}	
