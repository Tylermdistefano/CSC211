int findMin(int arr[]){
int low = arr[0];
for (int i = 0 ; i < sizeof(arr) ; i++ ){
if (arr[i] > low){
low = arr[i];
}

}

    return low;
}