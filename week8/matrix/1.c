#include <stdio.h>

int main(){
    int arr[5][5], faktor, prime=0;

    printf("input matrix 5x5:\n");
    for (int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            faktor = 0;
            if(arr[i][j]==1) continue;
            for(int k=1; k<arr[i][j]; k++){
                

                if(arr[i][j]%k==0){
                    faktor++;
                }
                if(faktor>1) break;
            }
            if(faktor>1) continue;
            else prime++;
        }
    }

    printf("\njumlah bilangan prima: %d\n", prime);


    return 0;
}