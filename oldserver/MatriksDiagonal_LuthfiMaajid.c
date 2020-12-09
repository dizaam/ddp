/*Program : matriksdiagonal.c
* Deskripsi : Memeriksa apakah matriks ini matriks diagonal
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
    bool diagonal=true;
    int m[3][3];

    int i=0;
    for(i=0;i<3; i++){
        int j=0;
        //printf("i ke: %d\n", i);
        for(j=0;j<3;j++){
            //printf("j ke: %d\n", j);
           scanf("%d", &m[i][j]);
           if((i==0)&&(j==0)){
               if(m[i][j]==0){
                   diagonal=false;
               }
           }else if((i==1)&&(j==1)){
               if(m[i][j]==0){
                   diagonal=false;
               }
           }else if((i==2)&&(j==2)){
               if(m[i][j]==0){
                   diagonal=false;
               }
           }else{
               if(m[i][j]!=0){
                   diagonal=false;
               }
           }
        } 
    }

    if(diagonal){
         printf("matriks diagonal\n");
    }else{
        printf("bukan matriks diagonal\n");
    }


    return 0;
}