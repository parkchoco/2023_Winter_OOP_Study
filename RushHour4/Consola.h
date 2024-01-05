/*************************************************************
CONSOLA.H
LIBRER? PARA AUMENTAR LA EXTENSI? 
DE CONIO.H Y OTRAS EN VISUAL C++
(Da soporte a funciones como gotoxy, clrscr, etc.)

M?ico, D.F. 
?tima Actualizaci?: 2-Enero-2003
**************************************************************/


#ifndef _FUNCIONES_DE_CONSOLA_AUXILIARES_PARA_VISUAL_CPP_
#define _FUNCIONES_DE_CONSOLA_AUXILIARES_PARA_VISUAL_CPP_



//MACROS para argumentos de _setcursortype()	_setcursortype() 인수에 대한 매크로
#define _NORMALCURSOR	0 //cursor como caracter de subrayado	커서를 밑줄 문자로 사용	
#define _NOCURSOR		1 //oculta el cursor	커서 숨기기
#define _SOLIDCURSOR	2 //cursor s?ido	솔리드 커서


//MACROS para texcolor, textbackground, etc.	텍스트컬러, 텍스트 배경 인수에 대한 메크로
#define BLACK		 0	//NEGRO
#define BLUE		 1	//AZUL MARINO
#define GREEN		 2	//VERDE PERICO
#define CYAN		 3	//VERDE CLARO
#define RED			 4	//ROJO
#define MAGENTA		 5	//MORADO O VIOLETA
#define BROWN		 6	//CAF?
#define LIGHTGRAY	 7	//GRIS CLARO
#define DARKGRAY	 8	//GRIS OBSCURO
#define LIGHTBLUE	 9	//AZUL MARINO CLARO
#define LIGHTGREEN	 10	//VERDE CLARO
#define LIGHTCYAN	 11	//AZUL CLARO
#define LIGHTRED	 12	//ROJO CLARO
#define LIGHTMAGENTA 13	//ROSA MEXICANO
#define YELLOW		 14	//AMARILLO
#define WHITE		 15	//BLANCO


//////////////////////////////////////////////////////////
//ORIGINALES DE CONIO.H

void clrscr(void);//Borrar pantalla	화면 지우기
void clreol(void);//Borrar hasta el final de l?ea	줄 끝까지 삭제

void delline(void);//Eliminar la l?ea actual	현재 파일 삭제
void insline(void);//Insertar una nueva l?ea	새 줄 삽입

void gotoxy(int x,int y);//Mover el cursor	커서를 이동하세요
int wherex(void);//Coordenada x actual	현재 x 좌표
int wherey(void);//Coordenada y actual	현재 y 좌표

void textcolor(int color);//Colocar color de texto	택스트 색상 설정
void textbackground(int color);//Colocar color de fondo	배경색 설정

void _setcursortype(int tipo);//Tipo de cursor	커서 유형


//////////////////////////////////////////////////////////
//ORIGINALES DE DOS.H

void delay(int miliseg);//pausa en milisegundos	밀리초 단위로 일시 중지
void sleep(int segundos);//pausa en segundos	몇 초 후에 일시 중지



//////////////////////////////////////////////////////////
//OTRAS ?ILES

int gettextcolor();//obtener color de texto	텍스트 색상 가져오기
int gettextbackground();//obtener color de fondo	배경색 얻기

int getcols();//ancho en caracteres	문자 너비
int getrows();//alto en caracteres	문자 높이

void setsizedefault();//80x25 caracteres
void setsize8043();//80x43 caracteres
void setsize8050();//80x50 caracteres
void setsizexy(int x, int y);

int settitle(const char *cadena);//coloca t?ulo a la barra	바에 제목을 붙이세요
int gettitle(char *cadena,int tam);//obtiene el t?ulo	칭호를 얻다



#endif //_FUNCIONES_DE_CONSOLA_AUXILIARES_PARA_VISUAL_CPP_

