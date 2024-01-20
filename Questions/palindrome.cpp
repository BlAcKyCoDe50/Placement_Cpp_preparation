    #include<iostream>
    using namespace std;

    //optmized approach
    //we are using optimized approach in which we are checking half digit only.
    bool palindrome(int x){
        if(x<0 || x%10==0 || x!=0){
            return false;
        }

        int reverseHalf=0;

        while (x>reverseHalf)
        {
            reverseHalf=(reverseHalf*10)+(x%10);
            x=x/10;
        }

        if(reverseHalf==x ){return true;}
        else{return false;}
        
    }

    main(){
    int in;
    cin>>in;
   bool check= palindrome(in);
  if (palindrome(in))
  {
    cout<<"true";
  }
  else{cout<<"false";}
  

    return 0;
    }