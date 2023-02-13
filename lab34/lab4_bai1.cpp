#include<stdio.h>
int main(){
	float a,b,c;
	char x[30];		//char: Khai bao bien kieu ky tu
	printf("Nhap ten hoc sinh:");
	gets(x);		//Cong thuc khai bao bien ky tu
	printf("Nhap vao diem toan:");
	scanf("%f",&a);	//Nhap diem toan
	printf("Nhap vao diem hoa:");
	scanf("%f",&b);	//Nhap diem hoa
	printf("Nhap vao diem ly:");
	scanf("%f",&c);	//Nhap diem ly
	if ((a+b+c)/3>=9){
		printf("Xep loai A.");	//Cong thuc if neu (a+b+c)/3 > hoac = 9 thi xep loai A
	}
	else if ((a+b+c)/3>=7 && (a+b+c)/3<9){
		printf("Xep loai B.");	//Cong thuc if neu (a+b+c)/3 > hoac = 7 va < 9 thi xep loai B
	}
	else if ((a+b+c)/3>=5 && (a+b+c)/3<7){
		printf("Xep loai C.");	//Cong thuc if neu (a+b+c)/3 > hoac = 5 va < 7 thi xep loai C
	}
	else {
		printf("Xep loai D.");
	}
	return 0;
}
