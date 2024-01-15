#include<iostream>
using namespace std;
int main(){
int n=5;
// cin>>n;
int arr[5][5];


//Square Pattern
// for (int i = 0; i < 5; i++)
// {
//     for (int j = 0;j < 5; j++)
//     {
//         /* code */
//         cout<<" * ";
//     }
//     cout<<endl;
    
// }


//********** X pattern *******************
//  for (int i = 0; i < 5; i++)
//   {
//     for (int j = 0;j < 5; j++)
//       {
        
//         if(i+j==n-1 || i==j){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";  
//         }
// }
//     cout<<endl;
    
//  }


//********** S Pattern******************

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0;j < 5; j++)
      {
        
        if(i==0 || j==0 && i<=n || i==n/2 || j==n-1 && i>=n/2 || i==n-1){
            cout<<"*";
        }
        else{
            cout<<" ";  
        }
}
    cout<<endl;
    
 }

//   for (int i = 0; i < 5; i++)
//   {
//     for (int j = 0;j < 5; j++)
//       {
        
//         if(j==0 || ){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";  
//         }
// }
//     cout<<endl;
    
//  }

string c;
cout<<c;


return 0;
}