/*Program : BasicIO2
* Deskripsi : Menampilkan bilangan antara x sampai y di baris yang sama
* Nama : Luthfi Maajid
* tanggal/ versi : 30 November 2020 / 1
*/

#include<stdio.h>

int main(){
    int x, y, i;
    scanf("%d %d", &x, &y);
    for(i=x; i<=y; i++){
        if(i==y){
            printf("%d\n", i);
        }else{
            printf("%d ", i);
        }
        
    }
    
    
    return 0;
}