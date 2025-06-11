#include<iostream>
using namespace std;
int main(){
    char grade;
    cout << "enter grade: " << endl;
    cin >> grade;
    // if(grade == 'a'){
    //     cout << "v.good";
    // }
    // else if(grade == 'b'){
    //     cout << "good";
    // }
    // else if(grade == 'c'){
    //     cout << "average";
    // }
    // else if(grade == 'd'){
    //     cout << "poor";
    // }
    // else if(grade == 'e'){
    //     cout << "v.poor";
    // }
    // else if(grade == 'f'){
    //     cout << "fail";
    // }
    // else{
    //     cout << "invalid grade";
    // }

    switch (grade){ // char or int
        case 'a': cout << "very good" << endl; break;
        case 'b': cout << "very good" << endl; break;
        case 'c': cout << "very good" << endl; break;
        case 'd': cout << "very good" << endl; break;
        case 'e': cout << "very good" << endl; break;
        case 'f': cout << "very good" << endl; break;
        default: cout << "invalid grade" << endl; break;
    }
    return 0;
}