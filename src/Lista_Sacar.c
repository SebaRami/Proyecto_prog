#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>     /* assert */
#include "../include/miLista.h"
void Lista_Sacar(ListaEnlazada *lista, ElementoLista *elemento){
	if((lista->numeroElementos) == 0){
		return ;
	}
	else{
		ElementoLista * temporal = &(lista->ancla);
		while(temporal != elemento){
			temporal = temporal -> siguiente;
		}
		(temporal -> siguiente)-> anterior = (temporal -> anterior);
		(temporal-> anterior) -> siguiente = (temporal -> siguiente);
		temporal -> anterior= NULL;
		temporal -> objeto = NULL;
		temporal -> objeto = NULL;
		lista -> numeroElementos -= 1;
		
	}
}


