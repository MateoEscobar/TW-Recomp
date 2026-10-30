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

// Function: sub_00117208
// Address: 0x117208 - 0x117238
void sub_00117208_0x117208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117208_0x117208");
#endif

    switch (ctx->pc) {
        case 0x11722cu: goto label_11722c;
        default: break;
    }

    ctx->pc = 0x117208u;

    // 0x117208: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x117208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11720c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x11720cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x117210: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x117210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x117214: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x117214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117218: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x117218u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11721c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x11721cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117220: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x117220u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x117224: 0xc04410c  jal         func_110430
    ctx->pc = 0x117224u;
    SET_GPR_U32(ctx, 31, 0x11722Cu);
    ctx->pc = 0x117228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117224u;
    // 0x117228: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110430u, 0x117224u, 0x11722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11722Cu;
label_11722c:
    // 0x11722c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11722cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117230: 0x3e00008  jr          $ra
    ctx->pc = 0x117230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117230u;
        // 0x117234: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117238u;
}
