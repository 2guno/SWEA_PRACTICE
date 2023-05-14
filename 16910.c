#include <stdio.h>
#include <math.h>

 int main(void){
    int T, N;
    int count = 0;

    scanf("%d ", &T);
    for(int i=1; i<=T; i++) {
        count = 0;
        scanf("%d", &N);

       for(int j=1; j<=N; j++) {
            for(int k=1; k<=N; k++) {
                if(j*j + k*k<= N*N) {
                    count++;
                }           
            } 
        }
        count = 4*(count+N) +  + 1;

        printf("#%d %d\n", i, count);
    }
    
    return 0;
 }