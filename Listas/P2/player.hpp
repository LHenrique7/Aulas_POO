//----------------------------------------------------------------------------------------------------------------------
// Exemplo 07: player.hpp -> Interface
//----------------------------------------------------------------------------------------------------------------------

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "C:\raylib\w64devkit\x86_64-w64-mingw32\include\raylib.h"

// Definição da classe Player
class Player {

    public:

        // Construtor: carrega a textura e define a posição inicial do player
        Player();

        // Destrutor: descarrega a textura do player
        ~Player();

        // Método para desenhar o player na tela
        void Draw() const;

        // Método para atualizar o player
        void Update(float deltaTime);

        // Método que verifica se o player colidiu com as bordas da tela
        void CheckScreenLimits();

        // Método que retorna a posição do player
        Vector2 GetPosition() const;

        // Método que retorna o raio do círculo de colisão do player
        float GetRadius() const;

        // Método para diminuir a saúde do player quando ele receber algum dano
        void TakeDamage(int damage);

        // Método que retorna a saúde do player
        int GetHealth() const;

    private:

        Texture2D texture;  // Textura do player
        Vector2 position;   // Posição do player na tela
        float speed;        // Velocidade de movimentação do player
        float radius;       // Raio do círculo de colisão do player
        int health;         // Saúde do player
};

#endif