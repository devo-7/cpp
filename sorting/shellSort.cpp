#include<iostream>
void shellSort(int dizi[],int n){
	for (int gap=n/2;gap>0;gap/=2){
		for (int i=gap;i<n;i++){
			int temp=dizi[i];
			int j;
			for(j=i;gap&&dizi[j-gap]>temp;j-=gap){
				dizi[j]=dizi[j-gap];
			}
			dizi[j]=temp;
		}
	}
}

void yazdir(int dizi[],int n){
	for (int i=0;i<n;i++){
		printf("%d,",dizi[i]);
	}
}

int main(){
	int dizi[]={12,34,54,2,3};
	int n=sizeof(dizi)/sizeof(dizi[0]);
	printf("Siralamadan once:");
	yazdir(dizi,n);
	shellSort(dizi,n);
	printf("\nSiralamadan sonra:");
	yazdir(dizi,n);
}
