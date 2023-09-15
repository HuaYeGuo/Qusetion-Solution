/*
"As we all know, strings are often encountered in ACM competitions, so this question is about strings. "
On this day, Xiaoming received Xiaohong's letter, but unfortunately, before that,
Xiaoming expressed his love to Xiaohong. This letter obviously came to refuse Xiaoming.
The letter wrote many words in the form of "dontlike", "hate", but Xiao Ming liked them after all,
so he decided to replace "dontlike" with "like", "hate"with "love", 
"dislike" with "like" and "distinguishing" with"exciting" in all of this letter.
输入描述：
The first line contains one number n, idicates the length of the letter. (1 <= n <=10000) 
The second line contains string s.
输出描述：
Output the replaced result.
输入：
8
ihateyou
输出：
iloveyou
*/
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        String s;
        n = sc.nextInt();
        s = sc.next();
        s=s.replace("hate","love");
        s=s.replace("dislike","like");
        s=s.replace("distinguishing","exciting");
        s=s.replace("dontlike","like");
        System.out.println(s);
    }
}
