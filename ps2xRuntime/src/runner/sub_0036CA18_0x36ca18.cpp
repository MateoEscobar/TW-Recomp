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

// Function: sub_0036CA18
// Address: 0x36ca18 - 0x36ca88
void sub_0036CA18_0x36ca18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036CA18_0x36ca18");
#endif

    switch (ctx->pc) {
        case 0x36ca38u: goto label_36ca38;
        case 0x36ca40u: goto label_36ca40;
        case 0x36ca48u: goto label_36ca48;
        case 0x36ca5cu: goto label_36ca5c;
        case 0x36ca6cu: goto label_36ca6c;
        default: break;
    }

    ctx->pc = 0x36ca18u;

    // 0x36ca18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36ca18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36ca1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36ca1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ca20: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36ca20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36ca24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36ca24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ca28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36ca28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36ca2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36ca2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36ca30: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36CA30u;
    SET_GPR_U32(ctx, 31, 0x36CA38u);
    ctx->pc = 0x36CA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CA30u;
    // 0x36ca34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36CA30u, 0x36CA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CA38u;
label_36ca38:
    // 0x36ca38: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36CA38u;
    SET_GPR_U32(ctx, 31, 0x36CA40u);
    ctx->pc = 0x36CA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CA38u;
    // 0x36ca3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36CA38u, 0x36CA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CA40u;
label_36ca40:
    // 0x36ca40: 0xc0e1694  jal         func_385A50
    ctx->pc = 0x36CA40u;
    SET_GPR_U32(ctx, 31, 0x36CA48u);
    ctx->pc = 0x36CA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CA40u;
    // 0x36ca44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385A50u, 0x36CA40u, 0x36CA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CA48u;
label_36ca48:
    // 0x36ca48: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x36ca48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x36ca4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36ca4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ca50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36ca50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ca54: 0xc1026b2  jal         func_409AC8
    ctx->pc = 0x36CA54u;
    SET_GPR_U32(ctx, 31, 0x36CA5Cu);
    ctx->pc = 0x36CA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CA54u;
    // 0x36ca58: 0x24a590b0  addiu       $a1, $a1, -0x6F50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409AC8u, 0x36CA54u, 0x36CA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CA5Cu;
label_36ca5c:
    // 0x36ca5c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x36ca5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ca60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36ca60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ca64: 0xc10254e  jal         func_409538
    ctx->pc = 0x36CA64u;
    SET_GPR_U32(ctx, 31, 0x36CA6Cu);
    ctx->pc = 0x36CA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CA64u;
    // 0x36ca68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409538u, 0x36CA64u, 0x36CA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CA6Cu;
label_36ca6c:
    // 0x36ca6c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36ca6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36ca70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ca74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36ca74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36ca78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36ca78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ca7c: 0x3e00008  jr          $ra
    ctx->pc = 0x36CA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CA7Cu;
        // 0x36ca80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CA84u;
    // 0x36ca84: 0x0  nop
    ctx->pc = 0x36ca84u;
    // NOP
    ctx->pc = 0x36ca88u;
}
