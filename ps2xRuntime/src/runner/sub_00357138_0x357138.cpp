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

// Function: sub_00357138
// Address: 0x357138 - 0x357188
void sub_00357138_0x357138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357138_0x357138");
#endif

    switch (ctx->pc) {
        case 0x357160u: goto label_357160;
        case 0x357170u: goto label_357170;
        default: break;
    }

    ctx->pc = 0x357138u;

    // 0x357138: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x357138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35713c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35713cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x357140: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x357140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x357144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x357144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x357148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35714c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35714cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357150: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x357150u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x357154: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x357154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x357158: 0xc1026b2  jal         func_409AC8
    ctx->pc = 0x357158u;
    SET_GPR_U32(ctx, 31, 0x357160u);
    ctx->pc = 0x35715Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357158u;
    // 0x35715c: 0x24a590a0  addiu       $a1, $a1, -0x6F60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409AC8u, 0x357158u, 0x357160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357160u;
label_357160:
    // 0x357160: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x357160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x357164: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x357164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357168: 0xc0c8e86  jal         func_323A18
    ctx->pc = 0x357168u;
    SET_GPR_U32(ctx, 31, 0x357170u);
    ctx->pc = 0x35716Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357168u;
    // 0x35716c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323A18u, 0x357168u, 0x357170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357170u;
label_357170:
    // 0x357170: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x357170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x357174: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x357174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357178: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x357178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35717c: 0x3e00008  jr          $ra
    ctx->pc = 0x35717Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35717Cu;
        // 0x357180: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35717Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357184u;
    // 0x357184: 0x0  nop
    ctx->pc = 0x357184u;
    // NOP
    ctx->pc = 0x357188u;
}
