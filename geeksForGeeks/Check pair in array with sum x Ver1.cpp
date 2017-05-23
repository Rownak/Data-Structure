#include <stdio.h>

int main() {
	int t, n, x;
	scanf("%d",&t);
	int i=0;
	int a[1000];
	while(i<t){
        scanf("%d %d", &n, &x);
	    for(int j=0; j<n; j++){
	        scanf("%d",&a[j]);
	    }
	    int sumFound = 0;
	    for(int j=0; j<n; j++){
	        for(int k=j+1; k<n; k++){
	            int sum = a[j] + a[k];
	            printf("sum : %d\n",sum );
	            if(sum == x){
	                sumFound = 1;
	                break;
	            }
	        }
	        if(sumFound){
	            printf("Yes\n");
	            break;
	        }
	    }

	    if(!sumFound){
	        printf("No\n");
	    }
	    i++;
	}
	return 0;
}
