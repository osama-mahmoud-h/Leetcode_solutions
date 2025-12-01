class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> result(n, 0);
        stack<int> funcStack;  // stack of function IDs
        int prevTime = 0;
        
        for (const string& log : logs) {
            // Parse the log string
            size_t firstColon = log.find(':');
            size_t secondColon = log.find(':', firstColon + 1);
            
            int funcId = stoi(log.substr(0, firstColon));
            string action = log.substr(firstColon + 1, secondColon - firstColon - 1);
            int timestamp = stoi(log.substr(secondColon + 1));
            
            if (action == "start") {
                // If there's a function currently executing
                if (!funcStack.empty()) {
                    // Add time to the function on top of stack
                    result[funcStack.top()] += timestamp - prevTime;
                }
                
                // Push new function onto stack
                funcStack.push(funcId);
                prevTime = timestamp;
            } 
            else { // action == "end"
                // Pop the function that's ending
                result[funcStack.top()] += timestamp - prevTime + 1;
                funcStack.pop();
                
                // Update prevTime to time after this function ends
                prevTime = timestamp + 1;
            }
        }
        
        return result;
    }
};
