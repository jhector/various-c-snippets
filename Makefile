OUTFILE=main.bin

INCPATH=include/

CALL_TRACE=call_trace/nested_001.c

all:
	gcc main.c $(CALL_TRACE) -o $(OUTFILE) -I $(INCPATH)
