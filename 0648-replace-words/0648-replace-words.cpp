class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {

        sort(dictionary.begin(), dictionary.end(),
             [](const string &a, const string &b) {
                 if (a.size() == b.size())
                     return a < b;
                 return a.size() < b.size();
             });

        int n = dictionary.size();
        int m = sentence.size();

        string ans = "";

        for (int i = 0; i < m; i++) {

            string word = "";

            while (i < m && sentence[i] != ' ') {
                word += sentence[i];
                i++;
            }

            bool found = false;

            for (int j = 0; j < n; j++) {

                if (dictionary[j].size() > word.size())
                    break;

                if (word.compare(0, dictionary[j].size(), dictionary[j]) == 0) {
                    ans += dictionary[j];
                    found = true;
                    break;
                }
            }

            if (!found)
                ans += word;

            if (i < m)
                ans += ' ';
        }

        return ans;
    }
};