#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,x,c;
    cin>>a>>b>>x;
    c=a+b;
    int len=c.size(),len2=x.size(),flag=1,i;
    if(len2!=len) cout<<"NO"<<endl;
    else{
    sort(c.begin(),c.end());
    sort(x.begin(),x.end());
    for(i=0;i<len;i++)
    {
        if(c[i]!=x[i])
        {
            flag=0;
            break;
        }
    }
    if(flag==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }

}
