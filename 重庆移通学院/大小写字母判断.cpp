/*
定义：每种字母的大小写是对应关系。现在请你判断两个字母是不是大小写的关系。
输入描述：
一行，两个字符，中间没有空格
输出描述：
输出一行“YES”或者“NO”
输入：
aA
输出：
YES
输入：
bE
输出：
NO
备注：
保证输入的字符为英语字母
温馨提示：还记得ASCⅡ码吗？对应大小写字符的ASCⅡ码的差值是同一个数哦~如果不会的话就要写很多分支判断咯
*/
#include <iostream>
using namespace std;

int main(){
    char a,b;
    cin >> a >> b;
    //32 = a97 - A65

    if((int)(a - 32) == (int)(b) || (int)(b - 32) == (int)(a)){
        cout<<"YES"<<endl;
    }else if ((int)a,b >= 65 && (int)a,b <= 122 ){
        cout<<"NO"<<endl;
    }else{
        return 0;
    }
}
