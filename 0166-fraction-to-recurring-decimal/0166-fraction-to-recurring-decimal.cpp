class Solution {
private:
    void handle_div_sign(int numerator, int denominator, string &res){
        if ((numerator < 0) ^ (denominator < 0)) {
            res += "-";
        }
    }
    void perform_long_division(long long int num, long long int den, string &result) const {
        unordered_map<long long, int> remainderMap;

        // Process fractional part
        while (num != 0) {
            // Check if we've seen this remainder before
            if (remainderMap.count(num)) {
                // Found repetition! Insert opening parenthesis
                int repeatStart = remainderMap[num];
                result.insert(result.find('.') + 1 + repeatStart, "(");
                result += ")";
                break;
            }

            remainderMap[num] = result.length() - result.find('.') - 1;

            // Perform long division step
            num *= 10;
            result += to_string(num / den);
            num %= den;
        }
    }
public:
    string fractionToDecimal(int numerator, int denominator) {
        // Handle edge case: numerator is 0
        if (numerator == 0) return "0";

        string result = "";
        handle_div_sign(numerator,denominator, result);
        
        long long num = abs((long long)numerator);
        long long den = abs((long long)denominator);

        // Integer part
        result += to_string(num / den);
        num %= den; 

        // If no remainder, return integer result
        if (num == 0) return result;

        result += ".";

        perform_long_division(num, den, result);

        return result;
    }
};