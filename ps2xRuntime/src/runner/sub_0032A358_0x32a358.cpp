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

// Function: sub_0032A358
// Address: 0x32a358 - 0x32a3a0
void sub_0032A358_0x32a358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A358_0x32a358");
#endif

    switch (ctx->pc) {
        case 0x32a394u: goto label_32a394;
        default: break;
    }

    ctx->pc = 0x32a358u;

    // 0x32a358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32a358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32a35c: 0x28820100  slti        $v0, $a0, 0x100
    ctx->pc = 0x32a35cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x32a360: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32A360u;
    {
        const bool branch_taken_0x32a360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A360u;
        // 0x32a364: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a360) {
            ctx->pc = 0x32A374u;
            goto label_32a374;
        }
    }
    ctx->pc = 0x32A368u;
    // 0x32a368: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x32a368u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x32a36c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x32A36Cu;
    {
        const bool branch_taken_0x32a36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A36Cu;
        // 0x32a370: 0xa0a00001  sb          $zero, 0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a36c) {
            ctx->pc = 0x32A394u;
            goto label_32a394;
        }
    }
    ctx->pc = 0x32A374u;
label_32a374:
    // 0x32a374: 0x2483feff  addiu       $v1, $a0, -0x101
    ctx->pc = 0x32a374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967039));
    // 0x32a378: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x32a378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x32a37c: 0x24425868  addiu       $v0, $v0, 0x5868
    ctx->pc = 0x32a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22632));
    // 0x32a380: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32a380u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32a384: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x32a384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32a388: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x32a388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a38c: 0xc10c366  jal         func_430D98
    ctx->pc = 0x32A38Cu;
    SET_GPR_U32(ctx, 31, 0x32A394u);
    ctx->pc = 0x32A390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A38Cu;
    // 0x32a390: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430D98u, 0x32A38Cu, 0x32A394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A394u;
label_32a394:
    // 0x32a394: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32a394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a398: 0x3e00008  jr          $ra
    ctx->pc = 0x32A398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A398u;
        // 0x32a39c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A3A0u;
}
