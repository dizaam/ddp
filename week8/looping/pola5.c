#include <stdio.h>

int main(){
    int arr[5][5] = {   1, 1, 1, 1, 1,
                        2, 2, 2, 2, 2,
                        3, 3, 3, 3, 3,
                        4, 4, 4, 4, 4,
                        5, 5, 5, 5, 5};


    for (int i=4; i>-1; i--){
        for(int j=0; j<i+1; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}