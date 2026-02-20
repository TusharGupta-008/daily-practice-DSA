// #include <iostream>
// using namespace std;

// int fact(int n) {
//     if(n == 0 || n == 1)
//         return 1;

//     return n * fact(n-1);
// }

// int main() {
//     cout << fact(5);
// }

// #include <iostream>
// using namespace std;

// int fib(int n) {
//     if(n == 0) return 0;
//     if(n == 1) return 1;

//     return fib(n-1) + fib(n-2);
// }

// int main() {
//     cout << fib(7);
// }

// #include <iostream>
// using namespace std;

// void printN(int n) {
//     if(n == 0) return;

//     printN(n-1);
//     cout << n << " ";
// }

// int main() {
//     printN(5);
// }

// #include <iostream>
// using namespace std;

// void printRev(int n) {
//     if(n == 0) return;

//     cout << n << " ";
//     printRev(n-1);
// }

// int main() {
//     printRev(5);
// }

// #include <iostream>
// using namespace std;

// int sumN(int n) {
//     if(n == 0) return 0;

//     return n + sumN(n-1);
// }

// int main() {
//     cout << sumN(5);
// }

#include <iostream>
using namespace std;

void rev(string s, int i) {
    if(i < 0) return;

    cout << s[i];
    rev(s, i-1);
}

int main() {
    string s = "hello";
    rev(s, s.length()-1);
}