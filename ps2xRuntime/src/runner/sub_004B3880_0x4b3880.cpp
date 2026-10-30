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

// Function: sub_004B3880
// Address: 0x4b3880 - 0x4b38e0
void sub_004B3880_0x4b3880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3880_0x4b3880");
#endif

    ctx->pc = 0x4b3880u;

    // 0x4b3880: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4b3880u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3884: 0x10a70014  beq         $a1, $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x4B3884u;
    {
        const bool branch_taken_0x4b3884 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x4b3884) {
            ctx->pc = 0x4B38D8u;
            goto label_4b38d8;
        }
    }
    ctx->pc = 0x4B388Cu;
    // 0x4b388c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4b388cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b3890: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4b3890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b3894: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B3894u;
    {
        const bool branch_taken_0x4b3894 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B3898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3894u;
        // 0x4b3898: 0x8ce60000  lw          $a2, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3894) {
            ctx->pc = 0x4B38A8u;
            goto label_4b38a8;
        }
    }
    ctx->pc = 0x4B389Cu;
    // 0x4b389c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4b389cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b38a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B38A0u;
    {
        const bool branch_taken_0x4b38a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B38A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B38A0u;
        // 0x4b38a4: 0xa0c2001a  sb          $v0, 0x1A($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b38a0) {
            ctx->pc = 0x4B38ACu;
            goto label_4b38ac;
        }
    }
    ctx->pc = 0x4B38A8u;
label_4b38a8:
    // 0x4b38a8: 0xa0c0001a  sb          $zero, 0x1A($a2)
    ctx->pc = 0x4b38a8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26), (uint8_t)GPR_U32(ctx, 0));
label_4b38ac:
    // 0x4b38ac: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x4b38acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4b38b0: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x4b38b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x4b38b4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x4b38b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4b38b8: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4b38b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4b38bc: 0xa4c20018  sh          $v0, 0x18($a2)
    ctx->pc = 0x4b38bcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b38c0: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x4b38c0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x4b38c4: 0xacc4001c  sw          $a0, 0x1C($a2)
    ctx->pc = 0x4b38c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 4));
    // 0x4b38c8: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x4b38c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x4b38cc: 0xa0c0001b  sb          $zero, 0x1B($a2)
    ctx->pc = 0x4b38ccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x4b38d0: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x4b38d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x4b38d4: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x4b38d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_4b38d8:
    // 0x4b38d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B38D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B38DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B38D8u;
        // 0x4b38dc: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B38D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B38E0u;
}
