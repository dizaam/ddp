/*Program : median.c
* Deskripsi : Mencari median dari N angka
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
    int i, n;
    scanf("%d", &n);
    float x[n];
    for(i=0; i<n; i++){
        scanf("%f", &x[i]);
    }

    if(n%2==0){
        printf("%.1f\n", (x[n/2]+x[n/2-1])/2);
    }else{
        printf("%.1f\n", x[n/2]);
    }

    return 0;
}   