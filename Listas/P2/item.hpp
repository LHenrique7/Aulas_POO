#ifndef ITEM_HPP
#define ITEM_HPP

#include <raylib.h>
#include "player.hpp"

class Item {
public:
    // Construtor
    Item();

    // Destrutor
    ~Item();

    // Desenha o item na tela
    void Draw() const;

    // Verifica colisão do item com o jogador
    bool CheckCollision(const Player& player) const;

    // Retorna o valor do item
    int GetValue() const;

private:
    Texture2D textureItem;  // Textura do item
    Vector2 position;       // Posição do item
    float radius;           // Raio de colisão do item
    int value;              // Valor da pontuação do item
};

#endif
