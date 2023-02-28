#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void menu(){
	int luachon;
	printf("-------MENU------\n");
	printf("1.  Kiem tra so nguyen.\n");
	printf("2.  Tim uoc so chung va boi so chung cua 2 so.\n");
	printf("3.  Chuong trinh tinh tien cho quan karaoke.\n");
	printf("4.  Tinh tien dien.\n");
	printf("5.  Chuc nang doi tien.\n");
	printf("6.  Tinh lai suat vay ngan hang vay tra gop.\n");
	printf("7.  Chuong trinh vay tien mua xe.\n");
	printf("8.  Sap xep thong tin sinh vien.\n");
	printf("9.  Game FPOLY-LOTT(2-15).\n");
	printf("10. Tinh toan phan so.\n");
	printf("11. Thoat.\n");
	printf("Xin moi lua chon chuc nang:");
	scanf("%d",&luachon);
	printf("-----------------\n");
	switch(luachon){
		case 1:
			printf("So da nhap khong phai so nguyen.\n");
			break;
		case 2:
			printf("Uoc so chung lon nhat:\n");
			break;
		case 3:
			printf("So tien phai tra:\n");
			break;
		case 4:
			printf("So tien phai tra:\n");
			break;
		case 5:
			printf("So tien da duoc doi thanh:\n");
			break;
		case 6:
			printf("So tien phai tra trong 12 thang:\n");
			break;
		case 7:
			printf("So tien phai tra lan dau:\n");
			printf("So tien phai tra hang thang:\n");
			break;
		case 8:
			printf("Thong tin cua ban:\n");
			break;
		case 9:
			printf("Chuc ban may man lan sau.\n");
			break;
		case 10:
			printf("Tong cua 2 phan so:\n");
			printf("Hieu cua 2 phan so:\n");
			printf("Tich cua 2 phan so:\n");
			printf("Thuong cua 2 phan so:\n");
			break;
		case 11:
			exit(0);
			default:
			printf("Vui long chon 1 trong cac chuc nang o tren.\n");
	}
}

int main(){
	while(1){
		menu();
	}
}
