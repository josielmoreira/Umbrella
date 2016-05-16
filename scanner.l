%{
    #include "y.tab.h"
    #include <stdlib.h>

    void yyerror(char *);
%}

digit         [0-9]
letter        [a-zA-Z]

%%

"!"						{ return NOT; }
"&&"						{ return AND; }	
"||"						{ return OR; }
(\")						{ return ASPAS; }
"Struct"					{ return STRUCT; }
"return"					{ return RETURN; }
"main"                                       	{ return MAIN ;}
"break"                                       	{ return BRK ;}
"new"                                         	{ return NEW ;} 
"switch"                                      	{ return SWTC ;}
case                                        	{ return CASE ;}
":"                                         	{ return COLLON ;} 
"public"                                      	{ return ENC_PUB ;}
"private"                                     	{ return ENC_PRV ;}
"void"                                        	{ return TYP_VOID ;} 
"int"                                         	{ return TYP_INT ;} 
"double"                                      	{ return TYP_DBLE ;} 
"float"                                       	{ return TYP_FLOAT ;} 
"String"                                      	{ return TYP_STRG ;} 
"char"                                        	{ return TYP_CHAR ;} 
"if"			                        { return IF ;} 		
"for" 			                        { return FOR ;} 
"while"			                        { return WHILE ;} 
"do"			                        { return DO ;} 
"forall"			                { return FORALL ;} 
"var"						{ return VAR; }
"=="						{ return EQLS; }
"!="						{ return N_EQLS; }
"="						{ return ATB; }
"+"                  				{ return SUM; }
"-"                  				{ return SUB; }
"*"                  				{ return MULT; }
"/"                  				{ return DIV; }
"+="						{ return ATB_SUM; }
"-="						{ return ATB_SUB; }
"*="						{ return ATB_MULT; }
"/="						{ return ATB_DIV; }
"("						{ return L_PAR; }
")"						{ return R_PAR; }
"{"						{ return L_BRAC; }
"}"						{ return R_BRAC; }
"/*"						{ return L_CMNT_BLK; }
"*/"						{ return R_CMNT_BLK; } 
"//"						{ return CMNT; } 
"["						{ return L_BRACK; } 
"]"						{ return R_BRACK; } 
"++"						{ return INCR; } 
"--"						{ return DECR; } 
"%"						{ return MOD; } 
"<="						{ return LSSR_EQL; } 
">="						{ return GRTR_EQL; } 
">"						{ return GRTR; } 
"<"						{ return LSSR; } 
"."						{ return DOT; } 
","						{ return COMMA; } 
";"						{ return END_CMMD; } 
{digit}+    	     				{ yylval = atoi(yytext); return INT; }
({digit}"."[0-9]*)|([0-9]*"."{digit})	        { yylval = atof(yytext); return FLOAT; }





letter+	                        { yylval = *yytext - ' '; return ID; }



[-+\n]      return *yytext;
[ \t]       ; /* skip whitespace */
.                       { yyerror("invalid character"); }

%%

int yywrap(void) { 
return 1; 
}
