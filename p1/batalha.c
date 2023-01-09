#include <stdio.h>
#include <math.h>

#define DEBUG() if(0)

int is_prime(int x, int i) {
  if (x < 2) { // se x é 0 ou 1, não é primo
    return 0;
  } else if (x == 2 || i * i > x) { // se � 2 � primo, se o `i` atual � maior que a raiz quadrada de x � primo
    return 1;
  } else if (x % 2 == 0 || x % i == 0) { // se é um numero par diferente de 2 não é primo; se o `i` atual divide x, n�o � primo
    return 0;
  } else {
    return is_prime(x, i + 1); // checa o pr�ximo i
  }
}

int gcd(int a, int b) { // algoritmo de euclides pra encontrar o mdc de dois números (se é igual a 1 s�o coprimos)
  if (b == 0) {
    return a;
  } else {
    return gcd(b, a % b);
  }
}

int run_round(int life_fi, int life_se, int atk_fi, int atk_se, int h_fi, int h_se, int count_round) {
  if(life_se <= 0) { // se o segundo jogador perdeu retorne 1
    return 1;
  }
  if(life_fi <= 0) { // se o primeiro jogador perdeu retorne 2
    return 2; 
  }
  DEBUG() printf("%d %d %d %d\n", life_fi, atk_fi, life_se, atk_se);
  if(h_fi == 1 && is_prime(count_round, 2) == 1) { // se a habilidade é 1 e o round 0 primo a carta ataca duas vezes
    life_se -= atk_fi;
  } else if(h_fi == 2 && gcd(life_fi, life_se) == 1) { // se são as vidas são coprimas aumenta o ataque em 25
    atk_fi += 25;
  } else if(h_fi == 3 && (is_prime(life_fi, 2) == 1 || is_prime(atk_fi, 2) == 1)) { // se a vida ou o ataque são valores primos,
    atk_fi += 10;                                                                   // ataque aumenta em 10
  }
  life_se -= atk_fi; // ou o segundo ataque da habilidade 1 ou ataque com os buffs da habilidade 2 ou 3, ou o valor do
                     // ataque sem os buffs para o caso de não atender os requisitos
  
  
  if(h_se == 1 && is_prime(count_round, 2) == 1) { // mesma coisa só que pro segundo jogador
    life_fi -= atk_se;
  } else if(h_se == 2 && gcd(life_se, life_fi) == 1) {
    atk_se += 25;
  } else if(h_se == 3 && (is_prime(life_se, 2) == 1 || is_prime(atk_se, 2) == 1)) {
    atk_se += 10;
  }
  life_fi -= atk_se;

  return run_round(life_fi, life_se, atk_fi, atk_se, h_fi, h_se, count_round + 1); // vai pro proximo round com todos os valores atualizados
}

void game(int i, int limit, int win_w, int win_g) {
  if (i == limit) 
  { // se ja foram todas as rodadas exibe quantas rodadas cada um ganhou
    printf("Will ganhou %d rodadas\n", win_w);
    printf("Gabriel ganhou %d rodadas\n", win_g);
    return;
  }
  int start, life_w, life_g, atk_w, atk_g, h_w, h_g;
  scanf("%d %d %d %d %d %d %d", &start, &h_w, &atk_w, &life_w, &h_g, &atk_g, &life_g); // le todo mundo
  DEBUG() printf("%d %d %d %d %d %d %d\n", start, h_w, atk_w, life_w, h_g, atk_g, life_g);
  int winner;
  if(start == 1) {
    winner = run_round(life_w, life_g, atk_w, atk_g, h_w, h_g, 1); // salva quem ganhou quando will começa atacando
  } else {
    winner = run_round(life_g, life_w, atk_g, atk_w, h_g, h_w, 1); // salva quem ganhou quando gabriel começa atacando
    if (winner == 1) { // se gabriel (jogador 2) ganha, a funçao retorna 1, entao invere o valor para que o jogador certo seja dado vencedor
      winner = 2;
    } else {
      winner = 1;
    }
  }
  if (winner == 1) { // se will ganhou incrementa o valor
    DEBUG() printf("will\n");
    win_w++;
  } else { // sen�o, gabriel ganhou, incrementa o valor
    DEBUG() printf("gab\n");
    win_g++;
  }
  game(i + 1, limit, win_w, win_g); // vai pra proxima rodada
}

int main(void) 
{
  int x;
  scanf("%d", &x); // le as rodadas
  game(0, x, 0, 0); // chama a função que controla o jogo
  return 0;
}