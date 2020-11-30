/*Program : limas.c
* Deskripsi : Menghitung volume limas
* Nama : Luthfi Maajid
* tanggal/ versi : 30 November 2020 / 1
*/

#include<stdio.h>
#include<math.h>

#define PI 3.14

int main(){
    float p, l, t, vol;
    scanf("%f", &p);
    scanf("%f", &l);
    scanf("%f", &t);
    
    vol = 1.0/3*p*l*t;
    
    
    printf("%.6f\n", vol);

    return 0;
}