#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>     /* assert */
#include "../include/miLista.h"

int Lista_InsertarFin(ListaEnlazada *lista, void *objeto){
	ElementoLista *nuevo = (ElementoLista *)malloc(sizeof(ElementoLista*));
	if (nuevo == NULL) return -1;
	if((lista->numeroElementos) == 0){
		nuevo-> siguiente = &(lista -> ancla);
		nuevo-> anterior = &(lista -> ancla);
		(lista -> ancla).siguiente = nuevo; 
		(lista -> ancla).anterior = nuevo; 
	}
	else{
		//Encontramos el ultimo de esta lista
		ElementoLista *temporal = &(lista->ancla);
		while(temporal-> siguiente != &(lista->ancla)){
			temporal = temporal -> siguiente;
		}
		(nuevo->siguiente) = &(lista->ancla);
		(nuevo-> anterior) = temporal;
		(temporal -> siguiente) = nuevo;
		(lista->ancla).anterior = nuevo;
		
	}
	nuevo->objeto = objeto;
	lista->numeroElementos += 1;
	return 0;
	
}
