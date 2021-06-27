#ifndef Personagem_h
#define Personagem_h
#include <string>
#include <ctime>

struct Personagem{
    std::string nome;
    std::string classe;
    std::vetor[5] inventario;
    unsigned int dinheiro;

};

    struct Personagem bemVindoAoJogo(){
        
        struct Personagem p;
        p.nome = nome;
        p.classe = classe;
        p.dinheiro = geraAleatorio() * 50;

        return p;
    }

struct Guerreiro{
    unsigned int vidaG;
    unsigned int forcaG;
    unsigned int magiaG;
    unsigned int agilidadeG;
};

    struct Guerreiro AcampamentoHeroi(){

        struct Guerreiro g;

        g.vidaG = (geraAleatorio() * 90) + 10;
        g.forcaG = geraAleatorio() * 200;
        g.magiaG = geraAleatorio() * 50;
        g.agilidadeG = geraAleatorio() * 50;

        return g;
    
    };

struct Ladino{
    unsigned int vidaL;
    unsigned int forcaL;
    unsigned int magiaL;
    unsigned int agilidadeL;
};

    struct Ladino AcampamentoHeroi(){

        struct Ladino l;

        l.vidaL = (geraAleatorio() * 90) + 10;
        l.forcaL = geraAleatorio() * 50;
        l.magiaL = geraAleatorio() * 50;
        l.agilidadeL = geraAleatorio() * 200;

        return l;
    
    };

struct Mago{
    unsigned int vidaM;
    unsigned int forcaM;
    unsigned int magiaM;
    unsigned int agilidadeM;
};

    struct Mago AcampamentoHeroi(){

        struct Mago m;

        m.vidaM = (geraAleatorio() * 90) + 10;
        m.forcaM = geraAleatorio() * 50;
        m.magiaM = geraAleatorio() * 200;
        m.agilidadeM = geraAleatorio() * 50;

        return m;
    
    };

float geraAleatorio();

#endif