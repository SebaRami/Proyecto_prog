#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>     /* assert */
#include "../include/miLista.h"

void Lista_SacarTodos(ListaEnlazada *lista){
	if(lista!=NULL){
		lista->ancla.siguiente=&(lista->ancla);
		lista->ancla.anterior=&(lista->ancla);
		lista->ancla.objeto=NULL;
		lista->numeroElementos = 0;
	}
}
