CFLAGS = -Wall -pedantic -std=c++1 -ansi -I.
MatheusRangel.a : MatheusRangel.h
	g++ $(CFLAGS) -c MatheusRangel.h -o MatheusRangel.o
	ar rcs $@ MatheusRangel.o
	@echo "+++ [Biblioteca estatica $@ criada] +++"
MatheusRangel.so: MatheusRangel.h
	