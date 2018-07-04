class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int which[128] = { 0}; // 这个字符是否存在
        int where[128] = {-1}; // 这个字符在什么位置
        int begin = 0; // 开始游标
        int end   = 0; // 结束游标
        int max   = 0; // 最大不重复子串
        int ch    = 0; // 当前字符的ASCII码
        int last  = 0; // 开始游标的上一个位置

        // 对s中所有字符进行遍历
        for (int i = 0; i != s.size(); ++i,++end) {
            ch = (int)s[i];
            // 没有当前字符
            if (which[ch] == 0) {
                // 进行标记和记录位置
                which[ch] = 1;
                where[ch] = i;
                // 求出max
                if (end - begin + 1 >= max) {
                    max = end - begin  + 1;
                }
            }
            // 已经存在该字符
            else if (which[ch] == 1) {
                // 记录开始游标位置
                last = begin;
                // 开始游标跳转到与当前字符相同的位置
                begin = where[ch] + 1;
                // 清除跳过部分的记录
                for (int j = last; j != begin; ++j) {
                    which[(int)s[j]] = 0;
                    where[(int)s[j]] = 0;
                }
                // 记录当前字符
                where[ch] = i;
                which[ch] = 1;
                // 求出max
                if (end - begin + 1>= max) {
                    max = end - begin + 1;
                }  
            }   
        }
        return max;
    }
};