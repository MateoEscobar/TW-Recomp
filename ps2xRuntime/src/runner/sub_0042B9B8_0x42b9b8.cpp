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

// Function: sub_0042B9B8
// Address: 0x42b9b8 - 0x42ba58
void sub_0042B9B8_0x42b9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042B9B8_0x42b9b8");
#endif

    ctx->pc = 0x42b9b8u;

    // 0x42b9b8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x42b9b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x42b9bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x42b9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x42b9c0: 0x31b3a  dsrl        $v1, $v1, 12
    ctx->pc = 0x42b9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 12);
    // 0x42b9c4: 0x227fe  dsrl32      $a0, $v0, 31
    ctx->pc = 0x42b9c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x42b9c8: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x42b9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x42b9cc: 0x2153e  dsrl32      $v0, $v0, 20
    ctx->pc = 0x42b9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 20));
    // 0x42b9d0: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x42b9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x42b9d4: 0x304407ff  andi        $a0, $v0, 0x7FF
    ctx->pc = 0x42b9d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x42b9d8: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x42B9D8u;
    {
        const bool branch_taken_0x42b9d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x42B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B9D8u;
        // 0x42b9dc: 0x240207ff  addiu       $v0, $zero, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b9d8) {
            ctx->pc = 0x42B9F0u;
            goto label_42b9f0;
        }
    }
    ctx->pc = 0x42B9E0u;
    // 0x42b9e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x42b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x42b9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x42B9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B9E4u;
        // 0x42b9e8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42B9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42B9ECu;
    // 0x42b9ec: 0x0  nop
    ctx->pc = 0x42b9ecu;
    // NOP
label_42b9f0:
    // 0x42b9f0: 0x5482000f  bnel        $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x42B9F0u;
    {
        const bool branch_taken_0x42b9f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x42b9f0) {
            ctx->pc = 0x42B9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42B9F0u;
            // 0x42b9f4: 0x31a38  dsll        $v1, $v1, 8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x42BA30u;
            goto label_42ba30;
        }
    }
    ctx->pc = 0x42B9F8u;
    // 0x42b9f8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x42B9F8u;
    {
        const bool branch_taken_0x42b9f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42B9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B9F8u;
        // 0x42b9fc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b9f8) {
            ctx->pc = 0x42BA08u;
            goto label_42ba08;
        }
    }
    ctx->pc = 0x42BA00u;
    // 0x42ba00: 0x3e00008  jr          $ra
    ctx->pc = 0x42BA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42BA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BA00u;
        // 0x42ba04: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42BA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42BA08u;
label_42ba08:
    // 0x42ba08: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x42ba08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x42ba0c: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x42ba0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x42ba10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x42ba10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x42ba14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42BA14u;
    {
        const bool branch_taken_0x42ba14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BA14u;
        // 0x42ba18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ba14) {
            ctx->pc = 0x42BA24u;
            goto label_42ba24;
        }
    }
    ctx->pc = 0x42BA1Cu;
    // 0x42ba1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x42BA1Cu;
    {
        const bool branch_taken_0x42ba1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BA1Cu;
        // 0x42ba20: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ba1c) {
            ctx->pc = 0x42BA28u;
            goto label_42ba28;
        }
    }
    ctx->pc = 0x42BA24u;
label_42ba24:
    // 0x42ba24: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x42ba24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_42ba28:
    // 0x42ba28: 0x3e00008  jr          $ra
    ctx->pc = 0x42BA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BA28u;
        // 0x42ba2c: 0xfca30010  sd          $v1, 0x10($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42BA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42BA30u;
label_42ba30:
    // 0x42ba30: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x42ba30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x42ba34: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x42ba34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x42ba38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x42ba38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x42ba3c: 0x2484fc01  addiu       $a0, $a0, -0x3FF
    ctx->pc = 0x42ba3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966273));
    // 0x42ba40: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x42ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x42ba44: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x42ba44u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x42ba48: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x42ba48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x42ba4c: 0x3e00008  jr          $ra
    ctx->pc = 0x42BA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BA4Cu;
        // 0x42ba50: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42BA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42BA54u;
    // 0x42ba54: 0x0  nop
    ctx->pc = 0x42ba54u;
    // NOP
    ctx->pc = 0x42ba58u;
}
