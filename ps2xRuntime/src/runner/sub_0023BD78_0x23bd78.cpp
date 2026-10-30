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

// Function: sub_0023BD78
// Address: 0x23bd78 - 0x23bdb8
void sub_0023BD78_0x23bd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BD78_0x23bd78");
#endif

    switch (ctx->pc) {
        case 0x23bd9cu: goto label_23bd9c;
        case 0x23bda4u: goto label_23bda4;
        default: break;
    }

    ctx->pc = 0x23bd78u;

    // 0x23bd78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23bd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23bd7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23bd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23bd80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23bd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23bd84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23bd84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bd88: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x23bd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x23bd8c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x23BD8Cu;
    {
        const bool branch_taken_0x23bd8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bd8c) {
            ctx->pc = 0x23BD90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BD8Cu;
            // 0x23bd90: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BDACu;
            goto label_23bdac;
        }
    }
    ctx->pc = 0x23BD94u;
    // 0x23bd94: 0xc05d584  jal         func_175610
    ctx->pc = 0x23BD94u;
    SET_GPR_U32(ctx, 31, 0x23BD9Cu);
    ctx->pc = 0x175610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175610u, 0x23BD94u, 0x23BD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BD9Cu;
label_23bd9c:
    // 0x23bd9c: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x23BD9Cu;
    SET_GPR_U32(ctx, 31, 0x23BDA4u);
    ctx->pc = 0x23BDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BD9Cu;
    // 0x23bda0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x23BD9Cu, 0x23BDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BDA4u;
label_23bda4:
    // 0x23bda4: 0xa0400460  sb          $zero, 0x460($v0)
    ctx->pc = 0x23bda4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1120), (uint8_t)GPR_U32(ctx, 0));
    // 0x23bda8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23bda8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23bdac:
    // 0x23bdac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23bdacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bdb0: 0x3e00008  jr          $ra
    ctx->pc = 0x23BDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BDB0u;
        // 0x23bdb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BDB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BDB8u;
}
