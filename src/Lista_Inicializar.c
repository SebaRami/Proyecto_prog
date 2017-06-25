#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>     /* assert */
#include "../include/miLista.h"



int Lista_Inicializar( ListaEnlazada *lista){
  (lista->ancla).siguiente = &(lista->ancla);
  (lista->ancla).anterior = &(lista->ancla);
  (lista->ancla).objeto = NULL;
  lista->numeroElementos = 0;
  return 1;
}
