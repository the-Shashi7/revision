#include<bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size();
        int len2 = nums2.size();
        int len = (len1+len2);
        vector<double> Sorted_nums(len1+len2);
        double median = 0.0;
            int i=0,j=0;
            while(len1>0 && len2>0){
                if(nums1[i]>=nums2[j]){
                    Sorted_nums.push_back(nums1[i]);
                    len1--,i++;
                }
                if(nums1[i]<nums2[i]){
                    Sorted_nums.push_back(nums2[j]);
                    len2--,j++;
                }
                
                while(len1>0){
                    Sorted_nums.push_back(nums1[i]);
                    len1--,i++;  
                }
                while(len2>0){
                    Sorted_nums.push_back(nums2[j]);
                    len2--,j++;
                }
        }

        for (int i = 0; i < len; i++){
            cout<<Sorted_nums[i]<<" ";
        }
        
        if(len%2 == 0){
            median = (Sorted_nums[(len/2)]+Sorted_nums[(len/2 + 1)])/2;
            return median;
        }else{
            median = Sorted_nums[(len/2 + 1)];
            return median;
        }
}

int main(){
    cout<<"Hello World Ravi"<<endl;
    int num1 = [1,3];
    int num2 = [2];
    findMedianSortedArrays(num1,num2);

    return 0;
}