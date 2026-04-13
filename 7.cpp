#include<iostream>
main(){
	int s1,s2,s=0;
	printf("1 sayiyi gir:");
	scanf("%d",&s1);
	printf("2 sayiyi gir:");
	scanf("%d",&s2);
	for(int i=0;i<s2;i++){
		s=s1+s2;
	}
	printf("%d",s);
}
