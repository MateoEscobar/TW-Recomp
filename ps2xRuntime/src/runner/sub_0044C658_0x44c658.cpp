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

// Function: sub_0044C658
// Address: 0x44c658 - 0x44c828
void sub_0044C658_0x44c658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044C658_0x44c658");
#endif

    switch (ctx->pc) {
        case 0x44c658u: goto label_44c658;
        case 0x44c65cu: goto label_44c65c;
        case 0x44c660u: goto label_44c660;
        case 0x44c664u: goto label_44c664;
        case 0x44c668u: goto label_44c668;
        case 0x44c66cu: goto label_44c66c;
        case 0x44c670u: goto label_44c670;
        case 0x44c674u: goto label_44c674;
        case 0x44c678u: goto label_44c678;
        case 0x44c67cu: goto label_44c67c;
        case 0x44c680u: goto label_44c680;
        case 0x44c684u: goto label_44c684;
        case 0x44c688u: goto label_44c688;
        case 0x44c68cu: goto label_44c68c;
        case 0x44c690u: goto label_44c690;
        case 0x44c694u: goto label_44c694;
        case 0x44c698u: goto label_44c698;
        case 0x44c69cu: goto label_44c69c;
        case 0x44c6a0u: goto label_44c6a0;
        case 0x44c6a4u: goto label_44c6a4;
        case 0x44c6a8u: goto label_44c6a8;
        case 0x44c6acu: goto label_44c6ac;
        case 0x44c6b0u: goto label_44c6b0;
        case 0x44c6b4u: goto label_44c6b4;
        case 0x44c6b8u: goto label_44c6b8;
        case 0x44c6bcu: goto label_44c6bc;
        case 0x44c6c0u: goto label_44c6c0;
        case 0x44c6c4u: goto label_44c6c4;
        case 0x44c6c8u: goto label_44c6c8;
        case 0x44c6ccu: goto label_44c6cc;
        case 0x44c6d0u: goto label_44c6d0;
        case 0x44c6d4u: goto label_44c6d4;
        case 0x44c6d8u: goto label_44c6d8;
        case 0x44c6dcu: goto label_44c6dc;
        case 0x44c6e0u: goto label_44c6e0;
        case 0x44c6e4u: goto label_44c6e4;
        case 0x44c6e8u: goto label_44c6e8;
        case 0x44c6ecu: goto label_44c6ec;
        case 0x44c6f0u: goto label_44c6f0;
        case 0x44c6f4u: goto label_44c6f4;
        case 0x44c6f8u: goto label_44c6f8;
        case 0x44c6fcu: goto label_44c6fc;
        case 0x44c700u: goto label_44c700;
        case 0x44c704u: goto label_44c704;
        case 0x44c708u: goto label_44c708;
        case 0x44c70cu: goto label_44c70c;
        case 0x44c710u: goto label_44c710;
        case 0x44c714u: goto label_44c714;
        case 0x44c718u: goto label_44c718;
        case 0x44c71cu: goto label_44c71c;
        case 0x44c720u: goto label_44c720;
        case 0x44c724u: goto label_44c724;
        case 0x44c728u: goto label_44c728;
        case 0x44c72cu: goto label_44c72c;
        case 0x44c730u: goto label_44c730;
        case 0x44c734u: goto label_44c734;
        case 0x44c738u: goto label_44c738;
        case 0x44c73cu: goto label_44c73c;
        case 0x44c740u: goto label_44c740;
        case 0x44c744u: goto label_44c744;
        case 0x44c748u: goto label_44c748;
        case 0x44c74cu: goto label_44c74c;
        case 0x44c750u: goto label_44c750;
        case 0x44c754u: goto label_44c754;
        case 0x44c758u: goto label_44c758;
        case 0x44c75cu: goto label_44c75c;
        case 0x44c760u: goto label_44c760;
        case 0x44c764u: goto label_44c764;
        case 0x44c768u: goto label_44c768;
        case 0x44c76cu: goto label_44c76c;
        case 0x44c770u: goto label_44c770;
        case 0x44c774u: goto label_44c774;
        case 0x44c778u: goto label_44c778;
        case 0x44c77cu: goto label_44c77c;
        case 0x44c780u: goto label_44c780;
        case 0x44c784u: goto label_44c784;
        case 0x44c788u: goto label_44c788;
        case 0x44c78cu: goto label_44c78c;
        case 0x44c790u: goto label_44c790;
        case 0x44c794u: goto label_44c794;
        case 0x44c798u: goto label_44c798;
        case 0x44c79cu: goto label_44c79c;
        case 0x44c7a0u: goto label_44c7a0;
        case 0x44c7a4u: goto label_44c7a4;
        case 0x44c7a8u: goto label_44c7a8;
        case 0x44c7acu: goto label_44c7ac;
        case 0x44c7b0u: goto label_44c7b0;
        case 0x44c7b4u: goto label_44c7b4;
        case 0x44c7b8u: goto label_44c7b8;
        case 0x44c7bcu: goto label_44c7bc;
        case 0x44c7c0u: goto label_44c7c0;
        case 0x44c7c4u: goto label_44c7c4;
        case 0x44c7c8u: goto label_44c7c8;
        case 0x44c7ccu: goto label_44c7cc;
        case 0x44c7d0u: goto label_44c7d0;
        case 0x44c7d4u: goto label_44c7d4;
        case 0x44c7d8u: goto label_44c7d8;
        case 0x44c7dcu: goto label_44c7dc;
        case 0x44c7e0u: goto label_44c7e0;
        case 0x44c7e4u: goto label_44c7e4;
        case 0x44c7e8u: goto label_44c7e8;
        case 0x44c7ecu: goto label_44c7ec;
        case 0x44c7f0u: goto label_44c7f0;
        case 0x44c7f4u: goto label_44c7f4;
        case 0x44c7f8u: goto label_44c7f8;
        case 0x44c7fcu: goto label_44c7fc;
        case 0x44c800u: goto label_44c800;
        case 0x44c804u: goto label_44c804;
        case 0x44c808u: goto label_44c808;
        case 0x44c80cu: goto label_44c80c;
        case 0x44c810u: goto label_44c810;
        case 0x44c814u: goto label_44c814;
        case 0x44c818u: goto label_44c818;
        case 0x44c81cu: goto label_44c81c;
        case 0x44c820u: goto label_44c820;
        case 0x44c824u: goto label_44c824;
        default: break;
    }

    ctx->pc = 0x44c658u;

