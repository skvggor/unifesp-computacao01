19 de novembro de 2013

# LaTeX

Resolve o problema de *buffer* quando utilizamos editores de texto convencionais (por exemplo: Microsoft Word) e com ele podemos construir elementos gráficos, textos, fórmulas algébricas entre outras coisas relacionadas a documentação acadêmica ou não.

* Compilar (se o LaTeX estiver instalado)
    - `latex nome-arquivo.tex`, gerará um arquivo `.div`
    - Com o `.dvi` pronto, utilizar o `dvips`, gerando então o um arquivo `.ps`
    - Utilizar então `ps2pdf` para converter para `.pdf`
* Estilos - problemas com caracteres especiais
    - `ProvidePackage`
        * `RequirePackage`

## Anotações gerais

* É possível construir figuras com LaTeX;
* Mensagens de erro durante a compilação podem ocorrer (se você errou a sintaxe), então digite `x` para interromper a execução.