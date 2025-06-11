#include<iostream>
using namespace std;
int main(){
    int n = 12;
    int count = 0;

    // method 1

    // for(int i=0;i<31;i++){       //----> isme loop 32 times chlega
    //     int num = (n >> i);
    //     if(num & 1){
    //         count++;
    //     }
    // }
    // cout << count;



    //method 2

    // while(n > 0){
    //     int zerothBit = n & 1;   // ----> isme loop ceil(log2(n+1)) times chlegi
    //     if(zerothBit == 1){
    //         count++;
    //     }
    //     n = n >> 1;
    // }
    // cout << count;


    //method 3

    while(n >0){
        n = n & (n-1);  //----> isme loop bs utni br chlegi jitne 1 hoge
        count++;
    }
    cout << count << endl;


    //method 4
    // cout << __builtin_popcount(42) << endl;
    // cout << __builtin_popcountll(1234567890011) << endl;


    
    return 0;
}