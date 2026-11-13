class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen; // Stores {number, index}
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            // Check if the complement already exists in the map
            if (seen.find(complement) != seen.end()) {
                return {seen[complement], i};
            }
            
            // Store the current number and its index
            seen[nums[i]] = i;
        }
        
        return {};
    }
};