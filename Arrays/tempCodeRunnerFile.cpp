int largestElement(vector<int>&arr,int n){
    int max=arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        else i++;
    }
    return max;
}