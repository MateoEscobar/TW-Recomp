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

// Function: sub_00451BD8
// Address: 0x451bd8 - 0x451e60
void sub_00451BD8_0x451bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00451BD8_0x451bd8");
#endif

    switch (ctx->pc) {
        case 0x451c00u: goto label_451c00;
        case 0x451c14u: goto label_451c14;
        case 0x451c1cu: goto label_451c1c;
        case 0x451c40u: goto label_451c40;
        case 0x451c54u: goto label_451c54;
        case 0x451d78u: goto label_451d78;
        case 0x451d88u: goto label_451d88;
        case 0x451d98u: goto label_451d98;
        case 0x451da8u: goto label_451da8;
        case 0x451db8u: goto label_451db8;
        case 0x451dc0u: goto label_451dc0;
        case 0x451dd8u: goto label_451dd8;
        case 0x451de8u: goto label_451de8;
        case 0x451dfcu: goto label_451dfc;
        case 0x451e10u: goto label_451e10;
        case 0x451e24u: goto label_451e24;
        case 0x451e38u: goto label_451e38;
        default: break;
    }

    ctx->pc = 0x451bd8u;

    // 0x451bd8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x451bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x451bdc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x451bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x451be0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x451be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x451be4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x451be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x451be8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x451be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x451bec: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x451becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x451bf0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x451bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x451bf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x451bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x451bf8: 0xc1295ce  jal         func_4A5738
    ctx->pc = 0x451BF8u;
    SET_GPR_U32(ctx, 31, 0x451C00u);
    ctx->pc = 0x4A5738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5738u, 0x451BF8u, 0x451C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451C00u;
label_451c00:
    // 0x451c00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x451c00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451c04: 0x1200008d  beqz        $s0, . + 4 + (0x8D << 2)
    ctx->pc = 0x451C04u;
    {
        const bool branch_taken_0x451c04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x451C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451C04u;
        // 0x451c08: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451c04) {
            ctx->pc = 0x451E3Cu;
            goto label_451e3c;
        }
    }
    ctx->pc = 0x451C0Cu;
    // 0x451c0c: 0xc129ae6  jal         func_4A6B98
    ctx->pc = 0x451C0Cu;
    SET_GPR_U32(ctx, 31, 0x451C14u);
    ctx->pc = 0x451C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x451C0Cu;
    // 0x451c10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6B98u, 0x451C0Cu, 0x451C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451C14u;
label_451c14:
    // 0x451c14: 0xc11e8a0  jal         func_47A280
    ctx->pc = 0x451C14u;
    SET_GPR_U32(ctx, 31, 0x451C1Cu);
    ctx->pc = 0x451C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x451C14u;
    // 0x451c18: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A280u, 0x451C14u, 0x451C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451C1Cu;
label_451c1c:
    // 0x451c1c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x451c1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451c20: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x451C20u;
    {
        const bool branch_taken_0x451c20 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x451C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451C20u;
        // 0x451c24: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451c20) {
            ctx->pc = 0x451C30u;
            goto label_451c30;
        }
    }
    ctx->pc = 0x451C28u;
    // 0x451c28: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x451C28u;
    {
        const bool branch_taken_0x451c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x451C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451C28u;
        // 0x451c2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451c28) {
            ctx->pc = 0x451E3Cu;
            goto label_451e3c;
        }
    }
    ctx->pc = 0x451C30u;
label_451c30:
    // 0x451c30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x451c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451c34: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x451c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451c38: 0xc129b4a  jal         func_4A6D28
    ctx->pc = 0x451C38u;
    SET_GPR_U32(ctx, 31, 0x451C40u);
    ctx->pc = 0x451C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x451C38u;
    // 0x451c3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6D28u, 0x451C38u, 0x451C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451C40u;
label_451c40:
    // 0x451c40: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x451c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x451c44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x451c44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451c48: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x451c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451c4c: 0xc129c7a  jal         func_4A71E8
    ctx->pc = 0x451C4Cu;
    SET_GPR_U32(ctx, 31, 0x451C54u);
    ctx->pc = 0x451C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x451C4Cu;
    // 0x451c50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A71E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A71E8u, 0x451C4Cu, 0x451C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451C54u;
