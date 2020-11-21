#include <stdio.h>

int main(){
    int faktor, arr[10], prime=0;

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        faktor=0;
        scanf("%d", &arr[i]);
        if(arr[i]==1) continue;

        for(int j=1; j<arr[i]; j++){
            if(arr[i]%j==0){
                faktor++;
            }
            
            if(faktor>1){
                break;
            }
        }
        if(faktor<2){
            prime++;
        }
    }

    printf("%d\n", prime);

    return 0;
}