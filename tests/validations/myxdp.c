#include "bpf_helpers.h"
#include "ebpf_nethooks.h"
#include "net_ebpf_ext_xdp_hooks.h"

// Put "xdp_test" in the section name to specify XDP_TEST as the hook.
// The SEC macro below has the same effect as the
// clang pragma used in section 2 of this tutorial.
SEC("xdp_test")
int my_xdp_parser(xdp_md_t* ctx)
{
    int length = (char *)ctx->data_end - (char *)ctx->data;

    if (length > 1) {
        return XDP_PASS;
    }
    return XDP_DROP;
}