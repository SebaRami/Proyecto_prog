#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>     /* assert */
#include "../include/miLista.h"

ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto){
	ElementoLista* elemento = &(lista -> ancla);
	for (int i = 0; i < lista->numeroElementos; i++) {
		if (objeto == elemento->objeto) {
			return elemento;
		}
		else{
			elemento = elemento->siguiente;
		}
	}
	return NULL;
}
