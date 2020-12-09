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
    point pus, tik;
    int r, xy;
 
    scanf("%d %d", &pus.x, &pus.y);
    scanf("%d", &r);
    scanf("%d %d", &tik.x, &tik.y);


    xy=pow((tik.x-pus.x),2)+pow((tik.y-pus.y), 2);
//    printf("(%d-%d) + (%d-%d): %d\n", tik.x, pus.y, tik.y, pus.y, xy);

    if((pus.x==tik.x)&&(pus.y==tik.y)){
        printf("tepat pada titik pusat\n");
    }else if(xy>r*r){
        printf("di luar lingkaran\n");
    }else if(xy<r*r){
        printf("di dalam lingkaran\n");
    }else{
        printf("tepat pada lingkaran\n");
    }
    
    return 0;
}   