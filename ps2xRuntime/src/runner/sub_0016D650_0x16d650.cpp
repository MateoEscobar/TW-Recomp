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

// Function: sub_0016D650
// Address: 0x16d650 - 0x16d6d8
void sub_0016D650_0x16d650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D650_0x16d650");
#endif

    switch (ctx->pc) {
        case 0x16d688u: goto label_16d688;
        case 0x16d6a8u: goto label_16d6a8;
        default: break;
    }

    ctx->pc = 0x16d650u;

    // 0x16d650: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x16d650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x16d654: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x16d654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x16d658: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x16d658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x16d65c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x16d65cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x16d660: 0xac820070  sw          $v0, 0x70($a0)
    ctx->pc = 0x16d660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 2));
    // 0x16d664: 0x248300b4  addiu       $v1, $a0, 0xB4
    ctx->pc = 0x16d664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 180));
    // 0x16d668: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x16d668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x16d66c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x16d66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16d670: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x16d670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x16d674: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x16d674u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x16d678: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x16d678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x16d67c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16d67cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16d680: 0xa0800050  sb          $zero, 0x50($a0)
    ctx->pc = 0x16d680u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x16d684: 0xac82006c  sw          $v0, 0x6C($a0)
    ctx->pc = 0x16d684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 2));
label_16d688:
    // 0x16d688: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x16d688u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x16d68c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x16d68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x16d690: 0x0  nop
    ctx->pc = 0x16d690u;
    // NOP
    // 0x16d694: 0x0  nop
    ctx->pc = 0x16d694u;
    // NOP
    // 0x16d698: 0x14c7fffb  bne         $a2, $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x16D698u;
    {
        const bool branch_taken_0x16d698 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x16D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D698u;
        // 0x16d69c: 0x2463001c  addiu       $v1, $v1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d698) {
            ctx->pc = 0x16D688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d688;
        }
    }
    ctx->pc = 0x16D6A0u;
    // 0x16d6a0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x16d6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16d6a4: 0x24820048  addiu       $v0, $a0, 0x48
    ctx->pc = 0x16d6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
label_16d6a8:
    // 0x16d6a8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x16d6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x16d6ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16d6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16d6b0: 0x0  nop
    ctx->pc = 0x16d6b0u;
    // NOP
    // 0x16d6b4: 0x0  nop
    ctx->pc = 0x16d6b4u;
    // NOP
    // 0x16d6b8: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x16D6B8u;
    {
        const bool branch_taken_0x16d6b8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x16D6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D6B8u;
        // 0x16d6bc: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d6b8) {
            ctx->pc = 0x16D6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d6a8;
        }
    }
    ctx->pc = 0x16D6C0u;
    // 0x16d6c0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x16d6c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d6c4: 0x3e00008  jr          $ra
    ctx->pc = 0x16D6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D6C4u;
        // 0x16d6c8: 0xac80004c  sw          $zero, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D6C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D6CCu;
    // 0x16d6cc: 0x0  nop
    ctx->pc = 0x16d6ccu;
    // NOP
    // 0x16d6d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x16d6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16d6d4: 0x0  nop
    ctx->pc = 0x16d6d4u;
    // NOP
    ctx->pc = 0x16d6d8u;
}
