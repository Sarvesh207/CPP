void reverseArray(vector<int>&arr, int left, int right){
    while(left <= right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}
vector<int> rotateArray(vector<int>arr, int k) {
    int n = arr.size();

    k = k%n;

    //  Brute Force
    // int temp [k];

    // //  copy first k element into temp array

    // for(int i=0; i<k; i++){
    //     temp[i] = arr[i];
    // }

    // //  shift remaining element by i - d places
    // for(int i = k; i<n; i++){
    //     arr[i-k] = arr[i];
    // }

    // //  copy temp to original array 
    
    // for(int i =n- k; i<arr.size(); i++){
    //     arr[i] = temp[i-n+k];
    
    // }

    // Optimal

    reverseArray(arr, 0, k-1);
    reverseArray(arr, k, n-1);
    reverseArray(arr, 0, n-1);

    return arr;
}
