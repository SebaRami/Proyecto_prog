#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>     /* assert */
#include "../include/miLista.h"
ElementoLista *Lista_Anterior(ListaEnlazada *lista, ElementoLista *elemento){
	if((lista->numeroElementos) == 0){
		return NULL;
	}
	else if(elemento == NULL){
		return NULL;
	}
	else{
		ElementoLista * temporal = Lista_Buscar(lista, elemento -> objeto);
		if (temporal == NULL) {
			return NULL;
		}
		return temporal;
	}
}
