#include<stdio.h>
int main(){
// khai bao bien
   	int a, b, c, n;
   	char stra[10];
   	char strb[10];
   	char strc[10];
   	char strn[10];
   	char result[5];
   	
   	printf("nhap so nguyen co bon chu so: ");
   	scanf("%d", &n);
   
// tinh tong cac chu so co trong 4 so nguyen
	a = n / 1000; // 1234 / 1000 = 1
    n = n % 1000; // 1234 % 1000 = 234
    
    b = n / 100; // 234 / 100 = 2
    n = n % 100; // 234 % 100 = 34
    
    c = n / 10; // 34 / 10 = 3
    n = n % 10; // 34 % 10 = 4
    
// doi kieu so nguyen sang kieu chuoi
    sprintf(stra, "%d", a);
    sprintf(strb, "%d", b);
    sprintf(strc, "%d", c);
    sprintf(strn, "%d", n);
    
//noi chuoi 
    strcat(strn, strc); //strn = 43
    strcat(strn, strb); //strn = 432
    strcat(strn, stra); //strn = 4321
    
// in ra ket qua
   	printf("%s\n", strn);
	return 0;
}	
