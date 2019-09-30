OUTFILE=main.bin

INCPATH=include/

CALL_TRACE=call_trace/nested_001.c
FREE_PTR=free_ptr/double_free_002.c

CFILES=$(CALL_TRACE) $(FREE_PTR)

all:
	gcc main.c $(CFILES) -o $(OUTFILE) -I $(INCPATH)
