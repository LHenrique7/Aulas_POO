#include "item.hpp"
#include <cstdlib>

extern char* appDir;

// Construtor
Item::Item() {
    textureItem = LoadTexture(TextFormat("%s/assets/images/item.png", appDir));
    position.x = GetRandomValue(0, GetScreenWidth() - textureItem.width);
    position.y = GetRandomValue(0, GetScreenHeight() - textureItem.height);
    radius = 25.0f;
    value = 1; // Pontuação
}

// Destrutor
Item::~Item() {
    UnloadTexture(textureItem);
}

// Desenha o item na tela
void Item::Draw() const {
    DrawTexture(textureItem, position.x, position.y, WHITE);
}

// Verifica colisão do item com o jogador
bool Item::CheckCollision(const Player& player) const {
    return CheckCollisionCircles(position, radius, player.GetPosition(), player.GetRadius());
}

// Retorna o valor do item
int Item::GetValue() const {
    return value;
}
