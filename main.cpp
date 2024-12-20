#include <iostream>
#include "Grafo.cpp"  

int main() {
    // Creazione del grafo
    Grafo<std::string> grafo_amicizia;

    // Aggiunta dei nodi (nomi)
    grafo_amicizie.aggiungiNodo("Mario");
    grafo_amicizie.aggiungiNodo("Giada");
    grafo_amicizie.aggiungiNodo("Raffaella");
    grafo_amicizie.aggiungiNodo("Giorgio");
    grafo_amicizie.aggiungiNodo("Valerio");
    grafo_amicizie.aggiungiNodo("Giovanni");

    // Aggiunta degli archi con i pesi (livello di amicizia)
    grafo_amicizie.aggiungiArco("Mario", "Giada", 100);
    grafo_amicizie.aggiungiArco("Mario", "Raffaella", 200);
    grafo_amicizie.aggiungiArco("Raffaella", "Giada", 150);
    grafo_amicizie.aggiungiArco("Giada", "Valerio", 120);
    grafo_amicizie.aggiungiArco("Giorgio", "Raffaella", 500);
    grafo_amicizie.aggiungiArco("Valerio", "Raffaella", 150);
    grafo_amicizie.aggiungiArco("Raffaella", "Giovanni", 250);
    grafo_amicizie.aggiungiArco("Giovanni", "Giorgio", 140);
    grafo_amicizie.aggiungiArco("Giovanni", "Valerio", 200);

    // Visualizzazione del grafo 
    grafo_amicizie.stampa();

    // Verifica se un nodo esiste
    std::cout << "\nEsiste il nodo 'Mario'? " << (grafo_amicizie.verificaNodo("Mario") ? "Sì" : "No") << "\n";
    std::cout << "Esiste il nodo 'Saverio'? " << (grafo_amicizie.verificaNodo("Saverio") ? "Sì" : "No") << "\n";
    
    //Visualizza i nodi adiacenti a un nodo a scelta
    grafo_amicizie.nodiAdiacenti("Mario");
    
    
    // Verifica se esiste un arco tra due nodi
    std::cout << "\nEsiste un arco tra Raffaella e Giada? " << (grafo_amicizie.verificaArco("Raffaella", "Giada") ? "Sì" : "No") << "\n";
    std::cout << "Esiste un arco tra Giorgio e Mario? " << (grafo_amicizie.verificaArco("Giorgio", "Mario") ? "Sì" : "No") << "\n";

	//Rimuovi un arco
	grafo_amicizie.rimuoviArco("Giada","Valerio");
	grafo_amicizie.rimuoviArco("Valerio","Raffaella");
	grafo_amicizie.rimuoviArco("Giovanni","Valerio");
	std::cout <<"Matrice di adiacenza dopo la rimozione:" <<std::endl;
	grafo_amicizie.stampa();
	
	//Rimuovi un nodo
	grafo_amicizie.rimuoviNodo("Valerio");
	std::cout<<"Matrice di adiacenza dopo la rimozione del nodo Valerio:"<<std::endl;
	grafo_amicizie.stampa();
	
	//Rimuovere un arco specifico
	grafo_amicizie.rimuoviArco("Giovanni","Giorgio");
	std::cout<<"Matrice di adiacenza dopo la rimozione:"<<std::endl;
	grafo_amicizie.stampa();
	
	//Aggiungo un nuovo nodo
	grafo_amicizie.aggiungiNodo("Anna");
	
	//Aggiungo nuovo arco
	grafo_amicizie.aggiungiArco("Anna","Raffaella",200);
	std::cout<<"Matrice di adiacenza dopo l'aggiunta di Anna e dell'arco tra Anna e Raffaella:"<<std::endl;
	grafo_amicizie.stampa();
	
	//Verifica connettività tra due nodi - caso positivo
	std::cout<<"Il nodo Giorgio è connesso al nodo Raffaella?"<<(grafo_amicizie.verificaArco("Giorgio","Raffaella") ? "Sì" : "No") <<std::endl;
	
	//Verifica connettività tra due nodi - caso negativo
	std::cout<<"Il nodo Giorgio è connesso al nodo Mario?"<<(grafo_amicizie.verificaArco("Giorgio","Mario") ? "Sì" : "No") <<std::endl;
	
	
	

















