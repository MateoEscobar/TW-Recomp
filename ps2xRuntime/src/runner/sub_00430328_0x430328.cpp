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

// Function: sub_00430328
// Address: 0x430328 - 0x430378
void sub_00430328_0x430328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00430328_0x430328");
#endif

    switch (ctx->pc) {
        case 0x43034cu: goto label_43034c;
        case 0x430364u: goto label_430364;
        default: break;
    }

    ctx->pc = 0x430328u;

    // 0x430328: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x430328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x43032c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x43032cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x430330: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x430330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x430334: 0x8c625a90  lw          $v0, 0x5A90($v1)
    ctx->pc = 0x430334u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x715A90u));
    // 0x430338: 0x24705a90  addiu       $s0, $v1, 0x5A90
    ctx->pc = 0x430338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23184));
    // 0x43033c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x43033Cu;
    {
        const bool branch_taken_0x43033c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x430340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43033Cu;
        // 0x430340: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43033c) {
            ctx->pc = 0x430364u;
            goto label_430364;
        }
    }
    ctx->pc = 0x430344u;
    // 0x430344: 0xc10bd76  jal         func_42F5D8
    ctx->pc = 0x430344u;
    SET_GPR_U32(ctx, 31, 0x43034Cu);
    ctx->pc = 0x42F5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42F5D8u, 0x430344u, 0x43034Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43034Cu;
label_43034c:
    // 0x43034c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x43034cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x430350: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x430350u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x430354: 0x24a5c518  addiu       $a1, $a1, -0x3AE8
    ctx->pc = 0x430354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952216));
    // 0x430358: 0x24c671d0  addiu       $a2, $a2, 0x71D0
    ctx->pc = 0x430358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29136));
    // 0x43035c: 0xc10bbf8  jal         func_42EFE0
    ctx->pc = 0x43035Cu;
    SET_GPR_U32(ctx, 31, 0x430364u);
    ctx->pc = 0x430360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43035Cu;
    // 0x430360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EFE0u, 0x43035Cu, 0x430364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x430364u;
label_430364:
    // 0x430364: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x430364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430368: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x430368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43036c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x43036cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x430370: 0x3e00008  jr          $ra
    ctx->pc = 0x430370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x430374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430370u;
        // 0x430374: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x430370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x430378u;
}
