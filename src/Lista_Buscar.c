#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>     /* assert */
#include "../include/miLista.h"

ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto){
	ElementoLista* elemento = Lista_Primero(lista);
	for (int i = 0; i < lista->numeroElementos-1; i++) {
		if (objeto == elemento->objeto) {
			return elemento;
		}
		else{
			elemento = elemento->siguiente;
			if(elemento -> objeto == objeto){
				return elemento;
			}
		}
	}
	return NULL;
}
