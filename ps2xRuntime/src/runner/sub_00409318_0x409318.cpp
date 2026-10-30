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

// Function: sub_00409318
// Address: 0x409318 - 0x4093a0
void sub_00409318_0x409318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00409318_0x409318");
#endif

    switch (ctx->pc) {
        case 0x40933cu: goto label_40933c;
        case 0x409354u: goto label_409354;
        case 0x409368u: goto label_409368;
        case 0x409374u: goto label_409374;
        default: break;
    }

    ctx->pc = 0x409318u;

    // 0x409318: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x409318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x40931c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x40931cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x409320: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x409320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x409324: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x409324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409328: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x409328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x40932c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x40932cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409330: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x409330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x409334: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x409334u;
    SET_GPR_U32(ctx, 31, 0x40933Cu);
    ctx->pc = 0x409338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409334u;
    // 0x409338: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x409334u, 0x40933Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40933Cu;
label_40933c:
    // 0x40933c: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x40933cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x409340: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x409340u;
    {
        const bool branch_taken_0x409340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x409344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409340u;
        // 0x409344: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409340) {
            ctx->pc = 0x409388u;
            goto label_409388;
        }
    }
    ctx->pc = 0x409348u;
    // 0x409348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x409348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40934c: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x40934Cu;
    SET_GPR_U32(ctx, 31, 0x409354u);
    ctx->pc = 0x409350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40934Cu;
    // 0x409350: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x40934Cu, 0x409354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409354u;
label_409354:
    // 0x409354: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x409354u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x409358: 0x10520008  beq         $v0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x409358u;
    {
        const bool branch_taken_0x409358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x40935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409358u;
        // 0x40935c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409358) {
            ctx->pc = 0x40937Cu;
            goto label_40937c;
        }
    }
    ctx->pc = 0x409360u;
    // 0x409360: 0xc0c8da2  jal         func_323688
    ctx->pc = 0x409360u;
    SET_GPR_U32(ctx, 31, 0x409368u);
    ctx->pc = 0x409364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409360u;
    // 0x409364: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323688u, 0x409360u, 0x409368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409368u;
label_409368:
    // 0x409368: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x409368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40936c: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x40936Cu;
    SET_GPR_U32(ctx, 31, 0x409374u);
    ctx->pc = 0x409370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40936Cu;
    // 0x409370: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x40936Cu, 0x409374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409374u;
label_409374:
    // 0x409374: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x409374u;
    {
        const bool branch_taken_0x409374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x409378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409374u;
        // 0x409378: 0x2900a  movz        $s2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409374) {
            ctx->pc = 0x409384u;
            goto label_409384;
        }
    }
    ctx->pc = 0x40937Cu;
label_40937c:
    // 0x40937c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x40937Cu;
    {
        const bool branch_taken_0x40937c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x409380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40937Cu;
        // 0x409380: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40937c) {
            ctx->pc = 0x409388u;
            goto label_409388;
        }
    }
    ctx->pc = 0x409384u;
label_409384:
    // 0x409384: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x409384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_409388:
    // 0x409388: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x409388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40938c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x40938cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x409390: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x409390u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x409394: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x409394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x409398: 0x3e00008  jr          $ra
    ctx->pc = 0x409398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409398u;
        // 0x40939c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x409398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4093A0u;
}
