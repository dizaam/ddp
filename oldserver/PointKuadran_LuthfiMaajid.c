/*Program : pointkuadrant.c
* Deskripsi : Menentukan titik di kuadran mana
* Nama : Luthfi Maajid
* tanggal/ versi : 3 November 2020 / 1
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

typedef struct{
    int x;
    int y;
}point;

int main(){
    int n, k, t=0;
    scanf("%d", &n);
    point p[n];

    int i=0;
    for(; i<n; i++){
        scanf("%d %d", &p[i].x, &p[i].y);
    }
    scanf("%d", &k);

    for(i=0; i<n; i++){
        if((p[i].x>=0)&&(p[i].y>=0)&&(k==1)){
            ++t;
        }else if((p[i].x<0)&&(p[i].y>=0)&&(k==2)){
            ++t;
        }else if((p[i].x<0)&&(p[i].y<0)&&(k==3)){
            ++t;
        }else if((p[i].x>0)&&(p[i].y<0)&&(k==4)){
            ++t;
        }
    }

    printf("%d\n", t);
    
    return 0;
}   