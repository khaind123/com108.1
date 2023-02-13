#include<stdio.h>
int main()
{int a; //khai bao bien
const float PI = 3.14; //dinh nghia hang so PI=3,14 la gia tri ko the thay doi
printf("Nhap vao so a:");
scanf("%d",&a);
printf("Dien tich hinh tron la:%.2f \n",(float) a*a*PI/4); //Tinh dien tich hinh tron thong qua duong kinh
printf("Dien tich hinh vuong la:%d \n", a*a); //Tinh dien tich hinh vuong 
printf("Dien tich tam giac can 1/4 hinh vuong la:%.2f \n",(float) a*a*1/2); //Dien tich tam giac can 1/4 hinh vuong
return 0; 
}
