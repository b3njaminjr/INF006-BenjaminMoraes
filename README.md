# INF006 — Estrutura de Dados e Algoritmos

![Language](https://img.shields.io/badge/Language-C-blue.svg)
![Institution](https://img.shields.io/badge/Instituição-IFBA-green.svg)
![Course](https://img.shields.io/badge/Curso-ADS-orange.svg)
![Status](https://img.shields.io/badge/Status-Em%20Desenvolvimento-yellow.svg)

Repositório destinado aos algoritmos, implementações de estruturas de dados, exercícios e projetos práticos desenvolvidos durante os estudos da disciplina **INF006 — Estrutura de Dados e Algoritmos**, do curso superior de **Análise e Desenvolvimento de Sistemas (ADS)** do Instituto Federal de Educação, Ciência e Tecnologia da Bahia (IFBA) — Campus Salvador, sob orientação do **Prof. Dr. Allan Edgard Silva Freitas**.

O objetivo deste repositório é consolidar conhecimentos fundamentais de Ciência da Computação por meio da implementação de estruturas de dados e algoritmos na **Linguagem C**, com ênfase em organização de dados, gerenciamento de memória, eficiência computacional e análise de complexidade.

---

## 📌 Sobre a Disciplina

A disciplina de **Estrutura de Dados e Algoritmos** aborda técnicas para armazenar, organizar, acessar e manipular informações de maneira eficiente.

O percurso formativo contempla desde a análise matemática de algoritmos até a implementação de estruturas lineares e não lineares, explorando diferentes estratégias de busca, ordenação e gerenciamento de dados.

### Principais Competências Desenvolvidas

- **Análise de Algoritmos:** Estudo da complexidade temporal e espacial, notação assintótica Big O, melhor e pior caso de execução.
- **Algoritmos de Busca e Ordenação:** Implementação e comparação de métodos de pesquisa e classificação de dados.
- **Recursividade:** Desenvolvimento de algoritmos recursivos, formulação de recorrências e aplicação do Teorema Mestre.
- **Estruturas Lineares:** Implementação de listas encadeadas, pilhas e filas utilizando vetores e alocação dinâmica.
- **Estruturas Hierárquicas:** Manipulação de árvores binárias, árvores binárias de busca e estruturas balanceadas.
- **Tabelas Hash:** Aplicação de funções de dispersão e estratégias de tratamento de colisões.
- **Gerenciamento de Memória:** Utilização de ponteiros, estruturas (`struct`) e alocação dinâmica.
- **Grafos e Algoritmos de Percurso:** Representação de redes de conexões e implementação de algoritmos de travessia, como expansão complementar dos estudos.

---

## 🚀 Implementações e Projetos Práticos

As implementações abaixo compõem o planejamento do repositório e serão desenvolvidas progressivamente.

### 1. Análise de Algoritmos e Complexidade

Estudo do desempenho computacional de algoritmos, considerando o crescimento do número de operações em função do tamanho da entrada.

**Conteúdos e implementações:**

- Notação Big O: `O(1)`, `O(log n)`, `O(n)`, `O(n log n)`, `O(n²)` e `O(2ⁿ)`.
- Contagem de operações e construção de funções de custo `T(n)`.
- Análise dos casos melhor, médio e pior.
- Complexidade temporal e espacial.
- Comparação de algoritmos com diferentes custos computacionais.
- Recursividade, recorrências e Teorema Mestre.

**Aplicações práticas:** análise de laços, busca de elementos, cálculo de fatorial e comparação de soluções iterativas e recursivas.

---

### 2. Algoritmos de Busca e Ordenação

Implementação de métodos clássicos para localizar e organizar elementos em vetores, com análise de eficiência e comportamento em diferentes entradas.

**Algoritmos de Busca:**

- **Busca Sequencial (Linear):** Percorre os elementos até encontrar o valor desejado.
- **Busca Binária:** Divide sucessivamente o intervalo de busca em um vetor ordenado.

**Algoritmos de Ordenação:**

- **Bubble Sort:** Ordenação por comparações e trocas entre elementos adjacentes.
- **Insertion Sort:** Inserção progressiva dos elementos em suas posições corretas.
- **Selection Sort:** Seleção sucessiva do menor elemento do segmento não ordenado.
- **Merge Sort:** Ordenação baseada na estratégia de divisão e conquista.
- **Quick Sort:** Particionamento do vetor a partir da escolha de um pivô.
- **Heap Sort:** Ordenação utilizando a estrutura de dados heap.

**Objetivos:** comparar complexidade, consumo de memória, estabilidade e desempenho dos algoritmos.

---

### 3. Listas Encadeadas

Implementação de estruturas lineares dinâmicas utilizando nós conectados por ponteiros, permitindo inserções e remoções sem a necessidade de memória contígua.

**Estruturas previstas:**

- **Lista Simplesmente Encadeada:** Nós conectados por ponteiros para o próximo elemento.
- **Lista Duplamente Encadeada:** Nós com referências para o elemento anterior e posterior.
- **Lista Circular:** Estrutura em que o último nó aponta novamente para o início.

**Operações disponíveis:**

1. Inserção de elementos no início, meio e fim.
2. Inserção ordenada.
3. Busca sequencial por valor.
4. Remoção de elementos.
5. Percurso e exibição da lista.
6. Contagem de nós.
7. Liberação da memória alocada.

**Aplicação prática planejada:** sistema de gerenciamento de contatos utilizando lista encadeada, com cadastro, consulta, atualização e exclusão.

---

### 4. Pilhas (Stacks)

Implementação da estrutura de dados **LIFO (Last In, First Out)**, na qual o último elemento inserido é o primeiro a ser removido.

**Implementações previstas:**

- Pilha estática utilizando vetores.
- Pilha dinâmica utilizando listas encadeadas.

**Operações fundamentais:**

1. `push()` — Empilhar um elemento.
2. `pop()` — Desempilhar o elemento do topo.
3. `peek()` — Consultar o topo sem remover.
4. `isEmpty()` — Verificar se a pilha está vazia.
5. `isFull()` — Verificar se uma pilha de capacidade fixa está cheia.

**Aplicações práticas planejadas:**

- Verificador de balanceamento de parênteses, colchetes e chaves.
- Conversor de expressões infixas para pós-fixas.
- Avaliador de expressões pós-fixas.
- Sistema simples de desfazer operações (*undo*).

---

### 5. Filas (Queues)

Implementação da estrutura de dados **FIFO (First In, First Out)**, na qual o primeiro elemento inserido é o primeiro a ser removido.

**Implementações previstas:**

- Fila estática utilizando vetores.
- Fila circular.
- Fila dinâmica utilizando listas encadeadas.

**Operações fundamentais:**

1. `enqueue()` — Inserir um elemento no final.
2. `dequeue()` — Remover o primeiro elemento.
3. `front()` — Consultar o elemento inicial.
4. `isEmpty()` — Verificar se a fila está vazia.
5. `isFull()` — Verificar se uma fila de capacidade fixa está cheia.

**Aplicações práticas planejadas:**

- Simulador de atendimento bancário.
- Gerenciamento de fila de impressão.
- Simulação de processamento de tarefas.

---

### 6. Árvores Binárias e Árvores de Busca

Implementação de estruturas hierárquicas compostas por nós e relações entre elementos, permitindo operações de busca, inserção e remoção.

**Estruturas previstas:**

- **Árvore Binária:** Estrutura em que cada nó possui, no máximo, dois filhos.
- **Árvore Binária de Busca (BST):** Organização hierárquica baseada na comparação de chaves.
- **Árvore AVL:** Árvore binária de busca autobalanceada.
- **Árvore B:** Estrutura de busca com múltiplas chaves por nó.

**Operações e algoritmos:**

1. Inserção e remoção de nós.
2. Busca de elementos.
3. Percurso em pré-ordem.
4. Percurso em ordem.
5. Percurso em pós-ordem.
6. Cálculo da altura da árvore.
7. Identificação de nós folha.
8. Balanceamento por rotações simples e duplas em árvores AVL.

**Aplicação prática planejada:** sistema de cadastro e consulta de registros utilizando árvore binária de busca.

---

### 7. Tabelas Hash (Hashing)

Implementação de estruturas de armazenamento baseadas em funções de dispersão, utilizadas para associar chaves a posições em uma tabela.

**Conteúdos e implementações:**

- Construção de funções hash.
- Mapeamento de chaves numéricas e textuais.
- Tratamento de colisões por endereçamento aberto.
- Tratamento de colisões por encadeamento separado.
- Inserção, busca e remoção de registros.
- Análise do desempenho e dos fatores que afetam a eficiência da tabela.

**Aplicação prática planejada:** sistema de consulta de alunos por matrícula utilizando tabela hash.

---

### 8. Heaps e Filas de Prioridade

Implementação de estruturas hierárquicas que mantêm relações de prioridade entre elementos.

**Estruturas previstas:**

- **Max-Heap:** O elemento de maior prioridade fica na raiz.
- **Min-Heap:** O elemento de menor prioridade fica na raiz.
- **Fila de Prioridade:** Estrutura em que a remoção considera a prioridade dos elementos.

**Operações e algoritmos:**

1. Inserção de elementos.
2. Remoção da raiz.
3. Reorganização da estrutura (*heapify*).
4. Construção de heaps (*build heap*).
5. Ordenação por Heap Sort.

**Aplicação prática planejada:** simulador de atendimento por prioridade.

---

### 9. Grafos e Algoritmos de Percurso

Estudo complementar de estruturas não lineares utilizadas para representar relações entre entidades por meio de vértices e arestas.

**Representações previstas:**

- Grafos direcionados e não direcionados.
- Matriz de adjacência.
- Lista de adjacência.
- Grafos ponderados e não ponderados.

**Operações e algoritmos:**

1. Inserção e remoção de vértices.
2. Inserção e remoção de arestas.
3. Busca em Profundidade (DFS).
4. Busca em Largura (BFS).
5. Identificação de componentes conexos.
6. Algoritmo de Dijkstra para caminhos mínimos com pesos não negativos.

**Aplicação prática planejada:** simulador de rotas entre cidades, permitindo representar conexões e calcular caminhos entre diferentes localidades.

---

## 📁 Estrutura Planejada do Repositório

A organização abaixo representa a estrutura pretendida e poderá ser ajustada conforme o desenvolvimento das atividades.

```text
INF006-Estrutura-de-Dados-e-Algoritmos/
│
├── 01-Analise-de-Algoritmos/
│   ├── complexidade.c
│   └── recursividade.c
│
├── 02-Busca-e-Ordenacao/
│   ├── busca_linear.c
│   ├── busca_binaria.c
│   ├── bubble_sort.c
│   ├── insertion_sort.c
│   ├── selection_sort.c
│   ├── merge_sort.c
│   ├── quick_sort.c
│   └── heap_sort.c
│
├── 03-Listas-Encadeadas/
│   ├── lista_simples.c
│   ├── lista_dupla.c
│   ├── lista_circular.c
│   └── agenda_contatos/
│
├── 04-Pilhas/
│   ├── pilha_estatica.c
│   ├── pilha_dinamica.c
│   └── balanceamento_expressoes.c
│
├── 05-Filas/
│   ├── fila_estatica.c
│   ├── fila_circular.c
│   ├── fila_dinamica.c
│   └── simulador_atendimento.c
│
├── 06-Arvores/
│   ├── arvore_binaria.c
│   ├── arvore_busca.c
│   ├── arvore_avl.c
│   └── arvore_b.c
│
├── 07-Tabelas-Hash/
│   ├── hash_aberto.c
│   ├── hash_encadeamento.c
│   └── cadastro_alunos.c
│
├── 08-Heaps/
│   ├── max_heap.c
│   ├── min_heap.c
│   └── fila_prioridade.c
│
├── 09-Grafos/
│   ├── matriz_adjacencia.c
│   ├── lista_adjacencia.c
│   ├── bfs.c
│   ├── dfs.c
│   ├── dijkstra.c
│   └── simulador_rotas.c
│
└── README.md
```

---

## ⚙️ Como Compilar e Executar

### Pré-requisitos

- Compilador **GCC** instalado.
- Terminal ou ambiente de desenvolvimento compatível com a Linguagem C.
- Conhecimentos básicos de compilação e execução de programas.

Verifique a instalação do compilador:

```bash
gcc --version
```

### Compilando os Algoritmos

Exemplo de compilação de um algoritmo de ordenação:

```bash
cd 02-Busca-e-Ordenacao

gcc bubble_sort.c -o bubble_sort -Wall -Wextra

./bubble_sort
```

### Compilando Estruturas de Dados

Exemplo de compilação de uma pilha dinâmica:

```bash
cd 04-Pilhas

gcc pilha_dinamica.c -o pilha -Wall -Wextra

./pilha
```

### Compilando Algoritmos de Grafos

```bash
cd 09-Grafos

gcc bfs.c -o bfs -Wall -Wextra

./bfs
```

**Observação:** os comandos acima são exemplos para arquivos independentes. Implementações modularizadas em múltiplos arquivos `.c` e `.h` exigirão a compilação conjunta dos respectivos arquivos-fonte. No Windows, os executáveis podem ser gerados com extensão `.exe`.

---

## 📊 Análise de Complexidade

As implementações buscarão documentar o desempenho dos algoritmos por meio da notação Big O, considerando suas características e condições de execução.

| Algoritmo / Operação | Complexidade Temporal |
|---|---|
| Busca Linear | O(n) — pior caso |
| Busca Binária | O(log n) — pior caso |
| Bubble Sort | O(n²) — pior caso |
| Insertion Sort | O(n²) — pior caso |
| Selection Sort | O(n²) |
| Merge Sort | O(n log n) |
| Quick Sort | O(n log n) médio; O(n²) pior caso |
| Push / Pop em Pilha | O(1) |
| Enqueue / Dequeue em Fila | O(1) em implementação adequada |
| Busca em Lista Encadeada | O(n) — pior caso |
| Busca em BST | O(log n) média sob hipóteses usuais; O(n) pior caso |
| Busca em AVL | O(log n) — pior caso |
| Busca em Tabela Hash | O(1) esperado; O(n) pior caso |
| BFS / DFS | O(V + E) com lista de adjacência |
| Dijkstra com Heap Binário | O((V + E) log V) |

**Nota:** os custos dependem da implementação, da representação dos dados e das condições de entrada. Para grafos, `V` representa a quantidade de vértices e `E` a quantidade de arestas.

---

## 🎯 Objetivos do Repositório

- Consolidar o aprendizado de estruturas de dados e algoritmos em Linguagem C.
- Desenvolver soluções utilizando ponteiros e alocação dinâmica de memória.
- Compreender as diferenças entre estruturas estáticas e dinâmicas.
- Implementar algoritmos sem depender de bibliotecas que já forneçam suas operações fundamentais.
- Analisar a eficiência computacional das soluções desenvolvidas.
- Aplicar os conceitos em pequenos sistemas e simulações práticas.
- Documentar o processo de aprendizagem e a evolução das implementações.
- Construir um portfólio acadêmico organizado e acessível no GitHub.

---

## 📚 Referências

- **Material didático da disciplina INF006 — Estrutura de Dados e Algoritmos**, Prof. Dr. Allan Edgard Silva Freitas — IFBA.
- CORMEN, Thomas H. et al. *Introduction to Algorithms*.
- SEDGEWICK, Robert; WAYNE, Kevin. *Algorithms*.
- ZIVIANI, Nivio. *Projeto de Algoritmos: com Implementações em Pascal e C*.

---

## 👤 Autor

- **Estudante:** Benjamin Moraes do Carmo Júnior
- **Curso:** Análise e Desenvolvimento de Sistemas (ADS) — IFBA
- **Disciplina:** INF006 — Estrutura de Dados e Algoritmos
- **Professor:** Prof. Dr. Allan Edgard Silva Freitas
- **Instituição:** Instituto Federal de Educação, Ciência e Tecnologia da Bahia — Campus Salvador

---

**Repositório acadêmico em desenvolvimento, dedicado à prática, ao estudo e ao aperfeiçoamento contínuo de algoritmos e estruturas de dados.**
