#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DD718
// Address: 0x4dd718 - 0x4dd9b8
void sub_004DD718_0x4dd718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DD718_0x4dd718");
#endif

    switch (ctx->pc) {
        case 0x4dd718u: goto label_4dd718;
        case 0x4dd71cu: goto label_4dd71c;
        case 0x4dd720u: goto label_4dd720;
        case 0x4dd724u: goto label_4dd724;
        case 0x4dd728u: goto label_4dd728;
        case 0x4dd72cu: goto label_4dd72c;
        case 0x4dd730u: goto label_4dd730;
        case 0x4dd734u: goto label_4dd734;
        case 0x4dd738u: goto label_4dd738;
        case 0x4dd73cu: goto label_4dd73c;
        case 0x4dd740u: goto label_4dd740;
        case 0x4dd744u: goto label_4dd744;
        case 0x4dd748u: goto label_4dd748;
        case 0x4dd74cu: goto label_4dd74c;
        case 0x4dd750u: goto label_4dd750;
        case 0x4dd754u: goto label_4dd754;
        case 0x4dd758u: goto label_4dd758;
        case 0x4dd75cu: goto label_4dd75c;
        case 0x4dd760u: goto label_4dd760;
        case 0x4dd764u: goto label_4dd764;
        case 0x4dd768u: goto label_4dd768;
        case 0x4dd76cu: goto label_4dd76c;
        case 0x4dd770u: goto label_4dd770;
        case 0x4dd774u: goto label_4dd774;
        case 0x4dd778u: goto label_4dd778;
        case 0x4dd77cu: goto label_4dd77c;
        case 0x4dd780u: goto label_4dd780;
        case 0x4dd784u: goto label_4dd784;
        case 0x4dd788u: goto label_4dd788;
        case 0x4dd78cu: goto label_4dd78c;
        case 0x4dd790u: goto label_4dd790;
        case 0x4dd794u: goto label_4dd794;
        case 0x4dd798u: goto label_4dd798;
        case 0x4dd79cu: goto label_4dd79c;
        case 0x4dd7a0u: goto label_4dd7a0;
        case 0x4dd7a4u: goto label_4dd7a4;
        case 0x4dd7a8u: goto label_4dd7a8;
        case 0x4dd7acu: goto label_4dd7ac;
        case 0x4dd7b0u: goto label_4dd7b0;
        case 0x4dd7b4u: goto label_4dd7b4;
        case 0x4dd7b8u: goto label_4dd7b8;
        case 0x4dd7bcu: goto label_4dd7bc;
        case 0x4dd7c0u: goto label_4dd7c0;
        case 0x4dd7c4u: goto label_4dd7c4;
        case 0x4dd7c8u: goto label_4dd7c8;
        case 0x4dd7ccu: goto label_4dd7cc;
        case 0x4dd7d0u: goto label_4dd7d0;
        case 0x4dd7d4u: goto label_4dd7d4;
        case 0x4dd7d8u: goto label_4dd7d8;
        case 0x4dd7dcu: goto label_4dd7dc;
        case 0x4dd7e0u: goto label_4dd7e0;
        case 0x4dd7e4u: goto label_4dd7e4;
        case 0x4dd7e8u: goto label_4dd7e8;
        case 0x4dd7ecu: goto label_4dd7ec;
        case 0x4dd7f0u: goto label_4dd7f0;
        case 0x4dd7f4u: goto label_4dd7f4;
        case 0x4dd7f8u: goto label_4dd7f8;
        case 0x4dd7fcu: goto label_4dd7fc;
        case 0x4dd800u: goto label_4dd800;
        case 0x4dd804u: goto label_4dd804;
        case 0x4dd808u: goto label_4dd808;
        case 0x4dd80cu: goto label_4dd80c;
        case 0x4dd810u: goto label_4dd810;
        case 0x4dd814u: goto label_4dd814;
        case 0x4dd818u: goto label_4dd818;
        case 0x4dd81cu: goto label_4dd81c;
        case 0x4dd820u: goto label_4dd820;
        case 0x4dd824u: goto label_4dd824;
        case 0x4dd828u: goto label_4dd828;
        case 0x4dd82cu: goto label_4dd82c;
        case 0x4dd830u: goto label_4dd830;
        case 0x4dd834u: goto label_4dd834;
        case 0x4dd838u: goto label_4dd838;
        case 0x4dd83cu: goto label_4dd83c;
        case 0x4dd840u: goto label_4dd840;
        case 0x4dd844u: goto label_4dd844;
        case 0x4dd848u: goto label_4dd848;
        case 0x4dd84cu: goto label_4dd84c;
        case 0x4dd850u: goto label_4dd850;
        case 0x4dd854u: goto label_4dd854;
        case 0x4dd858u: goto label_4dd858;
        case 0x4dd85cu: goto label_4dd85c;
        case 0x4dd860u: goto label_4dd860;
        case 0x4dd864u: goto label_4dd864;
        case 0x4dd868u: goto label_4dd868;
        case 0x4dd86cu: goto label_4dd86c;
        case 0x4dd870u: goto label_4dd870;
        case 0x4dd874u: goto label_4dd874;
        case 0x4dd878u: goto label_4dd878;
        case 0x4dd87cu: goto label_4dd87c;
        case 0x4dd880u: goto label_4dd880;
        case 0x4dd884u: goto label_4dd884;
        case 0x4dd888u: goto label_4dd888;
        case 0x4dd88cu: goto label_4dd88c;
        case 0x4dd890u: goto label_4dd890;
        case 0x4dd894u: goto label_4dd894;
        case 0x4dd898u: goto label_4dd898;
        case 0x4dd89cu: goto label_4dd89c;
        case 0x4dd8a0u: goto label_4dd8a0;
        case 0x4dd8a4u: goto label_4dd8a4;
        case 0x4dd8a8u: goto label_4dd8a8;
        case 0x4dd8acu: goto label_4dd8ac;
        case 0x4dd8b0u: goto label_4dd8b0;
        case 0x4dd8b4u: goto label_4dd8b4;
        case 0x4dd8b8u: goto label_4dd8b8;
        case 0x4dd8bcu: goto label_4dd8bc;
        case 0x4dd8c0u: goto label_4dd8c0;
        case 0x4dd8c4u: goto label_4dd8c4;
        case 0x4dd8c8u: goto label_4dd8c8;
        case 0x4dd8ccu: goto label_4dd8cc;
        case 0x4dd8d0u: goto label_4dd8d0;
        case 0x4dd8d4u: goto label_4dd8d4;
        case 0x4dd8d8u: goto label_4dd8d8;
        case 0x4dd8dcu: goto label_4dd8dc;
        case 0x4dd8e0u: goto label_4dd8e0;
        case 0x4dd8e4u: goto label_4dd8e4;
        case 0x4dd8e8u: goto label_4dd8e8;
        case 0x4dd8ecu: goto label_4dd8ec;
        case 0x4dd8f0u: goto label_4dd8f0;
        case 0x4dd8f4u: goto label_4dd8f4;
        case 0x4dd8f8u: goto label_4dd8f8;
        case 0x4dd8fcu: goto label_4dd8fc;
        case 0x4dd900u: goto label_4dd900;
        case 0x4dd904u: goto label_4dd904;
        case 0x4dd908u: goto label_4dd908;
        case 0x4dd90cu: goto label_4dd90c;
        case 0x4dd910u: goto label_4dd910;
        case 0x4dd914u: goto label_4dd914;
        case 0x4dd918u: goto label_4dd918;
        case 0x4dd91cu: goto label_4dd91c;
        case 0x4dd920u: goto label_4dd920;
        case 0x4dd924u: goto label_4dd924;
        case 0x4dd928u: goto label_4dd928;
        case 0x4dd92cu: goto label_4dd92c;
        case 0x4dd930u: goto label_4dd930;
        case 0x4dd934u: goto label_4dd934;
        case 0x4dd938u: goto label_4dd938;
        case 0x4dd93cu: goto label_4dd93c;
        case 0x4dd940u: goto label_4dd940;
        case 0x4dd944u: goto label_4dd944;
        case 0x4dd948u: goto label_4dd948;
        case 0x4dd94cu: goto label_4dd94c;
        case 0x4dd950u: goto label_4dd950;
        case 0x4dd954u: goto label_4dd954;
        case 0x4dd958u: goto label_4dd958;
        case 0x4dd95cu: goto label_4dd95c;
        case 0x4dd960u: goto label_4dd960;
        case 0x4dd964u: goto label_4dd964;
        case 0x4dd968u: goto label_4dd968;
        case 0x4dd96cu: goto label_4dd96c;
        case 0x4dd970u: goto label_4dd970;
        case 0x4dd974u: goto label_4dd974;
        case 0x4dd978u: goto label_4dd978;
        case 0x4dd97cu: goto label_4dd97c;
        case 0x4dd980u: goto label_4dd980;
        case 0x4dd984u: goto label_4dd984;
        case 0x4dd988u: goto label_4dd988;
        case 0x4dd98cu: goto label_4dd98c;
        case 0x4dd990u: goto label_4dd990;
        case 0x4dd994u: goto label_4dd994;
        case 0x4dd998u: goto label_4dd998;
        case 0x4dd99cu: goto label_4dd99c;
        case 0x4dd9a0u: goto label_4dd9a0;
        case 0x4dd9a4u: goto label_4dd9a4;
        case 0x4dd9a8u: goto label_4dd9a8;
        case 0x4dd9acu: goto label_4dd9ac;
        case 0x4dd9b0u: goto label_4dd9b0;
        case 0x4dd9b4u: goto label_4dd9b4;
        default: break;
    }

    ctx->pc = 0x4dd718u;

