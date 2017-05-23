#include <stdio.h>

void mergeArray(int arr[], int l, int m, int r){

    int i,j,k;

    int n1 = m - l + 1;
    int n2 = r - m;
    //printf("n1 %d, n2 %d", n1, n2);
    int left[n1], right[n2];

    for(i=0; i<n1; i++){
        left[i] = arr[l + i];
        //printf("left i: %d\n", left[i]);
    }
    for(j=0; j<n2; j++){
        right[j] = arr[m + 1 + j];
        //printf("right j: %d\n", right[j]);
    }
    i=0;
    j=0;
    k=l;

    while(i<n1 && j<n2){
        if(left[i]<= right[j]){
            arr[k] = left[i];
            i++;
        }
        else{
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k] = left[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = right[j];
        j++;
        k++;
    }
    return;
}
void mergeSort(int arr[], int l, int r){

    if(l<r){

        int mid = (l+r)/2;
//        printf("Mid in MergeSort: %d\n", mid);
        mergeSort( arr, l, mid);
        mergeSort( arr, mid+1, r);
        mergeArray(arr, l, mid, r);
    }
    else{
        return;
    }

}
void printArray(int arr[], int n){

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
	int t=1, n=5, x=6;
	scanf("%d",&t);
	int i=0;
	int arr[1000];
	while(i<t){
        scanf("%d %d", &n, &x);
	    for(int j=0; j<n; j++){
	        scanf("%d",&arr[j]);
	    }
//	    printf("Array Before Sort:\n");
//	    printArray(arr, n);
	    mergeSort(arr, 0, n-1);
//	    printf("Array after Sort:\n");
//        printArray(arr, n);

        int l=0, r=n-1;
        int sumFound = 0;
        while(l<r){
            if(arr[l]+arr[r]==x){
                sumFound = 1;
                break;
            }
            else if(arr[l]+arr[r]<x){
                l++;
            }
            else{
                r--;
            }
        }
        if(sumFound){
	        printf("Yes\n");
	    }
	    else{
            printf("No\n");
	    }
	    i++;
	}
	return 0;
}
