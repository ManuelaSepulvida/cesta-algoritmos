# Cesta Básica - Mercado (●'◡'●)

### Descrição:
O programa solicita ao usuário o preço anterior e o preço atual de cada produto em uma determinada<br>data ou período de referência. A partir desses valores, ele compara os preços e identifica a variação,<br>
classificando o resultado em uma de três categorias:<br>

**Aumento** – quando o preço atual é maior que o anterior;<br>
**Redução** – quando o preço atual é menor que o anterior;<br>
**Estabilidade** – quando os preços são iguais.<br>
Exibe o resultado em texto de forma clara e legível, indicando para cada produto a direção da variação (ex.: "O preço do arroz aumentou.").
Calcula a porcentagem de diferença entre o preço anterior e o atual, utilizando a fórmula:

┌─────────────────────────────────────────────┐<br>
│ Variação (%) = (Preço Atual − Anterior)<br>
  │ ─────────────────────────── × 100<br>
│ Preço Anterior<br>
└─────────────────────────────────────────────┘<br>

$$
\text{Variação (\%)} = \frac{\text{Preço Atual} - \text{Preço Anterior}}{\text{Preço Anterior}} \times 100
$  

O valor é exibido com sinal positivo (+) em caso de aumento, negativo (−) em caso de redução, ou 0% em caso de estabilidade.

## Compilação
Para compilar o código, use o GCC:
```bash
gcc main.c -o programa.exe
