/*Program : selisihminmax.c
* Deskripsi : Mencari selisih dari nilai minimal dan maksimal
* Nama : Luthfi Maajid
* tanggal/ versi : 1 Desember 2020 / 1
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int i, min, max, x[9];
    scanf("%d", &max);min=max;
    for(i=0; i<9; i++){
        scanf("%d", &x[i]);
        if(max<x[i]){
            max=x[i];
        }else if(min>x[i]){
            min=x[i];
        }

    }

    printf("%d\n", max-min);

    return 0;
}   