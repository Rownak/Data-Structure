#include <stdio.h>


int majorityElement(int arr[], int n){

    int maxNum = 0;
    int x[101] ={0};
    for(int i=0; i<n; i++){
        if(arr[i]>maxNum){
            maxNum = arr[i];
        }
        int value = arr[i];
        x[value]++;
    }
    int maxCount = 0;
    int maxCountIndx = 0;
    for(int i=0; i<=maxNum; i++){
        //printf("%d ", x[i]);
        if(x[i]>maxCount){
            maxCount = x[i];
            maxCountIndx = i;
        }
    }

    if(maxCount> (n/2)){
        return maxCountIndx;
    }
    else{
        return -1;
    }


}

int main() {

    int arr[1000];
    int t, n;
    scanf("%d", &t);
    int i=0;
    while(i<t){

        scanf("%d", &n);
        for(int j=0; j<n; j++){
            scanf("%d", &arr[j]);
        }

        int output = majorityElement(arr, n);
        if(output == -1){
            printf("NO Majority Element\n");

        }
        else{
            printf("%d\n", output);
        }
        i++;
    }
	return 0;
}
