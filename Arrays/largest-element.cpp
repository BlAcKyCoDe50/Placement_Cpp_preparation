#include <iostream> 
#include <vector>
using namespace std;

int largestElement(vector<int>&arr,int n){
    int max=arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
            cout<<max<<endl;
            cout<<"iteration "<<i<<endl;
        }
        else{i++; 
        cout<<"in else"<<endl;
    }
    return max;
}
}

main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<largestElement(arr,n);
}