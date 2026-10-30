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

// Function: sub_001DF448
// Address: 0x1df448 - 0x1df4b0
void sub_001DF448_0x1df448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF448_0x1df448");
#endif

    switch (ctx->pc) {
        case 0x1df46cu: goto label_1df46c;
        case 0x1df480u: goto label_1df480;
        case 0x1df48cu: goto label_1df48c;
        default: break;
    }

    ctx->pc = 0x1df448u;

    // 0x1df448: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1df448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1df44c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1df44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df450: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1df450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1df454: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1df454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1df458: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1df458u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1df45c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1df45cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df460: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1df460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1df464: 0xc1066b0  jal         func_419AC0
    ctx->pc = 0x1DF464u;
    SET_GPR_U32(ctx, 31, 0x1DF46Cu);
    ctx->pc = 0x1DF468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF464u;
    // 0x1df468: 0x8e04489c  lw          $a0, 0x489C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419AC0u, 0x1DF464u, 0x1DF46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF46Cu;
label_1df46c:
    // 0x1df46c: 0x8e02489c  lw          $v0, 0x489C($s0)
    ctx->pc = 0x1df46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    // 0x1df470: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1df470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df474: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1df474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df478: 0xc13a1c0  jal         func_4E8700
    ctx->pc = 0x1DF478u;
    SET_GPR_U32(ctx, 31, 0x1DF480u);
    ctx->pc = 0x1DF47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF478u;
    // 0x1df47c: 0xac400158  sw          $zero, 0x158($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E8700u, 0x1DF478u, 0x1DF480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF480u;
label_1df480:
    // 0x1df480: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x1df480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    // 0x1df484: 0xc10690c  jal         func_41A430
    ctx->pc = 0x1DF484u;
    SET_GPR_U32(ctx, 31, 0x1DF48Cu);
    ctx->pc = 0x1DF488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF484u;
    // 0x1df488: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A430u, 0x1DF484u, 0x1DF48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF48Cu;
label_1df48c:
    // 0x1df48c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1df48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df490: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1df490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df494: 0xae221b98  sw          $v0, 0x1B98($s1)
    ctx->pc = 0x1df494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7064), GPR_U32(ctx, 2));
    // 0x1df498: 0xae221b70  sw          $v0, 0x1B70($s1)
    ctx->pc = 0x1df498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7024), GPR_U32(ctx, 2));
    // 0x1df49c: 0xae221b80  sw          $v0, 0x1B80($s1)
    ctx->pc = 0x1df49cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7040), GPR_U32(ctx, 2));
    // 0x1df4a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1df4a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df4a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1df4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF4A8u;
        // 0x1df4ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF4B0u;
}
