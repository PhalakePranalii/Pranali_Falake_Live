// Online C++ compiler to run C++ program online
#include<iostream.h>
using namespace std;
int main() 
{
    int row,col;
    cin>>row>>col;
    
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1 || i==row || j==1 || j==col ){
                cout<<"*";
            }
            else if(j==1|| j==col){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        } 
        return 0;
    }
