#include <iostream>

using namespace std;

int main(){ 
    int n, m;
    cin >> n >> m;
    int ans = 0;
    for (int i = 2; i <= n; i++)
    {
        if(n % i == 0 && m % i == 0)
            ans = i;
    }
    cout << ans;

    return 0;
}
