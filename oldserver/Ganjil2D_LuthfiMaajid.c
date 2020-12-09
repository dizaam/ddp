/*Program : fillpointkuadran.c
* Deskripsi : Menentukan titik di kuadran mana lalu disimpan di array baru
* Nama : Luthfi Maajid
* tanggal/ versi : 3 November 2020 / 1
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdbool.h>


int main(){
    int xy[4][4], odd=0;    
    int i=0;
    for(;i<4;i++){
        int j=0; for(;j<4;j++){
            scanf("%d", &xy[i][j]);
            if(xy[i][j]%2!=0){
                ++odd;
            }
        }
    }

    printf("%d\n", odd);
    
    return 0;
}   