class Solution {
public:
    string compressedString(string& word) {
        string comp;
        int current=0;
        int count=0;
        int s=word.size();
        for (int i=0;i<=s;i++){
            if (i==s){
                if (count==0) break;
                comp+=std::to_string(count);
                comp+=word[current];
                break;
            }
            if (word[i]==word[current]){
                count++;
                if (count==9){
                comp+=std::to_string(count);
                comp+=word[current];
                count=0;
                }
            }
            else{
                if(count!=0){
                    comp+=std::to_string(count);
                    comp+=word[current];}
                    count=1;
                    current=i;
            }
        }
        return comp;
    }
};