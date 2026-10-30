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

// Function: sub_00359B90
// Address: 0x359b90 - 0x359bf0
void sub_00359B90_0x359b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359B90_0x359b90");
#endif

    switch (ctx->pc) {
        case 0x359bb0u: goto label_359bb0;
        case 0x359bb8u: goto label_359bb8;
        case 0x359bccu: goto label_359bcc;
        case 0x359bd8u: goto label_359bd8;
        default: break;
    }

    ctx->pc = 0x359b90u;

    // 0x359b90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x359b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x359b94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x359b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359b98: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x359b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x359b9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x359b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359ba0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x359ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x359ba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359ba8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x359BA8u;
    SET_GPR_U32(ctx, 31, 0x359BB0u);
    ctx->pc = 0x359BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359BA8u;
    // 0x359bac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x359BA8u, 0x359BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359BB0u;
label_359bb0:
    // 0x359bb0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x359BB0u;
    SET_GPR_U32(ctx, 31, 0x359BB8u);
    ctx->pc = 0x359BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359BB0u;
    // 0x359bb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x359BB0u, 0x359BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359BB8u;
label_359bb8:
    // 0x359bb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x359bb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x359bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359bc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x359bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359bc4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x359BC4u;
    SET_GPR_U32(ctx, 31, 0x359BCCu);
    ctx->pc = 0x359BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359BC4u;
    // 0x359bc8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x359BC4u, 0x359BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359BCCu;
label_359bcc:
    // 0x359bcc: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x359bccu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x359bd0: 0xc08d7c8  jal         func_235F20
    ctx->pc = 0x359BD0u;
    SET_GPR_U32(ctx, 31, 0x359BD8u);
    ctx->pc = 0x359BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359BD0u;
    // 0x359bd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235F20u, 0x359BD0u, 0x359BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359BD8u;
label_359bd8:
    // 0x359bd8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x359bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x359bdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x359bdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359be0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x359be0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359be4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359be8: 0x3e00008  jr          $ra
    ctx->pc = 0x359BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359BE8u;
        // 0x359bec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359BF0u;
}