label_4dd718:
    // 0x4dd718: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4dd718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_4dd71c:
    // 0x4dd71c: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x4dd71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
label_4dd720:
    // 0x4dd720: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x4dd720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_4dd724:
    // 0x4dd724: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4dd724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4dd728:
    // 0x4dd728: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x4dd728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_4dd72c:
    // 0x4dd72c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4dd72cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dd730:
    // 0x4dd730: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x4dd730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_4dd734:
    // 0x4dd734: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x4dd734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_4dd738:
    // 0x4dd738: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x4dd738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_4dd73c:
    // 0x4dd73c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x4dd73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_4dd740:
    // 0x4dd740: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_4dd744:
    if (ctx->pc == 0x4DD744u) {
        ctx->pc = 0x4DD744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD740u;
        // 0x4dd744: 0xffbf0060  sd          $ra, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD748u;
        goto label_4dd748;
    }
    ctx->pc = 0x4DD740u;
    {
        const bool branch_taken_0x4dd740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD740u;
        // 0x4dd744: 0xffbf0060  sd          $ra, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd740) {
            ctx->pc = 0x4DD7B4u;
            goto label_4dd7b4;
        }
    }
    ctx->pc = 0x4DD748u;
label_4dd748:
    // 0x4dd748: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x4dd748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_4dd74c:
    // 0x4dd74c: 0x3c15006f  lui         $s5, 0x6F
    ctx->pc = 0x4dd74cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)111 << 16));
