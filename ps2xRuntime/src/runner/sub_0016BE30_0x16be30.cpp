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

// Function: sub_0016BE30
// Address: 0x16be30 - 0x16bee0
void sub_0016BE30_0x16be30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BE30_0x16be30");
#endif

    switch (ctx->pc) {
        case 0x16be68u: goto label_16be68;
        case 0x16be88u: goto label_16be88;
        case 0x16be90u: goto label_16be90;
        case 0x16be98u: goto label_16be98;
        case 0x16bea8u: goto label_16bea8;
        default: break;
    }

    ctx->pc = 0x16be30u;

    // 0x16be30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16be30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16be34: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16be34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16be38: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16be38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x16be3c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16be3cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16be40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16be40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16be44: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x16be44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be48: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x16be48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x16be4c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16be4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be50: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x16be50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x16be54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16be54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16be58: 0x10820019  beq         $a0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x16BE58u;
    {
        const bool branch_taken_0x16be58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16BE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE58u;
        // 0x16be5c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be58) {
            ctx->pc = 0x16BEC0u;
            goto label_16bec0;
        }
    }
    ctx->pc = 0x16BE60u;
    // 0x16be60: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16BE60u;
    SET_GPR_U32(ctx, 31, 0x16BE68u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16BE60u, 0x16BE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BE68u;
label_16be68:
    // 0x16be68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16be68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be6c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x16be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x16be70: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x16BE70u;
    {
        const bool branch_taken_0x16be70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE70u;
        // 0x16be74: 0x24930048  addiu       $s3, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be70) {
            ctx->pc = 0x16BEC0u;
            goto label_16bec0;
        }
    }
    ctx->pc = 0x16BE78u;
    // 0x16be78: 0x12880a  movz        $s1, $zero, $s2
    ctx->pc = 0x16be78u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x16be7c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16be7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16be80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be84: 0x0  nop
    ctx->pc = 0x16be84u;
    // NOP
label_16be88:
    // 0x16be88: 0xc137826  jal         func_4DE098
    ctx->pc = 0x16BE88u;
    SET_GPR_U32(ctx, 31, 0x16BE90u);
    ctx->pc = 0x16BE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BE88u;
    // 0x16be8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x16BE88u, 0x16BE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BE90u;
label_16be90:
    // 0x16be90: 0xc0e409a  jal         func_390268
    ctx->pc = 0x16BE90u;
    SET_GPR_U32(ctx, 31, 0x16BE98u);
    ctx->pc = 0x16BE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BE90u;
    // 0x16be94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16BE90u, 0x16BE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BE98u;
label_16be98:
    // 0x16be98: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x16BE98u;
    {
        const bool branch_taken_0x16be98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16be98) {
            ctx->pc = 0x16BE9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BE98u;
            // 0x16be9c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BEB4u;
            goto label_16beb4;
        }
    }
    ctx->pc = 0x16BEA0u;
    // 0x16bea0: 0xc087502  jal         func_21D408
    ctx->pc = 0x16BEA0u;
    SET_GPR_U32(ctx, 31, 0x16BEA8u);
    ctx->pc = 0x16BEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BEA0u;
    // 0x16bea4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x16BEA0u, 0x16BEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BEA8u;
label_16bea8:
    // 0x16bea8: 0xa05102d2  sb          $s1, 0x2D2($v0)
    ctx->pc = 0x16bea8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 722), (uint8_t)GPR_U32(ctx, 17));
    // 0x16beac: 0xa05202d1  sb          $s2, 0x2D1($v0)
    ctx->pc = 0x16beacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 721), (uint8_t)GPR_U32(ctx, 18));
    // 0x16beb0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16beb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16beb4:
    // 0x16beb4: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x16beb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x16beb8: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x16BEB8u;
    {
        const bool branch_taken_0x16beb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16beb8) {
            ctx->pc = 0x16BEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BEB8u;
            // 0x16bebc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16be88;
        }
    }
    ctx->pc = 0x16BEC0u;
label_16bec0:
    // 0x16bec0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x16bec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16bec4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16bec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16bec8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16bec8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16becc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x16beccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bed0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16bed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bed4: 0x3e00008  jr          $ra
    ctx->pc = 0x16BED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BED4u;
        // 0x16bed8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BEDCu;
    // 0x16bedc: 0x0  nop
    ctx->pc = 0x16bedcu;
    // NOP
    ctx->pc = 0x16bee0u;
}
