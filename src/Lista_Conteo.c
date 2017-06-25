
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>     /* assert */
#include "../include/miLista.h"

int Lista_Conteo(ListaEnlazada *lista){
	
	if(lista==NULL ){
		return 0;
	}
	else{
		return lista->numeroElementos;
	}
}
