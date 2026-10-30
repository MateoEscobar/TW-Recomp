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

// Function: sub_00371090
// Address: 0x371090 - 0x3710c0
void sub_00371090_0x371090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371090_0x371090");
#endif

    switch (ctx->pc) {
        case 0x3710a4u: goto label_3710a4;
        case 0x3710acu: goto label_3710ac;
        default: break;
    }

    ctx->pc = 0x371090u;

    // 0x371090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371094: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x371094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x371098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37109c: 0xc102488  jal         func_409220
    ctx->pc = 0x37109Cu;
    SET_GPR_U32(ctx, 31, 0x3710A4u);
    ctx->pc = 0x3710A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37109Cu;
    // 0x3710a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x37109Cu, 0x3710A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3710A4u;
label_3710a4:
    // 0x3710a4: 0xc044d24  jal         func_113490
    ctx->pc = 0x3710A4u;
    SET_GPR_U32(ctx, 31, 0x3710ACu);
    ctx->pc = 0x3710A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3710A4u;
    // 0x3710a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113490u, 0x3710A4u, 0x3710ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3710ACu;
label_3710ac:
    // 0x3710ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3710acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3710b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3710b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3710b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3710B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3710B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3710B4u;
        // 0x3710b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3710B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3710BCu;
    // 0x3710bc: 0x0  nop
    ctx->pc = 0x3710bcu;
    // NOP
    ctx->pc = 0x3710c0u;
}
