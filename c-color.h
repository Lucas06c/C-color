/*
###############################################
#               Created by:                   #
#                @LucasC                      #
###############################################
#Edition time: 11/7/2019 (dd/mm/0000) at: 9:31 p.m
*/


#include <stdio.h>
#include <stdlib.h>

#define NEGRO_T  "\x1b[30m"
#define NEGRO_F "\x1b[40m"
#define ROJO_T "\x1b[31m"
#define ROJO_F "\x1b[41m"
#define VERDE_T "\x1b[32m"
#define VERDE_F "\x1b[42m"
#define AMARILLO_T "\x1b[33m"
#define AMARILLO_F  "\x1b[43m"
#define AZUL_T     "\x1b[34m"
#define AZUL_F      "\x1b[44m"
#define MAGENTA_T  "\x1b[35m"
#define MAGENTA_F  "\x1b[45m"
#define CYAN_T     "\x1b[36m"
#define CYAN_F     "\x1b[46m"
#define BLANCO_T   "\x1b[37m"
#define BLANCO_F   "\x1b[47m"
#define ANSI_COLOR_RESET   "\x1b[0m"


int c_color(char color[10], char texto[100]){
  if (color == "TBLACK"){
    printf(NEGRO_T "%s" ANSI_COLOR_RESET "\n", texto);

  } else if (color == "FBLACK"){
    printf(NEGRO_F "%s" ANSI_COLOR_RESET "\n", texto);

  } else if (color == "TRED"){
    printf(ROJO_T "%s" ANSI_COLOR_RESET "\n", texto);

  } else if (color == "FRED"){
    printf(ROJO_F "%s" ANSI_COLOR_RESET "\n", texto);

  } else if (color == "TGREEN"){
    printf(VERDE_T "%s" ANSI_COLOR_RESET "\n", texto);

  } else if (color == "FGREEN"){
    printf(VERDE_F "%s" ANSI_COLOR_RESET "\n", texto);

  } else if (color == "TYELLOW"){
    printf(AMARILLO_T "%s" ANSI_COLOR_RESET "\n", texto);

  } else if (color == "FYELLOW"){
    printf(AMARILLO_F "%s" ANSI_COLOR_RESET "\n", texto);

  } else if (color == "TBLUE"){
    printf(AZUL_T "%s" ANSI_COLOR_RESET "\n", texto);

  } else if (color == "FBLUE"){
    printf(AZUL_F "%s" ANSI_COLOR_RESET "\n", texto);

  } else if (color == "TMAGENTA"){
    printf(MAGENTA_T "%s" ANSI_COLOR_RESET "\n", texto);

  } else if (color == "FMAGENTA"){
    printf(MAGENTA_F "%s" ANSI_COLOR_RESET "\n", texto);

  } else if (color == "TCYAN"){
    printf(CYAN_T "%s" ANSI_COLOR_RESET "\n", texto);  

  } else if (color == "FCYAN"){
    printf(CYAN_F "%s" ANSI_COLOR_RESET "\n", texto);

  } else if (color == "TWHITE"){
    printf(BLANCO_F "%s" ANSI_COLOR_RESET "\n", texto);

  } else if (color == "FWHITE"){
    printf(BLANCO_T "%s" ANSI_COLOR_RESET "\n", texto);  

  }
    return 0;
}






