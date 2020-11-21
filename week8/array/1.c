#include <stdio.h>

int main(){
    int x, faktor=0;
    
    scanf("%d", &x);

    if(x==1){
        printf("Bukan Prima\n");
        return 0;
    }

    for(int i=1; i<x; i++){   
        if(x%i==0){
            faktor++;
        }

        if(faktor>1){
            printf("Bukan Prima\n");
            return 0;
        }
    }
    printf("Prima\n");

    

    return 0;
}