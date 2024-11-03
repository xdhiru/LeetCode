class Solution {
public:
    bool isCircularSentence(string& sentence) {
        int s=sentence.length();
        if (s==1) return true;
        if (sentence[0]!=sentence[s-1]) return false;
        for (int i=1;i<s-1;i++){
            if ((sentence[i]==' ')&&(sentence[i-1]!=sentence[i+1])) return false;
        }
        return true;
    }
};