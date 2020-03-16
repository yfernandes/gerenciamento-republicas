# Republicator PRO

## Especificação simplificada do trabalho

Especificar, modelar e implementar um sistema que visa facilitar a gestão de pessoas, tarefas, artefatos e outros no contexto de repúblicas de estudantes.

- Deverá contemplar TADs, e ser do tipo CRUD

- O sistema deverá ter minimamente 4 (quatro) TADs, dois simples e dois compostos.

- O sistema deverá conter um menu indicando suas principais funcionalidades e permitindo a interação com o usuário

- Deverá conter uma função recursiva para permitir a busca por elementos armazenados.

- Deverá conter uma função recursiva para permitir a ordenação de alguns dos elementos armazenados.

- Sugere-se a implementação do MergeSort.

- As complexidades de tempo e espaço da função de ordenação e busca deverão ser devidamente descritas e analisadas utilizando notação assintótica para o melhor e o pior caso.

## Proposta do software

- Criar um sistema que permita a divisão de custos inerentes a república de maneira automática.

- Ter a funcionalidade de geração automática de planilha de faxina dado a quantidade cômodos e pessoas na casa.

- Capaz de se adaptar mudanças na gestão da república sem grandes mudanças.

- Capaz de gerar arquivos em formato "_.csv_ " para fisco e análise de custos.

- Capaz de lidar com pagamentos parciais do aluguel.

## Componentes

### Tad's

- Membro

  - Nome completo
  - Rg
  - CPF
  - Nome do(a) responsável
  - Telefone do(a) responsável

  - Status - Enum

    - Calouro -- Preço fixo por tempo limitado.
    - Normal -- Divisão convencional das contas.
    - Fixo -- Preço fixo, usualmente maior que a média individual.
    - Primeiro mês -- Não paga contas retroativas como água e luz
    - Ultimo mês -- Não paga contas futuras como aluguel e compras

- Contas

  - Aluguel
  - Agua
  - Luz
  - Internet
  - Produtos Limpeza
  - Cesta Basica

- Faxina

  - Array de tarefas

- Tarefa

  - Comodo
  - Dificuldade Comodo

- Republica

  - Faxina
  - Membros
  - Contas
