class Solution {
public:
    string toGoatLatin(string sentence) {
        
        string vowels = "aeiouAEIOU";
        char consonant;
        string result = ""; 
        string last = "maa";
        bool flag= false;

        for(int i = 0; i < sentence.length(); i++) {
            
            if(i == 0 || sentence[i-1] == ' ') {

                int index = vowels.find(sentence[i]);

                if(index == -1) { 
                    consonant = sentence[i];
                    flag = true;
                }
                else
                    result += sentence[i];
            }
            else if(sentence[i] != ' ')
                result += sentence[i];

            else {
                if(flag)
                    result += consonant;
                result += last;
                result += ' ';
                flag = false;
                last += 'a'; 
            }
        }

        if(flag)
            result += consonant;
        result += last;

        return result;
    }
};