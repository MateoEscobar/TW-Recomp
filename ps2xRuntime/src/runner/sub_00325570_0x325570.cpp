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

// Function: sub_00325570
// Address: 0x325570 - 0x3255b8
void sub_00325570_0x325570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325570_0x325570");
#endif

    switch (ctx->pc) {
        case 0x32558cu: goto label_32558c;
        case 0x325594u: goto label_325594;
        case 0x3255a0u: goto label_3255a0;
        default: break;
    }

    ctx->pc = 0x325570u;

    // 0x325570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x325570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x325574: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x325574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325578: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x325578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32557c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32557cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325580: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325584: 0xc0c91f2  jal         func_3247C8
    ctx->pc = 0x325584u;
    SET_GPR_U32(ctx, 31, 0x32558Cu);
    ctx->pc = 0x325588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325584u;
    // 0x325588: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3247C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3247C8u, 0x325584u, 0x32558Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32558Cu;
label_32558c:
    // 0x32558c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x32558Cu;
    SET_GPR_U32(ctx, 31, 0x325594u);
    ctx->pc = 0x325590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32558Cu;
    // 0x325590: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x32558Cu, 0x325594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325594u;
label_325594:
    // 0x325594: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x325594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325598: 0xc0c9056  jal         func_324158
    ctx->pc = 0x325598u;
    SET_GPR_U32(ctx, 31, 0x3255A0u);
    ctx->pc = 0x32559Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325598u;
    // 0x32559c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324158u, 0x325598u, 0x3255A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3255A0u;
label_3255a0:
    // 0x3255a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3255a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3255a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3255a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3255a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3255a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3255ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3255ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3255B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3255ACu;
        // 0x3255b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3255ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3255B4u;
    // 0x3255b4: 0x0  nop
    ctx->pc = 0x3255b4u;
    // NOP
    ctx->pc = 0x3255b8u;
}
