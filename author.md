# Snake Game Simulation

## Descrição do Projeto
Este projeto implementa uma simulação do jogo Snake (ou Snaze) usando C++ e CMake como ferramentas principais. O jogo envolve uma cobra que deve percorrer um labirinto, coletar alimentos e evitar colidir com as paredes ou seu próprio corpo.

## Estrutura de Arquivos
O projeto está estruturado da seguinte forma:
- `src/`: Contém os arquivos-fonte `.cpp`.
- `include/`: Contém os arquivos de cabeçalho `.h`.
- `data/`: Diretório para armazenar arquivos de entrada, como níveis do labirinto.
- `CMakeLists.txt`: Arquivo de configuração do CMake para compilação do projeto.

## Compilação e Execução
Para compilar o projeto, siga os passos abaixo:

1. Abra um terminal na raiz do projeto.
2. Crie um diretório para os arquivos de compilação:
    mkdir build
    cd build
3. Execute o CMake para gerar os arquivos de compilação:
    cmake ..
4. Compile o projeto usando o make (ou outro comando gerado pelo CMake):
    make
5. Execute o jogo:
    ./snakeGame

## Limitações Conhecidas
- A implementação atual não suporta múltiplas cobras simultaneamente no labirinto.
- O jogo pode não lidar corretamente com labirintos muito complexos ou com múltiplas soluções possíveis para o caminho da comida.

## Autor
- **Nome do Autor**: Marcone Rafael do Nascimento Junior  - **Contato**: marconerafael2017@gmail.com

## Licença
Este projeto está licenciado sob a MIT. Veja o arquivo LICENSE para mais detalhes.
