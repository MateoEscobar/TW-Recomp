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

// Function: sub_003255B8
// Address: 0x3255b8 - 0x325608
void sub_003255B8_0x3255b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003255B8_0x3255b8");
#endif

    switch (ctx->pc) {
        case 0x3255d0u: goto label_3255d0;
        case 0x3255dcu: goto label_3255dc;
        case 0x3255e8u: goto label_3255e8;
        case 0x3255f4u: goto label_3255f4;
        default: break;
    }

    ctx->pc = 0x3255b8u;

    // 0x3255b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3255b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3255bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3255bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3255c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3255c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3255c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3255c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3255c8: 0xc0c917e  jal         func_3245F8
    ctx->pc = 0x3255C8u;
    SET_GPR_U32(ctx, 31, 0x3255D0u);
    ctx->pc = 0x3255CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3255C8u;
    // 0x3255cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3245F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3245F8u, 0x3255C8u, 0x3255D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3255D0u;
label_3255d0:
    // 0x3255d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3255d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3255d4: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x3255D4u;
    SET_GPR_U32(ctx, 31, 0x3255DCu);
    ctx->pc = 0x3255D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3255D4u;
    // 0x3255d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x3255D4u, 0x3255DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3255DCu;
label_3255dc:
    // 0x3255dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3255dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3255e0: 0xc0c8d3a  jal         func_3234E8
    ctx->pc = 0x3255E0u;
    SET_GPR_U32(ctx, 31, 0x3255E8u);
    ctx->pc = 0x3255E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3255E0u;
    // 0x3255e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234E8u, 0x3255E0u, 0x3255E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3255E8u;
label_3255e8:
    // 0x3255e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3255e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3255ec: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x3255ECu;
    SET_GPR_U32(ctx, 31, 0x3255F4u);
    ctx->pc = 0x3255F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3255ECu;
    // 0x3255f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x3255ECu, 0x3255F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3255F4u;
label_3255f4:
    // 0x3255f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3255f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3255f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3255f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3255fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3255fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325600: 0x3e00008  jr          $ra
    ctx->pc = 0x325600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325600u;
        // 0x325604: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325608u;
}
