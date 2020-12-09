/*Program : chalennge02.c
* Deskripsi : Menghitung jumlah langkah
* Nama : Luthfi Maajid
* tanggal/ versi : 3 November 2020 / 1
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdbool.h>


int main(){
    int x,y;
    int a,b;
    int move=0;

    scanf("%d %d %d %d", &x, &y, &a, &b);
    
    
    while((x!=a)||(y!=b)){
        if(x<a){
            x++;
            move++;
        }else{
            --x;
            move++;
        }

        if((x==a)&&(y==b)) break;

        if(y<b){
            y++;
            move++;
        }else{
            --y;
            move++;
        }

    }
    
    printf("%d\n", move);

    return 0;
}   