label_4dd750:
    // 0x4dd750: 0x3c120055  lui         $s2, 0x55
    ctx->pc = 0x4dd750u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)85 << 16));
label_4dd754:
    // 0x4dd754: 0x3c130055  lui         $s3, 0x55
    ctx->pc = 0x4dd754u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)85 << 16));
label_4dd758:
    // 0x4dd758: 0x3c140055  lui         $s4, 0x55
    ctx->pc = 0x4dd758u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)85 << 16));
label_4dd75c:
    // 0x4dd75c: 0x2611001c  addiu       $s1, $s0, 0x1C
    ctx->pc = 0x4dd75cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_4dd760:
    // 0x4dd760: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x4dd760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4dd764:
    // 0x4dd764: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x4dd764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4dd768:
    // 0x4dd768: 0x68a4000f  ldl         $a0, 0xF($a1)
    ctx->pc = 0x4dd768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4dd76c:
    // 0x4dd76c: 0x6ca40008  ldr         $a0, 0x8($a1)
    ctx->pc = 0x4dd76cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_4dd770:
    // 0x4dd770: 0x68a70017  ldl         $a3, 0x17($a1)
    ctx->pc = 0x4dd770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_4dd774:
    // 0x4dd774: 0x6ca70010  ldr         $a3, 0x10($a1)
    ctx->pc = 0x4dd774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_4dd778:
    // 0x4dd778: 0x68a8001f  ldl         $t0, 0x1F($a1)
    ctx->pc = 0x4dd778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4dd77c:
    // 0x4dd77c: 0x6ca80018  ldr         $t0, 0x18($a1)
    ctx->pc = 0x4dd77cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_4dd780:
    // 0x4dd780: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x4dd780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4dd784:
    // 0x4dd784: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x4dd784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4dd788:
    // 0x4dd788: 0xb0c4000f  sdl         $a0, 0xF($a2)
    ctx->pc = 0x4dd788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4dd78c:
    // 0x4dd78c: 0xb4c40008  sdr         $a0, 0x8($a2)
    ctx->pc = 0x4dd78cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4dd790:
    // 0x4dd790: 0xb0c70017  sdl         $a3, 0x17($a2)
    ctx->pc = 0x4dd790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4dd794:
    // 0x4dd794: 0xb4c70010  sdr         $a3, 0x10($a2)
    ctx->pc = 0x4dd794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4dd798:
    // 0x4dd798: 0xb0c8001f  sdl         $t0, 0x1F($a2)
    ctx->pc = 0x4dd798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4dd79c:
    // 0x4dd79c: 0xb4c80018  sdr         $t0, 0x18($a2)
    ctx->pc = 0x4dd79cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4dd7a0:
    // 0x4dd7a0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x4dd7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_4dd7a4:
    // 0x4dd7a4: 0x14a2ffee  bne         $a1, $v0, . + 4 + (-0x12 << 2)
