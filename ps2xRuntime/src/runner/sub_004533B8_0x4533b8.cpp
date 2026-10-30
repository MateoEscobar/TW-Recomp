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

// Function: sub_004533B8
// Address: 0x4533b8 - 0x4535e8
void sub_004533B8_0x4533b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004533B8_0x4533b8");
#endif

    switch (ctx->pc) {
        case 0x4533dcu: goto label_4533dc;
        case 0x4533f0u: goto label_4533f0;
        case 0x4533f8u: goto label_4533f8;
        case 0x45341cu: goto label_45341c;
        case 0x453430u: goto label_453430;
        case 0x453510u: goto label_453510;
        case 0x453520u: goto label_453520;
        case 0x453530u: goto label_453530;
        case 0x453540u: goto label_453540;
        case 0x453548u: goto label_453548;
        case 0x453560u: goto label_453560;
        case 0x453570u: goto label_453570;
        case 0x453584u: goto label_453584;
        case 0x453598u: goto label_453598;
        case 0x4535acu: goto label_4535ac;
        case 0x4535c0u: goto label_4535c0;
        default: break;
    }

    ctx->pc = 0x4533b8u;

    // 0x4533b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4533b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4533bc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4533bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4533c0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4533c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4533c4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4533c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4533c8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4533c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x4533cc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4533ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x4533d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4533d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4533d4: 0xc1295ce  jal         func_4A5738
    ctx->pc = 0x4533D4u;
    SET_GPR_U32(ctx, 31, 0x4533DCu);
    ctx->pc = 0x4A5738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5738u, 0x4533D4u, 0x4533DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4533DCu;
label_4533dc:
    // 0x4533dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4533dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4533e0: 0x12000078  beqz        $s0, . + 4 + (0x78 << 2)
    ctx->pc = 0x4533E0u;
    {
        const bool branch_taken_0x4533e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4533E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4533E0u;
        // 0x4533e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4533e0) {
            ctx->pc = 0x4535C4u;
            goto label_4535c4;
        }
    }
    ctx->pc = 0x4533E8u;
    // 0x4533e8: 0xc129ae6  jal         func_4A6B98
    ctx->pc = 0x4533E8u;
    SET_GPR_U32(ctx, 31, 0x4533F0u);
    ctx->pc = 0x4533ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4533E8u;
    // 0x4533ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6B98u, 0x4533E8u, 0x4533F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4533F0u;
label_4533f0:
    // 0x4533f0: 0xc11e8a0  jal         func_47A280
    ctx->pc = 0x4533F0u;
    SET_GPR_U32(ctx, 31, 0x4533F8u);
    ctx->pc = 0x4533F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4533F0u;
    // 0x4533f4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A280u, 0x4533F0u, 0x4533F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4533F8u;
label_4533f8:
    // 0x4533f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4533f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4533fc: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x4533FCu;
    {
        const bool branch_taken_0x4533fc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x453400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4533FCu;
        // 0x453400: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4533fc) {
            ctx->pc = 0x45340Cu;
            goto label_45340c;
        }
    }
    ctx->pc = 0x453404u;
    // 0x453404: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x453404u;
    {
        const bool branch_taken_0x453404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x453408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x453404u;
        // 0x453408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453404) {
            ctx->pc = 0x4535C4u;
            goto label_4535c4;
        }
    }
    ctx->pc = 0x45340Cu;
label_45340c:
    // 0x45340c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x45340cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453410: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x453410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453414: 0xc129b4a  jal         func_4A6D28
    ctx->pc = 0x453414u;
    SET_GPR_U32(ctx, 31, 0x45341Cu);
    ctx->pc = 0x453418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x453414u;
    // 0x453418: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6D28u, 0x453414u, 0x45341Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45341Cu;
label_45341c:
    // 0x45341c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x45341cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x453420: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x453420u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453424: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x453424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453428: 0xc129c7a  jal         func_4A71E8
    ctx->pc = 0x453428u;
    SET_GPR_U32(ctx, 31, 0x453430u);
    ctx->pc = 0x45342Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x453428u;
    // 0x45342c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A71E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A71E8u, 0x453428u, 0x453430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453430u;
