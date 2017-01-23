#include<stdio.h>

int main()
{
    int testCase, computer1, computer2, total;

    scanf("%d", &testCase);

        int i;
        for( i=0; i<testCase; i++){
        scanf("%d", &total);

        if(total>10){
            computer2 = 10;
            computer1 = total - 10;
        }
        else{
            computer1 = 0;
            computer2 = total;
        }
        printf("%d %d\n", computer1, computer2);


        }



}
