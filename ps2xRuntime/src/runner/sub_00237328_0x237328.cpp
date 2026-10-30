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

// Function: sub_00237328
// Address: 0x237328 - 0x237388
void sub_00237328_0x237328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237328_0x237328");
#endif

    switch (ctx->pc) {
        case 0x237344u: goto label_237344;
        case 0x23734cu: goto label_23734c;
        default: break;
    }

    ctx->pc = 0x237328u;

    // 0x237328: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23732c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23732cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x237330: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x237330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x237334: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x237334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237338: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x237338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23733c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23733Cu;
    SET_GPR_U32(ctx, 31, 0x237344u);
    ctx->pc = 0x237340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23733Cu;
    // 0x237340: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23733Cu, 0x237344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237344u;
label_237344:
    // 0x237344: 0xc08a61a  jal         func_229868
    ctx->pc = 0x237344u;
    SET_GPR_U32(ctx, 31, 0x23734Cu);
    ctx->pc = 0x237348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237344u;
    // 0x237348: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x237344u, 0x23734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23734Cu;
label_23734c:
    // 0x23734c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23734cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237350: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x237350u;
    {
        const bool branch_taken_0x237350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x237354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237350u;
        // 0x237354: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237350) {
            ctx->pc = 0x237378u;
            goto label_237378;
        }
    }
    ctx->pc = 0x237358u;
    // 0x237358: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x237358u;
    {
        const bool branch_taken_0x237358 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x23735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237358u;
        // 0x23735c: 0xdc8200e0  ld          $v0, 0xE0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237358) {
            ctx->pc = 0x23736Cu;
            goto label_23736c;
        }
    }
    ctx->pc = 0x237360u;
    // 0x237360: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x237360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x237364: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x237364u;
    {
        const bool branch_taken_0x237364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237364u;
        // 0x237368: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237364) {
            ctx->pc = 0x237374u;
            goto label_237374;
        }
    }
    ctx->pc = 0x23736Cu;
label_23736c:
    // 0x23736c: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x23736cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x237370: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x237370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_237374:
    // 0x237374: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x237374u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
label_237378:
    // 0x237378: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x237378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23737c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23737cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237380: 0x3e00008  jr          $ra
    ctx->pc = 0x237380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237380u;
        // 0x237384: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237388u;
}
