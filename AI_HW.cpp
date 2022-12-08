#include <bits/stdc++.h>
using  namespace std;

int main(){
    int size=20;

    int p[size];
    int t[size];
    int f[size];

    for(int i=1; i<=20; i++){
        p[i]=i;
        t[i]=i;
        f[i]=i;
    }

    cout << "Write down the allowed values of the variables:";
    int n_p, n_t, n_f;
    cin >>n_p >>n_t >>n_f;

    int result[size];

    for(int i=1; i<=20; i++){
        result[i]=0;
    }
    
    for(int i=1; i<=20; i++){
        if(p[i]>=(n_p*1.5) or p[i]<=(n_p*0.5)) result[i] = result[i]+3;
        else if((p[i]>(n_p*1.05) and p[i]<(n_p*1.5)) or (p[i]<(n_p*0.95) and p[i]>(n_p*0.5))) result[i] = result[i]+2;
        else result[i] = result[i]+1;

        if(t[i]>=(n_t*1.5) or t[i]<=(n_t*0.5)) result[i] = result[i]+3;
        else if((t[i]>(n_t*1.05) and t[i]<(n_t*1.5)) or (t[i]<(n_t*0.95) and t[i]>(n_t*0.5))) result[i] = result[i]+2;
        else result[i] = result[i]+1;

        if(f[i]>=(n_f*1.5) or f[i]<=(n_f*0.5)) result[i] = result[i]+3;
        else if((f[i]>(n_f*1.05) and f[i]<(n_f*1.5)) or (f[i]<(n_f*0.95) and f[i]>(n_f*0.5))) result[i] = result[i]+2;
        else result[i] = result[i]+1;

        cout << "device " << i << ": " << result[i]<< endl;
    }

    int max=0;
    int m;

    for(int i=1; i<=size; i++){
        if(result[i]>max){
            max = result[i];
            m = i;
        }
    }

    cout << "big mistake: in the " << m << " device" << endl;
}