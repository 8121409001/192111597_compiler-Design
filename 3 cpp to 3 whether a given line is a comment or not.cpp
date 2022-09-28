#include<iostream>
using namespace std;
void isComment(string line)
{
    if (line[0] == '/' && line[1] == '/'
        && line[2] != '/') {
        cout << "It is a single-line comment";
        return;
    }
    if (line[line.size() - 2] == '*'
        && line[line.size() - 1] == '/' && line[0] == '/' && line[1] == '*')
    {
        cout << "It is a multi-line comment";
        return;
    }
    cout << "It is not a comment";
}
int main()
{
    string line;
    cin>>line;

    isComment(line);

    return 0;
}
