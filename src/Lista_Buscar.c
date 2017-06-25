#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>     /* assert */
#include "../include/miLista.h"

ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto){

	if(lista==NULL){
		return NULL;
	}
	ElementoLista * temporal = NULL;

	for (temporal = Lista_Primero(lista); temporal != NULL; temporal = Lista_Siguiente(lista, temporal)) { 
		if((long)temporal->objeto == (long )objeto)  
			return temporal;
	} 
	return NULL; 

}
