#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    //cout<<endl;
    int *p=new int[n];
    cout<<"Enter the array element of size "<<n<<" ";
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    cout<<"The entered array is :"<<endl;
    for(int i=0;i<n;i++){
        cout<<p[i]<<endl;
    }
    cout<<"The address of the Array : "<<endl;
    for(int i=0;i<n;i++){
        cout<<&p[i]<<"-";
        cout<<p[i]<<endl;
    }

}