/*Program : perkalianmatriks.c
* Deskripsi : Mengalikan 2 buah matrix
* Nama : Luthfi Maajid
* tanggal/ versi : 6 Desember 2020 / 1
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

#define PI 3.14

int main(){
    int x,y;
    int a,b,c,d;
    scanf("%d %d", &a, &b);
    int m1[a][b];
    int i=0;
    for(;i<a; i++){
        int j=0;
        for(; j<b; j++){
            scanf("%d", &m1[i][j]);
        }
    }

    scanf("%d %d", &c, &d);
    int m2[c][d];
    for(i=0; i<c; i++){
        int j=0;
        for(;j<d; j++){
            scanf("%d", &m2[i][j]);
        }
    }

    int m3[a][d];
    memset(m3, 0, sizeof(m3[0][0])*a*d);

/*
    for(i=0; i<a; i++){
        int j=0;
        for(;j<d; j++){
            
            printf("test m3[%d][%d]: %d\n", i,j,m3[i][j]);
            
        }
    }
    */
    
    for(i=0; i<a; i++){
        int j=0;
        for(;j<d; j++){
            int n=0;
            x=0;
            //printf("test m3[%d][%d]: %d\n", i,j,m3[i][j]);
            for(;n<b;n++){

                x+=(m1[i][n]*m2[n][j]);
                //printf("test m1[%d][%d]: %d test m2[%d][%d]: %d\n", a,n, m1[a][n],n,j);
            }
            m3[i][j]=x;
            //printf("test m3[%d][%d]: %d\n", i,j,m3[i][j]);
            printf("%d", m3[i][j]);

            
            if(j==d-1){
                printf("\n");
            }else{
                printf(" ");
            }
            

        }
    }
    






    return 0;
}