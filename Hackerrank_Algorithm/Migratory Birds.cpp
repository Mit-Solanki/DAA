#include <bits/stdc++.h>
#include<vector>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'migratoryBirds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int migratoryBirds(vector<int> arr) {
//  sort(arr.begin(),arr.end());
//  int count=1,max=0;
//  for(int i=0;i<arr.size();i++){
//     if(arr[i]==arr[i+1]){
//         count++;
//     }else {
//     if(max<count){
//         max=arr[i];
//     }
//     count=1;
//     }
//  }
//  return max; 
                    // vector<int > sum;
                    // for (int i:arr){
                    //     sum[i]++;
                    // }
                    //     int max=0,loc=0;
                    // for(int j=0 ;j<sum.size();j++){
                    //     if(sum[j]>max){
                    //         loc=j+1;
                    //     }
                    // }
                    // return loc;
// int migratoryBirds(vector<int> &arr) {
    // int freq[5] = {0};
    vector<int> freq(5,0);

    for (int id : arr) {
        freq[id-1]++;
    }
    int result = 0;
    for (int i = 1; i <5; i++) {
        if (freq[i] > freq[result]) {
            result = i;
        }
    }
    return result+1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int result = migratoryBirds(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
