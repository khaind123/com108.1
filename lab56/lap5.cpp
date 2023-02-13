#include<stdio.h>
int main(){
	int a,b,c;
	printf("Nhap vao diem toan:");
	scanf("%d",&a);
	printf("Nhap vao diem hoa:");
	scanf("%d",&b);
	printf("Nhap vao diem ly:");
	scanf("%d",&c);
	switch((a+b+c)/3){
		case 10:
		case 9:
			printf("Loai A");
		break;
		case 8:
		case 7:
			printf("Loai B");
		break;
		case 6:
		case 5:	
			printf("Loai C");
		break;
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:	
			printf("Loai D");
		break;
	}
	return 0;
}
