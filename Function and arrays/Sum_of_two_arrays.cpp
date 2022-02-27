#include<iostream>
using namespace std;

int main(){
    int n1, n2;
    cin>>n1;
    int* a1 = new int[n1];
    for(int i = 0 ; i < n1; i++){
        cin>>a1[i];
    }
    
    cin>>n2;
    int* a2 = new int[n2];
    for(int i = 0 ; i < n2; i++){
        cin>>a2[i];
    }
    int maxi=max(n1,n2);
    int arr[maxi];
    int i=n1-1;
    int j=n2-1;
    int k=maxi-1;
    int carry=0;
    while(k>=0){
        int sum=carry;
         if(i>=0)
        sum+=(a1[i]);
         if(j>=0 )
        sum+=(a2[j]);
       
        arr[k]=(sum)%10;
        carry=(sum)/10;
    i--;
    j--;
    k--;
    }
    if(carry!=0){
        cout<<carry<<endl;
    }
    else
    for(int y=0;y<maxi;y++){
        cout<<arr[y]<<endl;
    }
    return 0;
}
