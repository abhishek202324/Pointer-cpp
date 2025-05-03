#include<iostream>
using namespace std;
void change(int &n){
    n=n+5;
    
    cout<<"\nIn Funcion :"<<n;
}
int main(){

    int n=50;

    cout<<"\nIn main :"<<n;
    change(n);
    cout<<"\nIn main :"<<n;

    


}