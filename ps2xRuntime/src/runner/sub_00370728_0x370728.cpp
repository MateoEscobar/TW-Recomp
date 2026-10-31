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

// Function: sub_00370728
// Address: 0x370728 - 0x370760
void sub_00370728_0x370728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370728_0x370728");
#endif

    switch (ctx->pc) {
        case 0x37073cu: goto label_37073c;
        case 0x370744u: goto label_370744;
        case 0x37074cu: goto label_37074c;
        default: break;
    }

    ctx->pc = 0x370728u;

    // 0x370728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37072c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37072cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370730: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x370734: 0xc102472  jal         func_4091C8
    ctx->pc = 0x370734u;
    SET_GPR_U32(ctx, 31, 0x37073Cu);
    ctx->pc = 0x370738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370734u;
    // 0x370738: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x370734u, 0x37073Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37073Cu;
label_37073c:
    // 0x37073c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37073Cu;
    SET_GPR_U32(ctx, 31, 0x370744u);
    ctx->pc = 0x370740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37073Cu;
    // 0x370740: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37073Cu, 0x370744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370744u;
label_370744:
    // 0x370744: 0xc06d038  jal         func_1B40E0
    ctx->pc = 0x370744u;
    SET_GPR_U32(ctx, 31, 0x37074Cu);
    ctx->pc = 0x370748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370744u;
    // 0x370748: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40E0u, 0x370744u, 0x37074Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37074Cu;
label_37074c:
    // 0x37074c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37074cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370750: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x370750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370754: 0x3e00008  jr          $ra
    ctx->pc = 0x370754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370754u;
        // 0x370758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37075Cu;
    // 0x37075c: 0x0  nop
    ctx->pc = 0x37075cu;
    // NOP
    ctx->pc = 0x370760u;
}
