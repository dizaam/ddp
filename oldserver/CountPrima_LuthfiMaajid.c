/*Program : countprima.c
* Deskripsi : Menghitung ada berapa banyak bilangan prima 
* Nama : Luthfi Maajid
* tanggal/ versi : 1 Desember 2020 / 1
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<stdbool.h>
#include<string.h>

int main(){
    int i=0, j=0, x[10], prime=0;
    bool isprime;
    for(; i<10; i++){
        isprime = false;
        scanf("%d", &x[i]);

        if(x[i]<=1){
            continue;
        }else{
            for(j=2; j<x[i]; j++){
                if(x[i]%j==0){
                    isprime = true;
                    break;
                }
            }
            if(!isprime) {
                
                prime++;
            }
        }
      
        
    }

    printf("%d\n", prime);
    
    

    
    
    
    return 0;
}   