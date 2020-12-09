/*Program : matriksjumlah.c
* Deskripsi : Menjumlahkan 2 matriks array
* Nama : Luthfi Maajid
* tanggal/ versi : 3 November 2020 / 1
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdbool.h>


int main(){
    int x[3][3], y[3][3]; 
    int i=0;
    for(;i<3;i++){
        int j=0; for(;j<3;j++){
            scanf("%d", &x[i][j]);
        }
    }

    for(i=0;i<3;i++){
        int j=0; for(;j<3;j++){
            scanf("%d", &y[i][j]);
            y[i][j]+=x[i][j];
        }
    }

    for(i=0;i<3;i++){
        printf("%d %d %d\n", y[i][0], y[i][1], y[i][2]);
    }

    
    return 0;
}   