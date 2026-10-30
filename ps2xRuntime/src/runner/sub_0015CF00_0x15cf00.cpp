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

// Function: sub_0015CF00
// Address: 0x15cf00 - 0x15cf50
void sub_0015CF00_0x15cf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CF00_0x15cf00");
#endif

    switch (ctx->pc) {
        case 0x15cf28u: goto label_15cf28;
        default: break;
    }

    ctx->pc = 0x15cf00u;

    // 0x15cf00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15cf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15cf04: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15cf04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15cf08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15cf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15cf0c: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x15CF0Cu;
    {
        const bool branch_taken_0x15cf0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x15CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF0Cu;
        // 0x15cf10: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cf0c) {
            ctx->pc = 0x15CF40u;
            goto label_15cf40;
        }
    }
    ctx->pc = 0x15CF14u;
    // 0x15cf14: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x15CF14u;
    {
        const bool branch_taken_0x15cf14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF14u;
        // 0x15cf18: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cf14) {
            ctx->pc = 0x15CF40u;
            goto label_15cf40;
        }
    }
    ctx->pc = 0x15CF1Cu;
    // 0x15cf1c: 0x26105dc0  addiu       $s0, $s0, 0x5DC0
    ctx->pc = 0x15cf1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24000));
    // 0x15cf20: 0xc0557b6  jal         func_155ED8
    ctx->pc = 0x15CF20u;
    SET_GPR_U32(ctx, 31, 0x15CF28u);
    ctx->pc = 0x15CF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CF20u;
    // 0x15cf24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155ED8u, 0x15CF20u, 0x15CF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CF28u;
label_15cf28:
    // 0x15cf28: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x15cf28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x15cf2c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x15cf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x15cf30: 0x24638610  addiu       $v1, $v1, -0x79F0
    ctx->pc = 0x15cf30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936080));
    // 0x15cf34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15cf34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15cf38: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x15cf38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x15cf3c: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x15cf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_15cf40:
    // 0x15cf40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15cf40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15cf44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15cf44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cf48: 0x3e00008  jr          $ra
    ctx->pc = 0x15CF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF48u;
        // 0x15cf4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CF50u;
}
