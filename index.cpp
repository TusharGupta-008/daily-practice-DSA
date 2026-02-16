// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {4, 9, 2, 7, 5};
//     int n = 5;

//     int maxVal = arr[0];
//     for(int i = 1; i < n; i++) {
//         if(arr[i] > maxVal)
//             maxVal = arr[i];
//     }

//     cout << "Largest = " << maxVal;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1,2,3,4,5};
//     int n = 5;

//     for(int i = 0; i < n/2; i++) {
//         swap(arr[i], arr[n-1-i]);
//     }

//     for(int x : arr)
//         cout << x << " ";
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1,2,3,4,5,6};
//     int n = 6;
//     int even = 0, odd = 0;

//     for(int i = 0; i < n; i++) {
//         if(arr[i] % 2 == 0)
//             even++;
//         else
//             odd++;
//     }

//     cout << "Even: " << even << " Odd: " << odd;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {10, 5, 8, 20, 15};
//     int n = 5;

//     int largest = arr[0], second = -1;

//     for(int i = 1; i < n; i++) {
//         if(arr[i] > largest) {
//             second = largest;
//             largest = arr[i];
//         } else if(arr[i] > second && arr[i] != largest) {
//             second = arr[i];
//         }
//     }

//     cout << "Second Largest = " << second;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {0,1,0,3,12};
//     int n = 5;
//     int j = 0;

//     for(int i = 0; i < n; i++) {
//         if(arr[i] != 0) {
//             swap(arr[i], arr[j]);
//             j++;
//         }
//     }

//     for(int x : arr)
//         cout << x << " ";
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {3, 8, 1, 6, 9};
//     int n = 5, target = 6;

//     for(int i = 0; i < n; i++) {
//         if(arr[i] == target) {
//             cout << "Found at index " << i;
//             return 0;
//         }
//     }

//     cout << "Not found";
// }

// #include <iostream>
// using namespace std;

// int main() {
//     string s = "hello";

//     for(int i = s.length()-1; i >= 0; i--) {
//         cout << s[i];
//     }
// }

// #include <iostream>
// using namespace std;

// int main() {
//     string s = "madam";
//     bool isPal = true;

//     for(int i = 0; i < s.length()/2; i++) {
//         if(s[i] != s[s.length()-1-i]) {
//             isPal = false;
//             break;
//         }
//     }

//     if(isPal) cout << "Palindrome";
//     else cout << "Not Palindrome";
// }

// #include <iostream>
// using namespace std;

// int main() {
//     string a = "listen";
//     string b = "silent";

//     if(a.length() != b.length()) {
//         cout << "Not Anagram";
//         return 0;
//     }

//     int freq[26] = {0};

//     for(char c : a) freq[c-'a']++;
//     for(char c : b) freq[c-'a']--;

//     for(int i = 0; i < 26; i++) {
//         if(freq[i] != 0) {
//             cout << "Not Anagram";
//             return 0;
//         }
//     }

//     cout << "Anagram";
// }

// #include <iostream>
// using namespace std;

// int main() {
//     string s = "swiss";
//     int freq[26] = {0};

//     for(char c : s)
//         freq[c-'a']++;

//     for(char c : s) {
//         if(freq[c-'a'] == 1) {
//             cout << "First non-repeating: " << c;
//             break;
//         }
//     }
// }

// #include <iostream>
// using namespace std;

// int main() {
//     string s = "banana";
//     int freq[26] = {0};

//     for(char c : s) {
//         freq[c - 'a']++;
//     }

//     for(int i = 0; i < 26; i++) {
//         if(freq[i] > 0)
//             cout << char(i + 'a') << " : " << freq[i] << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main() {
//     string s = "hello";

//     for(char &c : s) {
//         if(c >= 'a' && c <= 'z')
//             c = c - 32;
//     }

//     cout << s;
// }