label_4dd7a8:
    if (ctx->pc == 0x4DD7A8u) {
        ctx->pc = 0x4DD7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD7A4u;
        // 0x4dd7a8: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD7ACu;
        goto label_4dd7ac;
    }
    ctx->pc = 0x4DD7A4u;
    {
        const bool branch_taken_0x4dd7a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x4DD7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD7A4u;
        // 0x4dd7a8: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd7a4) {
            ctx->pc = 0x4DD760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4dd760;
        }
    }
    ctx->pc = 0x4DD7ACu;
label_4dd7ac:
    // 0x4dd7ac: 0x10000013  b           . + 4 + (0x13 << 2)
label_4dd7b0:
    if (ctx->pc == 0x4DD7B0u) {
        ctx->pc = 0x4DD7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD7ACu;
        // 0x4dd7b0: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD7B4u;
        goto label_4dd7b4;
    }
    ctx->pc = 0x4DD7ACu;
    {
        const bool branch_taken_0x4dd7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD7ACu;
        // 0x4dd7b0: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd7ac) {
            ctx->pc = 0x4DD7FCu;
            goto label_4dd7fc;
        }
    }
    ctx->pc = 0x4DD7B4u;
label_4dd7b4:
    // 0x4dd7b4: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x4dd7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_4dd7b8:
    // 0x4dd7b8: 0x3c15006f  lui         $s5, 0x6F
    ctx->pc = 0x4dd7b8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)111 << 16));
label_4dd7bc:
    // 0x4dd7bc: 0x3c120055  lui         $s2, 0x55
    ctx->pc = 0x4dd7bcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)85 << 16));
label_4dd7c0:
    // 0x4dd7c0: 0x3c130055  lui         $s3, 0x55
    ctx->pc = 0x4dd7c0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)85 << 16));
label_4dd7c4:
    // 0x4dd7c4: 0x3c140055  lui         $s4, 0x55
    ctx->pc = 0x4dd7c4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)85 << 16));
label_4dd7c8:
    // 0x4dd7c8: 0x2611001c  addiu       $s1, $s0, 0x1C
    ctx->pc = 0x4dd7c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_4dd7cc:
    // 0x4dd7cc: 0xdca90000  ld          $t1, 0x0($a1)
    ctx->pc = 0x4dd7ccu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_4dd7d0:
    // 0x4dd7d0: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x4dd7d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
label_4dd7d4:
    // 0x4dd7d4: 0xdca40010  ld          $a0, 0x10($a1)
    ctx->pc = 0x4dd7d4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
label_4dd7d8:
    // 0x4dd7d8: 0xdca70018  ld          $a3, 0x18($a1)
    ctx->pc = 0x4dd7d8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 24)));
