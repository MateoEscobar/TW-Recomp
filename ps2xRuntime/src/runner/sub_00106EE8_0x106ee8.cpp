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

// Function: sub_00106EE8
// Address: 0x106ee8 - 0x106f40
void sub_00106EE8_0x106ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106EE8_0x106ee8");
#endif

    switch (ctx->pc) {
        case 0x106f10u: goto label_106f10;
        default: break;
    }

    ctx->pc = 0x106ee8u;

    // 0x106ee8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x106eec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x106eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x106ef0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x106ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x106ef4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x106ef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ef8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x106ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x106efc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x106EFCu;
    {
        const bool branch_taken_0x106efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EFCu;
        // 0x106f00: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106efc) {
            ctx->pc = 0x106F30u;
            goto label_106f30;
        }
    }
    ctx->pc = 0x106F04u;
    // 0x106f04: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x106f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x106f08: 0xc0e409a  jal         func_390268
    ctx->pc = 0x106F08u;
    SET_GPR_U32(ctx, 31, 0x106F10u);
    ctx->pc = 0x106F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106F08u;
    // 0x106f0c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x106F08u, 0x106F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106F10u;
label_106f10:
    // 0x106f10: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x106F10u;
    {
        const bool branch_taken_0x106f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106f10) {
            ctx->pc = 0x106F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106F10u;
            // 0x106f14: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106F34u;
            goto label_106f34;
        }
    }
    ctx->pc = 0x106F18u;
    // 0x106f18: 0x8c4200d4  lw          $v0, 0xD4($v0)
    ctx->pc = 0x106f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x106f1c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x106f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x106f20: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x106f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x106f24: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x106f24u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x106f28: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x106f28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x106f2c: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x106f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
label_106f30:
    // 0x106f30: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x106f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_106f34:
    // 0x106f34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x106f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106f38: 0x3e00008  jr          $ra
    ctx->pc = 0x106F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F38u;
        // 0x106f3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106F40u;
}
