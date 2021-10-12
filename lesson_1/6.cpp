#include <stack>
#include <iostream>

using namespace std;

int main(){
    stack <int> st;
    st.push(3);
    st.push(4);
    st.push(5);
    cout << st.size() << st.top() << endl;
    st.pop();
    cout << st.size() << st.top() << endl;
    cout << st.empty();

    return 0;
}