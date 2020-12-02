/*Program : holes.c
* Deskripsi : Menghitung huruf berlubang 
* Nama : Luthfi Maajid
* tanggal/ versi : 1 Desember 2020 / 1
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<stdbool.h>
#include<string.h>

int main(){
    int i=0, x;
    scanf("%d", &x);
    
    if(x<=1){
        printf("bukan prima\n");
    }else{
        for(i=2; i<x; i++){
            if(x%i==0){
                printf("bukan prima\n"); return 0;
            }
        }
        printf("prima\n");
    }

    
    
    
    return 0;
}   