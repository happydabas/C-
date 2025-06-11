//0 1 1 2 3 5 8...
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter number: " << endl;
    cin >> n;
    if(n == 0 || n == 1){
        cout << n;
    }
    else{
        int i = 1;
        int a = 0;
        int b = 1;
        int c;
        while(i<n){
            c = a + b;
            a = b;
            b = c;
            i++;
        }
        cout << c;
    }
                                //time complexity is O(n)
                                //work done = constant
                                //iteration = n-1

    return 0;
}