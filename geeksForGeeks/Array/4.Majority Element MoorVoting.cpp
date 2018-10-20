/*
Find the repeatation of number if after subtracting count when getting different number the count is still >0 then it could be the majority element.
findCandidate(a[], size)
1.  Initialize index and count of majority element
     maj_index = 0, count = 1
2.  Loop for i = 1 to size – 1
    (a) If a[maj_index] == a[i]
          count++
    (b) Else
        count--;
    (c) If count == 0
          maj_index = i;
          count = 1
3.  Return a[maj_index]
*/

#include <stdio.h>

int findCandidate(int arr[], int n){

    int candidate=0;
    int countElement=1;
    for(int i=1; i<n; i++){
        if(arr[candidate]==arr[i]){
            countElement++;
        }
        else{
            countElement--;
            if(countElement==0){
                candidate = i;
                countElement=1;
            }
        }
    }
    return arr[candidate];
}

int majorityElement(int arr[], int n){

    int candidate = findCandidate(arr, n);
    //printf("cand %d", candidate);
    int countElement=0;
    for(int i=0; i<n; i++){
        if(arr[i]==candidate){
            countElement++;
        }
    }
    if(countElement>n/2){
        return candidate;
    }
     return -1;
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
