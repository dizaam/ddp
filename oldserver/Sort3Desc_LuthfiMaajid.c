/*Program : sort.c
* Deskripsi : Mengurutkan 3 integer secara descending
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
    int i, j, x[3];
    for(i=0; i<3; i++){
        scanf("%d", &x[i]);
    }

    for(i=2; i>0; --i){
        for(j=0; j<i; j++){
            if(x[i]>x[j]){
                x[i] += x[j];
                x[j] = x[i]-x[j];
                x[i] = x[i]-x[j];
            }
        }
    }

    for(i=0; i<2; i++){
        printf("%d ", x[i]);
    }
    printf("%d\n", x[2]);

    return 0;
}   