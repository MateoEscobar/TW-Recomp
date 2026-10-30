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

// Function: sub_00461570
// Address: 0x461570 - 0x4615a0
void sub_00461570_0x461570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00461570_0x461570");
#endif

    switch (ctx->pc) {
        case 0x461588u: goto label_461588;
        default: break;
    }

    ctx->pc = 0x461570u;

    // 0x461570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x461570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x461574: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x461574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x461578: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x461578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46157c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46157cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x461580: 0xc11851c  jal         func_461470
    ctx->pc = 0x461580u;
    SET_GPR_U32(ctx, 31, 0x461588u);
    ctx->pc = 0x461584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461580u;
    // 0x461584: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461470u, 0x461580u, 0x461588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461588u;
label_461588:
    // 0x461588: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x461588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x46158c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x46158cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x461590: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x461590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x461594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x461594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x461598: 0x3e00008  jr          $ra
    ctx->pc = 0x461598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461598u;
        // 0x46159c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x461598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4615A0u;
}
