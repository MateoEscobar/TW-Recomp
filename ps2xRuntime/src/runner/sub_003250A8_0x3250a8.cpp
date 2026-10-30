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

// Function: sub_003250A8
// Address: 0x3250a8 - 0x3250f0
void sub_003250A8_0x3250a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003250A8_0x3250a8");
#endif

    switch (ctx->pc) {
        case 0x3250c0u: goto label_3250c0;
        case 0x3250d0u: goto label_3250d0;
        case 0x3250dcu: goto label_3250dc;
        default: break;
    }

    ctx->pc = 0x3250a8u;

    // 0x3250a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3250a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3250ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3250acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3250b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3250b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3250b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3250b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3250b8: 0xc0c917e  jal         func_3245F8
    ctx->pc = 0x3250B8u;
    SET_GPR_U32(ctx, 31, 0x3250C0u);
    ctx->pc = 0x3250BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3250B8u;
    // 0x3250bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3245F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3245F8u, 0x3250B8u, 0x3250C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3250C0u;
label_3250c0:
    // 0x3250c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3250c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3250c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3250c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3250c8: 0xc0c9192  jal         func_324648
    ctx->pc = 0x3250C8u;
    SET_GPR_U32(ctx, 31, 0x3250D0u);
    ctx->pc = 0x3250CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3250C8u;
    // 0x3250cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324648u, 0x3250C8u, 0x3250D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3250D0u;
label_3250d0:
    // 0x3250d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3250d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3250d4: 0xc0c8f98  jal         func_323E60
    ctx->pc = 0x3250D4u;
    SET_GPR_U32(ctx, 31, 0x3250DCu);
    ctx->pc = 0x3250D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3250D4u;
    // 0x3250d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323E60u, 0x3250D4u, 0x3250DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3250DCu;
label_3250dc:
    // 0x3250dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3250dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3250e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3250e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3250e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3250e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3250e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3250E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3250ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3250E8u;
        // 0x3250ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3250E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3250F0u;
}
