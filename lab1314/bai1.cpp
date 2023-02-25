#include <stdio.h>
#include <string.h>

int main(){
	char str1[30];
	char str2[30];
	int count=0;
	int countt=0;
	
	printf("Moi nhap chuoi:");
	gets(str1);	//gets:in chuoi co khoang trang
	
	//Do dai cua chuoi bao gom khoang trang
	int len = strlen(str1);
	printf("Do dai cua chuoi bao gom khoang trang:%d\n",len);
	
	//Do dai cua chuoi khong co khoang trang
	for(int i=0;i<len;i++){
		if(str1[i] != ' '){
			count++;	
		}
	}
	printf("Do dai cua chuoi khong co khoang trang:%d\n",count);
	
	//Xac dinh vi tri cua chu t va dem so chu t
	for (int i=0;i<len;i++){
		if(str1[i] == 't' || str1[i] == 'T'){
			countt++;
			printf("Gap t o:%d\n",i);
		}
	}
	printf("Co %d chu t trong chuoi.",countt);
	printf("\n");
	
	//
	char str2[0]="A";
	//Copy str1 sang str2
	strcpy (str2,str1);
	printf("Chuoi copy: %s\n",str1);
	
	//In hoa chuoi str1
	for (int i=0;str1[i]!='\0';i++){
		if(str1[i]>='a' && str1[i]<='z')
			str1[i]=str1[i]-32;
	}
	printf("Chuoi in hoa cua str1:%s\n",str1);
	
	//In thuong chuoi str2
	for (int i=0;str2[i]!='\0';i++){
		if(str2[i]>='A' && str2[i]<='Z')
			str2[i]=str2[i]+32;
	}
	printf("Chuoi in thuong cua str2:%s\n",str2);
	
	//So sanh hai chuoi
	if(int res = strcmp(str1,str2)==0){
		printf("Hai chuoi bang nhau.%s\n",res);}
	else
		printf("Hai chuoi khong bang nhau.%d\n",res);
}
