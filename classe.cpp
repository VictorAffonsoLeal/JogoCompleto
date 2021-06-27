#include <iostream>
#include <string>
#include <ctime>
#include "classe.h"


float geraAleatorio(){
    return rand() / (float) RAND_MAX;
    }

struct Personagem bemVindoAoJogo(){
    std::cout << "Bem vindo ao jogo" << std::endl;

    std::string nome;
    std::cin.ignore();
    std::getline(std::cin, nome);

    std::cout << "Seu nome é " << nome << "!\n";

}

struct Guerreiro bemVindoAoJogo(){
    std::cout << "Descrição de personagem" << std::endl;

}

struct Ladino bemVindoAoJogo(){
    std::cout << "Descrição de personagem" << std::endl;
    
}

struct Mago bemVindoAoJogo(){
    std::cout << "Descrição de personagem" << std::endl;
    
}
