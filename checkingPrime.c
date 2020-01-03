#include <stdio.h>
int prime(int n){
    if(n<2){
        printf("it is not a prime");
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                printf("it is not a prime");
                return 0;
            }
        }
        printf("it is a prime");
    }    
}
int main()
{
    prime(9);
    

    return 0;
}
