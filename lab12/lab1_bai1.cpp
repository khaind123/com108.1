#include<stdio.h>
int main()
{int a,b; //khai bao bien
printf("Nhap vao so a:");
scanf("%d",&a);
printf("Nhap vao so b:");
scanf("%d",&b);
printf("Tong hai so a va b la:%d \n",a+b); //Tinh tong 2 so
printf("Hieu hai so a va b la:%d \n",a-b); //Tinh hieu 2 so
printf("Tich hai so a va b la:%d \n",a*b); //Tinh tich 2 so
printf("Thuong hai so a va b la:%.1f \n",(float) a/b); //Tinh thuong 2 so
return 0;
}
