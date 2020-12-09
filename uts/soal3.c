/* 
Deskripsi : Menghitung pemilihan suara RT
Nama /Author : Luthfi Maajid
Tanggal/versi : 4 Desember 2020
*/

#include<stdio.h>

int main(){
    //tulis jawaban anda dibawah ini
    int n;
    scanf("%d", &n);
    int x[n], y[n], golput=0, max=0, highest=0;

    scanf("%d %d", &x[0], &y[0]);
    max=y[0];
    highest = x[0];
    golput+=y[0];
    for(int i=1; i<n; i++){
        scanf("%d %d", &x[i], &y[i]);
        golput+=y[i];
        if(max<y[i]){
            highest = x[i];
            max= y[i];
        }
    }
    
    printf("%d\n", highest);

    for(int i=0; i<n; i++){
        printf("%d ", x[i]);
        for(int j=0; j<y[i]; j++){
            printf("*");
        }
        printf("\n");
    }

    printf("abstain %d\n", 20-golput);
    
    return 0;
}
