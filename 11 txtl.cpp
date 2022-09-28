%{
int tags;
%}
%%
"<"[^>]*> {tags++;printf("%s\n",yytext);}
.|\n {}
%%
int yywrap(void){
return 1; }
int main(void){
FILE *f;
char file[10];
printf("Enter the file name:");
scanf("%s",file);
f=fopen(file,"r");
yyin=f;
yylex();
printf("number of html tags:%d",tags);
fclose(yyin);
}
