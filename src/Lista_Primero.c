#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>     /* assert */
#include "../include/miLista.h"

ElementoLista *Lista_Primero(ListaEnlazada *lista){
	if(lista->numeroElementos==0){
		return NULL;
	}else{
		ElementoLista *elemento = (lista->ancla).siguiente;
		if(elemento == NULL){
			return NULL;
		}
		return elemento;
	}
}
