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

// Function: sub_00227D28
// Address: 0x227d28 - 0x227d78
void sub_00227D28_0x227d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227D28_0x227d28");
#endif

    switch (ctx->pc) {
        case 0x227d58u: goto label_227d58;
        default: break;
    }

    ctx->pc = 0x227d28u;

    // 0x227d28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x227d2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x227d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x227d30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x227d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x227d34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227d38: 0x8c830280  lw          $v1, 0x280($a0)
    ctx->pc = 0x227d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 640)));
    // 0x227d3c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x227D3Cu;
    {
        const bool branch_taken_0x227d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x227D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D3Cu;
        // 0x227d40: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d3c) {
            ctx->pc = 0x227D60u;
            goto label_227d60;
        }
    }
    ctx->pc = 0x227D44u;
    // 0x227d44: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x227d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x227d48: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x227D48u;
    {
        const bool branch_taken_0x227d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D48u;
        // 0x227d4c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d48) {
            ctx->pc = 0x227D68u;
            goto label_227d68;
        }
    }
    ctx->pc = 0x227D50u;
    // 0x227d50: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x227D50u;
    SET_GPR_U32(ctx, 31, 0x227D58u);
    ctx->pc = 0x227D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227D50u;
    // 0x227d54: 0x3c050080  lui         $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x227D50u, 0x227D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227D58u;
label_227d58:
    // 0x227d58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x227D58u;
    {
        const bool branch_taken_0x227d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D58u;
        // 0x227d5c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d58) {
            ctx->pc = 0x227D68u;
            goto label_227d68;
        }
    }
    ctx->pc = 0x227D60u;
label_227d60:
    // 0x227d60: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x227d60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227d64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x227d64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_227d68:
    // 0x227d68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227d6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x227d6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227d70: 0x3e00008  jr          $ra
    ctx->pc = 0x227D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D70u;
        // 0x227d74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227D78u;
}
