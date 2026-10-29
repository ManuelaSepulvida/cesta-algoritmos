<div align="center">

# Cesta Básica — Mercado (●'◡'●)
</div>

### (•̀ω•́)✧ Descrição:
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

O valor é exibido com sinal positivo (+) em caso de aumento, negativo (−) em caso de redução, ou 0% em caso de estabilidade.

</div>

---

### (ฅ'ω'ฅ) Compilação
Para compilar o código, use o GCC:
```bash
gcc main.c -o programa.exe
./programa   
```

## Exemplo de Saída (￣y▽￣)╭ Ohohoho.....
```bash
=== Análise da Cesta Básica ===

--- Produto 1 ---
Produto: Arroz
Preço anterior: R$ 5,99
Preço atual:    R$ 6,49
Variação: +8,35%
Resultado: Aumento (Ficou mais caro)
--------------------------------------

--- Produto 2 ---
Produto: Feijão
Preço anterior: R$ 7,50
Preço atual:    R$ 7,20
Variação: -4,00%
Status: REDUCAO (Ficou mais barato)
--------------------------------------

--- Produto 3 ---
Produto: Leite
Preço anterior: R$ 4,99
Preço atual:    R$ 4,99
Variação: 0,00%
Status: ESTAVEL (Manteve-se o mesmo)
--------------------------------------
```
