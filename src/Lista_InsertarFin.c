#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>     /* assert */
#include "../include/miLista.h"

int Lista_InsertarFin(ListaEnlazada *lista, void *objeto){

	if(lista==NULL){
		return -1;
	}
	ElementoLista *temporal= NULL;
	if ((temporal = (ElementoLista *)malloc (sizeof(ElementoLista))) == NULL){
    	return -1;
    }
    if((lista->numeroElementos) == 0){
		temporal->siguiente=&(lista->ancla);
		temporal->anterior = &(lista->ancla);
		(lista->ancla).siguiente=temporal;
		(lista->ancla).anterior=temporal;
    }
    else{
    	ElementoLista *final = (lista->ancla).anterior;
		temporal->siguiente=&(lista->ancla);
		temporal->anterior = final;
		final->siguiente=temporal;
		(lista->ancla).anterior=temporal;
    }
    temporal->objeto=objeto;
    lista->numeroElementos += 1;
	return 0;
	
}
