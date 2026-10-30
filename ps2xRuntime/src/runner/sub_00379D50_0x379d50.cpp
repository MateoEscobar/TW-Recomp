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

// Function: sub_00379D50
// Address: 0x379d50 - 0x379dc8
void sub_00379D50_0x379d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379D50_0x379d50");
#endif

    switch (ctx->pc) {
        case 0x379d70u: goto label_379d70;
        case 0x379d78u: goto label_379d78;
        case 0x379d80u: goto label_379d80;
        case 0x379d8cu: goto label_379d8c;
        case 0x379da4u: goto label_379da4;
        case 0x379db0u: goto label_379db0;
        default: break;
    }

    ctx->pc = 0x379d50u;

    // 0x379d50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x379d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x379d54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x379d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379d58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x379d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x379d5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x379d5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379d60: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x379d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x379d64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x379d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x379d68: 0xc102472  jal         func_4091C8
    ctx->pc = 0x379D68u;
    SET_GPR_U32(ctx, 31, 0x379D70u);
    ctx->pc = 0x379D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379D68u;
    // 0x379d6c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x379D68u, 0x379D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379D70u;
label_379d70:
    // 0x379d70: 0xc10b108  jal         func_42C420
    ctx->pc = 0x379D70u;
    SET_GPR_U32(ctx, 31, 0x379D78u);
    ctx->pc = 0x379D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379D70u;
    // 0x379d74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x379D70u, 0x379D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379D78u;
label_379d78:
    // 0x379d78: 0xc0e5d00  jal         func_397400
    ctx->pc = 0x379D78u;
    SET_GPR_U32(ctx, 31, 0x379D80u);
    ctx->pc = 0x379D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379D78u;
    // 0x379d7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397400u, 0x379D78u, 0x379D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379D80u;
label_379d80:
    // 0x379d80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x379d80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379d84: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x379D84u;
    SET_GPR_U32(ctx, 31, 0x379D8Cu);
    ctx->pc = 0x379D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379D84u;
    // 0x379d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x379D84u, 0x379D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379D8Cu;
label_379d8c:
    // 0x379d8c: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x379D8Cu;
    {
        const bool branch_taken_0x379d8c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x379D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379D8Cu;
        // 0x379d90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379d8c) {
            ctx->pc = 0x379DA8u;
            goto label_379da8;
        }
    }
    ctx->pc = 0x379D94u;
    // 0x379d94: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x379d94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x379d98: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x379d98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x379d9c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x379D9Cu;
    SET_GPR_U32(ctx, 31, 0x379DA4u);
    ctx->pc = 0x379DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379D9Cu;
    // 0x379da0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x379D9Cu, 0x379DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379DA4u;
label_379da4:
    // 0x379da4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x379da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_379da8:
    // 0x379da8: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x379DA8u;
    SET_GPR_U32(ctx, 31, 0x379DB0u);
    ctx->pc = 0x379DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379DA8u;
    // 0x379dac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x379DA8u, 0x379DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379DB0u;
label_379db0:
    // 0x379db0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x379db0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379db4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x379db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379db8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x379db8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379dbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x379dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x379DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379DC0u;
        // 0x379dc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379DC8u;
}
