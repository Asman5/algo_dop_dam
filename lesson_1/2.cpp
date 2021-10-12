#include <iostream>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    while (n > 0 && m > 0)
    {
        if(n > m){
            n = n % m;
        }
        else
            m = m % n;
    }
    // if(n > m)
    //     cout << n;
    // else
    //     cout << m;
    cout << n + m;


    return 0;
}