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

// Function: sub_00430168
// Address: 0x430168 - 0x4301b8
void sub_00430168_0x430168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00430168_0x430168");
#endif

    switch (ctx->pc) {
        case 0x43018cu: goto label_43018c;
        case 0x4301a4u: goto label_4301a4;
        default: break;
    }

    ctx->pc = 0x430168u;

    // 0x430168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x430168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x43016c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x43016cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x430170: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x430170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x430174: 0x8c625a50  lw          $v0, 0x5A50($v1)
    ctx->pc = 0x430174u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x715A50u));
    // 0x430178: 0x24705a50  addiu       $s0, $v1, 0x5A50
    ctx->pc = 0x430178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23120));
    // 0x43017c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x43017Cu;
    {
        const bool branch_taken_0x43017c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x430180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43017Cu;
        // 0x430180: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43017c) {
            ctx->pc = 0x4301A4u;
            goto label_4301a4;
        }
    }
    ctx->pc = 0x430184u;
    // 0x430184: 0xc10bd76  jal         func_42F5D8
    ctx->pc = 0x430184u;
    SET_GPR_U32(ctx, 31, 0x43018Cu);
    ctx->pc = 0x42F5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42F5D8u, 0x430184u, 0x43018Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43018Cu;
label_43018c:
    // 0x43018c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x43018cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x430190: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x430190u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x430194: 0x24a5c4b8  addiu       $a1, $a1, -0x3B48
    ctx->pc = 0x430194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952120));
    // 0x430198: 0x24c671d0  addiu       $a2, $a2, 0x71D0
    ctx->pc = 0x430198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29136));
    // 0x43019c: 0xc10bbf8  jal         func_42EFE0
    ctx->pc = 0x43019Cu;
    SET_GPR_U32(ctx, 31, 0x4301A4u);
    ctx->pc = 0x4301A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43019Cu;
    // 0x4301a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EFE0u, 0x43019Cu, 0x4301A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4301A4u;
label_4301a4:
    // 0x4301a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4301a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4301a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4301a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4301ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4301acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4301b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4301B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4301B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4301B0u;
        // 0x4301b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4301B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4301B8u;
}