label_453430:
    // 0x453430: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x453430u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
    // 0x453434: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x453434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x453438: 0x2467ea30  addiu       $a3, $v1, -0x15D0
    ctx->pc = 0x453438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961712));
    // 0x45343c: 0x25069058  addiu       $a2, $t0, -0x6FA8
    ctx->pc = 0x45343cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294938712));
    // 0x453440: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x453440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x453444: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x453444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x453448: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x453448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x45344c: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x45344cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x453450: 0xb0c40007  sdl         $a0, 0x7($a2)
    ctx->pc = 0x453450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x453454: 0xb4c40000  sdr         $a0, 0x0($a2)
    ctx->pc = 0x453454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x453458: 0xb0c5000f  sdl         $a1, 0xF($a2)
    ctx->pc = 0x453458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x45345c: 0xb4c50008  sdr         $a1, 0x8($a2)
    ctx->pc = 0x45345cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x453460: 0x3c0a0053  lui         $t2, 0x53
    ctx->pc = 0x453460u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)83 << 16));
    // 0x453464: 0x25089058  addiu       $t0, $t0, -0x6FA8
    ctx->pc = 0x453464u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294938712));
    // 0x453468: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x453468u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45346c: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x45346cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x709060u));
    // 0x453470: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x453470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x453474: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x453474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x453478: 0x2542e9f0  addiu       $v0, $t2, -0x1610
    ctx->pc = 0x453478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294961648));
    // 0x45347c: 0x24ad9048  addiu       $t5, $a1, -0x6FB8
    ctx->pc = 0x45347cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938696));
    // 0x453480: 0x684b0007  ldl         $t3, 0x7($v0)
    ctx->pc = 0x453480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x453484: 0x6c4b0000  ldr         $t3, 0x0($v0)
    ctx->pc = 0x453484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x453488: 0x684c000f  ldl         $t4, 0xF($v0)
    ctx->pc = 0x453488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x45348c: 0x6c4c0008  ldr         $t4, 0x8($v0)
    ctx->pc = 0x45348cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x453490: 0xb1ab0007  sdl         $t3, 0x7($t5)
    ctx->pc = 0x453490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x453494: 0xb5ab0000  sdr         $t3, 0x0($t5)
    ctx->pc = 0x453494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x453498: 0xb1ac000f  sdl         $t4, 0xF($t5)
    ctx->pc = 0x453498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x45349c: 0xb5ac0008  sdr         $t4, 0x8($t5)
    ctx->pc = 0x45349cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4534a0: 0x3c090053  lui         $t1, 0x53
    ctx->pc = 0x4534a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)83 << 16));
    // 0x4534a4: 0x3463dfff  ori         $v1, $v1, 0xDFFF
    ctx->pc = 0x4534a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57343);
    // 0x4534a8: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x4534a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x4534ac: 0x3c066c00  lui         $a2, 0x6C00
    ctx->pc = 0x4534acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27648 << 16));
    // 0x4534b0: 0x252dea60  addiu       $t5, $t1, -0x15A0
    ctx->pc = 0x4534b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961760));
    // 0x4534b4: 0x248c9068  addiu       $t4, $a0, -0x6F98
    ctx->pc = 0x4534b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938728));
    // 0x4534b8: 0x69aa0007  ldl         $t2, 0x7($t5)
    ctx->pc = 0x4534b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x4534bc: 0x6daa0000  ldr         $t2, 0x0($t5)
    ctx->pc = 0x4534bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x4534c0: 0x69ab000f  ldl         $t3, 0xF($t5)
    ctx->pc = 0x4534c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x4534c4: 0x6dab0008  ldr         $t3, 0x8($t5)
    ctx->pc = 0x4534c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x4534c8: 0xb18a0007  sdl         $t2, 0x7($t4)
    ctx->pc = 0x4534c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4534cc: 0xb58a0000  sdr         $t2, 0x0($t4)
    ctx->pc = 0x4534ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4534d0: 0xb18b000f  sdl         $t3, 0xF($t4)
    ctx->pc = 0x4534d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4534d4: 0xb58b0008  sdr         $t3, 0x8($t4)
    ctx->pc = 0x4534d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4534d8: 0x24b09048  addiu       $s0, $a1, -0x6FB8
    ctx->pc = 0x4534d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938696));
    // 0x4534dc: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4534dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4534e0: 0x34c6000d  ori         $a2, $a2, 0xD
    ctx->pc = 0x4534e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13);
    // 0x4534e4: 0x34e7000d  ori         $a3, $a3, 0xD
    ctx->pc = 0x4534e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)13);
    // 0x4534e8: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x4534e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x4534ec: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x4534ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
    // 0x4534f0: 0xad070008  sw          $a3, 0x8($t0)
    ctx->pc = 0x4534f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
    // 0x4534f4: 0x3463000d  ori         $v1, $v1, 0xD
    ctx->pc = 0x4534f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13);
    // 0x4534f8: 0x24919068  addiu       $s1, $a0, -0x6F98
    ctx->pc = 0x4534f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938728));
    // 0x4534fc: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x4534fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453500: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x453500u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x453504: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x453504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453508: 0xc11e802  jal         func_47A008
    ctx->pc = 0x453508u;
    SET_GPR_U32(ctx, 31, 0x453510u);
    ctx->pc = 0x45350Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x453508u;
    // 0x45350c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A008u, 0x453508u, 0x453510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453510u;
