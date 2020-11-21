#include <stdio.h>

int main(){
    int x, faktor;

    for(int i=2; i<20; i++){
        faktor=0;

        for(int j=1; j<i; j++){
            if(i%j==0){
                faktor++;
            }
            if(faktor>1){
                break;
            }
        }

        if(faktor>1){
            continue;
        }else{
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}