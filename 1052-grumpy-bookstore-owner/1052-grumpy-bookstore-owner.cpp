class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        
        // Step 1: Calculate the initial satisfaction
        int initialSatisfaction = 0;
        for (int i = 0; i < n; ++i) {
            if (grumpy[i] == 0) {
                initialSatisfaction += customers[i];
            }
        }
        
        // Step 2: Calculate the potential gain for the first window of length 'minutes'
        int additionalSatisfaction = 0;
        for (int i = 0; i < minutes; ++i) {
            if (grumpy[i] == 1) {
                additionalSatisfaction += customers[i];
            }
        }
        
        int maxAdditionalSatisfaction = additionalSatisfaction;
        
        // Step 3: Slide the window across the array
        for (int i = minutes; i < n; ++i) {
            if (grumpy[i] == 1) {
                additionalSatisfaction += customers[i];
            }
            if (grumpy[i - minutes] == 1) {
                additionalSatisfaction -= customers[i - minutes];
            }
            maxAdditionalSatisfaction = max(maxAdditionalSatisfaction, additionalSatisfaction);
        }
        
        // Step 4: Combine the results
        return initialSatisfaction + maxAdditionalSatisfaction;
    }
};
