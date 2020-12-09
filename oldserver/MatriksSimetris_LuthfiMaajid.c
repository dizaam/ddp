/*Program : matriksimetris.c
* Deskripsi : Memeriksa apakah matriks ini matriks simetris
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
    bool simetris = true;
    int m[3][3];

    int i,j;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &m[i][j]);
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(m[i][j]!=m[j][i]){
                simetris=false;break;
            }
        }
    }

    if(simetris){
        printf("matriks simetris\n");
    }else{
        printf("bukan matriks simetris\n");
    }

    return 0;
}