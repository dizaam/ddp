/*Program : maks10.c
* Deskripsi : Mencari nilai maksimal dari 10 angka
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
    int i, max, x[9];
    scanf("%d", &max);
    for(i=0; i<9; i++){
        scanf("%d", &x[i]);
        if(max<x[i]){
            max=x[i];
        }
    }

    printf("%d\n", max);

    return 0;
}   