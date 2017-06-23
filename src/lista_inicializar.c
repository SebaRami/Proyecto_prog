#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>     /* assert */
#include "../include/miLista.h"

/*Este metodo iniciliza los elementos de la estructura ListaEnlazada
@param *puntero a una lista que inicializaremos
@return un entero     
@author PACMAN S.A.  */

int Lista_Inicializar( ListaEnlazada *lista){
  (lista->ancla).siguiente=NULL;
  (lista->ancla).anterior=NULL;
  (lista->ancla).objeto=NULL;
  lista->numeroElementos = 0;
  return 1;
}
