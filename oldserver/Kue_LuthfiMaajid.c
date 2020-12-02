/*Program : selisih.c
* Deskripsi : Menghitung selisih antara 2 bilangan prima 
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
    float same =0, rate;
    int i,j;
    char c1[17], c2[17];

    scanf("%f", &rate);
    getchar();
    fgets(c1, sizeof(c1), stdin);
    fgets(c2, sizeof(c2), stdin);
    
    for(i=0; i< strlen(c1)-1; i+=2){
        for(j=0; j<strlen(c2)-1; j+=2){
            if(c1[i]==c2[j]){
                same++; break;
            }
        }
    }

    if(same/8>=rate/100){
        printf("sama\n");
    }else{
        printf("tidak sama\n");
    }

    return 0;
}   