label_451c54:
    // 0x451c54: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x451c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x451c58: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x451c58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x451c5c: 0x3c0b0053  lui         $t3, 0x53
    ctx->pc = 0x451c5cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)83 << 16));
    // 0x451c60: 0x2468ea30  addiu       $t0, $v1, -0x15D0
    ctx->pc = 0x451c60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961712));
    // 0x451c64: 0x26079018  addiu       $a3, $s0, -0x6FE8
    ctx->pc = 0x451c64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938648));
    // 0x451c68: 0x69040007  ldl         $a0, 0x7($t0)
    ctx->pc = 0x451c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x451c6c: 0x6d040000  ldr         $a0, 0x0($t0)
    ctx->pc = 0x451c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x451c70: 0x6905000f  ldl         $a1, 0xF($t0)
    ctx->pc = 0x451c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x451c74: 0x6d050008  ldr         $a1, 0x8($t0)
    ctx->pc = 0x451c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x451c78: 0xb0e40007  sdl         $a0, 0x7($a3)
    ctx->pc = 0x451c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x451c7c: 0xb4e40000  sdr         $a0, 0x0($a3)
    ctx->pc = 0x451c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x451c80: 0xb0e5000f  sdl         $a1, 0xF($a3)
    ctx->pc = 0x451c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x451c84: 0xb4e50008  sdr         $a1, 0x8($a3)
    ctx->pc = 0x451c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x451c88: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x451c88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x451c8c: 0x3c0a0071  lui         $t2, 0x71
    ctx->pc = 0x451c8cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)113 << 16));
    // 0x451c90: 0x2563ea50  addiu       $v1, $t3, -0x15B0
    ctx->pc = 0x451c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961744));
    // 0x451c94: 0x24ce9008  addiu       $t6, $a2, -0x6FF8
    ctx->pc = 0x451c94u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938632));
    // 0x451c98: 0x686c0007  ldl         $t4, 0x7($v1)
    ctx->pc = 0x451c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x451c9c: 0x6c6c0000  ldr         $t4, 0x0($v1)
    ctx->pc = 0x451c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x451ca0: 0x686d000f  ldl         $t5, 0xF($v1)
    ctx->pc = 0x451ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x451ca4: 0x6c6d0008  ldr         $t5, 0x8($v1)
    ctx->pc = 0x451ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x451ca8: 0xb1cc0007  sdl         $t4, 0x7($t6)
    ctx->pc = 0x451ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x451cac: 0xb5cc0000  sdr         $t4, 0x0($t6)
    ctx->pc = 0x451cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x451cb0: 0xb1cd000f  sdl         $t5, 0xF($t6)
    ctx->pc = 0x451cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x451cb4: 0xb5cd0008  sdr         $t5, 0x8($t6)
    ctx->pc = 0x451cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x451cb8: 0x26109018  addiu       $s0, $s0, -0x6FE8
    ctx->pc = 0x451cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938648));
    // 0x451cbc: 0x24c69008  addiu       $a2, $a2, -0x6FF8
    ctx->pc = 0x451cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938632));
    // 0x451cc0: 0x25519038  addiu       $s1, $t2, -0x6FC8
    ctx->pc = 0x451cc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 10), 4294938680));
    // 0x451cc4: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x451cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x709020u));
    // 0x451cc8: 0x3c046c00  lui         $a0, 0x6C00
    ctx->pc = 0x451cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27648 << 16));
    // 0x451ccc: 0x8cc90008  lw          $t1, 0x8($a2)
    ctx->pc = 0x451cccu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x709010u));
    // 0x451cd0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x451cd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451cd4: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x451cd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x709040u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x709040u, _value); } while (0);
    // 0x451cd8: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x451cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x451cdc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x451cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x451ce0: 0x2562ea50  addiu       $v0, $t3, -0x15B0
    ctx->pc = 0x451ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961744));
    // 0x451ce4: 0x24ae9028  addiu       $t6, $a1, -0x6FD8
    ctx->pc = 0x451ce4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938664));
    // 0x451ce8: 0x684c0007  ldl         $t4, 0x7($v0)
    ctx->pc = 0x451ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x451cec: 0x6c4c0000  ldr         $t4, 0x0($v0)
    ctx->pc = 0x451cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x451cf0: 0x684d000f  ldl         $t5, 0xF($v0)
    ctx->pc = 0x451cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x451cf4: 0x6c4d0008  ldr         $t5, 0x8($v0)
    ctx->pc = 0x451cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x451cf8: 0xb1cc0007  sdl         $t4, 0x7($t6)
    ctx->pc = 0x451cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x451cfc: 0xb5cc0000  sdr         $t4, 0x0($t6)
    ctx->pc = 0x451cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x451d00: 0xb1cd000f  sdl         $t5, 0xF($t6)
    ctx->pc = 0x451d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x451d04: 0xb5cd0008  sdr         $t5, 0x8($t6)
    ctx->pc = 0x451d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x451d08: 0x24b29028  addiu       $s2, $a1, -0x6FD8
    ctx->pc = 0x451d08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938664));
    // 0x451d0c: 0x3463dfff  ori         $v1, $v1, 0xDFFF
    ctx->pc = 0x451d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57343);
    // 0x451d10: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x451d10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x451d14: 0x3529000d  ori         $t1, $t1, 0xD
    ctx->pc = 0x451d14u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)13);
    // 0x451d18: 0x248dea60  addiu       $t5, $a0, -0x15A0
    ctx->pc = 0x451d18u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x451d1c: 0x254c9038  addiu       $t4, $t2, -0x6FC8
    ctx->pc = 0x451d1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 4294938680));
    // 0x451d20: 0x69a50007  ldl         $a1, 0x7($t5)
    ctx->pc = 0x451d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x451d24: 0x6da50000  ldr         $a1, 0x0($t5)
    ctx->pc = 0x451d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x451d28: 0x69ab000f  ldl         $t3, 0xF($t5)
    ctx->pc = 0x451d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x451d2c: 0x6dab0008  ldr         $t3, 0x8($t5)
    ctx->pc = 0x451d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x451d30: 0xb1850007  sdl         $a1, 0x7($t4)
    ctx->pc = 0x451d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x451d34: 0xb5850000  sdr         $a1, 0x0($t4)
    ctx->pc = 0x451d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x451d38: 0xb18b000f  sdl         $t3, 0xF($t4)
    ctx->pc = 0x451d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x451d3c: 0xb58b0008  sdr         $t3, 0x8($t4)
    ctx->pc = 0x451d3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x451d40: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x451d40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x451d44: 0xacc90008  sw          $t1, 0x8($a2)
    ctx->pc = 0x451d44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 9));
    // 0x451d48: 0x34e7000d  ori         $a3, $a3, 0xD
    ctx->pc = 0x451d48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)13);
    // 0x451d4c: 0x3c086400  lui         $t0, 0x6400
    ctx->pc = 0x451d4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)25600 << 16));
    // 0x451d50: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x451d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x451d54: 0x3508000d  ori         $t0, $t0, 0xD
    ctx->pc = 0x451d54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)13);
    // 0x451d58: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x451d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
    // 0x451d5c: 0x3463000d  ori         $v1, $v1, 0xD
    ctx->pc = 0x451d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13);
    // 0x451d60: 0xae480008  sw          $t0, 0x8($s2)
    ctx->pc = 0x451d60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 8));
    // 0x451d64: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x451d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451d68: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x451d68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x451d6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x451d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451d70: 0xc11e802  jal         func_47A008
    ctx->pc = 0x451D70u;
    SET_GPR_U32(ctx, 31, 0x451D78u);
    ctx->pc = 0x451D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x451D70u;
    // 0x451d74: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A008u, 0x451D70u, 0x451D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451D78u;
