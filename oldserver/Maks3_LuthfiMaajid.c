/*Program : maks3.c
* Deskripsi : Menentukan maksimal dari 3 bilangan
* Nama : Luthfi Maajid
* tanggal/ versi : 30 November 2020 / 1
*/

#include<stdio.h>
#include<math.h>

#define PI 3.14

int main(){
    int i, angka[2], max;
    scanf("%d", &max);
    for(i=0; i<2; i++){
        scanf("%d", &angka[i]);
        if(max<angka[i]){
            max = angka[i];
        }
    }
    printf("%d\n", max);




    return 0;
}