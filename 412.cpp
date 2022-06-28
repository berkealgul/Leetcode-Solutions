class Solution 
{
public:
    vector<string> fizzBuzz(int n) 
    {
        vector<string> answer;

        for(int i = 1; i < n+1; i++)
        {
            string a = "";

            if(i % 3 == 0)
                a += "Fizz";
            if(i % 5 == 0)
                a += "Buzz";
            if(a == "")
                a = to_string(i);

            answer.push_back(a);
        }

        return answer;
    }
};
