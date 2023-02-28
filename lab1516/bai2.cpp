#include <stdio.h>
#include <string.h>

	struct ntns{
		int ngay;				//Ngay sinh
		int thang;				//Thang sinh
		int nam;				//Nam sinh
	};
	struct sinhvien{
		int masv;				//Ma sinh vien
		char ho[10];			//Ho sinh vien
		char ten[20];			//Ten sinh vien
		struct ntns ngaysinh;	//Ngay thang nam sinh
		char quequan[20];		//Que quan
		char gioitinh[10];		//Gioi tinh
		char malop[10];			//Ma lop
	}; 
int main(){
	struct sinhvien sv1;
	struct sinhvien sv2;
	struct sinhvien sv3;
	struct sinhvien sv4;
	struct sinhvien sv5;
	printf("Nhap ma sv1:");
	scanf("%d",&sv1.masv);
	printf("Nhap ho sv1:");
	scanf("%s",&sv1.ho);
	printf("Nhap ten sv1:");
	getchar();
	gets(sv1.ten);
	printf("Nhap ngay sinh sv1:");
	scanf("%d",&sv1.ngaysinh.ngay);
	printf("Nhap thang sinh sv1:");
	scanf("%d",&sv1.ngaysinh.thang);
	printf("Nhap nam sinh sv1:");
	scanf("%d",&sv1.ngaysinh.nam);
	printf("Nhap que quan sv1:");
	getchar();
	gets(sv1.quequan);
	printf("Nhap gioi tinh sv1:");
	scanf("%s",&sv1.gioitinh);
	printf("Nhap ma lop sv1:");
	scanf("%s",&sv1.malop);
	
	
	printf("\n");
	printf("Nhap ma sv2:");
	scanf("%d",&sv2.masv);
	printf("Nhap ho sv2:");
	scanf("%s",&sv2.ho);
	printf("Nhap ten sv2:");
	getchar();
	gets(sv2.ten);
	printf("Nhap ngay sinh sv2:");
	scanf("%d",&sv2.ngaysinh.ngay);
	printf("Nhap thang sinh sv2:");
	scanf("%d",&sv2.ngaysinh.thang);
	printf("Nhap nam sinh sv2:");
	scanf("%d",&sv2.ngaysinh.nam);
	printf("Nhap que quan sv2:");
	getchar();
	gets(sv2.quequan);
	printf("Nhap gioi tinh sv2:");
	scanf("%s",&sv2.gioitinh);
	printf("Nhap ma lop sv2:");
	scanf("%s",&sv2.malop);
	
	
	printf("\n");
	printf("Nhap ma sv3:");
	scanf("%d",&sv3.masv);
	printf("Nhap ho sv3:");
	scanf("%s",&sv3.ho);
	printf("Nhap ten sv3:");
	getchar();
	gets(sv3.ten);
	printf("Nhap ngay sinh sv3:");
	scanf("%d",&sv3.ngaysinh.ngay);
	printf("Nhap thang sinh sv3:");
	scanf("%d",&sv3.ngaysinh.thang);
	printf("Nhap nam sinh sv3:");
	scanf("%d",&sv3.ngaysinh.nam);
	printf("Nhap que quan sv3:");
	getchar();
	gets(sv3.quequan);
	printf("Nhap gioi tinh sv3:");
	scanf("%s",&sv3.gioitinh);
	printf("Nhap ma lop sv3:");
	scanf("%s",&sv3.malop);
	
	
	printf("\n");
	printf("Nhap ma sv4:");
	scanf("%d",&sv4.masv);
	printf("Nhap ho sv4:");
	scanf("%s",&sv4.ho);
	printf("Nhap ten sv4:");
	getchar();
	gets(sv4.ten);
	printf("Nhap ngay sinh sv4:");
	scanf("%d",&sv4.ngaysinh.ngay);
	printf("Nhap thang sinh sv4:");
	scanf("%d",&sv4.ngaysinh.thang);
	printf("Nhap nam sinh sv4:");
	scanf("%d",&sv4.ngaysinh.nam);
	printf("Nhap que quan sv4:");
	getchar();
	gets(sv4.quequan);
	printf("Nhap gioi tinh sv4:");
	scanf("%s",&sv4.gioitinh);
	printf("Nhap ma lop sv4:");
	scanf("%s",&sv4.malop);
	
	
	printf("\n");
	printf("Nhap ma sv5:");
	scanf("%d",&sv5.masv);
	printf("Nhap ho sv5:");
	scanf("%s",&sv5.ho);
	printf("Nhap ten sv5:");
	getchar();
	gets(sv5.ten);
	printf("Nhap ngay sinh sv5:");
	scanf("%d",&sv5.ngaysinh.ngay);
	printf("Nhap thang sinh sv5:");
	scanf("%d",&sv5.ngaysinh.thang);
	printf("Nhap nam sinh sv5:");
	scanf("%d",&sv5.ngaysinh.nam);
	printf("Nhap que quan sv5:");
	getchar();
	gets(sv5.quequan);
	printf("Nhap gioi tinh sv5:");
	scanf("%s",&sv5.gioitinh);
	printf("Nhap ma lop sv5:");
	scanf("%s",&sv5.malop);
	printf("Sinh vien 1:%d %s %s %d\/%d\/%d %s %s %s\n", sv1.masv, sv1.ho, sv1.ten, sv1.ngaysinh.ngay, sv1.ngaysinh.thang, sv1.ngaysinh.nam, sv1.quequan, sv1.gioitinh, sv1.malop);
	printf("Sinh vien 2:%d %s %s %d\/%d\/%d %s %s %s\n", sv2.masv, sv2.ho, sv2.ten, sv2.ngaysinh.ngay, sv2.ngaysinh.thang, sv2.ngaysinh.nam, sv2.quequan, sv2.gioitinh, sv2.malop);
	printf("Sinh vien 3:%d %s %s %d\/%d\/%d %s %s %s\n", sv3.masv, sv3.ho, sv3.ten, sv3.ngaysinh.ngay, sv3.ngaysinh.thang, sv3.ngaysinh.nam, sv3.quequan, sv3.gioitinh, sv3.malop);
	printf("Sinh vien 4:%d %s %s %d\/%d\/%d %s %s %s\n", sv4.masv, sv4.ho, sv4.ten, sv4.ngaysinh.ngay, sv4.ngaysinh.thang, sv4.ngaysinh.nam, sv4.quequan, sv4.gioitinh, sv4.malop);
	printf("Sinh vien 5:%d %s %s %d\/%d\/%d %s %s %s\n", sv5.masv, sv5.ho, sv5.ten, sv5.ngaysinh.ngay, sv5.ngaysinh.thang, sv5.ngaysinh.nam, sv5.quequan, sv5.gioitinh, sv5.malop);
}
