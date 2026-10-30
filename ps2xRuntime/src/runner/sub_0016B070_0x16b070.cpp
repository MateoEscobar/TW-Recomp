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

// Function: sub_0016B070
// Address: 0x16b070 - 0x16b0b0
void sub_0016B070_0x16b070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B070_0x16b070");
#endif

    switch (ctx->pc) {
        case 0x16b0a0u: goto label_16b0a0;
        default: break;
    }

    ctx->pc = 0x16b070u;

    // 0x16b070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b074: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16b074u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16b078: 0x41c03  sra         $v1, $a0, 16
    ctx->pc = 0x16b078u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16b07c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b080: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16B080u;
    {
        const bool branch_taken_0x16b080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16B084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B080u;
        // 0x16b084: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b080) {
            ctx->pc = 0x16B0A0u;
            goto label_16b0a0;
        }
    }
    ctx->pc = 0x16B088u;
    // 0x16b088: 0x24020b10  addiu       $v0, $zero, 0xB10
    ctx->pc = 0x16b088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2832));
    // 0x16b08c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x16b08cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x16b090: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x16b090u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16b094: 0x24846e30  addiu       $a0, $a0, 0x6E30
    ctx->pc = 0x16b094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28208));
    // 0x16b098: 0xc05a39a  jal         func_168E68
    ctx->pc = 0x16B098u;
    SET_GPR_U32(ctx, 31, 0x16B0A0u);
    ctx->pc = 0x16B09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B098u;
    // 0x16b09c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168E68u, 0x16B098u, 0x16B0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B0A0u;
label_16b0a0:
    // 0x16b0a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b0a4: 0x3e00008  jr          $ra
    ctx->pc = 0x16B0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B0A4u;
        // 0x16b0a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B0A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B0ACu;
    // 0x16b0ac: 0x0  nop
    ctx->pc = 0x16b0acu;
    // NOP
    ctx->pc = 0x16b0b0u;
}
