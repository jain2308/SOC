#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n == 1){
        cout << 1 << endl;
        return 0;
    }
    if(n <= 3){
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    int x = n/2+1;
    int y =1;
    bool turn = true;
    for(int i=1; i<=n; i++){
        if(turn){
            cout << x << " ";
            x++;
        }
        else{
            cout << y << " ";
            y++;
        }
        turn = !turn;
    }
}