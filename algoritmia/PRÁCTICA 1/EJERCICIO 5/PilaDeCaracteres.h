/*
  FICHERO: pilaEnterosDinamica.h
  VERSION: 1.0.0
  HISTORICO:
  Creado por ArÃ¡nzazu JurÃ­o MunÃ¡rriz el 09/09/19.
  
  Este fichero se crea sÃ³lo con intenciones de coordinaciÃ³n docente y como
  ayuda a sus alumnos y alumnas. La autora desautoriza expresamente su difusiÃ³n, copia
  o exhibiciÃ³n pÃºblica (salvo entre los alumnos de las asignaturas 240301 y 250301 del
  grado en IngenierÃ­a InformÃ¡tica de la UPNA).
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

 typedef char tipoElementoPila;
 typedef struct celdaP{
	 tipoElementoPila elem;
	 struct celdaP *sig;
 } celdaPila; 
typedef celdaPila* tipoPila;

void nuevaPila(tipoPila *);

void apilar(tipoPila *, tipoElementoPila);

void desapilar(tipoPila *);

tipoElementoPila cima(tipoPila);

bool esNulaPila(tipoPila);
