#include<allegro.h>
#include<string>
#include<conio.h>
#include<sstream>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<winalleg.h>
#include<fstream>

using namespace std;

#define ancho 1024
#define alto 740



int retardo=100;
int vidas=3;
int level=1;
int score=0;
bool juegoIniciado=false;
bool fin=false
bool nuevoNivel=false;
bool enJuego=false;
int dirY=-1;
int dirX=1;
int velocidad=3;
int velocidadInicial=2;
int fondoN=1;
bool muerte= false;
int secuenciaMuerte=1;
bool musica=true;
bool efectos=true;
bool existeArchivo=false;
int highScore=0;

int baseX=255;
int bolax=295;
int bolaY=650;

int mapa[63];

int puntaIzq;
int puntaDer;

int colBola;
int filaBola;
int elemento;


int main()
{
    
}
END_OF_MAIN();
