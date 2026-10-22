class Solution {
    public:
        int removeDuplicates(vector<int>& nums) 
        {
            //记录重复数字出现的次数,并且将数组前n个数字转换为去重之后的结果
            //双指针，指向的是范围
            int left = 1,right = 1;
            //如果说nums长度为1没进入循环right会越界访问。
            if(left == nums.size()) return left; 
            while(right < nums.size())
            {
                //找到第一个与上一个不同的元素
                if(nums[left - 1] == nums[right])
                {
                    right++;
                }
                else
                {
                    nums[left] = nums[right];
                    left++;
                }
            }  
            return left;     
        }
    };