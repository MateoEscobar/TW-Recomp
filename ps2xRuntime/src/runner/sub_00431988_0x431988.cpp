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

// Function: sub_00431988
// Address: 0x431988 - 0x431a68
void sub_00431988_0x431988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00431988_0x431988");
#endif

    switch (ctx->pc) {
        case 0x4319b0u: goto label_4319b0;
        case 0x4319c4u: goto label_4319c4;
        case 0x4319e0u: goto label_4319e0;
        case 0x431a48u: goto label_431a48;
        default: break;
    }

    ctx->pc = 0x431988u;

    // 0x431988: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x431988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x43198c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x43198cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x431990: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x431990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x431994: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x431994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431998: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x431998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43199c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43199cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4319a0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4319a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4319a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4319a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4319a8: 0xc10eae4  jal         func_43AB90
    ctx->pc = 0x4319A8u;
    SET_GPR_U32(ctx, 31, 0x4319B0u);
    ctx->pc = 0x4319ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4319A8u;
    // 0x4319ac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43AB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43AB90u, 0x4319A8u, 0x4319B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4319B0u;
label_4319b0:
    // 0x4319b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4319b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4319b4: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x4319B4u;
    {
        const bool branch_taken_0x4319b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4319B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4319B4u;
        // 0x4319b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4319b4) {
            ctx->pc = 0x431A4Cu;
            goto label_431a4c;
        }
    }
    ctx->pc = 0x4319BCu;
    // 0x4319bc: 0xc10c606  jal         func_431818
    ctx->pc = 0x4319BCu;
    SET_GPR_U32(ctx, 31, 0x4319C4u);
    ctx->pc = 0x4319C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4319BCu;
    // 0x4319c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431818u, 0x4319BCu, 0x4319C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4319C4u;
label_4319c4:
    // 0x4319c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4319c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4319c8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4319C8u;
    {
        const bool branch_taken_0x4319c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4319CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4319C8u;
        // 0x4319cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4319c8) {
            ctx->pc = 0x4319F0u;
            goto label_4319f0;
        }
    }
    ctx->pc = 0x4319D0u;
    // 0x4319d0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x4319d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4319d4: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x4319d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x4319d8: 0xc10ea84  jal         func_43AA10
    ctx->pc = 0x4319D8u;
    SET_GPR_U32(ctx, 31, 0x4319E0u);
    ctx->pc = 0x4319DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4319D8u;
    // 0x4319dc: 0x240701b6  addiu       $a3, $zero, 0x1B6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 438));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43AA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43AA10u, 0x4319D8u, 0x4319E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4319E0u;
label_4319e0:
    // 0x4319e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4319e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4319e4: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x4319E4u;
    {
        const bool branch_taken_0x4319e4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x4319E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4319E4u;
        // 0x4319e8: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4319e4) {
            ctx->pc = 0x4319F8u;
            goto label_4319f8;
        }
    }
    ctx->pc = 0x4319ECu;
    // 0x4319ec: 0xa600000c  sh          $zero, 0xC($s0)
    ctx->pc = 0x4319ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
label_4319f0:
    // 0x4319f0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x4319F0u;
    {
        const bool branch_taken_0x4319f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4319F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4319F0u;
        // 0x4319f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4319f0) {
            ctx->pc = 0x431A4Cu;
            goto label_431a4c;
        }
    }
    ctx->pc = 0x4319F8u;
label_4319f8:
    // 0x4319f8: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x4319f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x4319fc: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x4319fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x431a00: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x431a00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x431a04: 0x244229c0  addiu       $v0, $v0, 0x29C0
    ctx->pc = 0x431a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10688));
    // 0x431a08: 0x24632a28  addiu       $v1, $v1, 0x2A28
    ctx->pc = 0x431a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10792));
    // 0x431a0c: 0x24842aa8  addiu       $a0, $a0, 0x2AA8
    ctx->pc = 0x431a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10920));
    // 0x431a10: 0x24a52b10  addiu       $a1, $a1, 0x2B10
    ctx->pc = 0x431a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11024));
    // 0x431a14: 0xa606000e  sh          $a2, 0xE($s0)
    ctx->pc = 0x431a14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x431a18: 0x32260100  andi        $a2, $s1, 0x100
    ctx->pc = 0x431a18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
    // 0x431a1c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x431a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x431a20: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x431a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x431a24: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x431a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
    // 0x431a28: 0xae05002c  sw          $a1, 0x2C($s0)
    ctx->pc = 0x431a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 5));
    // 0x431a2c: 0xa611000c  sh          $s1, 0xC($s0)
    ctx->pc = 0x431a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 17));
    // 0x431a30: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x431A30u;
    {
        const bool branch_taken_0x431a30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x431A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431A30u;
        // 0x431a34: 0xae10001c  sw          $s0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431a30) {
            ctx->pc = 0x431A48u;
            goto label_431a48;
        }
    }
    ctx->pc = 0x431A38u;
    // 0x431a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x431a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431a3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x431a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431a40: 0xc10c728  jal         func_431CA0
    ctx->pc = 0x431A40u;
    SET_GPR_U32(ctx, 31, 0x431A48u);
    ctx->pc = 0x431A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431A40u;
    // 0x431a44: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431CA0u, 0x431A40u, 0x431A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431A48u;
label_431a48:
    // 0x431a48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x431a48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_431a4c:
    // 0x431a4c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x431a4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x431a50: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x431a50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x431a54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x431a54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x431a58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x431a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x431a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x431A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x431A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431A5Cu;
        // 0x431a60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x431A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x431A64u;
    // 0x431a64: 0x0  nop
    ctx->pc = 0x431a64u;
    // NOP
    ctx->pc = 0x431a68u;
}
