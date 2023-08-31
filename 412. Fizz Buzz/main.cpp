class Solution {
public:
    vector<string> fizzBuzz(int n) {
		// declaring a string vector with name 'result'
        vector<string> result;
		// itating from 1 till n(given size of list/vector)
        for(int i = 1; i <= n; i++){
			// if i is divisible by 3 and 5 place 'FizzBuzz' in i'th index
            if(i % 3 == 0 and i % 5 == 0)
            {
                result.push_back("FizzBuzz");
            }
			// if i is divisible by 3 place 'Fizz' in i'th index
            else if(i % 3 == 0)
            {
                result.push_back("Fizz");
            }
			// if i is divisible by 5 place 'Buzz' in i'th index
            else if(i % 5 == 0)
            {
                result.push_back("Buzz");
            }
			// if i isn't divisible by 3 and 5 place 'i' in i'th index
            else
            {
                result.push_back(to_string(i));
            }
        }
		// return the result vector
        return result;
    }
};
