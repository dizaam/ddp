#include <stdio.h>

int main(){
    char arr[5][5] = {  '*', '*', '*', '*', '*',
                        '*', '*', '*', '*', '*',
                        '*', '*', '*', '*', '*',
                        '*', '*', '*', '*', '*',
                        '*', '*', '*', '*', '*'};


    for (int i=0; i<5; i++){
        for(int j=4; j>i-1; j--){
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}