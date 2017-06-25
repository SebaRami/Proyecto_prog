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
	if(elemento == NULL){
		return NULL;
	}
	if(lista == NULL){
		return NULL;
	}
	else{
		ElementoLista * final = &(lista->ancla);
			while((final->siguiente )!=&(lista->ancla)){
				if(final->siguiente == elemento){
					return elemento->anterior;
				}
				final = final->siguiente;
		}
		return NULL;
	}
}
