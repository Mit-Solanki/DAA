#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'superReducedString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string superReducedString(string s) {
    string temp;
    for (char i:s){
        if (!temp.empty() && temp.back() == i) {
            temp.pop_back();
        } else {
            temp.push_back(i);
        }
    }
    return temp.empty() ? "Empty String" : temp;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
