/*Program : fillpointkuadran.c
* Deskripsi : Menentukan titik di kuadran mana lalu disimpan di array baru
* Nama : Luthfi Maajid
* tanggal/ versi : 3 November 2020 / 1
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdbool.h>

typedef struct{
    int x;
    int y;
    bool z;
}point;

int main(){
    int n, k, t=0;
    scanf("%d", &n);
    point p[n], new[n];

    int i=0;
    for(; i<n; i++){
        scanf("%d %d", &p[i].x, &p[i].y);
        new[i].z=false;
    }
    scanf("%d", &k);
    

    for(i=0; i<n; i++){
        if((p[i].x>=0)&&(p[i].y>=0)&&(k==1)){
            ++t;
            new[i].x=p[i].x;
            new[i].y=p[i].y;
            new[i].z=true;
        }else if((p[i].x<0)&&(p[i].y>=0)&&(k==2)){
            ++t;
            new[i].x=p[i].x;
            new[i].y=p[i].y;
            new[i].z=true;
        }else if((p[i].x<0)&&(p[i].y<0)&&(k==3)){
            ++t;
            new[i].x=p[i].x;
            new[i].y=p[i].y;
            new[i].z=true;
        }else if((p[i].x>0)&&(p[i].y<0)&&(k==4)){
            ++t;
            new[i].x=p[i].x;
            new[i].y=p[i].y;
            new[i].z=true;
        }
    }

    printf("%d\n", t);
    for(i=0; i<n; i++){
        if(new[i].z){
            printf("%d %d\n", new[i].x, new[i].y);
        }
    }
    
    return 0;
}   