//#include "Grafo.h"
#include "ClassGraph.h"
using namespace std;
int main(){
//	Nodo *graph=NULL;
	Grafo *graph=new Grafo();
	graph->insertarVertice('a');
	graph->insertarVertice('b');
	graph->insertarVertice('c');
	graph->insertarVertice('d');
	graph->insertarVertice('e');
	graph->insertarVertice('f');
	graph->insertArtista();
	graph->insertArtista();
	graph->insertArtista();
	graph->insertArtista();
	graph->insertArtista();
	graph->insertArtista();
	graph->listaAdyacencia();
//	graph->deleteArista();
//	graph->listaAdyacencia();
//	graph->deleteVertice();
//	graph->listaAdyacencia();
	cout<<"\n";
//	graph->recorridoProfundidad(graph->getVertice('a'));
	graph->existeCamino(graph->getVertice('a'),graph->getVertice('c'));
	graph->getGrado(0,graph->getVertice('a'));
	graph->getGrado(1,graph->getVertice('a'));
	graph->getGrado(2,graph->getVertice('a'));
}
