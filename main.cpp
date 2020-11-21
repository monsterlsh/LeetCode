
#include<iostream>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;


 class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
         sort(nums1.begin(),nums1.end(),less<int>());
        sort(nums2.begin(),nums2.end(),less<int>());
        vector<int>::iterator it1 = nums1.begin();
        vector<int>::iterator it2 = nums2.begin();
        vector<int> res;
        while(it1 != nums1.end() && it2!=nums2.end()){
            if(*it1 == *it2){
                res.push_back(*it1);
                it1++;
                it2++;
            }else if(*it1 < *it2){
                it1++;
            }else{
                it2++;
            }
        }

       // vector<int> res;
        return res;
    }
};
void fun(int i){
    cout<<i<<",";
}
int main() {
    vector<int> num1 = {4,9,9,9,5};
    vector<int> num2={9,4,9,8,4};
    Solution ss;
    vector<int> res = ss.intersect(num1,num2);
    for_each(res.begin(),res.end(),fun);
    //cout<<ss.intersect(num1,num2)<<endl;
    return 0;
}