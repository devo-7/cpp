#include<iostream>
main(){
	int s;
	printf("piramid kac satirli olsun:");
	scanf("%d",&s);
	for (int i=1;i<=s;i++){
		for (int j=1;j<=s-i;j++){
			printf(" ");
		}
		for (int k=1;k<=2*i-1;k++){
			printf("*");
		}
		printf("\n");
	}
}
