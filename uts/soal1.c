/* 
Deskripsi : Menampilkan kelipatan X dari rentang bilangan Y sampai Z
Nama /Author : Luthfi Maajid
Tanggal/versi : 4 Desember 2020
*/

#include<stdio.h>

int main(){
    //tulis jawaban anda dibawah ini
    int x, a,b, count=0;
    scanf("%d %d %d", &x, &a, &b);

    for(;a<=b; a++){
        if(a%x==0){
            printf("%d\n", a);
            count++;
        }
    }

    if(count==0) printf("tidak ada\n");
    
    return 0;
}
