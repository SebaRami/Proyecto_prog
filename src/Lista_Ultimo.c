#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>     /* assert */
#include "../include/miLista.h"

ElementoLista *Lista_Ultimo(ListaEnlazada *lista){
	if(lista->numeroElementos==0){
		return NULL;
	}
	if(lista == NULL){
		return NULL;
	}
	else{
		return (lista->ancla).anterior;
	}
}
