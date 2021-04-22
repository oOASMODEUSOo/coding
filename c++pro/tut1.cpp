#include <iostream>
using namespace std;

string var1;
string var2;

int startpoint;
int endpoint;

void triaglefunc(int startp ,int endp){
    for (int i = startp ; i <= endp ; i++){
        for (int j = 1 ; j <= i ; j++ ){
            cout << "#";
        }
    }
}

int main(){
    cout << "Enter your name: ";
    cin >> var1;
    cout << "Enter your Age: ";
    cin >> var2;
    cout << var1;
    cout << var2 << endl;

    cout << "Enter starting point: ";
    cin >> startpoint;
    cout << "Enter ending point: ";
    cin >> endpoint;

    triaglefunc(startpoint , endpoint);
    return 0;
}