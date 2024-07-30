#include <iostream>
using namespace std;

int ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    }//m��0,�^��n+1
    else if (n == 0) {
        return ackermann(m - 1, 1);
    }//n��0,�^��m=m-1,n=1
    else {
        return ackermann(m - 1, ackermann(m, n - 1));
    }//m,n����0,�^��m=m-1,n=ackermann(m,n-1)
}

int main() {
    int m , n ;
    cin >> m;
    cin >> n;
    cout << "Ackermann(" << m << ", " << n << ") = " << ackermann(m, n) << endl;
    return 0;
}
