#include <stdio.h>
#include <iostream>
using namespace std;

int ackermann(int m, int n) {
    int array[100]; 
    int a = -1; //��l�ư��|
    array[++a] = m;
    while (a >= 0) {
        //�Y���|����0,�h�~�����
        m = array[a--];
        if (m == 0) {
            n = n + 1;
        }//��m��0,�^��n+1
        else if (n == 0) {
            array[++a] = m - 1;
            n = 1;
        }//��n��0,m=m-1,n=1
        else {
            array[++a] = m - 1;
            array[++a] = m;
            n = n - 1;
        }//��m,n������0,m=m-1�An=ackermann(m, n - 1)
    }
    return n;
}

int main() {
    int m, n;
    cin >> m;
    cin >> n;
    cout << "ackermann(" << m << ',' << n << ") = " << ackermann(m, n);
    return 0;
}
