#include<iostream>
using namespace std;
int main(){

    int n = 5;
    int sum = 0;

    for (int i = 0; i <= n;i++){
        if(i%2!=0)
            sum += i;
        else
            sum -= i;
    }
    cout << sum;
}