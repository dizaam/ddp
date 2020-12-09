/*Program : matriksnol.c
* Deskripsi : Memeriksa apakah matriks ini matriks nol
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
    bool nol=true;
    int m[3][3];

    int i=0;
    for(i=0;i<3; i++){
        int j=0;
        //printf("i ke: %d\n", i);
        for(j=0;j<3;j++){
            //printf("j ke: %d\n", j);
           scanf("%d", &m[i][j]);
           if(m[i][j]!=0){
               nol=false;
           }
        } 
    }

    if(nol){
         printf("matriks nol\n");
    }else{
        printf("bukan matriks nol\n");
    }


    return 0;
}