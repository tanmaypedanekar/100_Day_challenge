#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    string array[]={"one","two","three","four","five","six","seven","eight","nine"};
    for(int i=1;i<=9;i++){
        if(num==i){
            cout<<array[i-1];
        }
    }
    if(num>9){
        cout<<"Greater than 9";
    }

    return 0;
}