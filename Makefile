LIB = lib
ALL: $(LIB)
	@echo -n "\033[33m"
	@cd posix;make
	@echo -n "\033[0m"
LIB:
	mkdir lib -p
