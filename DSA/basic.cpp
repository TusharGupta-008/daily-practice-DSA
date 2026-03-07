#include <iostream>
#include <vector>
using namespace std;

void replaceChar(string s, int i) {
    if(i == s.length())
        return;

    if(s[i] == 'a')
        cout << 'x';
    else
        cout << s[i];

    replaceChar(s, i+1);
}

int main()
{

  // // cout<<"Enter the number: ";
  // int n;
  // cin>>n;
  // // cout<<"The numbers are ";
  // for(int i=1;i<=n;i++){
  //   cout<<i<<" ";
  // }
  // int n[5]={1,2,3,4,5};
  // cout<<n[4];

//   class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         int n = numbers.size();

//         int f = 0;
//         int l = n-1;

//         while(f<l){
//             int sum = numbers[f]+numbers[l];

//             if(sum==target){
//                 return {f+1,l+1};

//             }
//             else if(sum<target){
//                 f++;

//             }
//             else{
//                 l--;

//             }
            
//         }return {};
        
//     }
// };

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int nonZero = 0;
//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] != 0) {
//                 swap(nums[i], nums[nonZero]);
//                 nonZero++;
//             }
//         }
//     }
// };
//

string s = "banana";
    replaceChar(s,0);


}
