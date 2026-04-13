#include<iostream>
main(){
	int s1,s2,s=0;
	printf("1 sayiyi gir:");
	scanf("%d",&s1);
	printf("2 sayiyi gir:");
	scanf("%d",&s2);
	for(int i=0;i<s2;i++){
		s1=s1-s2;
		s++;
		if(s1<s2){
			break;
		}
	}
	printf("%d-sonuc\n%d-kalan sayi",s,s1);
}
