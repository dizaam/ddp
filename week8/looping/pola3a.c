#include <stdio.h>

int main(){
    int arr[5][5] = {   1, 2, 3, 4, 5,
                        1, 2, 3, 4, 5,
                        1, 2, 3, 4, 5,
                        1, 2, 3, 4, 5,
                        1, 2, 3, 4, 5};


    for (int i=0; i<5; i++){
        for(int j=0; j<i+1; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}