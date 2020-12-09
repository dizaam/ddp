/*Program : reverse.c
* Deskripsi : Membalikkan kata
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
    point p1[5], p2[5];

    int i = 0;
    for(; i<5; i++){
        scanf("%d %d", &p1[i].x, &p1[i].y);
    }

    for(i=0; i<5; i++){
        scanf("%d %d", &p2[i].x, &p2[i].y);
    }

    for(i=0; i<5; i++){
        if((p1[i].x!=p2[i].x)||(p1[i].y!=p2[i].y)){
            printf("tidak sama\n");
            return 0;
        }
    }
    printf("sama\n");
    
    return 0;
}   