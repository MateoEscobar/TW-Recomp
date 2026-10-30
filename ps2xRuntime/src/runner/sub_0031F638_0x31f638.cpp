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

// Function: sub_0031F638
// Address: 0x31f638 - 0x31f678
void sub_0031F638_0x31f638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F638_0x31f638");
#endif

    switch (ctx->pc) {
        case 0x31f64cu: goto label_31f64c;
        case 0x31f668u: goto label_31f668;
        default: break;
    }

    ctx->pc = 0x31f638u;

    // 0x31f638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31f638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31f63c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31f63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31f640: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31f640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31f644: 0xc0c7d04  jal         func_31F410
    ctx->pc = 0x31F644u;
    SET_GPR_U32(ctx, 31, 0x31F64Cu);
    ctx->pc = 0x31F648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F644u;
    // 0x31f648: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F410u, 0x31F644u, 0x31F64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F64Cu;
label_31f64c:
    // 0x31f64c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x31f64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31f650: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x31f650u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x31f654: 0x24c61638  addiu       $a2, $a2, 0x1638
    ctx->pc = 0x31f654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5688));
    // 0x31f658: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x31f658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x31f65c: 0x248401b0  addiu       $a0, $a0, 0x1B0
    ctx->pc = 0x31f65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x31f660: 0xc05905e  jal         func_164178
    ctx->pc = 0x31F660u;
    SET_GPR_U32(ctx, 31, 0x31F668u);
    ctx->pc = 0x31F664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F660u;
    // 0x31f664: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164178u, 0x31F660u, 0x31F668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F668u;
label_31f668:
    // 0x31f668: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31f668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31f66c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31f66cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f670: 0x3e00008  jr          $ra
    ctx->pc = 0x31F670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F670u;
        // 0x31f674: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F678u;
}
