#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void kiemtrasonguyen(){
	float x;
	printf("Moi ban nhap mot so bat ky:");
	scanf("%f",&x);
	if(x == (int)x){
		printf("%f la so nguyen.\n",x);
	}
	else 
		printf("%f khong phai la so nguyen.\n",x);
}
	
void tinhtiendien(){
	float x;
	printf("Moi ban nhap vao so (kWh) dien su dung:");
	scanf("%f",&x);
	while(x<0){
		printf("Khong duoc nhap so nho hon 0, moi ban nhap lai:");
		scanf("%f",&x);
	}
	if(x<51){
		printf("So tien ban can phai tra la:%.2f nghin dong\n",x*1.678);
	}
	else if(x<101){
		printf("So tien ban can phai tra la:%.2f nghin dong\n",x*1.734);
	}
	else if(x<201){
		printf("So tien ban can phai tra la:%.2f nghin dong\n",x*2.014);
	}
	else if(x<301){
		printf("So tien ban can phai tra la:%.2f nghin dong\n",x*2.536);
	}
	else if(x<401){
		printf("So tien ban can phai tra la:%.2f nghin dong\n",x*2.834);
	}
	else {
		printf("So tien ban can phai tra la:%.2f nghin dong\n",x*2.927);
	}
}

void uocchungboichung(){
	int a,b,uc,bc;
    printf("Nhap (a,b): ");
    scanf("%d%d",&a,&b);
    for (uc=a;uc>=1;uc--){
        if (a%uc==0 && b%uc==0){
            printf("UCLN cua 2 so (%d,%d)=%d\n",a,b,uc);
            break;
        }
    }
    for (bc=a;bc<=a*b;bc++){
        if (bc%a==0 && bc%b==0){
            printf("BCNN cua 2 so (%d,%d)=%d\n",a,b,bc);
            break;
        }
    }
}

void tinhtienkara(){
		int a,b,c,d,tien;
	do{
	
	printf("ban hay nhap gio bat dau:\n");
	scanf("%i",&a);
	printf("ban hay nhap gio ket thuc:\n");
	scanf("%i",&b);
	}while(a<=8 && b>=24);
	c=b-a;
	if(a>=17 && b<=24 && c<3)
	{
		tien=c*30000;
		printf("so tien ban phai tra :%i\n",tien);
	}
	if(c<=3 && a>=8 && b<=17 )
	{
		tien=c*30000*90/100;
		printf("so tien phai tra :%i\n",tien);
	}
	else if(c>3 && a>=8 && b<=24)
	{
		d=c-3;
		tien=(d*30000*70/100*10/100)+(3*30000*10/100);
		printf("so tien phai chi tra %i\n",tien);
	}else if(a>=8 && b<=17 &&c<=3)
	{
		tien=c*30000*90/100;
		printf("so tien phai chi tra:%i\n",tien);
	}else if(a>=8 && b<=17 && c>3)
	{	
	    
		tien=(c*30000*60/100);
		printf("so tien phai tra tien: %i\n",tien);
	}
}

void laisuattragop(){
	double tienmuonvay;
	printf("Nhap so tien muon vay:");
	scanf("%lf",&tienmuonvay);
	double tongtien;
	int han=12;
	double lai=0.05;
	double tienlaimoithang;
	double tiengocmoithang = tienmuonvay/han;
	double tongtienmoithang;
	int i;
	for (i=1;i<han;i++){
		tienlaimoithang = tienmuonvay * lai;
		tongtienmoithang = tienlaimoithang + tiengocmoithang;
		tongtien += tongtienmoithang;
		tienmuonvay = tienmuonvay - tiengocmoithang;
		printf("So tien can tra trong thang %d:",i);
		printf("lai%.0lf\tgoc%.0lf\tphai tra%.0lf\tcon%.0lf\n",tienlaimoithang,tiengocmoithang,tongtienmoithang,tienmuonvay);
	}
	printf("Tong tien phai tra sau 12 thang la:%.2lf vnd\n",tongtien);
}

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
			kiemtrasonguyen();
			break;
		case 2:
			uocchungboichung();
			break;
		case 3:
			tinhtienkara();
			break;
		case 4:
			uocchungboichung();
			break;
		case 5:
			printf("So tien da duoc doi thanh:\n");
			break;
		case 6:
			laisuattragop();
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
