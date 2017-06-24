#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>     /* assert */
#include "../include/miLista.h"
ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento){
	if((lista->numeroElementos) == 0){
		return NULL;
	}
	ElementoLista* elem = Lista_Buscar(lista, elemento->objeto);
	if (elem == NULL) {
		return NULL;
	}
	return elem->siguiente;
}
