/*Program : selisih.c
* Deskripsi : Menghitung selisih antara 2 bilangan prima 
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
    int i,x,y,min,max;

    bool notprime;
    scanf("%d %d", &x, &y);


    min = --x;
    do{
        notprime = false;
        
        min++;
        if(min<=1){
            notprime=true;
        }else{
            for(i=2; i<min; i++){
                if(min%i==0){
                    notprime=true;
                    break;
                }
            }
        }

    }while(notprime);


    max = ++y;
    do{
        notprime = false;
        
        max--;
        if(min<=1){
            notprime=true;
        }else{
            for(i=2; i<max; i++){
                if(max%i==0){
                    notprime=true;
                    break;
                }
            }
        }

    }while(notprime);

    //printf("min: %d, max: %d, selisih: %d\n", min, max, abs(max-min));
    printf("%d\n", max-min);

    return 0;
}   