label_4dd7dc:
    // 0x4dd7dc: 0xfcc90000  sd          $t1, 0x0($a2)
    ctx->pc = 0x4dd7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 9));
label_4dd7e0:
    // 0x4dd7e0: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x4dd7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
label_4dd7e4:
    // 0x4dd7e4: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x4dd7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
label_4dd7e8:
    // 0x4dd7e8: 0xfcc70018  sd          $a3, 0x18($a2)
    ctx->pc = 0x4dd7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 7));
label_4dd7ec:
    // 0x4dd7ec: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x4dd7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_4dd7f0:
    // 0x4dd7f0: 0x14a2fff6  bne         $a1, $v0, . + 4 + (-0xA << 2)
label_4dd7f4:
    if (ctx->pc == 0x4DD7F4u) {
        ctx->pc = 0x4DD7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD7F0u;
        // 0x4dd7f4: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD7F8u;
        goto label_4dd7f8;
    }
    ctx->pc = 0x4DD7F0u;
    {
        const bool branch_taken_0x4dd7f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x4DD7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD7F0u;
        // 0x4dd7f4: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd7f0) {
            ctx->pc = 0x4DD7CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4dd7cc;
        }
    }
    ctx->pc = 0x4DD7F8u;
label_4dd7f8:
    // 0x4dd7f8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x4dd7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4dd7fc:
    // 0x4dd7fc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4dd7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4dd800:
    // 0x4dd800: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x4dd800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4dd804:
    // 0x4dd804: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4dd804u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4dd808:
    // 0x4dd808: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4dd808u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4dd80c:
    // 0x4dd80c: 0x68a80007  ldl         $t0, 0x7($a1)
    ctx->pc = 0x4dd80cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4dd810:
    // 0x4dd810: 0x6ca80000  ldr         $t0, 0x0($a1)
    ctx->pc = 0x4dd810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_4dd814:
    // 0x4dd814: 0x68a9000f  ldl         $t1, 0xF($a1)
    ctx->pc = 0x4dd814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_4dd818:
    // 0x4dd818: 0x6ca90008  ldr         $t1, 0x8($a1)
    ctx->pc = 0x4dd818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4dd81c:
    // 0x4dd81c: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x4dd81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_4dd820:
    // 0x4dd820: 0xb0c80007  sdl         $t0, 0x7($a2)
    ctx->pc = 0x4dd820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4dd824:
    // 0x4dd824: 0xb4c80000  sdr         $t0, 0x0($a2)
    ctx->pc = 0x4dd824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4dd828:
    // 0x4dd828: 0xb0c9000f  sdl         $t1, 0xF($a2)
    ctx->pc = 0x4dd828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4dd82c:
    // 0x4dd82c: 0xb4c90008  sdr         $t1, 0x8($a2)
    ctx->pc = 0x4dd82cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4dd830:
    // 0x4dd830: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4dd830u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4dd834:
    // 0x4dd834: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x4dd834u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_4dd838:
    // 0x4dd838: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_4dd83c:
    if (ctx->pc == 0x4DD83Cu) {
        ctx->pc = 0x4DD83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD838u;
        // 0x4dd83c: 0xacc40010  sw          $a0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD840u;
        goto label_4dd840;
    }
    ctx->pc = 0x4DD838u;
    {
        const bool branch_taken_0x4dd838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD838u;
        // 0x4dd83c: 0xacc40010  sw          $a0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd838) {
            ctx->pc = 0x4DD850u;
            goto label_4dd850;
        }
    }
    ctx->pc = 0x4DD840u;
label_4dd840:
    // 0x4dd840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4dd840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dd844:
    // 0x4dd844: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4dd844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4dd848:
    // 0x4dd848: 0xc13753e  jal         func_4DD4F8
label_4dd84c:
    if (ctx->pc == 0x4DD84Cu) {
        ctx->pc = 0x4DD84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD848u;
        // 0x4dd84c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD850u;
        goto label_4dd850;
    }
    ctx->pc = 0x4DD848u;
    SET_GPR_U32(ctx, 31, 0x4DD850u);
    ctx->pc = 0x4DD84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD848u;
    // 0x4dd84c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DD4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DD4F8u, 0x4DD848u, 0x4DD850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DD850u;
