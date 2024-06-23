#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        vector<int> v(n);
        int op = 0;
        int cn = 0;
        for(int i = 0; i < n; i++){
            cin>>v[i];
            if(v[i]<0) cn++;
        }

        int sum = accumulate(v.begin(), v.end(),0);
        if(sum>=0 && (cn%2 == 0)){
            cout<<op<<endl;
            // cout<<"Condition EXEcuted : "<<endl;
            continue;

        }
        if(sum < 0){
            op += (abs(sum)+1)/2;
            cn = cn-(abs(sum)+1)/2;
        }
        if(cn%2 != 0){
            op++;
        }
        cout<<op<<endl;
        
    }
return 0;
}