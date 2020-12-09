/*Program : pola4.c
* Deskripsi : Membuat pola 4
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
    int i,j, x,y;

    scanf("%d %d", &x, &y);
    int arr[y][x];

    int n=1;
    for(i=0; i<y; i++){
        if(i%2==0){
            for(j=0; j<x; j++){
                arr[i][j]=n;
                n++;
            }
        }else{
            for(j=x-1; j>=0; j--){
                arr[i][j]=n;
                n++;
            }
        }
    }

    for(i=0; i<x; i++){
        for(j=0; j<y; j++){
            printf("%d", arr[j][i]);

            if(j==y-1){
                printf("\n");
            }else{
                printf(" ");
            }
        }
    }

    return 0;
}