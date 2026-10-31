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

// Function: sub_0027BA68
// Address: 0x27ba68 - 0x27bb28
void sub_0027BA68_0x27ba68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027BA68_0x27ba68");
#endif

    switch (ctx->pc) {
        case 0x27ba78u: goto label_27ba78;
        default: break;
    }

    ctx->pc = 0x27ba68u;

    // 0x27ba68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27ba68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27ba6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27ba6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27ba70: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27BA70u;
    SET_GPR_U32(ctx, 31, 0x27BA78u);
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27BA70u, 0x27BA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BA78u;
label_27ba78:
    // 0x27ba78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27ba78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ba7c: 0x2482fff6  addiu       $v0, $a0, -0xA
    ctx->pc = 0x27ba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967286));
    // 0x27ba80: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x27ba80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x27ba84: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x27BA84u;
    {
        const bool branch_taken_0x27ba84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA84u;
        // 0x27ba88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ba84) {
            ctx->pc = 0x27BB14u;
            goto label_27bb14;
        }
    }
    ctx->pc = 0x27BA8Cu;
    // 0x27ba8c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x27ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x27ba90: 0x10820020  beq         $a0, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x27BA90u;
    {
        const bool branch_taken_0x27ba90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27BA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA90u;
        // 0x27ba94: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ba90) {
            ctx->pc = 0x27BB14u;
            goto label_27bb14;
        }
    }
    ctx->pc = 0x27BA98u;
    // 0x27ba98: 0x1082001e  beq         $a0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x27BA98u;
    {
        const bool branch_taken_0x27ba98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BA98u;
        // 0x27ba9c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ba98) {
            ctx->pc = 0x27BB14u;
            goto label_27bb14;
        }
    }
    ctx->pc = 0x27BAA0u;
    // 0x27baa0: 0x1082001c  beq         $a0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x27BAA0u;
    {
        const bool branch_taken_0x27baa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BAA0u;
        // 0x27baa4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27baa0) {
            ctx->pc = 0x27BB14u;
            goto label_27bb14;
        }
    }
    ctx->pc = 0x27BAA8u;
    // 0x27baa8: 0x1082001a  beq         $a0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x27BAA8u;
    {
        const bool branch_taken_0x27baa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27BAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BAA8u;
        // 0x27baac: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27baa8) {
            ctx->pc = 0x27BB14u;
            goto label_27bb14;
        }
    }
    ctx->pc = 0x27BAB0u;
    // 0x27bab0: 0x10820018  beq         $a0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x27BAB0u;
    {
        const bool branch_taken_0x27bab0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27BAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BAB0u;
        // 0x27bab4: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bab0) {
            ctx->pc = 0x27BB14u;
            goto label_27bb14;
        }
    }
    ctx->pc = 0x27BAB8u;
    // 0x27bab8: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x27BAB8u;
    {
        const bool branch_taken_0x27bab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27BABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BAB8u;
        // 0x27babc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bab8) {
            ctx->pc = 0x27BB14u;
            goto label_27bb14;
        }
    }
    ctx->pc = 0x27BAC0u;
    // 0x27bac0: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x27BAC0u;
    {
        const bool branch_taken_0x27bac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x27BAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BAC0u;
        // 0x27bac4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bac0) {
            ctx->pc = 0x27BB14u;
            goto label_27bb14;
        }
    }
    ctx->pc = 0x27BAC8u;
    // 0x27bac8: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x27BAC8u;
    {
        const bool branch_taken_0x27bac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27BACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BAC8u;
        // 0x27bacc: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bac8) {
            ctx->pc = 0x27BB14u;
            goto label_27bb14;
        }
    }
    ctx->pc = 0x27BAD0u;
    // 0x27bad0: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x27BAD0u;
    {
        const bool branch_taken_0x27bad0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BAD0u;
        // 0x27bad4: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bad0) {
            ctx->pc = 0x27BB14u;
            goto label_27bb14;
        }
    }
    ctx->pc = 0x27BAD8u;
    // 0x27bad8: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x27BAD8u;
    {
        const bool branch_taken_0x27bad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27BADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BAD8u;
        // 0x27badc: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bad8) {
            ctx->pc = 0x27BB14u;
            goto label_27bb14;
        }
    }
    ctx->pc = 0x27BAE0u;
    // 0x27bae0: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27BAE0u;
    {
        const bool branch_taken_0x27bae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BAE0u;
        // 0x27bae4: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bae0) {
            ctx->pc = 0x27BB14u;
            goto label_27bb14;
        }
    }
    ctx->pc = 0x27BAE8u;
    // 0x27bae8: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27BAE8u;
    {
        const bool branch_taken_0x27bae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BAE8u;
        // 0x27baec: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bae8) {
            ctx->pc = 0x27BB14u;
            goto label_27bb14;
        }
    }
    ctx->pc = 0x27BAF0u;
    // 0x27baf0: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27BAF0u;
    {
        const bool branch_taken_0x27baf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BAF0u;
        // 0x27baf4: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27baf0) {
            ctx->pc = 0x27BB14u;
            goto label_27bb14;
        }
    }
    ctx->pc = 0x27BAF8u;
    // 0x27baf8: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27BAF8u;
    {
        const bool branch_taken_0x27baf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BAF8u;
        // 0x27bafc: 0x24020027  addiu       $v0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27baf8) {
            ctx->pc = 0x27BB14u;
            goto label_27bb14;
        }
    }
    ctx->pc = 0x27BB00u;
    // 0x27bb00: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27BB00u;
    {
        const bool branch_taken_0x27bb00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB00u;
        // 0x27bb04: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bb00) {
            ctx->pc = 0x27BB14u;
            goto label_27bb14;
        }
    }
    ctx->pc = 0x27BB08u;
    // 0x27bb08: 0x38830028  xori        $v1, $a0, 0x28
    ctx->pc = 0x27bb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)40);
    // 0x27bb0c: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x27bb0cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x27bb10: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x27bb10u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_27bb14:
    // 0x27bb14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27bb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bb18: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x27bb18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bb1c: 0x3e00008  jr          $ra
    ctx->pc = 0x27BB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BB1Cu;
        // 0x27bb20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BB24u;
    // 0x27bb24: 0x0  nop
    ctx->pc = 0x27bb24u;
    // NOP
    ctx->pc = 0x27bb28u;
}
