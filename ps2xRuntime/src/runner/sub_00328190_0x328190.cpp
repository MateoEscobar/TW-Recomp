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

// Function: sub_00328190
// Address: 0x328190 - 0x3281c8
void sub_00328190_0x328190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328190_0x328190");
#endif

    switch (ctx->pc) {
        case 0x3281a8u: goto label_3281a8;
        default: break;
    }

    ctx->pc = 0x328190u;

    // 0x328190: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x328190u;
    {
        const bool branch_taken_0x328190 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x328194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328190u;
        // 0x328194: 0x24e3ffff  addiu       $v1, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328190) {
            ctx->pc = 0x3281C0u;
            goto label_3281c0;
        }
    }
    ctx->pc = 0x328198u;
    // 0x328198: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x328198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x32819c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x32819cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3281a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3281a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3281a4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3281a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3281a8:
    // 0x3281a8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3281a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x3281ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3281acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3281b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3281b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3281b4: 0x0  nop
    ctx->pc = 0x3281b4u;
    // NOP
    // 0x3281b8: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3281B8u;
    {
        const bool branch_taken_0x3281b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3281BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281B8u;
        // 0x3281bc: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3281b8) {
            ctx->pc = 0x3281A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3281a8;
        }
    }
    ctx->pc = 0x3281C0u;
label_3281c0:
    // 0x3281c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3281C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3281C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281C0u;
        // 0x3281c4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3281C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3281C8u;
}
