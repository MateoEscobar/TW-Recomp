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

// Function: sub_0035B028
// Address: 0x35b028 - 0x35b0a0
void sub_0035B028_0x35b028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B028_0x35b028");
#endif

    switch (ctx->pc) {
        case 0x35b048u: goto label_35b048;
        case 0x35b050u: goto label_35b050;
        case 0x35b058u: goto label_35b058;
        case 0x35b064u: goto label_35b064;
        case 0x35b07cu: goto label_35b07c;
        case 0x35b088u: goto label_35b088;
        default: break;
    }

    ctx->pc = 0x35b028u;

    // 0x35b028: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35b028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35b02c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35b02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b030: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35b030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35b034: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35b034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b038: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35b038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35b03c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35b03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35b040: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35B040u;
    SET_GPR_U32(ctx, 31, 0x35B048u);
    ctx->pc = 0x35B044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B040u;
    // 0x35b044: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35B040u, 0x35B048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B048u;
label_35b048:
    // 0x35b048: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35B048u;
    SET_GPR_U32(ctx, 31, 0x35B050u);
    ctx->pc = 0x35B04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B048u;
    // 0x35b04c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35B048u, 0x35B050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B050u;
label_35b050:
    // 0x35b050: 0xc08d54c  jal         func_235530
    ctx->pc = 0x35B050u;
    SET_GPR_U32(ctx, 31, 0x35B058u);
    ctx->pc = 0x35B054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B050u;
    // 0x35b054: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235530u, 0x35B050u, 0x35B058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B058u;
label_35b058:
    // 0x35b058: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35b058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b05c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x35B05Cu;
    SET_GPR_U32(ctx, 31, 0x35B064u);
    ctx->pc = 0x35B060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B05Cu;
    // 0x35b060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x35B05Cu, 0x35B064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B064u;
label_35b064:
    // 0x35b064: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35B064u;
    {
        const bool branch_taken_0x35b064 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x35B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B064u;
        // 0x35b068: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b064) {
            ctx->pc = 0x35B080u;
            goto label_35b080;
        }
    }
    ctx->pc = 0x35B06Cu;
    // 0x35b06c: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x35b06cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x35b070: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x35b070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x35b074: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x35B074u;
    SET_GPR_U32(ctx, 31, 0x35B07Cu);
    ctx->pc = 0x35B078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B074u;
    // 0x35b078: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x35B074u, 0x35B07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B07Cu;
label_35b07c:
    // 0x35b07c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35b07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35b080:
    // 0x35b080: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x35B080u;
    SET_GPR_U32(ctx, 31, 0x35B088u);
    ctx->pc = 0x35B084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B080u;
    // 0x35b084: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x35B080u, 0x35B088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B088u;
label_35b088:
    // 0x35b088: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35b088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35b08c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b090: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35b090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b098: 0x3e00008  jr          $ra
    ctx->pc = 0x35B098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B098u;
        // 0x35b09c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B0A0u;
}