label_44c658:
    // 0x44c658: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x44c658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_44c65c:
    // 0x44c65c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x44c65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_44c660:
    // 0x44c660: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x44c660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_44c664:
    // 0x44c664: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x44c664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_44c668:
    // 0x44c668: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44c668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44c66c:
    // 0x44c66c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x44c66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_44c670:
    // 0x44c670: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x44c670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_44c674:
    // 0x44c674: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x44c674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_44c678:
    // 0x44c678: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x44c678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_44c67c:
    // 0x44c67c: 0x2447e4d8  addiu       $a3, $v0, -0x1B28
    ctx->pc = 0x44c67cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960344));
label_44c680:
    // 0x44c680: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x44c680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_44c684:
    // 0x44c684: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x44c684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_44c688:
    // 0x44c688: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x44c688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_44c68c:
    // 0x44c68c: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x44c68cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_44c690:
    // 0x44c690: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x44c690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_44c694:
    // 0x44c694: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x44c694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_44c698:
    // 0x44c698: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x44c698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44c69c:
    // 0x44c69c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x44c69cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44c6a0:
    // 0x44c6a0: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x44c6a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44c6a4:
    // 0x44c6a4: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x44c6a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44c6a8:
    // 0x44c6a8: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x44c6a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44c6ac:
    // 0x44c6ac: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x44c6acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44c6b0:
    // 0x44c6b0: 0x68e3001f  ldl         $v1, 0x1F($a3)
    ctx->pc = 0x44c6b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_44c6b4:
    // 0x44c6b4: 0x6ce30018  ldr         $v1, 0x18($a3)
    ctx->pc = 0x44c6b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_44c6b8:
    // 0x44c6b8: 0x68e50027  ldl         $a1, 0x27($a3)
    ctx->pc = 0x44c6b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_44c6bc:
    // 0x44c6bc: 0x6ce50020  ldr         $a1, 0x20($a3)
    ctx->pc = 0x44c6bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_44c6c0:
    // 0x44c6c0: 0x8ce60028  lw          $a2, 0x28($a3)
    ctx->pc = 0x44c6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_44c6c4:
    // 0x44c6c4: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x44c6c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44c6c8:
    // 0x44c6c8: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x44c6c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44c6cc:
    // 0x44c6cc: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x44c6ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_44c6d0:
    // 0x44c6d0: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x44c6d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_44c6d4:
    // 0x44c6d4: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x44c6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
