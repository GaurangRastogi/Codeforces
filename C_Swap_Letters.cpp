#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


void solve(){
    ll n,count=0,temp,ind,temp2;
    cin>>n;
    string s,t;
    cin>>s>>t;
    stack<ll>sa,sb,ta,tb;
    set<ll>st{};
    for(int i=0;i<n;i++){
        if(s[i]!=t[i]){
            if(s[i]=='a')
                sa.push(i);
            else    
                sb.push(i);

            if(t[i]=='a')
                ta.push(i);
            else
                tb.push(i);
            st.insert(i);
        }
    }

    while(!st.empty()){
        ind=*st.begin();
        cout<<s[ind]<<" "<<t[ind]<<" "<<sa.size()<<" "<<sb.size()<<" "<<ta.size()<<" "<<tb.size()<<endl;
        while(ta.size()>0&&ta.top()<ind){
            ta.pop();
        }
        while(tb.size()>0&&tb.top()<ind){
            tb.pop();
        }
        while(sa.size()>0&&sa.top()<ind){
            sa.pop();
        }
        while(sa.size()>0&&sa.top()<ind){
            sa.pop();
        }
        if(s[ind]=='a'&&tb.size()>1){
                st.erase(st.begin());
                temp=tb.top();
                tb.pop();
                temp2=tb.top();
                st.erase(temp2);
                tb.pop();
                count++;
        }
        else if(s[ind]=='b'&&ta.size()>1){
            st.erase(st.begin());
            temp=ta.top();
            ta.pop();
            temp2=tb.top();
            st.erase(temp2);
            ta.pop();
            // ta.push(temp);
            count++;
        }
        else if(t[ind]=='a'&&sb.size()>1){
            st.erase(st.begin());
            temp=sb.top();
            sb.pop();
            temp2=sb.top();
            st.erase(temp2);
            sb.pop();
            // sb.push(temp);
            count++;
        }
        else if(s[ind]=='b'&&sa.size()>1){
            st.erase(st.begin());
            temp=sa.top();
            sa.pop();
            temp2=sa.top();
            st.erase(temp2);
            sa.pop();
            // sa.push(temp);
            count++;
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }
    cout<<count<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}