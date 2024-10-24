all: compile run

proj = logic

cc = gcc
src  = ./src/*.c
lib = ./bin
incl = ./src
flags = -Wall -O0
link = -lGL -lraylib

compile:
	$(cc) $(src) -o ./bin/$(proj) -I$(incl) -L$(lib) $(flags) $(link)

run:
	./bin/$(proj)
