%{
    #include <stdio.h>
    int yylex(void);
    void yyerror(char *);

%}


/*oidentificadores, variaveis*/
%token VAR ID

/*sinais,atribuicao, colchetes, chaves, parentesis, ...*/
%token ATB L_PAR R_PAR EQLS N_EQLS L_BRAC R_BRAC L_CMNT_BLK R_CMNT_BLK CMNT L_BRACK R_BRACK

/*inteiros, reais*/
%token INT FLOAT
/*operadodes aritimeticos, logicos*/
%token SUM SUB MULT DIV ATB_SUM ATB_SUB ATB_MULT ATB_DIV INCR DECR MOD LSSR_EQL GRTR_EQL GRTR LSSR 
/*operadodes booleanos*/
%token OR AND NOT 
/*outros*/
%token ASPAS ENC_PUB COLLON ENC_PRV DOT COMMA END_CMMD 
/*palavras reservadas*/
%token STRUCT RETURN MAIN BRK NEW SWTC CASE IF FOR WHILE DO FORALL 
/*tipos*/
%token TYP_VOID TYP_INT TYP_DBLE TYP_FLOAT TYP_STRG TYP_CHAR 

%left SUM  SUB
%left MULT  DIV
%left NOT

%start program

%%

program:
        program statement '\n'
        | 
        ;

statement:
        expr                { printf("Resultado: %d\n", $1); }
        ;

/*operacoes aritmeticas com inteiros */
expr:
    	INT	                  { $$ = $1; }
  	| expr SUM expr           { $$ = $1 + $3; } 
  	| expr SUB expr           { $$ = $1 - $3; }
	| expr MULT expr          { $$ = $1 * $3; }
    	| expr DIV expr           { $$ = $1 / $3; }
	| L_PAR expr R_PAR        { $$ = $2; }	
    ;

%%

void yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}

int main(void) {
    return yyparse();   
}

