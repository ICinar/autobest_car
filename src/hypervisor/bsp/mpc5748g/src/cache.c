/*
 * cache.c
 *
 * PPC robust cache handling
 *
 * tjordan, 2014-07-14: version for MPC5646C
 */

#include <kernel.h> /* arch_cpu_id */
#include <ppc_insn.h>
#include <ppc_spr.h>
#include <board_stuff.h>


#define CACHE_LINE_SIZE 32

/* contents of L1CSR1 register */
#define CACHE_L1CSR1_ICE    0x01
#define CACHE_L1CSR1_ICINV  0x02
#define CACHE_L1CSR1_ICABT  0x04

void __init board_cache_init(void)
{
    unsigned int cpu_id = arch_cpu_id();

    /* No cache for CPU2 :(
     * which results in a "program exception"
     * when executing this code on cpu2
     */
    if (cpu_id < CPU2)
    {
        /* invalidate cache entries */
        ppc_set_spr(SPR_L1CSR1, CACHE_L1CSR1_ICINV);

        while ( (ppc_get_spr(SPR_L1CSR1) & CACHE_L1CSR1_ICINV) != 0)
        {
            /* wait */
        }

        while ( (ppc_get_spr(SPR_L1CSR1) & CACHE_L1CSR1_ICABT) != 0)
        {
            /* cache operation aborted - something's horribly wrong - loop forever */
        }

        /* enable cache */
        ppc_set_spr(SPR_L1CSR1, CACHE_L1CSR1_ICE);
    }
}
