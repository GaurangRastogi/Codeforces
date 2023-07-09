#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int h, a, count = 0;
    cin >> h >> a;

    while (h > 0 && a > 0)
    {
        if (count % 2 == 0)
        {
            h += 3;
            a += 2;
            count++;
        }
        else
        {
            if (a > 10 && h > 5)
            {
                h -= 5;
                a -= 10;
                count++;
                continue;
            }
            if (h > 20)
            {
                h -= 20;
                a += 5;
                count++;
                continue;
            }

            // if(h>=5&&a>=10){
            //     h-=5;
            //     a-=10;
            //     count++;
            //     continue;
            // }

            // if(h==20){
            //     h-=20;
            //     a+=5;
            //     count++;
            //     continue;
            // }

            break;
        }
    }
    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}