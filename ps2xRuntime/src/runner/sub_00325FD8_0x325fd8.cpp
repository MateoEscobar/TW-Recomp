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

// Function: sub_00325FD8
// Address: 0x325fd8 - 0x326020
void sub_00325FD8_0x325fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325FD8_0x325fd8");
#endif

    switch (ctx->pc) {
        case 0x325ffcu: goto label_325ffc;
        case 0x32600cu: goto label_32600c;
        default: break;
    }

    ctx->pc = 0x325fd8u;

    // 0x325fd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x325fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x325fdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x325fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x325fe0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x325fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x325fe4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x325fe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325fe8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x325fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325fec: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x325fecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325ff0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325ff4: 0xc0c8fe4  jal         func_323F90
    ctx->pc = 0x325FF4u;
    SET_GPR_U32(ctx, 31, 0x325FFCu);
    ctx->pc = 0x325FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325FF4u;
    // 0x325ff8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323F90u, 0x325FF4u, 0x325FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325FFCu;
label_325ffc:
    // 0x325ffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x325ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326000: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x326000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326004: 0xc0c8fe4  jal         func_323F90
    ctx->pc = 0x326004u;
    SET_GPR_U32(ctx, 31, 0x32600Cu);
    ctx->pc = 0x326008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326004u;
    // 0x326008: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323F90u, 0x326004u, 0x32600Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32600Cu;
label_32600c:
    // 0x32600c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32600cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326010: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x326010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326018: 0x3e00008  jr          $ra
    ctx->pc = 0x326018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326018u;
        // 0x32601c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326020u;
}
