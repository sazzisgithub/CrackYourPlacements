class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                j=i;
                break;
            }

        }
        for(int i=j+1;i<nums.size();i++){
            if(j==-1)
            break;
            if(nums[i]!=0){
                int t=nums[i];
                nums[i]=nums[j];
                nums[j]=t;
                j++;
            }
        }
    }
};