#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

using namespace std;

int isKeyword(char buffer[]){
char keywords[32][10] = {"auto","break","case","char","const","continue","default",
"do","double","else","enum","extern","float","for","goto",
"if","int","long","register","return","short","signed",
"sizeof","static","struct","switch","typedef","union",
"unsigned","void","volatile","while"};
int i, flag = 0;
for(i = 0; i < 32; ++i){
if(strcmp(keywords[i], buffer) == 0){
flag = 1;
break;
}
}
return flag;
}

int main(){
char ch, buffer[15], operators[] = "+-*/%=";
ifstream fin("program.txt");
int i,j=0,k=0;
if(!fin.is_open()){
cout<<"error while opening the file\n";
exit(0);
}
while(!fin.eof()){
   ch = fin.get();


   if(isalnum(ch)){
   buffer[k++] = ch;
   j=k;
   }
   else if((ch == ' ' || ch == '\n') && (j != 0)){
   buffer[j] = '\0';
   j = 0;
   if(isKeyword(buffer) == 1)
   cout<<buffer<<" is keyword\n";
   else
   cout<<buffer<<" is indentifier\n";
   }
         if (buffer[0] == '/' && buffer[1] == '/'
        && buffer[2] != '/') {
        cout << "It is a single-buffer comment";

    }
    if (buffer[k - 2] == '*'
        && buffer[k - 1] == '/' && buffer[0] == '/' && buffer[1] == '*')
    {
        cout << "It is a multi-line comment";
    }
    }
fin.close();
return 0;
}