label_44c6d8:
    // 0x44c6d8: 0xc113272  jal         func_44C9C8
label_44c6dc:
    if (ctx->pc == 0x44C6DCu) {
        ctx->pc = 0x44C6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C6D8u;
        // 0x44c6dc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C6E0u;
        goto label_44c6e0;
    }
    ctx->pc = 0x44C6D8u;
    SET_GPR_U32(ctx, 31, 0x44C6E0u);
    ctx->pc = 0x44C6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C6D8u;
    // 0x44c6dc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C9C8u, 0x44C6D8u, 0x44C6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C6E0u;
label_44c6e0:
    // 0x44c6e0: 0x10000004  b           . + 4 + (0x4 << 2)
label_44c6e4:
    if (ctx->pc == 0x44C6E4u) {
        ctx->pc = 0x44C6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C6E0u;
        // 0x44c6e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C6E8u;
        goto label_44c6e8;
    }
    ctx->pc = 0x44C6E0u;
    {
        const bool branch_taken_0x44c6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C6E0u;
        // 0x44c6e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c6e0) {
            ctx->pc = 0x44C6F4u;
            goto label_44c6f4;
        }
    }
    ctx->pc = 0x44C6E8u;
label_44c6e8:
    // 0x44c6e8: 0xc113218  jal         func_44C860
label_44c6ec:
    if (ctx->pc == 0x44C6ECu) {
        ctx->pc = 0x44C6F0u;
        goto label_44c6f0;
    }
    ctx->pc = 0x44C6E8u;
    SET_GPR_U32(ctx, 31, 0x44C6F0u);
    ctx->pc = 0x44C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C860u, 0x44C6E8u, 0x44C6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C6F0u;
label_44c6f0:
    // 0x44c6f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44c6f4:
    // 0x44c6f4: 0xc112974  jal         func_44A5D0
label_44c6f8:
    if (ctx->pc == 0x44C6F8u) {
        ctx->pc = 0x44C6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C6F4u;
        // 0x44c6f8: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C6FCu;
        goto label_44c6fc;
    }
    ctx->pc = 0x44C6F4u;
    SET_GPR_U32(ctx, 31, 0x44C6FCu);
    ctx->pc = 0x44C6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C6F4u;
    // 0x44c6f8: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A5D0u, 0x44C6F4u, 0x44C6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C6FCu;
label_44c6fc:
    // 0x44c6fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44c700:
    // 0x44c700: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
label_44c704:
    if (ctx->pc == 0x44C704u) {
        ctx->pc = 0x44C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C700u;
        // 0x44c704: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C708u;
        goto label_44c708;
    }
    ctx->pc = 0x44C700u;
    {
        const bool branch_taken_0x44c700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x44C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C700u;
        // 0x44c704: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c700) {
            ctx->pc = 0x44C714u;
            goto label_44c714;
        }
    }
    ctx->pc = 0x44C708u;
label_44c708:
    // 0x44c708: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x44c708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_44c70c:
    // 0x44c70c: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_44c710:
    if (ctx->pc == 0x44C710u) {
        ctx->pc = 0x44C714u;
        goto label_44c714;
    }
    ctx->pc = 0x44C70Cu;
    {
        const bool branch_taken_0x44c70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44c70c) {
            ctx->pc = 0x44C6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44c6e8;
        }
    }
    ctx->pc = 0x44C714u;
label_44c714:
    // 0x44c714: 0x241201b5  addiu       $s2, $zero, 0x1B5
    ctx->pc = 0x44c714u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 437));
label_44c718:
    // 0x44c718: 0x241401b2  addiu       $s4, $zero, 0x1B2
    ctx->pc = 0x44c718u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 434));
label_44c71c:
    // 0x44c71c: 0x10000033  b           . + 4 + (0x33 << 2)
label_44c720:
    if (ctx->pc == 0x44C720u) {
        ctx->pc = 0x44C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C71Cu;
        // 0x44c720: 0x2413000a  addiu       $s3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C724u;
        goto label_44c724;
    }
    ctx->pc = 0x44C71Cu;
    {
        const bool branch_taken_0x44c71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C71Cu;
        // 0x44c720: 0x2413000a  addiu       $s3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c71c) {
            ctx->pc = 0x44C7ECu;
            goto label_44c7ec;
        }
    }
    ctx->pc = 0x44C724u;
