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

// Function: sub_0038E030
// Address: 0x38e030 - 0x38e068
void sub_0038E030_0x38e030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E030_0x38e030");
#endif

    switch (ctx->pc) {
        case 0x38e050u: goto label_38e050;
        default: break;
    }

    ctx->pc = 0x38e030u;

    // 0x38e030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38e030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38e034: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x38e034u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x38e038: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x38e038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x38e03c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x38e03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x38e040: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38e040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e044: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38e044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38e048: 0xc0e4088  jal         func_390220
    ctx->pc = 0x38E048u;
    SET_GPR_U32(ctx, 31, 0x38E050u);
    ctx->pc = 0x38E04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E048u;
    // 0x38e04c: 0x58403  sra         $s0, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390220u, 0x38E048u, 0x38E050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E050u;
label_38e050:
    // 0x38e050: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x38E050u;
    {
        const bool branch_taken_0x38e050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38e050) {
            ctx->pc = 0x38E054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38E050u;
            // 0x38e054: 0xa45012d8  sh          $s0, 0x12D8($v0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 2), 4824), (uint16_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38E058u;
            goto label_38e058;
        }
    }
    ctx->pc = 0x38E058u;
label_38e058:
    // 0x38e058: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x38e058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38e05c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38e05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38e060: 0x3e00008  jr          $ra
    ctx->pc = 0x38E060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E060u;
        // 0x38e064: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E068u;
}
