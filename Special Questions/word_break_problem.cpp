#include <iostream>
using namespace std;
 
int dictionarys(string &word);
void solun(string str, int size, string result);
void wordBreak(string str);

 
int main()
{
   
    string str;
    getline(cin,str);
    wordBreak(str);
    return 0;
}

void solun(string str, int n, string result)
{
    for (int i=1; i<=n; i++)
    {
        string prefix = str.substr(0, i);
        if (dictionarys(prefix))
        {
            if (i == n)
            {
                result += prefix;
                cout << result << endl;
                return;
            }
            solun(str.substr(i, n-i), n-i,result + prefix + " ");
        }
    }      
}

void wordBreak(string str)
{
    solun(str, str.size(), "");
}

int dictionarys(string &word)
{
    string dictionary[] = {"mobile","samsung","sam","sung",
                            "man","mango", "icecream","and",
                            "go","i","love","ice","cream"};
    int n = sizeof(dictionary)/sizeof(dictionary[0]);
    for (int i = 0; i < n; i++)
        if (dictionary[i].compare(word) == 0){return true;}
    return false;
}
