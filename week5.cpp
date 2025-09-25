#include <iostream>
#include <cmath>
using namespace std;
int main() {



//problem1
/*
    for (int i = 1; i<=10; i++) {
        cout << i << " ";
}
*/
//problem2
/*
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
        sum += i;
    }
    cout << "\nSum = " << sum << endl;
*/
//problem3
/*
    int n;
    cout << "n= ";
    cin >> n;
    for (int i = 10; i <= n; i += 10) {
        cout << i << " ";
    }
*/
//problem4
/*
    int n;
    cout << "n= ";
    cin >> n;

    for (int i = 10; i <= n; i += 10) {
        cout << i;
        if (i + 10 <= n) {
            cout << ", ";
        }
    }
*/
//problem5
/*
    int count = 0;
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        cout << ch << " ";
        count++;
        if (count % 5 == 0) {
            cout << endl;
        }
    }
*/
//problem7
    /*
    int number;
    cin >> number;
    int counter = 0;
    for (int i = 2; i < number; i++) {
        if (!number % i) counter++;
    }
    cout << ((counter >= 1) ? "Not prime" : "Prime");
    */








    return 0;
}