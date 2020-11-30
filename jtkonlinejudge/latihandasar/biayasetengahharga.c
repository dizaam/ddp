/*Program : biayasetengahharga.c
* Deskripsi : Menentukan Biaya yang harus dibayar
* Nama : Luthfi Maajid
* tanggal/ versi : 27 November 2020 / 1
*/

#include<stdio.h>
#include<math.h>

int main(){
    float a,b;
    scanf("%f", &a);
    scanf("%f", &b);
    
    /* Algoritma */
    
    printf("%.2f\n", a+(a*(b/100)));
    
}