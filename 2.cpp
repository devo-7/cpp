//bu ornek sadece 5 haneye kadar sayi almaktadir
#include<iostream>
main(){
	int s;
	a1:
	printf("Bir sayi giriniz:");
	scanf("%d",&s);
	if (s<0){
		printf("Pozitif sayi gir\n");
		goto a1;
	}
	if(s>99999){
		printf("5 haneden buyuk sayi girdiniz");
	}
	else if(s/10000){
		printf("sayi 5 haneli");
	}
	else if(s/1000){
		printf("sayi 4 haneli");
		}
	else if(s/100){
		printf("sayi 3 haneli");
	}
	else if(s/10){
		printf("sayi 2 haneli");
	}
	else if(s/1){
		printf("sayi 1 haneli");
	}
}