label_44c724:
    // 0x44c724: 0x0  nop
    ctx->pc = 0x44c724u;
    // NOP
label_44c728:
    // 0x44c728: 0x1452001e  bne         $v0, $s2, . + 4 + (0x1E << 2)
label_44c72c:
    if (ctx->pc == 0x44C72Cu) {
        ctx->pc = 0x44C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C728u;
        // 0x44c72c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C730u;
        goto label_44c730;
    }
    ctx->pc = 0x44C728u;
    {
        const bool branch_taken_0x44c728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x44C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C728u;
        // 0x44c72c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c728) {
            ctx->pc = 0x44C7A4u;
            goto label_44c7a4;
        }
    }
    ctx->pc = 0x44C730u;
label_44c730:
    // 0x44c730: 0xc113270  jal         func_44C9C0
label_44c734:
    if (ctx->pc == 0x44C734u) {
        ctx->pc = 0x44C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C730u;
        // 0x44c734: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C738u;
        goto label_44c738;
    }
    ctx->pc = 0x44C730u;
    SET_GPR_U32(ctx, 31, 0x44C738u);
    ctx->pc = 0x44C734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C730u;
    // 0x44c734: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C9C0u, 0x44C730u, 0x44C738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C738u;
label_44c738:
    // 0x44c738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44c73c:
    // 0x44c73c: 0xc11293a  jal         func_44A4E8
label_44c740:
    if (ctx->pc == 0x44C740u) {
        ctx->pc = 0x44C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C73Cu;
        // 0x44c740: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C744u;
        goto label_44c744;
    }
    ctx->pc = 0x44C73Cu;
    SET_GPR_U32(ctx, 31, 0x44C744u);
    ctx->pc = 0x44C740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C73Cu;
    // 0x44c740: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A4E8u, 0x44C73Cu, 0x44C744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C744u;
label_44c744:
    // 0x44c744: 0x262182b  sltu        $v1, $s3, $v0
    ctx->pc = 0x44c744u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44c748:
    // 0x44c748: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x44c748u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_44c74c:
    // 0x44c74c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x44c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_44c750:
    // 0x44c750: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x44c750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_44c754:
    // 0x44c754: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x44c754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_44c758:
    // 0x44c758: 0x40f809  jalr        $v0
label_44c75c:
    if (ctx->pc == 0x44C75Cu) {
        ctx->pc = 0x44C75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C758u;
        // 0x44c75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C760u;
        goto label_44c760;
    }
    ctx->pc = 0x44C758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44C760u);
        ctx->pc = 0x44C75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C758u;
        // 0x44c75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44C758u, 0x44C760u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44C760u;
label_44c760:
    // 0x44c760: 0xc113272  jal         func_44C9C8
label_44c764:
    if (ctx->pc == 0x44C764u) {
        ctx->pc = 0x44C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C760u;
        // 0x44c764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C768u;
        goto label_44c768;
    }
    ctx->pc = 0x44C760u;
    SET_GPR_U32(ctx, 31, 0x44C768u);
    ctx->pc = 0x44C764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C760u;
    // 0x44c764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C9C8u, 0x44C760u, 0x44C768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C768u;
label_44c768:
    // 0x44c768: 0x10000004  b           . + 4 + (0x4 << 2)
label_44c76c:
    if (ctx->pc == 0x44C76Cu) {
        ctx->pc = 0x44C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C768u;
        // 0x44c76c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C770u;
        goto label_44c770;
    }
    ctx->pc = 0x44C768u;
    {
        const bool branch_taken_0x44c768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C768u;
        // 0x44c76c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c768) {
            ctx->pc = 0x44C77Cu;
            goto label_44c77c;
        }
    }
    ctx->pc = 0x44C770u;
label_44c770:
    // 0x44c770: 0xc113218  jal         func_44C860
label_44c774:
    if (ctx->pc == 0x44C774u) {
        ctx->pc = 0x44C778u;
        goto label_44c778;
    }
    ctx->pc = 0x44C770u;
    SET_GPR_U32(ctx, 31, 0x44C778u);
    ctx->pc = 0x44C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C860u, 0x44C770u, 0x44C778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C778u;
label_44c778:
    // 0x44c778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44c77c:
    // 0x44c77c: 0xc112974  jal         func_44A5D0
