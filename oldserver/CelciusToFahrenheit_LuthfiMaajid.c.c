/*Program : CelciusToFahrenheit.c
* Deskripsi : Mengonversi suhu dalam celcius ke fahrenheit
* Nama : Luthfi Maajid
* tanggal/ versi : 30 November 2020 / 1
*/

#include<stdio.h>
#include<math.h>

int main(){
    float a;
    scanf("%f", &a);
    
    /* Algoritma */
    
    printf("%.2f\n", a*1.8+32);

    return 0;
}