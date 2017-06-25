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
	if (lista == NULL) {
		return NULL;
	}
	if(elemento == NULL){
		return NULL;
	}
	if(elemento ==  Lista_Ultimo(lista)){
    		return NULL;
	}
	return elemento->siguiente;

}
