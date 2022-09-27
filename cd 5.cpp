#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

using namespace std;



int main(){
char ch, operators[] = "+-*/%=";
ifstream fin("program.txt");
int i,j=0;
if(!fin.is_open()){
cout<<"error while opening the file\n";
exit(0);
}
while(!fin.eof()){
   ch = fin.get();

for(i = 0; i < 6; ++i){
   if(ch == operators[i])
   cout<<ch<<" is operator\n";
   }
   }

}
fin.close();
return 0;
}