label_451d78:
    // 0x451d78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x451d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451d7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x451d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451d80: 0xc11e802  jal         func_47A008
    ctx->pc = 0x451D80u;
    SET_GPR_U32(ctx, 31, 0x451D88u);
    ctx->pc = 0x451D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x451D80u;
    // 0x451d84: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A008u, 0x451D80u, 0x451D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451D88u;
label_451d88:
    // 0x451d88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x451d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451d8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x451d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451d90: 0xc11e802  jal         func_47A008
    ctx->pc = 0x451D90u;
    SET_GPR_U32(ctx, 31, 0x451D98u);
    ctx->pc = 0x451D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x451D90u;
    // 0x451d94: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A008u, 0x451D90u, 0x451D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451D98u;
label_451d98:
    // 0x451d98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x451d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451d9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x451d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451da0: 0xc11e802  jal         func_47A008
    ctx->pc = 0x451DA0u;
    SET_GPR_U32(ctx, 31, 0x451DA8u);
    ctx->pc = 0x451DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x451DA0u;
    // 0x451da4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A008u, 0x451DA0u, 0x451DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451DA8u;
label_451da8:
    // 0x451da8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x451da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451dac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x451dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x451db0: 0xc11e934  jal         func_47A4D0
    ctx->pc = 0x451DB0u;
    SET_GPR_U32(ctx, 31, 0x451DB8u);
    ctx->pc = 0x451DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x451DB0u;
    // 0x451db4: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A4D0u, 0x451DB0u, 0x451DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451DB8u;
