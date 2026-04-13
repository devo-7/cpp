#include<iostream>
main(){
	int n=0,ters=0,k;
	printf("numara gir:");
	scanf("%d",&n);
	while(n!=0){
		k=n%10;
		ters=ters*10+k;
		n=n/10;
	}
	printf("tersi:%d",ters);
}
