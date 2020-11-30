/*Program : parkirmalamminggu.c
* Deskripsi : Menentukan Biaya Parkir malam minggu
* Nama : Luthfi Maajid
* tanggal/ versi : 30 November 2020 / 1
*/

#include<stdio.h>
#include<math.h>

#define PI 3.14

int main(){
    int jenis, jam, biaya=0;
    scanf("%d", &jenis);
    scanf("%d", &jam);

    if(jenis==1){
        if(jam>5){
            if(jam>8){
                printf("disegel\n");
            }else{
                printf("%d\n", (jam-5)*500+jam*1500);
            }
            
        }else{
            printf("%d\n", jam*1500);
        }
        
    }else{
        if(jam>5){
            if(jam>8){
                printf("disegel\n");
            }else{
                printf("%d\n", (jam-5)*500+jam*1000);
            }
            
        }else{
            printf("%d\n", jam*1000);
        }
    }

    return 0;
}