#include <stdio.h>
#include <stdbool.h>

int main(){
	int x;
	bool flag=false;
	int a[3][3]={ {3, 9, 11},{2, 6, 15},{4, 7, 24} };
	for (int i=0;i<3;i++){
	for (int j=0;j<3;j++)
		printf("%d\t",a[i][j]);
	}
	printf("\n");
	printf("Nhap mot so bat ki tu 1 den 100:");
	scanf("%d",&x);	
	if(x<1 || x>100){
		printf("Moi ban nhap lai:");
		scanf("%d",&x);	
	}
	for (int i=0;i<3;i++){
	for (int j=0;j<3;j++)
	if (x == a[i][j])
		printf("So %d nam o a[%d][%d] trong mang.",x,i,j);
		flag=true; 
}

	if (!flag){
		printf("Khong co so ban vua nhap.");
	}
}
