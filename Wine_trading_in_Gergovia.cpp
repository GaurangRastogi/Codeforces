#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int n;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        long long int x, curr = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            curr += x;
            sum += abs(curr);
            // cout<<x<<" "<<curr<<" "<<sum<<endl;
        }
        cout << sum << endl;
    }

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    while(true)
    {
        int n, temp = 0, work = 0;
        cin>>n;
        if(!n)  break;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            temp += x;
            work += abs(temp);
        }
        cout<<work<<"\n";
    }
	return 0;
} */