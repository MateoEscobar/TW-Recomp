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

// Function: sub_0032C230
// Address: 0x32c230 - 0x32c288
void sub_0032C230_0x32c230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C230_0x32c230");
#endif

    switch (ctx->pc) {
        case 0x32c248u: goto label_32c248;
        case 0x32c254u: goto label_32c254;
        case 0x32c260u: goto label_32c260;
        case 0x32c268u: goto label_32c268;
        case 0x32c274u: goto label_32c274;
        default: break;
    }

    ctx->pc = 0x32c230u;

    // 0x32c230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32c230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32c234: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32c234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c238: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32c238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x32c23c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32c23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32c240: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x32C240u;
    SET_GPR_U32(ctx, 31, 0x32C248u);
    ctx->pc = 0x32C244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C240u;
    // 0x32c244: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x32C240u, 0x32C248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C248u;
label_32c248:
    // 0x32c248: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32c248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c24c: 0xc12e198  jal         func_4B8660
    ctx->pc = 0x32C24Cu;
    SET_GPR_U32(ctx, 31, 0x32C254u);
    ctx->pc = 0x32C250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C24Cu;
    // 0x32c250: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8660u, 0x32C24Cu, 0x32C254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C254u;
label_32c254:
    // 0x32c254: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32c254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c258: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x32C258u;
    SET_GPR_U32(ctx, 31, 0x32C260u);
    ctx->pc = 0x32C25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C258u;
    // 0x32c25c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x32C258u, 0x32C260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C260u;
label_32c260:
    // 0x32c260: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x32C260u;
    SET_GPR_U32(ctx, 31, 0x32C268u);
    ctx->pc = 0x32C264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C260u;
    // 0x32c264: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x32C260u, 0x32C268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C268u;
label_32c268:
    // 0x32c268: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32c268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c26c: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x32C26Cu;
    SET_GPR_U32(ctx, 31, 0x32C274u);
    ctx->pc = 0x32C270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C26Cu;
    // 0x32c270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x32C26Cu, 0x32C274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C274u;
label_32c274:
    // 0x32c274: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32c274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32c278: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32c278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32c27c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32c27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32c280: 0x3e00008  jr          $ra
    ctx->pc = 0x32C280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C280u;
        // 0x32c284: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C288u;
}
