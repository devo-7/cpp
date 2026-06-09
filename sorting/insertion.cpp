#include<iostream>
void insertion(int array[],int size){
	int temp;
	for (int i=0;i<size;i++){
		for(int j=0;j<i+1;j++){
			if(array[i]<array[j]){
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	for (int i=0;i<size;i++){
		printf("%d,",array[i]);
	}
}
int main(){
	int dizi[]={43,2,3,7,1,4};
	int size=6;
	insertion(dizi,size);
}
