set term gif animate
set output 'animation.gif'

totalTime = 10.0

do for [t=0:100] {
    h = 3.0 / 100.0 * t
    eps = h / 2.0
    
    set xrange [0:3]
    set yrange [-2:10]
    
    set title sprintf("Time: %.2f s", t / 10.0)
    set xlabel "x"
    set ylabel "y"
    
    plot '+' u 1:(x <= 1.5 + eps ? (2**x - 2 + x**2) : (sqrt(x) * exp(-x**2))) w l notitle
    
    pause 0.1
}

set output
