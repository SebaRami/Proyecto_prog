#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>     /* assert */
#include "../include/miLista.h"

int Lista_InsertarInicio(ListaEnlazada *lista, void *objeto){
	
	if(lista== NULL){
		return -1;
	}
	ElementoLista *temporal = NULL;
	
	if ((temporal = (ElementoLista *)malloc (sizeof(ElementoLista))) == NULL){
		return 0;
	}
	
	if((lista->numeroElementos) == 0){
		temporal-> siguiente = &(lista -> ancla);
		temporal-> anterior = &(lista -> ancla);
		(lista -> ancla).siguiente = temporal; 
		(lista -> ancla).anterior = temporal; 
	}
	else{
		
		ElementoLista * inicio= (lista->ancla).siguiente;
		(temporal->siguiente) = inicio;
		(temporal-> anterior) = &(lista->ancla);
		(inicio -> anterior) = temporal;
		(lista->ancla).siguiente = temporal;
		
	}
	temporal->objeto = objeto;
	lista->numeroElementos += 1;
	return 0;
	
}
