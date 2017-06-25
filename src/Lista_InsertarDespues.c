#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>     /* assert */
#include "../include/miLista.h"
int Lista_InsertarDespues(ListaEnlazada *lista, void *objeto, ElementoLista *elemento){
	if((lista->numeroElementos) == 0){
		return -1;
	}
	else if(elemento == NULL){
		return -1;
	}
	else{
		ElementoLista *temporal = (ElementoLista *)malloc(sizeof(ElementoLista*));
		if(temporal == NULL){
			return -1;
		}
		
		temporal -> siguiente = NULL;
		temporal -> anterior = NULL;
		temporal -> objeto = objeto;
		
		temporal -> anterior = elemento;
		temporal -> siguiente = elemento ->siguiente;
		(elemento -> siguiente) -> anterior = temporal;
		elemento -> siguiente = temporal;
		
		lista -> numeroElementos += 1;
		return 0;
		
	}
}
