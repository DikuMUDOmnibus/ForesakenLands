>greet_prog 100~
if isnpc($n)
  break
endif
if charobj(30010)
 pmote glances at the tablet and loses all interest in $n.
else
  stand
  c sleep $n
  c poi $n
  c pla $n
  C power $n
endif
~

>fight_prog 30~
if hitprcnt($n) < 30
if rand(70)
    thrust
endif
  else
    if rand(30)
      c acid
    else
      if rand(40)
        c 'dispel magic'
      else
        if rand(45)
          c ghoul
        else
          if rand(50)
            c silence
          else
            c hell
          endif
        endif
      endif
    endif
endif
~

>death_prog 100~
echo A chorus of thousands of whispers surrounds you as the figure fades out of sight.
~
|
