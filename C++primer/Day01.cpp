//
// Created by Xln on 2023/1/10.
//
#include <iostream>
using namespace std;

int main() {
//    cout<<"hello"<<endl;

    int currVal = 0, val = 0;
    if (cin>>currVal) {
        int cnt = 1;
        while(cin>>val){
            if (val == currVal)
                ++cnt;
            else{
                cout<<currVal <<"occurs" <<cnt <<"times" <<endl;
                currVal = val;
                cnt = 1;
            }
        }
    }
    return 0;
}
