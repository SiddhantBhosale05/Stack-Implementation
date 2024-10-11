//Name:Siddhant Kiran Bhosale
//PRN:23070123038
//Aim:Implementation of Stack using Array to perform a code with the use of STL(Standard Template Library)

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int>st;
st.push(30);
st.push(20);
st.push(10);

cout<< "Top element of the stack: " <<st.top() <<endl;

    return 0;
}


/*Output:
Top element of the stack: 10*/