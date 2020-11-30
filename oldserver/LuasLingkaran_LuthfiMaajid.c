/*Program : luaslingkaran.c
* Deskripsi : Menghitung luas lingkaran
* Nama : Luthfi Maajid
* tanggal/ versi : 30 November 2020 / 1
*/

#include<stdio.h>
#include<math.h>

#define PI 3.14

int main(){
    float r;
    scanf("%f", &r);
    
    
    
    printf("%.2f\n", PI*powf(r,2));

    return 0;
}