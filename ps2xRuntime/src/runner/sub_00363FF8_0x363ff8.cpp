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

// Function: sub_00363FF8
// Address: 0x363ff8 - 0x364070
void sub_00363FF8_0x363ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363FF8_0x363ff8");
#endif

    switch (ctx->pc) {
        case 0x364020u: goto label_364020;
        case 0x364028u: goto label_364028;
        case 0x36403cu: goto label_36403c;
        case 0x364044u: goto label_364044;
        case 0x364050u: goto label_364050;
        default: break;
    }

    ctx->pc = 0x363ff8u;

    // 0x363ff8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x363ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x363ffc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x363ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364000: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x364000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x364004: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x364004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x364008: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x364008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36400c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36400cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364010: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x364010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x364014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x364014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x364018: 0xc102472  jal         func_4091C8
    ctx->pc = 0x364018u;
    SET_GPR_U32(ctx, 31, 0x364020u);
    ctx->pc = 0x36401Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364018u;
    // 0x36401c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x364018u, 0x364020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364020u;
label_364020:
    // 0x364020: 0xc10b108  jal         func_42C420
    ctx->pc = 0x364020u;
    SET_GPR_U32(ctx, 31, 0x364028u);
    ctx->pc = 0x364024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364020u;
    // 0x364024: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x364020u, 0x364028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364028u;
label_364028:
    // 0x364028: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x364028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36402c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36402cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x364030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364034: 0xc102472  jal         func_4091C8
    ctx->pc = 0x364034u;
    SET_GPR_U32(ctx, 31, 0x36403Cu);
    ctx->pc = 0x364038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364034u;
    // 0x364038: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x364034u, 0x36403Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36403Cu;
label_36403c:
    // 0x36403c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36403Cu;
    SET_GPR_U32(ctx, 31, 0x364044u);
    ctx->pc = 0x364040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36403Cu;
    // 0x364040: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36403Cu, 0x364044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364044u;
label_364044:
    // 0x364044: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x364044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364048: 0xc0b65f0  jal         func_2D97C0
    ctx->pc = 0x364048u;
    SET_GPR_U32(ctx, 31, 0x364050u);
    ctx->pc = 0x36404Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364048u;
    // 0x36404c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D97C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D97C0u, 0x364048u, 0x364050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364050u;
label_364050:
    // 0x364050: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x364050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x364054: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x364054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364058: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x364058u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36405c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x36405cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x364060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x364060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364064: 0x3e00008  jr          $ra
    ctx->pc = 0x364064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364064u;
        // 0x364068: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36406Cu;
    // 0x36406c: 0x0  nop
    ctx->pc = 0x36406cu;
    // NOP
    ctx->pc = 0x364070u;
}
