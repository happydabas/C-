#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin  >> v[i];
    }

    int serijaScore = 0;
    int dimaScore = 0;

    int i = 0; //points to the leftmost card
    int j = n-1; //points to the rightmost card

    bool serijaTurn = true;

    while(i<=j){
    if(serijaTurn){
        //serija turn
    if(v[i] > v[j]){
        serijaScore += v[i];
        i++;
    }
    else{
        serijaScore += v[j];
        j--;
    }
    serijaTurn = false;
    }

    else{
        //dima turn
    if(v[i] > v[j]){
        dimaScore += v[i];
        i++;
    }
    else{
        dimaScore += v[j];
        j--;
    }
    serijaTurn = true;
    }
    }

    cout << serijaScore << " " << dimaScore;



}