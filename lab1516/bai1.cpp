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
	struct sinhvien sv1 = {1,"Nguyen","Quang",{15,6,1990},"Quang Tri","Nam","XYZ001"};
	struct sinhvien sv2 = {1,"Nguyen","Duyen",{25,7,2000},"Quang Nam","Nu","XYZ001"};
	
	//tao du lieu sv3 tu sv1
	struct sinhvien sv3;
	sv3 =sv1;
	printf("SV3:%d %s %s %d\/%d\/%d %s %s %s\n", sv1.masv, sv1.ho, sv1.ten, sv1.ngaysinh.ngay, sv1.ngaysinh.thang, sv1.ngaysinh.nam, sv1.quequan, sv1.gioitinh, sv1.malop);
	sv3.masv=2;
	strcpy(sv3.ho, "Do");
	strcpy(sv3.ten, "Hung");
	sv3.ngaysinh.ngay = 13;
	sv3.ngaysinh.thang = 9;
	sv3.ngaysinh.nam = 2010;
	strcpy(sv3.quequan, "Ha Noi");
	strcpy(sv3.gioitinh, "Nu");
	strcpy(sv3.malop, "ZXC002");
	printf("SV3:%d %s %s %d\/%d\/%d %s %s %s\n", sv3.masv, sv3.ho, sv3.ten, sv3.ngaysinh.ngay, sv3.ngaysinh.thang, sv3.ngaysinh.nam, sv3.quequan, sv3.gioitinh, sv3.malop);
}