label_4dd850:
    // 0x4dd850: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x4dd850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4dd854:
    // 0x4dd854: 0x2645e5f8  addiu       $a1, $s2, -0x1A08
    ctx->pc = 0x4dd854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294960632));
label_4dd858:
    // 0x4dd858: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_4dd85c:
    if (ctx->pc == 0x4DD85Cu) {
        ctx->pc = 0x4DD85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD858u;
        // 0x4dd85c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD860u;
        goto label_4dd860;
    }
    ctx->pc = 0x4DD858u;
    {
        const bool branch_taken_0x4dd858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd858) {
            ctx->pc = 0x4DD85Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DD858u;
            // 0x4dd85c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DD860u;
            goto label_4dd860;
        }
    }
    ctx->pc = 0x4DD860u;
label_4dd860:
    // 0x4dd860: 0x2668e600  addiu       $t0, $s3, -0x1A00
    ctx->pc = 0x4dd860u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 4294960640));
label_4dd864:
    // 0x4dd864: 0x8eacb9c0  lw          $t4, -0x4640($s5)
    ctx->pc = 0x4dd864u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949312)));
label_4dd868:
    // 0x4dd868: 0x268ae628  addiu       $t2, $s4, -0x19D8
    ctx->pc = 0x4dd868u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 20), 4294960680));
label_4dd86c:
    // 0x4dd86c: 0x240601f8  addiu       $a2, $zero, 0x1F8
    ctx->pc = 0x4dd86cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 504));
label_4dd870:
    // 0x4dd870: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4dd870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4dd874:
    // 0x4dd874: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4dd874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_4dd878:
    // 0x4dd878: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4dd878u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4dd87c:
    // 0x4dd87c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4dd87cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dd880:
    // 0x4dd880: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4dd880u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4dd884:
    // 0x4dd884: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4dd884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4dd888:
    // 0x4dd888: 0x40f809  jalr        $v0
label_4dd88c:
    if (ctx->pc == 0x4DD88Cu) {
        ctx->pc = 0x4DD88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD888u;
        // 0x4dd88c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD890u;
        goto label_4dd890;
    }
    ctx->pc = 0x4DD888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DD890u);
        ctx->pc = 0x4DD88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD888u;
        // 0x4dd88c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DD888u, 0x4DD890u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DD890u;
label_4dd890:
    // 0x4dd890: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x4dd890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4dd894:
    // 0x4dd894: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x4dd894u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_4dd898:
    // 0x4dd898: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x4dd898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4dd89c:
    // 0x4dd89c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_4dd8a0:
    if (ctx->pc == 0x4DD8A0u) {
        ctx->pc = 0x4DD8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD89Cu;
        // 0x4dd8a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD8A4u;
        goto label_4dd8a4;
    }
    ctx->pc = 0x4DD89Cu;
    {
        const bool branch_taken_0x4dd89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD89Cu;
        // 0x4dd8a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd89c) {
            ctx->pc = 0x4DD960u;
            goto label_4dd960;
        }
    }
    ctx->pc = 0x4DD8A4u;
label_4dd8a4:
    // 0x4dd8a4: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x4dd8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
label_4dd8a8:
    // 0x4dd8a8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_4dd8ac:
    if (ctx->pc == 0x4DD8ACu) {
        ctx->pc = 0x4DD8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD8A8u;
        // 0x4dd8ac: 0x3a0182d  daddu       $v1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD8B0u;
        goto label_4dd8b0;
    }
    ctx->pc = 0x4DD8A8u;
    {
        const bool branch_taken_0x4dd8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DD8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD8A8u;
        // 0x4dd8ac: 0x3a0182d  daddu       $v1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd8a8) {
            ctx->pc = 0x4DD908u;
            goto label_4dd908;
        }
    }
    ctx->pc = 0x4DD8B0u;
