LIB = lib
ALL: $(LIB)
	@cd posix;make
LIB:
	mkdir lib -p
