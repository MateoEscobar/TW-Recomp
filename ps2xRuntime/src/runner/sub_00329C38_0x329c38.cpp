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

// Function: sub_00329C38
// Address: 0x329c38 - 0x329ca0
void sub_00329C38_0x329c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329C38_0x329c38");
#endif

    switch (ctx->pc) {
        case 0x329c60u: goto label_329c60;
        case 0x329c80u: goto label_329c80;
        default: break;
    }

    ctx->pc = 0x329c38u;

    // 0x329c38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x329c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x329c3c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x329c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x329c40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x329c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x329c44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x329c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x329c48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x329c48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329c4c: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x329c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x329c50: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x329C50u;
    {
        const bool branch_taken_0x329c50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x329C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C50u;
        // 0x329c54: 0x26300024  addiu       $s0, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329c50) {
            ctx->pc = 0x329C8Cu;
            goto label_329c8c;
        }
    }
    ctx->pc = 0x329C58u;
    // 0x329c58: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x329c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x329c5c: 0x0  nop
    ctx->pc = 0x329c5cu;
    // NOP
label_329c60:
    // 0x329c60: 0x50450004  beql        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x329C60u;
    {
        const bool branch_taken_0x329c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x329c60) {
            ctx->pc = 0x329C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329C60u;
            // 0x329c64: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329C74u;
            goto label_329c74;
        }
    }
    ctx->pc = 0x329C68u;
    // 0x329c68: 0x24b00004  addiu       $s0, $a1, 0x4
    ctx->pc = 0x329c68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x329c6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x329C6Cu;
    {
        const bool branch_taken_0x329c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C6Cu;
        // 0x329c70: 0xaca50008  sw          $a1, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329c6c) {
            ctx->pc = 0x329C80u;
            goto label_329c80;
        }
    }
    ctx->pc = 0x329C74u;
label_329c74:
    // 0x329c74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x329c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329c78: 0xc0ca546  jal         func_329518
    ctx->pc = 0x329C78u;
    SET_GPR_U32(ctx, 31, 0x329C80u);
    ctx->pc = 0x329C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329C78u;
    // 0x329c7c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329518u, 0x329C78u, 0x329C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329C80u;
label_329c80:
    // 0x329c80: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x329c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x329c84: 0x54a0fff6  bnel        $a1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x329C84u;
    {
        const bool branch_taken_0x329c84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x329c84) {
            ctx->pc = 0x329C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329C84u;
            // 0x329c88: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329c60;
        }
    }
    ctx->pc = 0x329C8Cu;
label_329c8c:
    // 0x329c8c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x329c8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x329c90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x329c90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329c94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329c98: 0x3e00008  jr          $ra
    ctx->pc = 0x329C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C98u;
        // 0x329c9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329CA0u;
}
