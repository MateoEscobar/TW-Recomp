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

// Function: sub_0036E050
// Address: 0x36e050 - 0x36e0b0
void sub_0036E050_0x36e050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E050_0x36e050");
#endif

    switch (ctx->pc) {
        case 0x36e068u: goto label_36e068;
        case 0x36e074u: goto label_36e074;
        case 0x36e08cu: goto label_36e08c;
        case 0x36e098u: goto label_36e098;
        default: break;
    }

    ctx->pc = 0x36e050u;

    // 0x36e050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36e050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36e054: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36e054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36e058: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36e058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36e05c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36e05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36e060: 0xc0e192c  jal         func_3864B0
    ctx->pc = 0x36E060u;
    SET_GPR_U32(ctx, 31, 0x36E068u);
    ctx->pc = 0x36E064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E060u;
    // 0x36e064: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3864B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3864B0u, 0x36E060u, 0x36E068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E068u;
label_36e068:
    // 0x36e068: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36e068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e06c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x36E06Cu;
    SET_GPR_U32(ctx, 31, 0x36E074u);
    ctx->pc = 0x36E070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E06Cu;
    // 0x36e070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x36E06Cu, 0x36E074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E074u;
label_36e074:
    // 0x36e074: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36E074u;
    {
        const bool branch_taken_0x36e074 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x36E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E074u;
        // 0x36e078: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e074) {
            ctx->pc = 0x36E090u;
            goto label_36e090;
        }
    }
    ctx->pc = 0x36E07Cu;
    // 0x36e07c: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x36e07cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x36e080: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x36e080u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x36e084: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x36E084u;
    SET_GPR_U32(ctx, 31, 0x36E08Cu);
    ctx->pc = 0x36E088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E084u;
    // 0x36e088: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x36E084u, 0x36E08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E08Cu;
label_36e08c:
    // 0x36e08c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36e08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36e090:
    // 0x36e090: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x36E090u;
    SET_GPR_U32(ctx, 31, 0x36E098u);
    ctx->pc = 0x36E094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E090u;
    // 0x36e094: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x36E090u, 0x36E098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E098u;
label_36e098:
    // 0x36e098: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36e098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36e09c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36e09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e0a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36e0a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36e0a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36e0a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x36E0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E0A8u;
        // 0x36e0ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E0B0u;
}