label_44c780:
    if (ctx->pc == 0x44C780u) {
        ctx->pc = 0x44C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C77Cu;
        // 0x44c780: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C784u;
        goto label_44c784;
    }
    ctx->pc = 0x44C77Cu;
    SET_GPR_U32(ctx, 31, 0x44C784u);
    ctx->pc = 0x44C780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C77Cu;
    // 0x44c780: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A5D0u, 0x44C77Cu, 0x44C784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C784u;
label_44c784:
    // 0x44c784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44c788:
    // 0x44c788: 0x10510019  beq         $v0, $s1, . + 4 + (0x19 << 2)
label_44c78c:
    if (ctx->pc == 0x44C78Cu) {
        ctx->pc = 0x44C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C788u;
        // 0x44c78c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C790u;
        goto label_44c790;
    }
    ctx->pc = 0x44C788u;
    {
        const bool branch_taken_0x44c788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x44C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C788u;
        // 0x44c78c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c788) {
            ctx->pc = 0x44C7F0u;
            goto label_44c7f0;
        }
    }
    ctx->pc = 0x44C790u;
label_44c790:
    // 0x44c790: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x44c790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_44c794:
    // 0x44c794: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_44c798:
    if (ctx->pc == 0x44C798u) {
        ctx->pc = 0x44C79Cu;
        goto label_44c79c;
    }
    ctx->pc = 0x44C794u;
    {
        const bool branch_taken_0x44c794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44c794) {
            ctx->pc = 0x44C770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44c770;
        }
    }
    ctx->pc = 0x44C79Cu;
label_44c79c:
    // 0x44c79c: 0x10000013  b           . + 4 + (0x13 << 2)
label_44c7a0:
    if (ctx->pc == 0x44C7A0u) {
        ctx->pc = 0x44C7A4u;
        goto label_44c7a4;
    }
    ctx->pc = 0x44C79Cu;
    {
        const bool branch_taken_0x44c79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44c79c) {
            ctx->pc = 0x44C7ECu;
            goto label_44c7ec;
        }
    }
    ctx->pc = 0x44C7A4u;
label_44c7a4:
    // 0x44c7a4: 0xc113270  jal         func_44C9C0
label_44c7a8:
    if (ctx->pc == 0x44C7A8u) {
        ctx->pc = 0x44C7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C7A4u;
        // 0x44c7a8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C7ACu;
        goto label_44c7ac;
    }
    ctx->pc = 0x44C7A4u;
    SET_GPR_U32(ctx, 31, 0x44C7ACu);
    ctx->pc = 0x44C7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C7A4u;
    // 0x44c7a8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C9C0u, 0x44C7A4u, 0x44C7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C7ACu;
label_44c7ac:
    // 0x44c7ac: 0xc113272  jal         func_44C9C8
label_44c7b0:
    if (ctx->pc == 0x44C7B0u) {
        ctx->pc = 0x44C7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C7ACu;
        // 0x44c7b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C7B4u;
        goto label_44c7b4;
    }
    ctx->pc = 0x44C7ACu;
    SET_GPR_U32(ctx, 31, 0x44C7B4u);
    ctx->pc = 0x44C7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C7ACu;
    // 0x44c7b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C9C8u, 0x44C7ACu, 0x44C7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C7B4u;
label_44c7b4:
    // 0x44c7b4: 0x10000005  b           . + 4 + (0x5 << 2)
label_44c7b8:
    if (ctx->pc == 0x44C7B8u) {
        ctx->pc = 0x44C7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C7B4u;
        // 0x44c7b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C7BCu;
        goto label_44c7bc;
    }
    ctx->pc = 0x44C7B4u;
    {
        const bool branch_taken_0x44c7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44C7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C7B4u;
        // 0x44c7b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c7b4) {
            ctx->pc = 0x44C7CCu;
            goto label_44c7cc;
        }
    }
    ctx->pc = 0x44C7BCu;
label_44c7bc:
    // 0x44c7bc: 0x0  nop
    ctx->pc = 0x44c7bcu;
    // NOP
label_44c7c0:
    // 0x44c7c0: 0xc113218  jal         func_44C860
label_44c7c4:
    if (ctx->pc == 0x44C7C4u) {
        ctx->pc = 0x44C7C8u;
        goto label_44c7c8;
    }
    ctx->pc = 0x44C7C0u;
    SET_GPR_U32(ctx, 31, 0x44C7C8u);
    ctx->pc = 0x44C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C860u, 0x44C7C0u, 0x44C7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C7C8u;
