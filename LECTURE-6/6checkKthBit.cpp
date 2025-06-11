#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int k;
    cin >> k;

    int num = (n >> k); //---> isse n ki jo Kth bit thi vo ab 0th bit bn jaegi

    if(num&1){
        cout << "Kth bit was set";
    }
    else{
        cout << "Kth bit was not set";
    }




    return 0;
}