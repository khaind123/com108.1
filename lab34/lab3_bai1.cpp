#include<stdio.h>
int main(){
	int a;
	printf("Nhap vao so a:");
	scanf("%d",&a);
	//Kiem tra dieu kien
	if (a%2==0){	//Neu a chia het cho 2 thi la so chan 
		printf("Day la so chan.");}
	if (a%2==1){	//Neu a chia 2 du 1 thi la so le
		printf("Day la so le.");}
	return 0;
}
