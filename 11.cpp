#include <iostream>
int main(){
    int n,sayac=0,asal;
    printf("Bir sayi girin:");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        asal=1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                asal=0;
                break;
            }
        }
        if(asal==1){
            sayac++;
        }
    }
    printf("%d-sayinin asal adedi:%d\n",n,sayac);
}
