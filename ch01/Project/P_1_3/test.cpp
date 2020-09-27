#include "test.h"
#include <cstdio>
#include <cmath>
#include <experimental/random>
#include <iostream>
#include <vector>
#include <set>

using std::cout;
using std::cin;
using std::endl;

#define esp 1e-9
void birthdayParadox(int T, int n)
{
    for(int ca = 1; ca <= T; ++ca){
        int ans = 1;
        double p = 1;
        for(int j = n-1; j >= 1; --j){
            p *= j * 1.00 / n;
            if(p - esp <=  0.5 || p + esp <= 0.5){
                break;
            }
            ++ans;
        }
        printf("Case %d: %d\n", ca, ans);
    }
}

void test2()
{
    std::srand(time(0));
    cout << "请输入人数：";
    int n = 0;
    cin >> n;
    int sum = 0;
    for(int i = 0; i < 10000; ++i){
        std::vector<int> birthdayVect;
        for(int j = 0; j < n; ++j){
            int k =  std::experimental::randint(1, 365);
            cout << k << " "; 
            birthdayVect.emplace_back(k);
        }
        cout << endl;
        
        for(int k = 0; k < n-1; ++k){
            for(int m = k+1; m < n; ++m){
                if(birthdayVect[m] == birthdayVect[k]){
                    sum += 1;
                }
            }
        }
    }
    printf("p: %.9f\n", sum*1.0/10000);
}

void test3(int n)
{
    std::srand(time(0));
    int cnt = 0;
    for(int i = 0; i < 10000; ++i){
        std::set<int> myset;
        for(int j = 0; j < n; ++j){
            int k = std::experimental::randint(1, 365);
            myset.insert(k);
        }
        
        if(myset.size() < n){
            cnt += 1;
        }
    }
    printf("%d rate= %.2f\n", n, cnt * 1.0 / 10000.0);
}



