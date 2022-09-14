using namespace std;
#include<bits/stdc++.h>

int mininimumOfIt(int a, int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}

int leastSwap(string s1)
{
    int b = 0,g = 0,n = s1.length();
    for (int i = 0; i < n; i++) {
        if (s1[i] == 'G')
            b++;
        else
            g++;
    }
    if (n % 2) {
        int num = (n + 1) / 2;
        int b_even = 0, g_even = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                if (s1[i] == 'G')
                    b_even++;
                else
                    g_even++;
            }
        }
        if (b > g)
            return num - b_even;
        else
            return num - g_even;
    }
    else {
        int b_odd = 0, g_even = 0;
        for (int i = 0; i < n; i++) {
            if (s1[i] == 'G') {
                if (i % 2)
                    b_odd++;
                else
                    g_even++;
            }
        }
        return mininimumOfIt(n / 2 - b_odd, n / 2 - g_even);
    }
}
 
int main()
{
    string str;
    int answer;
    cin>>str;
    answer = leastSwap(str);
    cout<<answer;
}


