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

// Function: sub_00423768
// Address: 0x423768 - 0x4237a8
void sub_00423768_0x423768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00423768_0x423768");
#endif

    switch (ctx->pc) {
        case 0x423798u: goto label_423798;
        default: break;
    }

    ctx->pc = 0x423768u;

    // 0x423768: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x423768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x42376c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x42376cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x423770: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x423770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423774: 0x2448e998  addiu       $t0, $v0, -0x1668
    ctx->pc = 0x423774u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961560));
    // 0x423778: 0x8c43e998  lw          $v1, -0x1668($v0)
    ctx->pc = 0x423778u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6FE998u));
    // 0x42377c: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x42377cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x423780: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x423780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x423784: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x423784u;
    {
        const bool branch_taken_0x423784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x423788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423784u;
        // 0x423788: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x423784) {
            ctx->pc = 0x423798u;
            goto label_423798;
        }
    }
    ctx->pc = 0x42378Cu;
    // 0x42378c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x42378cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423790: 0xc108f78  jal         func_423DE0
    ctx->pc = 0x423790u;
    SET_GPR_U32(ctx, 31, 0x423798u);
    ctx->pc = 0x423794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x423790u;
    // 0x423794: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423DE0u, 0x423790u, 0x423798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x423798u;
label_423798:
    // 0x423798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x423798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42379c: 0x3e00008  jr          $ra
    ctx->pc = 0x42379Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4237A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42379Cu;
        // 0x4237a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42379Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4237A4u;
    // 0x4237a4: 0x0  nop
    ctx->pc = 0x4237a4u;
    // NOP
    ctx->pc = 0x4237a8u;
}
