#include<stdio.h>

int main(){
    int arr[5][5];
    for(int i=0; i<6; i++){
        for(int j=0;j<i;j++){
            printf("%d", j+1);
        }
        printf("\n");
    }
}