#include <stdio.h>
#include "../include/miLista.h"


int Lista_Vacia(ListaEnlazada *lista){
	if (lista->numeroElementos == 0) {
		return 1;
	}
	if (lista == NULL){
		return 1;
	}
	return 0;

}
