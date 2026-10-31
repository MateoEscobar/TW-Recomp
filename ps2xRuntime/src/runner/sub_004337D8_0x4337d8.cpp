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

// Function: sub_004337D8
// Address: 0x4337d8 - 0x4338c8
void sub_004337D8_0x4337d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004337D8_0x4337d8");
#endif

    switch (ctx->pc) {
        case 0x433808u: goto label_433808;
        case 0x433828u: goto label_433828;
        case 0x433838u: goto label_433838;
        case 0x43383cu: goto label_43383c;
        case 0x433844u: goto label_433844;
        case 0x4338a0u: goto label_4338a0;
        default: break;
    }

    ctx->pc = 0x4337d8u;

    // 0x4337d8: 0x80a60000  lb          $a2, 0x0($a1)
    ctx->pc = 0x4337d8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4337dc: 0x2402005e  addiu       $v0, $zero, 0x5E
    ctx->pc = 0x4337dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x4337e0: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4337E0u;
    {
        const bool branch_taken_0x4337e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x4337E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4337E0u;
        // 0x4337e4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4337e0) {
            ctx->pc = 0x4337F8u;
            goto label_4337f8;
        }
    }
    ctx->pc = 0x4337E8u;
    // 0x4337e8: 0x80a60000  lb          $a2, 0x0($a1)
    ctx->pc = 0x4337e8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4337ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4337ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4337f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4337F0u;
    {
        const bool branch_taken_0x4337f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4337F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4337F0u;
        // 0x4337f4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4337f0) {
            ctx->pc = 0x4337FCu;
            goto label_4337fc;
        }
    }
    ctx->pc = 0x4337F8u;
label_4337f8:
    // 0x4337f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4337f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4337fc:
    // 0x4337fc: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x4337fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x433800: 0x248200ff  addiu       $v0, $a0, 0xFF
    ctx->pc = 0x433800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    // 0x433804: 0x0  nop
    ctx->pc = 0x433804u;
    // NOP
label_433808:
    // 0x433808: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x433808u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x43380c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x43380cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x433810: 0x0  nop
    ctx->pc = 0x433810u;
    // NOP
    // 0x433814: 0x0  nop
    ctx->pc = 0x433814u;
    // NOP
    // 0x433818: 0x4e1fffb  bgez        $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x433818u;
    {
        const bool branch_taken_0x433818 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x43381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433818u;
        // 0x43381c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433818) {
            ctx->pc = 0x433808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_433808;
        }
    }
    ctx->pc = 0x433820u;
    // 0x433820: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x433820u;
    {
        const bool branch_taken_0x433820 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x433824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433820u;
        // 0x433824: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433820) {
            ctx->pc = 0x433830u;
            goto label_433830;
        }
    }
    ctx->pc = 0x433828u;
label_433828:
    // 0x433828: 0x3e00008  jr          $ra
    ctx->pc = 0x433828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433828u;
        // 0x43382c: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x433828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x433830u;
label_433830:
    // 0x433830: 0x484023  subu        $t0, $v0, $t0
    ctx->pc = 0x433830u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x433834: 0x0  nop
    ctx->pc = 0x433834u;
    // NOP
label_433838:
    // 0x433838: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x433838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_43383c:
    // 0x43383c: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x43383cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x433840: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x433840u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_433844:
    // 0x433844: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x433844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x433848: 0x10e2000c  beq         $a3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x433848u;
    {
        const bool branch_taken_0x433848 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x43384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433848u;
        // 0x43384c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433848) {
            ctx->pc = 0x43387Cu;
            goto label_43387c;
        }
    }
    ctx->pc = 0x433850u;
    // 0x433850: 0x28e2002e  slti        $v0, $a3, 0x2E
    ctx->pc = 0x433850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x433854: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x433854u;
    {
        const bool branch_taken_0x433854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x433858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433854u;
        // 0x433858: 0x2402005d  addiu       $v0, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433854) {
            ctx->pc = 0x43386Cu;
            goto label_43386c;
        }
    }
    ctx->pc = 0x43385Cu;
    // 0x43385c: 0x10e0fff2  beqz        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x43385Cu;
    {
        const bool branch_taken_0x43385c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x433860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43385Cu;
        // 0x433860: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43385c) {
            ctx->pc = 0x433828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_433828;
        }
    }
    ctx->pc = 0x433864u;
    // 0x433864: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x433864u;
    {
        const bool branch_taken_0x433864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433864u;
        // 0x433868: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433864) {
            ctx->pc = 0x43383Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43383c;
        }
    }
    ctx->pc = 0x43386Cu;
label_43386c:
    // 0x43386c: 0x10e20014  beq         $a3, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x43386Cu;
    {
        const bool branch_taken_0x43386c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x433870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43386Cu;
        // 0x433870: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43386c) {
            ctx->pc = 0x4338C0u;
            goto label_4338c0;
        }
    }
    ctx->pc = 0x433874u;
    // 0x433874: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x433874u;
    {
        const bool branch_taken_0x433874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433874u;
        // 0x433878: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433874) {
            ctx->pc = 0x43383Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43383c;
        }
    }
    ctx->pc = 0x43387Cu;
label_43387c:
    // 0x43387c: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x43387cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x433880: 0x2402005d  addiu       $v0, $zero, 0x5D
    ctx->pc = 0x433880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x433884: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x433884u;
    {
        const bool branch_taken_0x433884 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x433888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433884u;
        // 0x433888: 0xe6102a  slt         $v0, $a3, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x433884) {
            ctx->pc = 0x433894u;
            goto label_433894;
        }
    }
    ctx->pc = 0x43388Cu;
    // 0x43388c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x43388Cu;
    {
        const bool branch_taken_0x43388c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43388c) {
            ctx->pc = 0x433890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43388Cu;
            // 0x433890: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4338A0u;
            goto label_4338a0;
        }
    }
    ctx->pc = 0x433894u;
label_433894:
    // 0x433894: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x433894u;
    {
        const bool branch_taken_0x433894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x433894u;
        // 0x433898: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433894) {
            ctx->pc = 0x433838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_433838;
        }
    }
    ctx->pc = 0x43389Cu;
    // 0x43389c: 0x0  nop
    ctx->pc = 0x43389cu;
    // NOP
label_4338a0:
    // 0x4338a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4338a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4338a4: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x4338a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4338a8: 0xc7182a  slt         $v1, $a2, $a3
    ctx->pc = 0x4338a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x4338ac: 0x0  nop
    ctx->pc = 0x4338acu;
    // NOP
    // 0x4338b0: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4338B0u;
    {
        const bool branch_taken_0x4338b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4338B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4338B0u;
        // 0x4338b4: 0xa0480000  sb          $t0, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4338b0) {
            ctx->pc = 0x4338A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4338a0;
        }
    }
    ctx->pc = 0x4338B8u;
    // 0x4338b8: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x4338B8u;
    {
        const bool branch_taken_0x4338b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4338BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4338B8u;
        // 0x4338bc: 0x80a70000  lb          $a3, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4338b8) {
            ctx->pc = 0x433844u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_433844;
        }
    }
    ctx->pc = 0x4338C0u;
label_4338c0:
    // 0x4338c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4338C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4338C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4338C0u;
        // 0x4338c4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4338C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4338C8u;
}
