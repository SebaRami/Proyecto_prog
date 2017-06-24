#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>     /* assert */
#include "../include/miLista.h"
int Lista_InsertarAntes(ListaEnlazada *lista, void *objeto, ElementoLista *elemento){
	if((lista->numeroElementos) == 0){
		return -1;
	}
	else if(elemento == NULL){
		return -1;
	}
	else{
		ElementoLista * temporal = Lista_Buscar(lista, (elemento -> objeto));
		ElementoLista *nuevo = (ElementoLista *)malloc(sizeof(ElementoLista*));
		if(nuevo == NULL){
			return -1;
		}
		if(temporal == NULL){
			return -1;
		}
		nuevo -> siguiente = NULL;
		nuevo -> anterior = NULL;
		nuevo -> objeto = objeto;

		nuevo -> siguiente = temporal;
		(temporal -> anterior) -> siguiente = nuevo;
		nuevo-> anterior= temporal -> anterior; 
		(temporal-> anterior) = nuevo;
		lista -> numeroElementos += 1;
		return 0;
		
	}
}
