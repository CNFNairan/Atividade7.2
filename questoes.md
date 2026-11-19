# 1.

    Compilador vs. Memória e Execução: O compilador pega sozinho erros estáticos de sintaxe e tipos, como usar "." no lugar de "->" em ponteiros (item 2), acessar campos incorretos ou omitir "struct" sem "typedef" (item 6). Já problemas ligados à organização dos dados — como sobrescrever bytes numa "union" ou desperdiçar espaço com "padding" (itens 7 e 8) — exigem raciocínio sobre a memória, enquanto devolver o endereço de uma variável local da "stack" (item 11) gera apenas um "warning" na compilação e falha ao rodar.

# 2.

    struct × union: Apesar de compartilharem a mesma sintaxe de declaração, possuem comportamentos opostos na memória. A "struct" soma os espaços para que todos os campos existam ao mesmo tempo, enquanto a "union" compartilha o mesmo endereço inicial (ocupando o tamanho do maior campo) e guarda apenas um valor válido por vez.

# 3.

    Ordem dos campos e padding: Declarar os membros do maior para o menor alinhamento reduz a inserção de bytes vazios de "padding" entre os campos (como visto na "struct Bom" do "L5"). Em uma variável isolada a diferença é de poucos bytes, mas em um array com milhões de structs isso representa uma economia real de memória RAM e melhor aproveitamento do cache.
