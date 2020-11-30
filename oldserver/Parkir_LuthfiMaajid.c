/*Program : Parkir.c
* Deskripsi : Menentukan Biaya Parkir
* Nama : Luthfi Maajid
* tanggal/ versi : 30 November 2020 / 1
*/

#include<stdio.h>
#include<math.h>

#define PI 3.14

int main(){
    int jenis, jam;
    scanf("%d", &jenis);
    scanf("%d", &jam);

    if(jenis==1){
        printf("%d\n", (jam-1)*1000+2000);
    }else{
        printf("%d\n", (jam-1)*500+1000);
    }

    return 0;
}