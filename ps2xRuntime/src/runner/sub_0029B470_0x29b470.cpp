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

// Function: sub_0029B470
// Address: 0x29b470 - 0x29b4b8
void sub_0029B470_0x29b470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B470_0x29b470");
#endif

    switch (ctx->pc) {
        case 0x29b48cu: goto label_29b48c;
        case 0x29b4a0u: goto label_29b4a0;
        default: break;
    }

    ctx->pc = 0x29b470u;

    // 0x29b470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29b470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29b474: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29b474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x29b478: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29b478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29b47c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b47cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b480: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29b480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29b484: 0xc0a5022  jal         func_294088
    ctx->pc = 0x29B484u;
    SET_GPR_U32(ctx, 31, 0x29B48Cu);
    ctx->pc = 0x29B488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B484u;
    // 0x29b488: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294088u, 0x29B484u, 0x29B48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B48Cu;
label_29b48c:
    // 0x29b48c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x29b48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29b490: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B490u;
    {
        const bool branch_taken_0x29b490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b490) {
            ctx->pc = 0x29B494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B490u;
            // 0x29b494: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B4A8u;
            goto label_29b4a8;
        }
    }
    ctx->pc = 0x29B498u;
    // 0x29b498: 0xc0945a0  jal         func_251680
    ctx->pc = 0x29B498u;
    SET_GPR_U32(ctx, 31, 0x29B4A0u);
    ctx->pc = 0x251680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251680u, 0x29B498u, 0x29B4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B4A0u;
label_29b4a0:
    // 0x29b4a0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x29b4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x29b4a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29b4a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29b4a8:
    // 0x29b4a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29b4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x29B4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B4ACu;
        // 0x29b4b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B4B4u;
    // 0x29b4b4: 0x0  nop
    ctx->pc = 0x29b4b4u;
    // NOP
    ctx->pc = 0x29b4b8u;
}
