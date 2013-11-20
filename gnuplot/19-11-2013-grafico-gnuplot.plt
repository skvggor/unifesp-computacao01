# Faça uma linha de cada vez após ter digitado `gnuplot` no terminal.
# Lembre-se: nem todas as linhas são complementares umas das outras.

plot sin(x)

plot sin(x), cos(x)

plot [0:10][0:10] sin (x), cos(x)

set grid
set title "Título do meu gráfico"
plot sin(x) title "Senóide"
set xlabel "Eixo X"
set ylabel "Eixo Y"

plot "dados-aula-gnuplot"
plot "dados-aula-gnuplot" with lines