label_44c7c8:
    // 0x44c7c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44c7cc:
    // 0x44c7cc: 0xc112974  jal         func_44A5D0
label_44c7d0:
    if (ctx->pc == 0x44C7D0u) {
        ctx->pc = 0x44C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C7CCu;
        // 0x44c7d0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C7D4u;
        goto label_44c7d4;
    }
    ctx->pc = 0x44C7CCu;
    SET_GPR_U32(ctx, 31, 0x44C7D4u);
    ctx->pc = 0x44C7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C7CCu;
    // 0x44c7d0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A5D0u, 0x44C7CCu, 0x44C7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C7D4u;
label_44c7d4:
    // 0x44c7d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44c7d8:
    // 0x44c7d8: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
label_44c7dc:
    if (ctx->pc == 0x44C7DCu) {
        ctx->pc = 0x44C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C7D8u;
        // 0x44c7dc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C7E0u;
        goto label_44c7e0;
    }
    ctx->pc = 0x44C7D8u;
    {
        const bool branch_taken_0x44c7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x44C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C7D8u;
        // 0x44c7dc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c7d8) {
            ctx->pc = 0x44C7F0u;
            goto label_44c7f0;
        }
    }
    ctx->pc = 0x44C7E0u;
label_44c7e0:
    // 0x44c7e0: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x44c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_44c7e4:
    // 0x44c7e4: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_44c7e8:
    if (ctx->pc == 0x44C7E8u) {
        ctx->pc = 0x44C7ECu;
        goto label_44c7ec;
    }
    ctx->pc = 0x44C7E4u;
    {
        const bool branch_taken_0x44c7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44c7e4) {
            ctx->pc = 0x44C7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44c7c0;
        }
    }
    ctx->pc = 0x44C7ECu;
label_44c7ec:
    // 0x44c7ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44c7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44c7f0:
    // 0x44c7f0: 0xc112974  jal         func_44A5D0
label_44c7f4:
    if (ctx->pc == 0x44C7F4u) {
        ctx->pc = 0x44C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C7F0u;
        // 0x44c7f4: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C7F8u;
        goto label_44c7f8;
    }
    ctx->pc = 0x44C7F0u;
    SET_GPR_U32(ctx, 31, 0x44C7F8u);
    ctx->pc = 0x44C7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44C7F0u;
    // 0x44c7f4: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A5D0u, 0x44C7F0u, 0x44C7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44C7F8u;
label_44c7f8:
    // 0x44c7f8: 0x1052ffcd  beq         $v0, $s2, . + 4 + (-0x33 << 2)
label_44c7fc:
    if (ctx->pc == 0x44C7FCu) {
        ctx->pc = 0x44C7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C7F8u;
        // 0x44c7fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C800u;
        goto label_44c800;
    }
    ctx->pc = 0x44C7F8u;
    {
        const bool branch_taken_0x44c7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x44C7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C7F8u;
        // 0x44c7fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c7f8) {
            ctx->pc = 0x44C730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44c730;
        }
    }
    ctx->pc = 0x44C800u;
label_44c800:
    // 0x44c800: 0x1054ffc9  beq         $v0, $s4, . + 4 + (-0x37 << 2)
label_44c804:
    if (ctx->pc == 0x44C804u) {
        ctx->pc = 0x44C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C800u;
        // 0x44c804: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C808u;
        goto label_44c808;
    }
    ctx->pc = 0x44C800u;
    {
        const bool branch_taken_0x44c800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x44C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C800u;
        // 0x44c804: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44c800) {
            ctx->pc = 0x44C728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44c728;
        }
    }
    ctx->pc = 0x44C808u;
label_44c808:
    // 0x44c808: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x44c808u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_44c80c:
    // 0x44c80c: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x44c80cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_44c810:
    // 0x44c810: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x44c810u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_44c814:
    // 0x44c814: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x44c814u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_44c818:
    // 0x44c818: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x44c818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_44c81c:
    // 0x44c81c: 0x3e00008  jr          $ra
label_44c820:
    if (ctx->pc == 0x44C820u) {
        ctx->pc = 0x44C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C81Cu;
        // 0x44c820: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44C824u;
        goto label_44c824;
    }
    ctx->pc = 0x44C81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44C81Cu;
        // 0x44c820: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44C81Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44C824u;
label_44c824:
    // 0x44c824: 0x0  nop
    ctx->pc = 0x44c824u;
    // NOP
    ctx->pc = 0x44c828u;
}
