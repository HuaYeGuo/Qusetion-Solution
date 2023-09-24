/*
题目描述：
计算两个点在空间中的最短距离
输入描述：
第一行输入一个点的位置（x1,y1,z1）
第二行输入一个点的位置（x2,y2,z2）
输出描述：
输出两点之间的最短距离
输入：
1 2 3
3 2 1
输出：
2.828427
备注：
结果保留6位小数
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x1,y1,z1;
    double x2,y2,z2;
    double res;
    cin >> x1 >> y1 >> z1;
    cin >> x2 >> y2 >> z2;
    res = sqrt(pow(x1-x2,2)+pow(y1-y2,2)+pow(z1-z2,2));
    printf("%.6lf",res);
}
