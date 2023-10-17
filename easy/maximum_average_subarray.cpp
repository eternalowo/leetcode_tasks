class Solution {
    // https://leetcode.com/problems/maximum-average-subarray-i/
    // Method: Sliding Window
    // Complexity: O(n), n - nums size
public:
    double findMaxAverage(const std::vector<int>& nums, int k) {

        double sum = 0;

        for (std::size_t j = 0; j < k; ++j) 
            sum += nums[j];

        double res = sum;

        for (std::size_t i = k; i < nums.size(); ++i) {
            sum += nums[i] - nums[i - k];
            res = std::max(res, sum);
        }
        
        return res / k;
    }
};