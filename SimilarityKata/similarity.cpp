#include <string>

using std::string;

class Simil {
public:
    int lengthCheckScore(string str1, string str2) {
        if (str1.length() == str2.length()) {
            score = 60;
        }

        return score;
    }

private:
    int score;
};