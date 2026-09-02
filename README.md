# c-games-collection
Coleção de jogos e desafios desenvolvidos em C durante o curso de Análise e Desenvolvimento de Sistemas.

Cada projeto foi construído em níveis progressivos de dificuldade (Novato → Aventureiro → Mestre), aplicando de forma incremental conceitos como variáveis, estruturas de decisão, laços de repetição, vetores, matrizes e recursividade. Além dos níveis propostos nos desafios, alguns projetos incluem uma versão autoral, com melhorias e funcionalidades implementadas por conta própria.

📂 Projetos
🃏 Super Trunfo
Sistema de cadastro e comparação de cartas de cidades brasileiras (Super Trunfo de Países).

Nível	Conceitos aplicados
01-novato	Variáveis, tipos de dados, entrada e saída (scanf/printf)
02-aventureiro	Cálculos derivados (densidade populacional, PIB per capita)
03-mestre	switch, menu de escolha de atributos, soma e comparação com operador ternário
04-versao-autoral	Uso de double para maior precisão, validação de atributo repetido com loop, refino de comentários e nomes de variáveis

♟️ Xadrez
Simulação da movimentação de peças no tabuleiro, usando diferentes estruturas de repetição.

Nível	Conceitos aplicados
01-novato	for, while, do-while (Torre, Bispo e Rainha)
02-aventureiro	Peça Cavalo (loop aninhado while + for), menu interativo com switch
03-mestre	Recursividade (Torre e Rainha), loops aninhados (Bispo) e loop complexo com múltiplas condições (Cavalo)

🚢 Batalha Naval
Representação de um tabuleiro 10x10 com posicionamento de navios e habilidades especiais com área de efeito.

Nível	Conceitos aplicados
01-novato	Matrizes (vetores bidimensionais), posicionamento de navios horizontal e vertical
02-aventureiro	Navios na diagonal, sem sobreposição
03-mestre	Matrizes de habilidade (Cruz, Cone, Octaedro) construídas dinamicamente, sobreposição centrada no tabuleiro
04-versao-autoral	Menu interativo com switch, permitindo escolher entre visualizar navios, habilidades ou o tabuleiro completo

🛠️ Como compilar e executar
Todos os projetos são arquivos únicos em C, compiláveis com gcc:

bash
gcc -o programa nome_do_arquivo.c
./programa

Exemplo para rodar o nível mestre do Batalha Naval:

bash
gcc -o batalha_naval batalha-naval/03-mestre/batalha_naval.c
./batalha_naval

📌 Sobre
Este repositório é atualizado conforme novos desafios são desenvolvidos ao longo do curso. Sugestões e feedbacks são bem-vindos!
Autor: João Vitor Curso: Análise e Desenvolvimento de Sistemas
