class Solution {
public:
    bool wordPattern(string pattern, string s) {
      unordered_map<char,string> hashTable;
      int index = 0;
      string temp = "";
      for(char letter = 'a'; letter <= 'z'; letter++)
          hashTable[letter] = "";
      for(int i = 0; i <= s.size(); i++){
          if( i < s.size() && !isspace(s[i]) ){
               temp += s[i];
          }
          else {
              if(hashTable[pattern[index]] == ""){
                for(char letter = 'a'; letter<='z'; letter++){
                    if(hashTable[letter] == temp)
                        return false;
                }
                hashTable[pattern[index]] = temp;
              }
              else if (hashTable[pattern[index]] != temp) 
                  return false;
              if(index < pattern.size())
                index++;
              if( isspace(s[i]) )
                  temp="";
              if(i >= s.size() && index< pattern.size())
                  return false;
          }
      }
        return true;
    }
};
