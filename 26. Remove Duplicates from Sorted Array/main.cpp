class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
		# initializing a variable
        int j = 1;
		# iterating through the vector
        for(int i = 1; i< nums.size(); i++)
        {
			# checking if the number has encountered before
			# Checking if the number is unique
            if(nums[i] != nums[i-1])
            {
                nums[j] = nums[i];
				#incrementing to next index
                j++;
            }
        }
		# returning the total number of unique number
        return j;
    }
};