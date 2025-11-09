# Welcome to My Mastermind
Tanks you! it was a pleasure  to work on that project. A very challenging one.
## Task
The problem is about implementing  the Mastermind game. A game during which a player have to guess a combination of 4 pieces of color represented by digits.
After each attempts he get a feedback telling him the number of well_placed and miss_placed pieces until he win or make 10 attempts.
But for this project they are some additional features that were added. And, i think, it's there that the challenge is.In addition, another challenge i encountered was with  gandalf tests; 
## Description

To solve the problem i have first spent a lot of times  reading the Description and the specifications of the project also doing research about the work on google.
After this step i tried to decompose the problem into sub-problems. that is to say how can i meet each of the requirements.
And to do so, for each sub-problem I've identified I've created a function to solve it in my_game_functions.c file.
## Installation
To install my project you can use the make command to compile at a glance, all of my files according to their dependency; thanks to my Makefile.

## Usage
it works as follow:
first run this:./my_mastermind
and four distinct pieces will be set randomly. You have 10 attempts to guess the right secret_code.
after each attempts you'll receive information about your well_placed and miss_placed pieces.If your guess is not valid it will be show you wrong input.
If before the end of the party, at a guess you get  four well_placed pieces, you win and the game stop showing you "Congratz! You did it!".
otherwise at the end you will see "Game Over!".

You can customize  the game, by providing 2 additionals arguments that are -c following by the secret_code you choosed and/or -t following by the number of attempts you want. 
Note that if you type wrong inputs when customizing the game it will be the default arguments that will be used.



### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
