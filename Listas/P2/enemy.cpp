//----------------------------------------------------------------------------------------------------------------------
// Exemplo 07: enemy.cpp -> Implementação
//----------------------------------------------------------------------------------------------------------------------

#include "enemy.hpp"
#include <cmath>

// Diretório da aplicação
extern char *appDir;

// Define e inicializa o atributo estático, dentro de um escopo global
// Neste caso, não utilizamos a palavra reservada 'static'
unsigned int Enemy::enemyCount = 0;

//--------------------------------------------------------------------------------------------------------------------

// Método estático, que retorna o total de inimigos que foram instanciados
// Neste caso. não utilizamos a palavra reservada 'static'
unsigned int Enemy::getEnemyCount() {
    return enemyCount;
}

//--------------------------------------------------------------------------------------------------------------------

// Construtor: carrega a textura e define a posição inicial do inimigo
Enemy::Enemy() {

    // Incrementa o total de inimigos
    ++enemyCount;

    // Carrega a textura do inimigo
    textureEnemy = LoadTexture(TextFormat("%s/assets/images/enemy.png", appDir));

    // Posição inicial do inimigo
    position.x = GetRandomValue(0, GetScreenWidth() - textureEnemy.width);
    position.y = GetRandomValue(- textureEnemy.height, - textureEnemy.height - 200);

    // Define a velocidade inicial de movimentação do inimigo
    speed = GetRandomValue(20, 50) * 1.0f;

    // Define o raio do círculo de colisão do inimigo
    radius = 50.0f;

    // Indica que o inimigo se move para baixo
    movingDown = true;

}

//----------------------------------------------------------------------------------------------------------------------

// Destrutor: descarrega a textura player
Enemy::~Enemy() {

    // Decrementa o total de inimigos
    --enemyCount;

    // Libera os recursos utilizados pela texture do inimigo
    UnloadTexture(textureEnemy);

}

//----------------------------------------------------------------------------------------------------------------------

// Método para desenhar o inimigo na tela
void Enemy:: Draw() const {

    // Renderiza a imagem da inimigo na posição correta
    DrawTexture(textureEnemy, position.x, position.y, WHITE);

    // Renderiza o círculo de colisão do inimigo (para debug)
    /*
    DrawCircle(
        position.x + texture.width / 2.0f + 2.0f, 
        position.y + texture.height / 2.0f,
        radius,
        {0, 0, 255, 100}
    );
    */

}

//----------------------------------------------------------------------------------------------------------------------

// Método para atualizar o player
void Enemy::Update(float deltaTime) {

    /*
    // Movimenta o inimigo para a baixo
    position.y += speed * deltaTime;

    // Verifica se o inimigo atingiu os limite inferior da tela
    if (position.y > GetScreenHeight()) {
        position.x = GetRandomValue(0, GetScreenWidth() - texture.width);
        position.y = GetRandomValue(- texture.height, - texture.height - 200);
    }
    */

   // Verifica a direção e move o inimigo
   if (movingDown) {

        // Movimenta para baixo
        position.y += speed * deltaTime;

        // Teste Zigzag
        // position.y ++ speed * deltaTime;
        // position.x += sin(deltaTime * 0.5f) * speed;

    } else {

        // Movimenta para cima
        position.y -= speed * deltaTime;

        // Teste Zigzag
        // position.y -= speed * deltaTime;
        // position.x += sin(deltaTime * 0.5f) * speed;

    }

    // Verifica se o inimigo atingiu o limite inferior da tela
    if (position.y > GetScreenHeight() + textureEnemy.height) {

        // Muda a direção para cima
        movingDown = false;

        // Gera uma posição horizontal aleatória
        position.x = GetRandomValue(0, GetScreenWidth() - textureEnemy.width);

        // Define uma nova movimentação do inimigo
        speed = GetRandomValue(5, 250) * 1.0f;

    }
    // Verifica se o inimigo atingiu o limite superior da tela
    else if (position.y < 0 -textureEnemy.height) {

        // Muda a direção para baixo
        movingDown = true;

        // Gera uma posição horizontal aleatória
        position.x = GetRandomValue(0, GetScreenWidth() - textureEnemy.width);

        // Define uma nova movimentação do inimigo
        speed = GetRandomValue(5, 250) * 1.0f;

    }

}

//----------------------------------------------------------------------------------------------------------------------

// Método para verificar se o inimigo está fora da tela
bool Enemy::IsOffScreen() const {

    // Retorna true se o inimigo saiu da tela
    return position.y > GetScreenHeight();

}


//----------------------------------------------------------------------------------------------------------------------

// Método para verificar a colisão do inimigo com o player
bool Enemy:: CheckCollision(const Player& player) const {

    // Utiliza um círculo para verificar a colisão entre o inimigo e o player
    return CheckCollisionCircles(position, radius, player.GetPosition(), player.GetRadius());

}

