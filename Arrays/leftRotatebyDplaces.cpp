vector<int> rotateArray(vector<int>arr, int k) {
    int n = arr.size();
    int temp [k];

    //  copy first k element into temp array

    for(int i=0; i<k; i++){
        temp[i] = arr[i];
    }

    //  shift remaining element by i - d places
    for(int i = k; i<n; i++){
        arr[i-k] = arr[i];
    }

    //  copy temp to original array 
    int j = 0;
    for(int i =n- k; i<arr.size(); i++){
        arr[i] = temp[j];
        j++;
    }

    return arr;
}
