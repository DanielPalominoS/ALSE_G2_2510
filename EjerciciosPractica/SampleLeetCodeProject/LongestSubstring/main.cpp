#include <iostream>
#include <cmath>
#include <unordered_map>
#include <string>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        if (s.length())
        {
            // Hash table object to store combinations
            unordered_map<char, char> mp;
            // Auxiliar string to store current substring to check
            string curr_subs = "";
            string biggest_subs = curr_subs;
            // Initialize the substring to check with the first  character of the input string
            curr_subs = s[0];
            // Current max length identified
            int maxLength = 1;
            // Sotre first hashtable element
            // mp[s[0]] = s[0];
            // string biggest_subs = curr_subs;
            for (int i = 0; i < s.length(); i++)
            {
                curr_subs = s[i];
                mp[s[i]] = s[i];
                for (int j = i + 1; j < s.length(); j++)
                {
                    if (mp.count(s[j]) == 0)
                    {
                        curr_subs += s[j];
                        if (curr_subs.length() > maxLength)
                        {
                            maxLength = curr_subs.length();
                        }
                        if(j==s.length()-1){
                            return maxLength;
                        }
                    }
                    else
                    {
                        break;                        
                    }
                    mp[s[j]] = s[j];
                }                
                mp.clear();
            }
            return maxLength; // biggest_subs.length();
        }
        else
        {
            return 0;
        }
    }
};

int main(int, char **)
{
    std::cout << "Hello\n";
    Solution mySol;
    std::cout << mySol.lengthOfLongestSubstring("abcabcbb") << "\n"; // true
    std::cout << mySol.lengthOfLongestSubstring("bbbbb") << "\n";    // true
    std::cout << mySol.lengthOfLongestSubstring("pwwwwww") << "\n";   // false
    std::cout << mySol.lengthOfLongestSubstring("dddddvdf") << "\n";     // false
    std::cout << mySol.lengthOfLongestSubstring("ddkeawdddvdf") << "\n";     // false
    std::cout << mySol.lengthOfLongestSubstring("") << "\n";         // true
}