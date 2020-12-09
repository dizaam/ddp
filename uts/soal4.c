/* 
Deskripsi : Mengitung jumlah SOS
Nama /Author : Luthfi Maajid
Tanggal/versi : 4 Desember 2020
*/

#include<stdio.h>

int main(){
    //tulis jawaban anda dibawah ini
    char sos[3][3], yes=0;
    for(int i=0; i<3; i++){
        //scanf("%c %c %d", &sos[i][0], &sos[i][1], &sos[i][2]);

        
        for(int j=0; j<3; j++){
            scanf("%s", &sos[i][j]);
        }
        
    }

    for(int i=0; i<3; i++){
        //printf("testt loop i: %d\n", i);
        for(int j=0; j<3; j++){
            //printf("testt loop j: %d\n", j);
            
            if(sos[i][j]=='O'){
                if(j==1){
                    if((sos[i][j-1]=='S')&&(sos[i][j+1]=='S')){
                        yes++;
                    }
                }
                

                if(i==1){
                    if((sos[i-1][j]=='S')&&(sos[i+1][j]=='S')){
                        yes++;
                    }
                }

                if((i==1)&&(j==1)){
                    if((sos[0][0]=='S')&&(sos[2][2]=='S')){
                        yes++;
                    }

                    if((sos[0][2]=='S')&&(sos[2][0]=='S')){
                        yes++;
                    }
                }
                
            }
            
        }
    }


    printf("%d\n", yes);

    
    
    return 0;
}
