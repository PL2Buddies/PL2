#include <bits/stdc++.h>

using namespace std;

int main() {
    int c4(0),c7(0),test(0);
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='4'){
            test++;
            c4++;
        }
        else if(s[i]=='7'){
            c7++;
        }
    }
    c4>=c7&&test!=0?cout<<"4":c7>c4?cout<<"7":cout<<"-1";
    return 0;
}