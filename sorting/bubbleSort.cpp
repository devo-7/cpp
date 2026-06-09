#include<iostream>
void bubble(int array[],int size){
	int i,j,temp;
	for (i=1;i<size;i++){
		for (j=0;j<size-i;j++){
			if (array[j]>array[j+1]){
				temp=array[j+1];
				array[j+1]=array[j];
				array[j]=temp;
			}
		}
	}
	for (i=0;i<size;i++)
	printf("%d",array[i]);
}
int main(){
	int dizi[]={4,7,2,8};
	int boyut=4;
	bubble(dizi,boyut);
}
