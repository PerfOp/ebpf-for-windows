#clang -I ..\..\include -I ..\..\netebpfext -target bpf -Werror -O2 -c myxdp.c -o myxdp.o


#
CC = clang
CFLAGS = -I ..\..\include -I ..\..\netebpfext -target bpf -Werror -O2

#
T_myxdp = myxdp.o
S_myxdp  = myxdp.c

T_bpf = bpf.o
S_bpf  = bpf.c

#
all: $(T_myxdp) $(T_bpf)

#
$(T_myxdp): $(S_myxdp)
    $(CC) $(CFLAGS) -o $(T_myxdp) -c $(S_myxdp)

#
$(T_bpf): $(S_bpf)
    $(CC) $(CFLAGS) -o $(T_bpf) -c $(S_bpf)

#
clean:
    del $(all)