#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the numer you want table : ";
    cin >> n;

    for (int i = 1; i <= n * 10;i++){
        if(i%n==0){
            cout << i << endl;
        }
    }
    
}