/*
小明今天在花市买了n盆花苗带回家，老板说这n盆花生长速度可能不一样，所以每天每盆花需要浇水的用量可能会不一样。
小明研究得到了这些花苗吸收水分的速度，速度的定义是：每天的水分吸收量，也就是老板说的，每盆花每天需要浇水的量。
他会种植m天然后把它们送给朋友，他想知道一共需要浇多少ml的水。
输入描述：
第一行两个整数n和m。 （1 <= n <= 5000 , 1 <= m <= 5000)
第二行n个整数a_i代表每盆花吸收水分的速度。( 1<= a_i <= 1000)
输出描述：
一行，一个整数代表最后小明需要浇多少的水。
 */
#include <iostream>
using namespace std;
int main(){
    long n,m;//n为盆数,m为天数。
    long a_i;//每个盆的速度
    long j;
    cin >> n >> m;
    for(int i = 1;i<=n;i++){
        cin >> j;
        a_i += j;
    }
    cout << a_i * m;
    return 0;
}
