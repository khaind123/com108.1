#include <stdio.h>

int main(){
	int one[5]={2, 5, 3, 6, 3};	
	int two[5];
	for (int i=0;i<5;i++){
		two[i]=one[i]+3;
	}
	for (int j=0;j<5;j++){
		printf("%d\t",one[j]);
	}
	printf("\n");
	for (int j=0;j<5;j++){
		printf("%d\t",two[j]);
	}
	printf("\n");
	for (int i=0;i<5;i++){
	for (int j=i+1;j<5;j++)				
		if(one[i]==two[j])
			printf("one[%d] = two[%d]",i, j);
	}
	return 0;
}
