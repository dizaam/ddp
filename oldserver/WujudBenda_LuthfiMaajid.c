/*Program : wujudbenda.c
* Deskripsi : Menentukan wujud benda
* Nama : Luthfi Maajid
* tanggal/ versi : 30 November 2020 / 1
*/

#include<stdio.h>
#include<math.h>

#define PI 3.14

int main(){
    float s;

    scanf("%f", &s);

    if(s>=0 && s<=100){
        printf("berwujud cair\n");
    }else{
        printf("berwujud non cair\n");
    }

    return 0;
}