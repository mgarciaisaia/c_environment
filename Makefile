all:
	gcc callee.c -o callee
	gcc caller.c -o caller
	gcc env_caller.c -o env_caller

clean:
	rm -rf callee caller env_caller
