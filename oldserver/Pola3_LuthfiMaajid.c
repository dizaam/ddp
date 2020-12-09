/*Program : pola3.c
* Deskripsi : Membuat pola 3
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
    
    int n=0;
    for(i=x; i>0; i--){
        for(j=1; j<=i; j++){
            n++;
            printf("%d", n);
            
            
            
            if(j==i){
                printf("\n");
            }else{
                printf(" ");
            }
        }
    }

    

    return 0;
}