label_453510:
    // 0x453510: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x453510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453514: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x453514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453518: 0xc11e802  jal         func_47A008
    ctx->pc = 0x453518u;
    SET_GPR_U32(ctx, 31, 0x453520u);
    ctx->pc = 0x45351Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x453518u;
    // 0x45351c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A008u, 0x453518u, 0x453520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453520u;
label_453520:
    // 0x453520: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x453520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453524: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x453524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453528: 0xc11e802  jal         func_47A008
    ctx->pc = 0x453528u;
    SET_GPR_U32(ctx, 31, 0x453530u);
    ctx->pc = 0x45352Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x453528u;
    // 0x45352c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A008u, 0x453528u, 0x453530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453530u;
label_453530:
    // 0x453530: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x453530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453534: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x453534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x453538: 0xc11e934  jal         func_47A4D0
    ctx->pc = 0x453538u;
    SET_GPR_U32(ctx, 31, 0x453540u);
    ctx->pc = 0x45353Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x453538u;
    // 0x45353c: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A4D0u, 0x453538u, 0x453540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453540u;
label_453540:
    // 0x453540: 0xc12995a  jal         func_4A6568
    ctx->pc = 0x453540u;
    SET_GPR_U32(ctx, 31, 0x453548u);
    ctx->pc = 0x453544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x453540u;
    // 0x453544: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6568u, 0x453540u, 0x453548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453548u;
label_453548:
    // 0x453548: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x453548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45354c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x45354cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x453550: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x453550u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453554: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x453554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453558: 0xc129c7a  jal         func_4A71E8
    ctx->pc = 0x453558u;
    SET_GPR_U32(ctx, 31, 0x453560u);
    ctx->pc = 0x45355Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x453558u;
    // 0x45355c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A71E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A71E8u, 0x453558u, 0x453560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453560u;
label_453560:
    // 0x453560: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x453560u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453564: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x453564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x453568: 0xc11e974  jal         func_47A5D0
    ctx->pc = 0x453568u;
    SET_GPR_U32(ctx, 31, 0x453570u);
    ctx->pc = 0x45356Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x453568u;
    // 0x45356c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A5D0u, 0x453568u, 0x453570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453570u;
label_453570:
    // 0x453570: 0x3c050052  lui         $a1, 0x52
    ctx->pc = 0x453570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
    // 0x453574: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x453574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x453578: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x453578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45357c: 0xc11e980  jal         func_47A600
    ctx->pc = 0x45357Cu;
    SET_GPR_U32(ctx, 31, 0x453584u);
    ctx->pc = 0x453580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45357Cu;
    // 0x453580: 0x24a5ad48  addiu       $a1, $a1, -0x52B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A600u, 0x45357Cu, 0x453584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453584u;
label_453584:
    // 0x453584: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x453584u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x453588: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x453588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45358c: 0x24c67750  addiu       $a2, $a2, 0x7750
    ctx->pc = 0x45358cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30544));
    // 0x453590: 0xc11e996  jal         func_47A658
    ctx->pc = 0x453590u;
    SET_GPR_U32(ctx, 31, 0x453598u);
    ctx->pc = 0x453594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x453590u;
    // 0x453594: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A658u, 0x453590u, 0x453598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453598u;
label_453598:
    // 0x453598: 0x3c060045  lui         $a2, 0x45
    ctx->pc = 0x453598u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)69 << 16));
    // 0x45359c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x45359cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4535a0: 0x24c63ab0  addiu       $a2, $a2, 0x3AB0
    ctx->pc = 0x4535a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15024));
    // 0x4535a4: 0xc11e996  jal         func_47A658
    ctx->pc = 0x4535A4u;
    SET_GPR_U32(ctx, 31, 0x4535ACu);
    ctx->pc = 0x4535A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4535A4u;
    // 0x4535a8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A658u, 0x4535A4u, 0x4535ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4535ACu;
label_4535ac:
    // 0x4535ac: 0x3c060045  lui         $a2, 0x45
    ctx->pc = 0x4535acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)69 << 16));
    // 0x4535b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4535b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4535b4: 0x24c62e60  addiu       $a2, $a2, 0x2E60
    ctx->pc = 0x4535b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11872));
    // 0x4535b8: 0xc11e996  jal         func_47A658
    ctx->pc = 0x4535B8u;
    SET_GPR_U32(ctx, 31, 0x4535C0u);
    ctx->pc = 0x4535BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4535B8u;
    // 0x4535bc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A658u, 0x4535B8u, 0x4535C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4535C0u;
label_4535c0:
    // 0x4535c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4535c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4535c4:
    // 0x4535c4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4535c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4535c8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4535c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4535cc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4535ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4535d0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4535d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4535d4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4535d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4535d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4535d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4535dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4535DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4535E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4535DCu;
        // 0x4535e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4535DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4535E4u;
    // 0x4535e4: 0x0  nop
    ctx->pc = 0x4535e4u;
    // NOP
    ctx->pc = 0x4535e8u;
}