label_451db8:
    // 0x451db8: 0xc12995a  jal         func_4A6568
    ctx->pc = 0x451DB8u;
    SET_GPR_U32(ctx, 31, 0x451DC0u);
    ctx->pc = 0x451DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x451DB8u;
    // 0x451dbc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6568u, 0x451DB8u, 0x451DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451DC0u;
label_451dc0:
    // 0x451dc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x451dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451dc4: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x451dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x451dc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x451dc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451dcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x451dccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451dd0: 0xc129c7a  jal         func_4A71E8
    ctx->pc = 0x451DD0u;
    SET_GPR_U32(ctx, 31, 0x451DD8u);
    ctx->pc = 0x451DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x451DD0u;
    // 0x451dd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A71E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A71E8u, 0x451DD0u, 0x451DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451DD8u;
label_451dd8:
    // 0x451dd8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x451dd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451ddc: 0x240500d4  addiu       $a1, $zero, 0xD4
    ctx->pc = 0x451ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x451de0: 0xc11e974  jal         func_47A5D0
    ctx->pc = 0x451DE0u;
    SET_GPR_U32(ctx, 31, 0x451DE8u);
    ctx->pc = 0x451DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x451DE0u;
    // 0x451de4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A5D0u, 0x451DE0u, 0x451DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451DE8u;
label_451de8:
    // 0x451de8: 0x3c050052  lui         $a1, 0x52
    ctx->pc = 0x451de8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
    // 0x451dec: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x451decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x451df0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x451df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451df4: 0xc11e980  jal         func_47A600
    ctx->pc = 0x451DF4u;
    SET_GPR_U32(ctx, 31, 0x451DFCu);
    ctx->pc = 0x451DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x451DF4u;
    // 0x451df8: 0x24a5ad38  addiu       $a1, $a1, -0x52C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A600u, 0x451DF4u, 0x451DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451DFCu;
label_451dfc:
    // 0x451dfc: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x451dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x451e00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x451e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451e04: 0x24c67750  addiu       $a2, $a2, 0x7750
    ctx->pc = 0x451e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30544));
    // 0x451e08: 0xc11e996  jal         func_47A658
    ctx->pc = 0x451E08u;
    SET_GPR_U32(ctx, 31, 0x451E10u);
    ctx->pc = 0x451E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x451E08u;
    // 0x451e0c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A658u, 0x451E08u, 0x451E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451E10u;
label_451e10:
    // 0x451e10: 0x3c060045  lui         $a2, 0x45
    ctx->pc = 0x451e10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)69 << 16));
    // 0x451e14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x451e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451e18: 0x24c62670  addiu       $a2, $a2, 0x2670
    ctx->pc = 0x451e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9840));
    // 0x451e1c: 0xc11e996  jal         func_47A658
    ctx->pc = 0x451E1Cu;
    SET_GPR_U32(ctx, 31, 0x451E24u);
    ctx->pc = 0x451E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x451E1Cu;
    // 0x451e20: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A658u, 0x451E1Cu, 0x451E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451E24u;
label_451e24:
    // 0x451e24: 0x3c060045  lui         $a2, 0x45
    ctx->pc = 0x451e24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)69 << 16));
    // 0x451e28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x451e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451e2c: 0x24c61680  addiu       $a2, $a2, 0x1680
    ctx->pc = 0x451e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5760));
    // 0x451e30: 0xc11e996  jal         func_47A658
    ctx->pc = 0x451E30u;
    SET_GPR_U32(ctx, 31, 0x451E38u);
    ctx->pc = 0x451E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x451E30u;
    // 0x451e34: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A658u, 0x451E30u, 0x451E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451E38u;
label_451e38:
    // 0x451e38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x451e38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_451e3c:
    // 0x451e3c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x451e3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x451e40: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x451e40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x451e44: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x451e44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x451e48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x451e48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x451e4c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x451e4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x451e50: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x451e50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x451e54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x451e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x451e58: 0x3e00008  jr          $ra
    ctx->pc = 0x451E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x451E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451E58u;
        // 0x451e5c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x451E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x451E60u;
}
