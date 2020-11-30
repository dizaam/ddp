/*Program : ganjilgenapnol.c
* Deskripsi : Menentukan ganjil / genap / nol
* Nama : Luthfi Maajid
* tanggal/ versi : 30 November 2020 / 1
*/

#include<stdio.h>
#include<math.h>

#define PI 3.14

int main(){
    int angka;
    scanf("%d", &angka);

    if(angka==0){
        printf("nol\n");
    }else if(angka%2==0){
        printf("genap\n");
    }else{
        printf("ganjil\n");
    }



    return 0;
}