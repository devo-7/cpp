#include<iostream>
main(){
	int s1,s2,s3;
	printf("1 sayiyi gir:");
	scanf("%d",&s1);
	printf("2 sayiyi gir:");
	scanf("%d",&s2);
	printf("3 sayiyi gir:");
	scanf("%d",&s3);
	if(s1<s2&&s2<s3){
		printf("sayilar artiyor");
	}
	else if(s1>s2&&s2>s3){
		printf("sayilar azaliyor");
	}
	else{
		printf("ne artiyor ne de azaliyor");
	}
}
