/*
面试题 16.01. 交换数字

编写一个函数，不用临时变量，直接交换numbers = [a, b]中a与b的值。

示例：

输入: numbers = [1,2]
输出: [2,1]
提示：
numbers.length == 2
-2147483647 <= numbers[i] <= 2147483647
*/
class Solution {
public:
    vector<int> swapNumbers(vector<int>& a) {
        int temp = a[0];
        a[0] = a[1];
        a[1] = temp;
        return a;
    }
};