label_4dd8b0:
    // 0x4dd8b0: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x4dd8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4dd8b4:
    // 0x4dd8b4: 0x68680007  ldl         $t0, 0x7($v1)
    ctx->pc = 0x4dd8b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4dd8b8:
    // 0x4dd8b8: 0x6c680000  ldr         $t0, 0x0($v1)
    ctx->pc = 0x4dd8b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_4dd8bc:
    // 0x4dd8bc: 0x6869000f  ldl         $t1, 0xF($v1)
    ctx->pc = 0x4dd8bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_4dd8c0:
    // 0x4dd8c0: 0x6c690008  ldr         $t1, 0x8($v1)
    ctx->pc = 0x4dd8c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4dd8c4:
    // 0x4dd8c4: 0x68650017  ldl         $a1, 0x17($v1)
    ctx->pc = 0x4dd8c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_4dd8c8:
    // 0x4dd8c8: 0x6c650010  ldr         $a1, 0x10($v1)
    ctx->pc = 0x4dd8c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4dd8cc:
    // 0x4dd8cc: 0x6866001f  ldl         $a2, 0x1F($v1)
    ctx->pc = 0x4dd8ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_4dd8d0:
    // 0x4dd8d0: 0x6c660018  ldr         $a2, 0x18($v1)
    ctx->pc = 0x4dd8d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_4dd8d4:
    // 0x4dd8d4: 0xb0880007  sdl         $t0, 0x7($a0)
    ctx->pc = 0x4dd8d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4dd8d8:
    // 0x4dd8d8: 0xb4880000  sdr         $t0, 0x0($a0)
    ctx->pc = 0x4dd8d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4dd8dc:
    // 0x4dd8dc: 0xb089000f  sdl         $t1, 0xF($a0)
    ctx->pc = 0x4dd8dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4dd8e0:
    // 0x4dd8e0: 0xb4890008  sdr         $t1, 0x8($a0)
    ctx->pc = 0x4dd8e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4dd8e4:
    // 0x4dd8e4: 0xb0850017  sdl         $a1, 0x17($a0)
    ctx->pc = 0x4dd8e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4dd8e8:
    // 0x4dd8e8: 0xb4850010  sdr         $a1, 0x10($a0)
    ctx->pc = 0x4dd8e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4dd8ec:
    // 0x4dd8ec: 0xb086001f  sdl         $a2, 0x1F($a0)
    ctx->pc = 0x4dd8ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4dd8f0:
    // 0x4dd8f0: 0xb4860018  sdr         $a2, 0x18($a0)
    ctx->pc = 0x4dd8f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4dd8f4:
    // 0x4dd8f4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x4dd8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_4dd8f8:
    // 0x4dd8f8: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
label_4dd8fc:
    if (ctx->pc == 0x4DD8FCu) {
        ctx->pc = 0x4DD8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD8F8u;
        // 0x4dd8fc: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD900u;
        goto label_4dd900;
    }
    ctx->pc = 0x4DD8F8u;
    {
        const bool branch_taken_0x4dd8f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4DD8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD8F8u;
        // 0x4dd8fc: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd8f8) {
            ctx->pc = 0x4DD8B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4dd8b4;
        }
    }
    ctx->pc = 0x4DD900u;
label_4dd900:
    // 0x4dd900: 0x1000000d  b           . + 4 + (0xD << 2)
label_4dd904:
    if (ctx->pc == 0x4DD904u) {
        ctx->pc = 0x4DD908u;
        goto label_4dd908;
    }
    ctx->pc = 0x4DD900u;
    {
        const bool branch_taken_0x4dd900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd900) {
            ctx->pc = 0x4DD938u;
            goto label_4dd938;
        }
    }
    ctx->pc = 0x4DD908u;
label_4dd908:
    // 0x4dd908: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x4dd908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4dd90c:
    // 0x4dd90c: 0xdc670000  ld          $a3, 0x0($v1)
    ctx->pc = 0x4dd90cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_4dd910:
    // 0x4dd910: 0xdc680008  ld          $t0, 0x8($v1)
    ctx->pc = 0x4dd910u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_4dd914:
    // 0x4dd914: 0xdc690010  ld          $t1, 0x10($v1)
    ctx->pc = 0x4dd914u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_4dd918:
    // 0x4dd918: 0xdc650018  ld          $a1, 0x18($v1)
    ctx->pc = 0x4dd918u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_4dd91c:
    // 0x4dd91c: 0xfc870000  sd          $a3, 0x0($a0)
    ctx->pc = 0x4dd91cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 7));
