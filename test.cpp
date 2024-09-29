#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int> &nums){
        vector<int> nums2=nums;
        int n=sizeof(nums2)/sizeof(nums2[0]);
        cout<<n<<endl;
        for(int i=0;i<n;i++){
            int j=i;
            while(j>0 && nums2[j-1]>nums2[j]){
                swap(nums2[j-1],nums2[j]);
                j--;
            }
        }
        if(nums==nums2){
            cout<<"true";
            return true;
        }
        else{
            for(int x=1;x<n;x++){
                swap(nums2[x-1],nums2[x]);
                if(nums2==nums){
                    cout<<"true"<<endl;
                    return true;
                }
            }
        }
        cout<<"false";
        return false;
}

int main(){
    vector<int> nums,nums2,nums3;
    nums={3,4,5,1,2};
    check(nums);
    nums2={2,1,3,4};
    check(nums2);
    nums3={1,2,3};
    check(nums3);
}