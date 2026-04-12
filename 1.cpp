#include<iostream>
main(){
	int y;
	printf("Yil giriniz:");
	scanf("%d",&y);
	if (y%4==0||y%400==0){
		printf("Artik yildir");
	}
	else{
		printf("Artik yil degildir");
	}
}
