/*Program : kelipatan34.c
* Deskripsi : Menentukan apakah bilangan kelipatan 3 dan 4
* Nama : Luthfi Maajid
* tanggal/ versi : 30 November 2020 / 1
*/

#include<stdio.h>
#include<math.h>

#define PI 3.14

int main(){
    int angka;
    scanf("%d", &angka);

    if(angka%3==0 && angka%4==0){
        printf("%d\n", 1);
    }else{
        printf("%d\n", 0);
    }



    return 0;
}