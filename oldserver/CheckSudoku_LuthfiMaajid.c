/*Program : checksudoku.c
* Deskripsi : Memeriksa apakah matriks ini matriks sudoku
* Nama : Luthfi Maajid
* tanggal/ versi : 6 Desember 2020 / 1
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

#define PI 3.14

int main(){
    bool sudoku = true;
    int x[9];

    int i,j;
    for(i=0; i<9; i++){
        scanf("%d", &x[i]);
    }

    for(i=0; i<8; i++){
        for(j=i+1; j<9; j++){
            if(x[i]==x[j]){
                sudoku = false;break;
            }
        }
    }

    if(sudoku){
        printf("valid\n");
    }else{
        printf("tidak valid\n");
    }


    return 0;
}