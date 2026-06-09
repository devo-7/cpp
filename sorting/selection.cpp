#include<iostream>
void selection(int array[],int size){
	int temp,min;
	for (int i=0;i<size-1;i++){
		min=i;
		for (int j=i+1;j<size;j++){
			if(array[j]<array[min]){
				min=j;
			}
			temp=array[i];
			array[i]=array[min];
			array[min]=temp;
		}
	}
	for (int i=0;i<size;i++){
		printf("%d,",array[i]);
	}
}
int main(){
	int dizi[]={13,7,23,9,3};
	int boyut=5;
	selection(dizi,boyut);
}
