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

// Function: sub_0018AEC0
// Address: 0x18aec0 - 0x18af88
void sub_0018AEC0_0x18aec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018AEC0_0x18aec0");
#endif

    switch (ctx->pc) {
        case 0x18af18u: goto label_18af18;
        case 0x18af3cu: goto label_18af3c;
        default: break;
    }

    ctx->pc = 0x18aec0u;

    // 0x18aec0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18aec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18aec4: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x18aec4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aec8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x18aec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x18aecc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x18aeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18aed0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18aed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18aed4: 0x1c26821  addu        $t5, $t6, $v0
    ctx->pc = 0x18aed4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x18aed8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18aed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18aedc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x18aedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x18aee0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x18AEE0u;
    {
        const bool branch_taken_0x18aee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18aee0) {
            ctx->pc = 0x18AEE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AEE0u;
            // 0x18aee4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AEE8u;
            goto label_18aee8;
        }
    }
    ctx->pc = 0x18AEE8u;
label_18aee8:
    // 0x18aee8: 0x8dac103c  lw          $t4, 0x103C($t5)
    ctx->pc = 0x18aee8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4156)));
    // 0x18aeec: 0x25820001  addiu       $v0, $t4, 0x1
    ctx->pc = 0x18aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x18aef0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18aef0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18aef4: 0x2010  mfhi        $a0
    ctx->pc = 0x18aef4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x18aef8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18aef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aefc: 0x120c001c  beq         $s0, $t4, . + 4 + (0x1C << 2)
    ctx->pc = 0x18AEFCu;
    {
        const bool branch_taken_0x18aefc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        ctx->pc = 0x18AF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AEFCu;
        // 0x18af00: 0x8faf0040  lw          $t7, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aefc) {
            ctx->pc = 0x18AF70u;
            goto label_18af70;
        }
    }
    ctx->pc = 0x18AF04u;
    // 0x18af04: 0x1a0882d  daddu       $s1, $t5, $zero
    ctx->pc = 0x18af04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af08: 0x240c00ff  addiu       $t4, $zero, 0xFF
    ctx->pc = 0x18af08u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x18af0c: 0x240d0078  addiu       $t5, $zero, 0x78
    ctx->pc = 0x18af0cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x18af10: 0x20d1818  mult        $v1, $s0, $t5
    ctx->pc = 0x18af10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18af14: 0x0  nop
    ctx->pc = 0x18af14u;
    // NOP
label_18af18:
    // 0x18af18: 0x6e1021  addu        $v0, $v1, $t6
    ctx->pc = 0x18af18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x18af1c: 0x904318dc  lbu         $v1, 0x18DC($v0)
    ctx->pc = 0x18af1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6364)));
    // 0x18af20: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x18AF20u;
    {
        const bool branch_taken_0x18af20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18af20) {
            ctx->pc = 0x18AF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AF20u;
            // 0x18af24: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AF50u;
            goto label_18af50;
        }
    }
    ctx->pc = 0x18AF28u;
    // 0x18af28: 0x20d2018  mult        $a0, $s0, $t5
    ctx->pc = 0x18af28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x18af2c: 0xafaf0000  sw          $t7, 0x0($sp)
    ctx->pc = 0x18af2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 15));
    // 0x18af30: 0x2484189c  addiu       $a0, $a0, 0x189C
    ctx->pc = 0x18af30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6300));
    // 0x18af34: 0xc060a38  jal         func_1828E0
    ctx->pc = 0x18AF34u;
    SET_GPR_U32(ctx, 31, 0x18AF3Cu);
    ctx->pc = 0x18AF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AF34u;
    // 0x18af38: 0x1c42021  addu        $a0, $t6, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1828E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1828E0u, 0x18AF34u, 0x18AF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AF3Cu;
label_18af3c:
    // 0x18af3c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x18af3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x18af40: 0xae30103c  sw          $s0, 0x103C($s1)
    ctx->pc = 0x18af40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4156), GPR_U32(ctx, 16));
    // 0x18af44: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x18af44u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x18af48: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18AF48u;
    {
        const bool branch_taken_0x18af48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF48u;
        // 0x18af4c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af48) {
            ctx->pc = 0x18AF74u;
            goto label_18af74;
        }
    }
    ctx->pc = 0x18AF50u;
label_18af50:
    // 0x18af50: 0x51800001  beql        $t4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x18AF50u;
    {
        const bool branch_taken_0x18af50 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x18af50) {
            ctx->pc = 0x18AF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AF50u;
            // 0x18af54: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AF58u;
            goto label_18af58;
        }
    }
    ctx->pc = 0x18AF58u;
label_18af58:
    // 0x18af58: 0x4c001b  divu        $zero, $v0, $t4
    ctx->pc = 0x18af58u;
    { uint32_t divisor = GPR_U32(ctx, 12); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18af5c: 0x8e24103c  lw          $a0, 0x103C($s1)
    ctx->pc = 0x18af5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4156)));
    // 0x18af60: 0x1810  mfhi        $v1
    ctx->pc = 0x18af60u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x18af64: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x18af64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af68: 0x1604ffeb  bne         $s0, $a0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18AF68u;
    {
        const bool branch_taken_0x18af68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x18AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF68u;
        // 0x18af6c: 0x20d1818  mult        $v1, $s0, $t5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af68) {
            ctx->pc = 0x18AF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18af18;
        }
    }
    ctx->pc = 0x18AF70u;
label_18af70:
    // 0x18af70: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x18af70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_18af74:
    // 0x18af74: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x18af74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18af78: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18af78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18af7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18af7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18af80: 0x3e00008  jr          $ra
    ctx->pc = 0x18AF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF80u;
        // 0x18af84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AF88u;
}
