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

// Function: sub_004301D8
// Address: 0x4301d8 - 0x430228
void sub_004301D8_0x4301d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004301D8_0x4301d8");
#endif

    switch (ctx->pc) {
        case 0x4301fcu: goto label_4301fc;
        case 0x430214u: goto label_430214;
        default: break;
    }

    ctx->pc = 0x4301d8u;

    // 0x4301d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4301d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4301dc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4301dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4301e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4301e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4301e4: 0x8c625a60  lw          $v0, 0x5A60($v1)
    ctx->pc = 0x4301e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x715A60u));
    // 0x4301e8: 0x24705a60  addiu       $s0, $v1, 0x5A60
    ctx->pc = 0x4301e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23136));
    // 0x4301ec: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4301ECu;
    {
        const bool branch_taken_0x4301ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4301F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4301ECu;
        // 0x4301f0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4301ec) {
            ctx->pc = 0x430214u;
            goto label_430214;
        }
    }
    ctx->pc = 0x4301F4u;
    // 0x4301f4: 0xc10bd76  jal         func_42F5D8
    ctx->pc = 0x4301F4u;
    SET_GPR_U32(ctx, 31, 0x4301FCu);
    ctx->pc = 0x42F5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42F5D8u, 0x4301F4u, 0x4301FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4301FCu;
label_4301fc:
    // 0x4301fc: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4301fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x430200: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x430200u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x430204: 0x24a5c4d0  addiu       $a1, $a1, -0x3B30
    ctx->pc = 0x430204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952144));
    // 0x430208: 0x24c671d0  addiu       $a2, $a2, 0x71D0
    ctx->pc = 0x430208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29136));
    // 0x43020c: 0xc10bbf8  jal         func_42EFE0
    ctx->pc = 0x43020Cu;
    SET_GPR_U32(ctx, 31, 0x430214u);
    ctx->pc = 0x430210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43020Cu;
    // 0x430210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EFE0u, 0x43020Cu, 0x430214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x430214u;
label_430214:
    // 0x430214: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x430214u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430218: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x430218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43021c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x43021cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x430220: 0x3e00008  jr          $ra
    ctx->pc = 0x430220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x430224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430220u;
        // 0x430224: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x430220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x430228u;
}
