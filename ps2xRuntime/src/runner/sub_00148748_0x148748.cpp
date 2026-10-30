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

// Function: sub_00148748
// Address: 0x148748 - 0x1487b0
void sub_00148748_0x148748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148748_0x148748");
#endif

    switch (ctx->pc) {
        case 0x14876cu: goto label_14876c;
        case 0x14877cu: goto label_14877c;
        case 0x148798u: goto label_148798;
        default: break;
    }

    ctx->pc = 0x148748u;

    // 0x148748: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x148748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14874c: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x14874cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x148750: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x148750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x148754: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x148754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x148758: 0x24427ef8  addiu       $v0, $v0, 0x7EF8
    ctx->pc = 0x148758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32504));
    // 0x14875c: 0x24704298  addiu       $s0, $v1, 0x4298
    ctx->pc = 0x14875cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 17048));
    // 0x148760: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x148760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x148764: 0xc0521c2  jal         func_148708
    ctx->pc = 0x148764u;
    SET_GPR_U32(ctx, 31, 0x14876Cu);
    ctx->pc = 0x148768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148764u;
    // 0x148768: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148708u, 0x148764u, 0x14876Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14876Cu;
label_14876c:
    // 0x14876c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14876cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148770: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x148770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148774: 0xc052492  jal         func_149248
    ctx->pc = 0x148774u;
    SET_GPR_U32(ctx, 31, 0x14877Cu);
    ctx->pc = 0x148778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148774u;
    // 0x148778: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149248u, 0x148774u, 0x14877Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14877Cu;
label_14877c:
    // 0x14877c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14877cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148780: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x148780u;
    {
        const bool branch_taken_0x148780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x148784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148780u;
        // 0x148784: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148780) {
            ctx->pc = 0x148790u;
            goto label_148790;
        }
    }
    ctx->pc = 0x148788u;
    // 0x148788: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x148788u;
    {
        const bool branch_taken_0x148788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148788u;
        // 0x14878c: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148788) {
            ctx->pc = 0x1487A0u;
            goto label_1487a0;
        }
    }
    ctx->pc = 0x148790u;
label_148790:
    // 0x148790: 0xc0524b2  jal         func_1492C8
    ctx->pc = 0x148790u;
    SET_GPR_U32(ctx, 31, 0x148798u);
    ctx->pc = 0x148794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148790u;
    // 0x148794: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1492C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1492C8u, 0x148790u, 0x148798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148798u;
label_148798:
    // 0x148798: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x148798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x14879c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14879cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1487a0:
    // 0x1487a0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1487a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1487a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1487a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1487a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1487A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1487ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1487A8u;
        // 0x1487ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1487A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1487B0u;
}
