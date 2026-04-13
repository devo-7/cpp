#include<iostream>
main(){
	int s1,s2,s=0;
	a1:
	printf("1 sayiyi gir:");
	scanf("%d",&s1);
	printf("2 sayiyi gir:");
	scanf("%d",&s2);
	if(s1<s2){
		printf("1 sayi 2 sayidan kucuk\n");
		goto a1;
	}
	while(s1>=s2){
		s1=s1-s2;
		s++;
		if(s1<s2){
			break;
		}
	}
	printf("%d-sonuc\n%d-kalan sayi",s,s1);
}
