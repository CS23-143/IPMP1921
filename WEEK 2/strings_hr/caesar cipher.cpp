#include <bits/stdc++.h>

using namespace std;

// Complete the caesarCipher function below.
string caesarCipher(string s, int k) {
    for(int i=0;i<s.length();i++){
        if(int(s[i])<=122&&int(s[i])>=97){
            if(int(s[i])+k<=122)
            s[i]=k+s[i];
            else
            s[i]=(k+s[i]-'a')%26+'a';
        }
        else if(s[i]>='A'&&s[i]<='Z'){
            if(s[i]+k<='Z')
            s[i]=k+s[i];
            else
            s[i]=(k+s[i]-'A')%26+'A';
        }
        else
        s[i]=s[i];
    }
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = caesarCipher(s, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
