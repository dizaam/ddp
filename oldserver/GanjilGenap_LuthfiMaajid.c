/*Program : ganjilgenap.c
* Deskripsi : Menentukan ganjil genap
* Nama : Luthfi Maajid
* tanggal/ versi : 30 November 2020 / 1
*/

#include<stdio.h>
#include<math.h>

#define PI 3.14

int main(){
    int a;

    scanf("%d", &a);
    if(a%2==0){
        printf("genap\n");
    }else{
        printf("ganjil\n");
    }

    return 0;
}