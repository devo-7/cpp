#include<iostream>
main(){
	int uc=0,bes=0,ikisi=0;
	for(int i=1;i<=100;i++){
		if(i%3==0){
			uc++;
		}
		if(i%5==0){
			bes++;
		}
		if(i%3==0&&i%5==0){
			ikisi++;
		}
	}
	printf("%d-adet 3e bolunenler\n",uc);
	printf("%d-adet 5e bolunenler\n",bes);
	printf("%d-adet her ikisine de bolunenler",ikisi);
}
