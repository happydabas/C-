#include<iostream>
using namespace std;
int main(){
    // cout<< "hello" << endl << "world" << endl << 10+20  ;
    // // insetion operation can be chained i.e., << can be chained
    //extraction operation can also be chained (>>)


    // cout << "sizeof(int) = " << sizeof(int) << 'B' << endl;
    // cout << "sizeof(float) = " << sizeof(float) << 'B' << endl;
    // cout << "sizeof(double) = " << sizeof(double) << 'B' << endl;
    // cout << "sizeof(char) = " << sizeof(char) << 'B' << endl;

    // cout << sizeof(100) << endl;
    // cout << sizeof("a") << endl;
    // cout << sizeof(3.14) << endl; // by default in c++, floating point nos. are treated as double
    // cout << sizeof(3.14f) << endl; // add "f" suffix to treat 3.14 as float type

    // int x; // jb hum koi variable create krte h to usme garbase value hoti h
    // cin >> x; //read a value
    // cout << "value of x is" <<x << endl; // when you print a variable, it's value gets printes

    // long long int y;
    // y = LLONG_MIN; // assign a value
    // cout << y;

    int a = 7;
    int b = 2;

    cout << "a+b = " << a + b << endl;
    cout << "a-b = " << a - b << endl;
    cout << "a*b = " << a * b << endl;
    cout << "a/b = " << (float)a / b << endl; //explicit type casting --> hum type change krre h
    cout << "a/b = " << (a * 1.0) / b << endl;

    cout << "a%b = " << a % b << endl;
    
    return 0;
}