class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string temp = "";

        for (int i = 0; i < words.size(); i++) {
            temp += words[i];

            // Agar temp, s se bada ho gaya
            if (temp.size() > s.size()) {
                return false;
            }

            // Agar abhi tak match nahi kar raha
            if (s.substr(0, temp.size()) != temp) {
                return false;
            }

            // Exactly match ho gaya
            if (temp == s) {
                return true;
            }
        }

        return false;
    }
};

