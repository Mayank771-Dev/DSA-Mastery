#include <vector>
#include <algorithm>
#include <climits>

class Solution {
public:
    long long calculateMinFinishTime(const std::vector<int>& times1, const std::vector<int>& durations1,
                                     const std::vector<int>& times2, const std::vector<int>& durations2) {
        long long minFinishTime = LLONG_MAX;
        
        // Try every pair combination
        for (size_t i = 0; i < times1.size(); ++i) {
            long long finish1 = (long long)times1[i] + durations1[i];
            
            for (size_t j = 0; j < times2.size(); ++j) {
                // Cannot start second ride before it opens and before finishing the first ride
                long long start2 = std::max((long long)times2[j], finish1);
                long long finish2 = start2 + durations2[j];
                minFinishTime = std::min(minFinishTime, finish2);
            }
        }
        return minFinishTime;
    }

    long long earliestFinishTime(std::vector<int>& landStartTime, std::vector<int>& landDuration, 
                                 std::vector<int>& waterStartTime, std::vector<int>& waterDuration) {
        // Plan 1: Land ride first, then Water ride
        long long plan1 = calculateMinFinishTime(landStartTime, landDuration, waterStartTime, waterDuration);
        
        // Plan 2: Water ride first, then Land ride
        long long plan2 = calculateMinFinishTime(waterStartTime, waterDuration, landStartTime, landDuration);
        
        // Return the absolute minimum time required between the two plans
        return std::min(plan1, plan2);
    }
};
