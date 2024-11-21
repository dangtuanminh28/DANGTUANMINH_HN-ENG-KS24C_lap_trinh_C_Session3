#include<stdio.h>
int main(){
// khai bao bien
   	int a, b, c, n;
   	printf("nhap so nguyen co bon chu so: ");
   	scanf("%d", &n);
   
// tinh tong cac chu so co trong 4 so nguyen
	a = n / 1000; // 1234 / 1000 = 1
    n = n % 1000; // 1234 % 1000 = 234
    
    b = n / 100; // 234 / 100 = 2
    n = n % 100; // 234 % 100 = 34
    
    c = n / 10; // 34 / 10 = 3
    n = n % 10; // 34 % 10 = 4
    
    int sum = a + b + c + n;
// in ra ket qua
   	printf("%d\n", sum);
	return 0;
}	
