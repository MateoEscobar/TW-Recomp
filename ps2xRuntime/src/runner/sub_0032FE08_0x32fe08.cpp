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

// Function: sub_0032FE08
// Address: 0x32fe08 - 0x32fe70
void sub_0032FE08_0x32fe08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FE08_0x32fe08");
#endif

    switch (ctx->pc) {
        case 0x32fe28u: goto label_32fe28;
        case 0x32fe34u: goto label_32fe34;
        case 0x32fe4cu: goto label_32fe4c;
        case 0x32fe58u: goto label_32fe58;
        default: break;
    }

    ctx->pc = 0x32fe08u;

    // 0x32fe08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32fe08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32fe0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32fe0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32fe10: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32fe10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x32fe14: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x32fe14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fe18: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x32fe18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x32fe1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32fe1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32fe20: 0xc0c9192  jal         func_324648
    ctx->pc = 0x32FE20u;
    SET_GPR_U32(ctx, 31, 0x32FE28u);
    ctx->pc = 0x32FE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FE20u;
    // 0x32fe24: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324648u, 0x32FE20u, 0x32FE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FE28u;
label_32fe28:
    // 0x32fe28: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x32fe28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32fe2c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x32FE2Cu;
    SET_GPR_U32(ctx, 31, 0x32FE34u);
    ctx->pc = 0x32FE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FE2Cu;
    // 0x32fe30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x32FE2Cu, 0x32FE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FE34u;
label_32fe34:
    // 0x32fe34: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32FE34u;
    {
        const bool branch_taken_0x32fe34 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x32FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE34u;
        // 0x32fe38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fe34) {
            ctx->pc = 0x32FE50u;
            goto label_32fe50;
        }
    }
    ctx->pc = 0x32FE3Cu;
    // 0x32fe3c: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x32fe3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x32fe40: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x32fe40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x32fe44: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x32FE44u;
    SET_GPR_U32(ctx, 31, 0x32FE4Cu);
    ctx->pc = 0x32FE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FE44u;
    // 0x32fe48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x32FE44u, 0x32FE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FE4Cu;
label_32fe4c:
    // 0x32fe4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32fe4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32fe50:
    // 0x32fe50: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x32FE50u;
    SET_GPR_U32(ctx, 31, 0x32FE58u);
    ctx->pc = 0x32FE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FE50u;
    // 0x32fe54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x32FE50u, 0x32FE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FE58u;
label_32fe58:
    // 0x32fe58: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x32fe58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32fe5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32fe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32fe60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32fe60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32fe64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32fe64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32fe68: 0x3e00008  jr          $ra
    ctx->pc = 0x32FE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE68u;
        // 0x32fe6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FE70u;
}
