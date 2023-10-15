class Solution {

public:

    int maxArea(std::vector<int>& height) {

        std::size_t ind_l = 0, ind_r = height.size() - 1;

        std::size_t res_sum = std::min(height[ind_l], height[ind_r]) * (ind_r - ind_l);

        while (ind_r > ind_l) {

            std::size_t cur_sum = std::min(height[ind_l], height[ind_r]) * (ind_r - ind_l);

            res_sum = std::max(cur_sum, res_sum);

            if (height[ind_l] < height[ind_r])
                ind_l++;
            else
                ind_r--;

        };

        return res_sum;
    };
};