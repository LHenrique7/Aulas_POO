//----------------------------------------------------------------------------------------------------------------------
// Exemplo 06: enemy.hpp -> Interface
//----------------------------------------------------------------------------------------------------------------------

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include "C:\raylib\w64devkit\x86_64-w64-mingw32\include\raylib.h"
#include "player.hpp"

// Definição da classe Enemy
class Enemy {

    public:

    // Construtor: carrega a textura e define a posição inicial do inimigo
    Enemy();

    // Destrutor: descarrega a textura do inimigo
    ~Enemy();

    // Métodos para desenhar 0 inimigo na tela
    void Draw() const;

    // Métodos para atualizar o inimigo na tela
    void Update(float deltaTime);

    // Métodos para verificar se o inimigo está fora da tela
    bool IsOffScreen() const;

    // Métodos para verificar a colisão do inimigo com o player
    bool CheckCollision(const Player& player) const;

    // Método estático, utilizando para obter o total de instâncias do inimigo
    static unsigned int getEnemyCount();

    private:

        Texture2D textureEnemy; // Textura do inimigo
        Vector2 position;  // Posição odo inimigo na tela
        float speed;       // Velocidade de movimentação do inimigo
        float radius;      // Raio do círculo do inimigo
        bool movingDown;   // Variável para controlar a direção de movimento

        // Atributo estático, utilizando para obter o total de instâncias do inimigo
        static unsigned int enemyCount;


};

#endif