#include<iostream>
main(){
	int s,g=0,y=0;
	printf("dakika girin:");
	scanf("%d",&s);
	g=s/1440;
	y=g/365;
	printf("%d-gun\n%d-yil",g,y);
}
