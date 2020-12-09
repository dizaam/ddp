/*Program : pola1.c
* Deskripsi : Membuat pola 1
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
    int x, i, j;
    scanf("%d", &x);
    
    for(i=0; i<x; i++){
        for(j=0; j<=i; j++){
            printf("*");
            if(j==i){
                printf("\n");
            }else{
                printf(" ");
            }
        }
    }

    return 0;
}