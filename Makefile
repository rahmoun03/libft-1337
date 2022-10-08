GCC = gcc -Wall -Wextra -Werror 
print_msg:
	@echo "hello i will compile your files and cleaning after ..."

build: print_msg
	@$(GCC) ft_*.c main.c libft.h
clean:
	rm -rf a.out libft.h.gch
re:clean
	@$(GCC) ft_*.c main.c libft.h
