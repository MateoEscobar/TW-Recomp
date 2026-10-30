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

// Function: sub_0036F160
// Address: 0x36f160 - 0x36f1b8
void sub_0036F160_0x36f160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F160_0x36f160");
#endif

    switch (ctx->pc) {
        case 0x36f180u: goto label_36f180;
        case 0x36f194u: goto label_36f194;
        case 0x36f1a0u: goto label_36f1a0;
        default: break;
    }

    ctx->pc = 0x36f160u;

    // 0x36f160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36f160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36f164: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36f164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36f168: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36f168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36f16c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36f16cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f170: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36f170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36f174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36f174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36f178: 0xc102488  jal         func_409220
    ctx->pc = 0x36F178u;
    SET_GPR_U32(ctx, 31, 0x36F180u);
    ctx->pc = 0x36F17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F178u;
    // 0x36f17c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36F178u, 0x36F180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F180u;
label_36f180:
    // 0x36f180: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36f180u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36f184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f188: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36f188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f18c: 0xc102488  jal         func_409220
    ctx->pc = 0x36F18Cu;
    SET_GPR_U32(ctx, 31, 0x36F194u);
    ctx->pc = 0x36F190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F18Cu;
    // 0x36f190: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36F18Cu, 0x36F194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F194u;
label_36f194:
    // 0x36f194: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36f194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f198: 0xc077f88  jal         func_1DFE20
    ctx->pc = 0x36F198u;
    SET_GPR_U32(ctx, 31, 0x36F1A0u);
    ctx->pc = 0x36F19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F198u;
    // 0x36f19c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFE20u, 0x36F198u, 0x36F1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F1A0u;
label_36f1a0:
    // 0x36f1a0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36f1a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36f1a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36f1a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f1a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36f1a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36f1ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36f1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f1b0: 0x3e00008  jr          $ra
    ctx->pc = 0x36F1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F1B0u;
        // 0x36f1b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F1B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F1B8u;
}
