
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    
    int left = low;   
    int right = high - 1; 
    while(true){
        while(left <= right && arr[left] < pivot) left++; 
        while(right >= left && arr[right] > pivot) right--; 
        if (left >= right) break; 
        swap(arr[left], arr[right]); 
        left++; 
        right--; 
    }
    swap(arr[left], arr[high]);
    return left;
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int index = partition(arr, low, high);
        quickSort(arr, low, index - 1);
        quickSort(arr, index + 1, high);
    }
}
void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