label_4dd920:
    // 0x4dd920: 0xfc880008  sd          $t0, 0x8($a0)
    ctx->pc = 0x4dd920u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 8));
label_4dd924:
    // 0x4dd924: 0xfc890010  sd          $t1, 0x10($a0)
    ctx->pc = 0x4dd924u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 9));
label_4dd928:
    // 0x4dd928: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x4dd928u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
label_4dd92c:
    // 0x4dd92c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x4dd92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_4dd930:
    // 0x4dd930: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
label_4dd934:
    if (ctx->pc == 0x4DD934u) {
        ctx->pc = 0x4DD934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD930u;
        // 0x4dd934: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD938u;
        goto label_4dd938;
    }
    ctx->pc = 0x4DD930u;
    {
        const bool branch_taken_0x4dd930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4DD934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD930u;
        // 0x4dd934: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dd930) {
            ctx->pc = 0x4DD90Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4dd90c;
        }
    }
    ctx->pc = 0x4DD938u;
label_4dd938:
    // 0x4dd938: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x4dd938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_4dd93c:
    // 0x4dd93c: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x4dd93cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_4dd940:
    // 0x4dd940: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x4dd940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_4dd944:
    // 0x4dd944: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x4dd944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_4dd948:
    // 0x4dd948: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x4dd948u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4dd94c:
    // 0x4dd94c: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x4dd94cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4dd950:
    // 0x4dd950: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x4dd950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4dd954:
    // 0x4dd954: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x4dd954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4dd958:
    // 0x4dd958: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x4dd958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4dd95c:
    // 0x4dd95c: 0xac880010  sw          $t0, 0x10($a0)
    ctx->pc = 0x4dd95cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 8));
label_4dd960:
    // 0x4dd960: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x4dd960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4dd964:
    // 0x4dd964: 0x24050054  addiu       $a1, $zero, 0x54
    ctx->pc = 0x4dd964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4dd968:
    // 0x4dd968: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x4dd968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4dd96c:
    // 0x4dd96c: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x4dd96cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_4dd970:
    // 0x4dd970: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4dd970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4dd974:
    // 0x4dd974: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x4dd974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_4dd978:
    // 0x4dd978: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_4dd97c:
    if (ctx->pc == 0x4DD97Cu) {
        ctx->pc = 0x4DD97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD978u;
        // 0x4dd97c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD980u;
        goto label_4dd980;
    }
    ctx->pc = 0x4DD978u;
    {
        const bool branch_taken_0x4dd978 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd978) {
            ctx->pc = 0x4DD97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DD978u;
            // 0x4dd97c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DD980u;
            goto label_4dd980;
        }
    }
    ctx->pc = 0x4DD980u;
label_4dd980:
    // 0x4dd980: 0x244201f8  addiu       $v0, $v0, 0x1F8
    ctx->pc = 0x4dd980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 504));
label_4dd984:
    // 0x4dd984: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4dd984u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_4dd988:
    // 0x4dd988: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x4dd988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4dd98c:
    // 0x4dd98c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x4dd98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4dd990:
    // 0x4dd990: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x4dd990u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4dd994:
    // 0x4dd994: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x4dd994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_4dd998:
    // 0x4dd998: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x4dd998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4dd99c:
    // 0x4dd99c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x4dd99cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4dd9a0:
    // 0x4dd9a0: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x4dd9a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4dd9a4:
    // 0x4dd9a4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x4dd9a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4dd9a8:
    // 0x4dd9a8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4dd9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4dd9ac:
    // 0x4dd9ac: 0x3e00008  jr          $ra
label_4dd9b0:
    if (ctx->pc == 0x4DD9B0u) {
        ctx->pc = 0x4DD9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD9ACu;
        // 0x4dd9b0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD9B4u;
        goto label_4dd9b4;
    }
    ctx->pc = 0x4DD9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DD9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD9ACu;
        // 0x4dd9b0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DD9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DD9B4u;
label_4dd9b4:
    // 0x4dd9b4: 0x0  nop
    ctx->pc = 0x4dd9b4u;
    // NOP
    ctx->pc = 0x4dd9b8u;
}
