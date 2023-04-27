void insertion_sort(vector<int> &arr){
    int j,key;
    for (int i=1;i<arr.size();++i){
        key=arr[i];
        j=i; --j;
        while (j>-1 && key<arr[j]){
            arr[j+1]=arr[j];
            --j; 
        }
        arr[++j]=key; 
        /*int j=i+1; //++cnt;
        while (j&&arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            --j; 
        } */
    }
    return;
}

std::vector<int> sortArray(std::vector<int> arr)
{
    insertion_sort(arr);
    return arr;
}
