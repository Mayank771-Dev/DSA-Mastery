
class Solution {
private:
    // Helper function to calculate total finish time given a fixed sequence order
    int calc(const std::vector<int>& start1, const std::vector<int>& duration1,
             const std::vector<int>& start2, const std::vector<int>& duration2) {
        
        // Step 1: Find the earliest possible end time for the first ride category
        int minEnd1 = INT_MAX;
        for (size_t i = 0; i < start1.size(); ++i) {
            minEnd1 = std::min(minEnd1, start1[i] + duration1[i]);
        }
        
        // Step 2: Find the earliest possible finish time for the second ride category
        int minTotalFinish = INT_MAX;
        for (size_t j = 0; j < start2.size(); ++j) {
            // The second ride starts either after the first ride finishes 
            // or when the second ride opens, whichever is later.
            int currentFinish = std::max(minEnd1, start2[j]) + duration2[j];
            minTotalFinish = std::min(minTotalFinish, currentFinish);
        }
        
        return minTotalFinish;
    }

public:
    int earliestFinishTime(std::vector<int>& landStartTime, std::vector<int>& landDuration, 
                           std::vector<int>& waterStartTime, std::vector<int>& waterDuration) {
        
        // Option 1: Land Ride -> Water Ride
        int landThenWater = calc(landStartTime, landDuration, waterStartTime, waterDuration);
        
        // Option 2: Water Ride -> Land Ride
        int waterThenLand = calc(waterStartTime, waterDuration, landStartTime, landDuration);
        
        // Return the absolute earliest finish time among both sequences
        return std::min(landThenWater, waterThenLand);
    }
};
