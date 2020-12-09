/*Program : pola2.c
* Deskripsi : Membuat pola 2
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
        for(j=i; j>-1; j--){
            printf("%.0f", pow(2,j));
            
            
            
            if(j==0){
                printf("\n");
            }else{
                printf(" ");
            }
        }
    }

    //printf("%\n", pow(2, 2));

    return 0;
}