#include<iostream>
main(){
	int s=0,n=2,t=0;
	while(s<100){
		int asal=0;
		for(int i=1;i<=n;i++){
			if(n%i==0){
				asal++;
			}
		}
		if(asal==2){
			t=t+n;
			s++;
		}
		n++;
	}
	printf("%d-asal sayi toplami:",t);
}
