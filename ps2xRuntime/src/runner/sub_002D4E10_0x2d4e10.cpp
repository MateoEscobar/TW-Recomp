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

// Function: sub_002D4E10
// Address: 0x2d4e10 - 0x2d4f00
void sub_002D4E10_0x2d4e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4E10_0x2d4e10");
#endif

    switch (ctx->pc) {
        case 0x2d4e84u: goto label_2d4e84;
        case 0x2d4ea0u: goto label_2d4ea0;
        case 0x2d4eb0u: goto label_2d4eb0;
        case 0x2d4ec0u: goto label_2d4ec0;
        case 0x2d4ed0u: goto label_2d4ed0;
        case 0x2d4edcu: goto label_2d4edc;
        default: break;
    }

    ctx->pc = 0x2d4e10u;

    // 0x2d4e10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d4e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d4e14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d4e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4e18: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2d4e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2d4e1c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d4e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2d4e20: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d4e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d4e24: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d4e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d4e28: 0x14a30027  bne         $a1, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2D4E28u;
    {
        const bool branch_taken_0x2d4e28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D4E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4E28u;
        // 0x2d4e2c: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4e28) {
            ctx->pc = 0x2D4EC8u;
            goto label_2d4ec8;
        }
    }
    ctx->pc = 0x2D4E30u;
    // 0x2d4e30: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2d4e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x2d4e34: 0x3c030056  lui         $v1, 0x56
    ctx->pc = 0x2d4e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)86 << 16));
    // 0x2d4e38: 0x244863d0  addiu       $t0, $v0, 0x63D0
    ctx->pc = 0x2d4e38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 25552));
    // 0x2d4e3c: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x2d4e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2d4e40: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x2d4e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2d4e44: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x2d4e44u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5663D8u));
    // 0x2d4e48: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x2d4e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d4e4c: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x2d4e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d4e50: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x2d4e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x2d4e54: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2d4e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2d4e58: 0x24686410  addiu       $t0, $v1, 0x6410
    ctx->pc = 0x2d4e58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 25616));
    // 0x2d4e5c: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x2d4e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d4e60: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x2d4e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d4e64: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x2d4e64u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x566418u));
    // 0x2d4e68: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2d4e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d4e6c: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2d4e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d4e70: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x2d4e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x2d4e74: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2d4e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d4e78: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2d4e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2d4e7c: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2D4E7Cu;
    SET_GPR_U32(ctx, 31, 0x2D4E84u);
    ctx->pc = 0x2D4E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4E7Cu;
    // 0x2d4e80: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2D4E7Cu, 0x2D4E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4E84u;
label_2d4e84:
    // 0x2d4e84: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x2d4e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2d4e88: 0x26240468  addiu       $a0, $s1, 0x468
    ctx->pc = 0x2d4e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1128));
    // 0x2d4e8c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2d4e8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d4e90: 0x240602a0  addiu       $a2, $zero, 0x2A0
    ctx->pc = 0x2d4e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x2d4e94: 0x3a3800a  movz        $s0, $sp, $v1
    ctx->pc = 0x2d4e94u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 29));
    // 0x2d4e98: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2D4E98u;
    SET_GPR_U32(ctx, 31, 0x2D4EA0u);
    ctx->pc = 0x2D4E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4E98u;
    // 0x2d4e9c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2D4E98u, 0x2D4EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4EA0u;
label_2d4ea0:
    // 0x2d4ea0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2d4ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d4ea4: 0x26240490  addiu       $a0, $s1, 0x490
    ctx->pc = 0x2d4ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
    // 0x2d4ea8: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2D4EA8u;
    SET_GPR_U32(ctx, 31, 0x2D4EB0u);
    ctx->pc = 0x2D4EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4EA8u;
    // 0x2d4eac: 0x2406029f  addiu       $a2, $zero, 0x29F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 671));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2D4EA8u, 0x2D4EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4EB0u;
label_2d4eb0:
    // 0x2d4eb0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2d4eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d4eb4: 0x262404b8  addiu       $a0, $s1, 0x4B8
    ctx->pc = 0x2d4eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1208));
    // 0x2d4eb8: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2D4EB8u;
    SET_GPR_U32(ctx, 31, 0x2D4EC0u);
    ctx->pc = 0x2D4EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4EB8u;
    // 0x2d4ebc: 0x240602a1  addiu       $a2, $zero, 0x2A1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2D4EB8u, 0x2D4EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4EC0u;
label_2d4ec0:
    // 0x2d4ec0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D4EC0u;
    {
        const bool branch_taken_0x2d4ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4EC0u;
        // 0x2d4ec4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4ec0) {
            ctx->pc = 0x2D4EECu;
            goto label_2d4eec;
        }
    }
    ctx->pc = 0x2D4EC8u;
label_2d4ec8:
    // 0x2d4ec8: 0x263003c8  addiu       $s0, $s1, 0x3C8
    ctx->pc = 0x2d4ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 968));
    // 0x2d4ecc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d4eccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d4ed0:
    // 0x2d4ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d4ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4ed4: 0xc042f3e  jal         func_10BCF8
    ctx->pc = 0x2D4ED4u;
    SET_GPR_U32(ctx, 31, 0x2D4EDCu);
    ctx->pc = 0x2D4ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4ED4u;
    // 0x2d4ed8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BCF8u, 0x2D4ED4u, 0x2D4EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4EDCu;
label_2d4edc:
    // 0x2d4edc: 0x2e220007  sltiu       $v0, $s1, 0x7
    ctx->pc = 0x2d4edcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2d4ee0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D4EE0u;
    {
        const bool branch_taken_0x2d4ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4EE0u;
        // 0x2d4ee4: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4ee0) {
            ctx->pc = 0x2D4ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d4ed0;
        }
    }
    ctx->pc = 0x2D4EE8u;
    // 0x2d4ee8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2d4ee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d4eec:
    // 0x2d4eec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d4eecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d4ef0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d4ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4EF4u;
        // 0x2d4ef8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4EFCu;
    // 0x2d4efc: 0x0  nop
    ctx->pc = 0x2d4efcu;
    // NOP
    ctx->pc = 0x2d4f00u;
}
