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

// Function: sub_0014B310
// Address: 0x14b310 - 0x14b360
void sub_0014B310_0x14b310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B310_0x14b310");
#endif

    switch (ctx->pc) {
        case 0x14b32cu: goto label_14b32c;
        default: break;
    }

    ctx->pc = 0x14b310u;

    // 0x14b310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14b310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14b314: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14b314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x14b318: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x14b318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b31c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x14b31cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b320: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14b320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14b324: 0xc052caa  jal         func_14B2A8
    ctx->pc = 0x14B324u;
    SET_GPR_U32(ctx, 31, 0x14B32Cu);
    ctx->pc = 0x14B328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B324u;
    // 0x14b328: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B2A8u, 0x14B324u, 0x14B32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B32Cu;
label_14b32c:
    // 0x14b32c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x14b32cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b330: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14b330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14b334: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14B334u;
    {
        const bool branch_taken_0x14b334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B334u;
        // 0x14b338: 0x30630008  andi        $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b334) {
            ctx->pc = 0x14B348u;
            goto label_14b348;
        }
    }
    ctx->pc = 0x14B33Cu;
    // 0x14b33c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14b33cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b340: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14B340u;
    {
        const bool branch_taken_0x14b340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B340u;
        // 0x14b344: 0x203100b  movn        $v0, $s0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b340) {
            ctx->pc = 0x14B34Cu;
            goto label_14b34c;
        }
    }
    ctx->pc = 0x14B348u;
label_14b348:
    // 0x14b348: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14b348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14b34c:
    // 0x14b34c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x14b34cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b350: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14b350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b354: 0x3e00008  jr          $ra
    ctx->pc = 0x14B354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B354u;
        // 0x14b358: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B35Cu;
    // 0x14b35c: 0x0  nop
    ctx->pc = 0x14b35cu;
    // NOP
    ctx->pc = 0x14b360u;
}
