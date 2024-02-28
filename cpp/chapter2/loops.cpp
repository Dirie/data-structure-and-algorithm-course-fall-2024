#include<iostream>
using namespace std;

int main(){

int A[9]={ 1,4,17,3,90,79,4,6,81};
cout<<"A = [";
for(int i=0;i<9;i++){
    cout<<A[i]<<", ";
}
cout<<"]"<<endl;

int sum=0;
for(int i=0;i<9;i++){
    cout<<A[i]<<" + "<<sum<<" = ";
    sum = sum + A[i];
    cout<<sum<<endl;
}

cout<<"\nSum of all items are = "<<sum;


}
