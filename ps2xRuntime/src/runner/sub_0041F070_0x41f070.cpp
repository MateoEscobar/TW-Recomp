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

// Function: sub_0041F070
// Address: 0x41f070 - 0x41f0e0
void sub_0041F070_0x41f070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041F070_0x41f070");
#endif

    switch (ctx->pc) {
        case 0x41f08cu: goto label_41f08c;
        case 0x41f0a0u: goto label_41f0a0;
        default: break;
    }

    ctx->pc = 0x41f070u;

    // 0x41f070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41f070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x41f074: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41f074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f078: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41f078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x41f07c: 0x24064200  addiu       $a2, $zero, 0x4200
    ctx->pc = 0x41f07cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16896));
    // 0x41f080: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41f080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41f084: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x41F084u;
    SET_GPR_U32(ctx, 31, 0x41F08Cu);
    ctx->pc = 0x41F088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F084u;
    // 0x41f088: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x41F084u, 0x41F08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F08Cu;
label_41f08c:
    // 0x41f08c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x41f08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x41f090: 0x26054200  addiu       $a1, $s0, 0x4200
    ctx->pc = 0x41f090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16896));
    // 0x41f094: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x41f094u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f098: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x41f098u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x41f09c: 0x0  nop
    ctx->pc = 0x41f09cu;
    // NOP
label_41f0a0:
    // 0x41f0a0: 0xa060000d  sb          $zero, 0xD($v1)
    ctx->pc = 0x41f0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x41f0a4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x41f0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x41f0a8: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x41f0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x41f0ac: 0xa0600014  sb          $zero, 0x14($v1)
    ctx->pc = 0x41f0acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x41f0b0: 0xa0600039  sb          $zero, 0x39($v1)
    ctx->pc = 0x41f0b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 57), (uint8_t)GPR_U32(ctx, 0));
    // 0x41f0b4: 0x24630084  addiu       $v1, $v1, 0x84
    ctx->pc = 0x41f0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
    // 0x41f0b8: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x41f0b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x41f0bc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x41F0BCu;
    {
        const bool branch_taken_0x41f0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41f0bc) {
            ctx->pc = 0x41F0C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41F0BCu;
            // 0x41f0c0: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41F0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41f0a0;
        }
    }
    ctx->pc = 0x41F0C4u;
    // 0x41f0c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41f0c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f0c8: 0xae004200  sw          $zero, 0x4200($s0)
    ctx->pc = 0x41f0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16896), GPR_U32(ctx, 0));
    // 0x41f0cc: 0xae004204  sw          $zero, 0x4204($s0)
    ctx->pc = 0x41f0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16900), GPR_U32(ctx, 0));
    // 0x41f0d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41f0d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41f0d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41f0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41f0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x41F0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F0D8u;
        // 0x41f0dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41F0E0u;
}
