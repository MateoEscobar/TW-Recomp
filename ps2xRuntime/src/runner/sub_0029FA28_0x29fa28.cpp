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

// Function: sub_0029FA28
// Address: 0x29fa28 - 0x29fb60
void sub_0029FA28_0x29fa28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029FA28_0x29fa28");
#endif

    switch (ctx->pc) {
        case 0x29faa8u: goto label_29faa8;
        case 0x29faf8u: goto label_29faf8;
        default: break;
    }

    ctx->pc = 0x29fa28u;

    // 0x29fa28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29fa28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29fa2c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x29fa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x29fa30: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x29fa30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x29fa34: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x29fa34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fa38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29fa38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29fa3c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x29fa3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fa40: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x29fa40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x29fa44: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29fa44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fa48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29fa48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29fa4c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x29fa4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fa50: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x29fa50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29fa54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29fa54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29fa58: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x29fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x29fa5c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x29fa5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29fa60: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x29fa60u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x29fa64: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x29fa64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29fa68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29fa68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29fa6c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x29fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x29fa70: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x29fa70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x29fa74: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x29fa74u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x29fa78: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x29fa78u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x29fa7c: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x29fa7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29fa80: 0x4610017  bgez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x29FA80u;
    {
        const bool branch_taken_0x29fa80 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x29FA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FA80u;
        // 0x29fa84: 0x96240000  lhu         $a0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fa80) {
            ctx->pc = 0x29FAE0u;
            goto label_29fae0;
        }
    }
    ctx->pc = 0x29FA88u;
    // 0x29fa88: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x29fa88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29fa8c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29fa90: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x29fa90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x29fa94: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x29fa94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29fa98: 0x4630028  bgezl       $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x29FA98u;
    {
        const bool branch_taken_0x29fa98 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x29fa98) {
            ctx->pc = 0x29FA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29FA98u;
            // 0x29fa9c: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29FB3Cu;
            goto label_29fb3c;
        }
    }
    ctx->pc = 0x29FAA0u;
    // 0x29faa0: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x29faa0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29faa4: 0x0  nop
    ctx->pc = 0x29faa4u;
    // NOP
label_29faa8:
    // 0x29faa8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29faac: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x29faacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x29fab0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x29fab0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29fab4: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x29fab4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x29fab8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x29fab8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29fabc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29fac0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x29fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x29fac4: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x29fac4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x29fac8: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x29fac8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x29facc: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x29faccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29fad0: 0x442fff5  bltzl       $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x29FAD0u;
    {
        const bool branch_taken_0x29fad0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x29fad0) {
            ctx->pc = 0x29FAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29FAD0u;
            // 0x29fad4: 0x86020000  lh          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29FAA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29faa8;
        }
    }
    ctx->pc = 0x29FAD8u;
    // 0x29fad8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x29FAD8u;
    {
        const bool branch_taken_0x29fad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FAD8u;
        // 0x29fadc: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fad8) {
            ctx->pc = 0x29FB3Cu;
            goto label_29fb3c;
        }
    }
    ctx->pc = 0x29FAE0u;
label_29fae0:
    // 0x29fae0: 0x24020097  addiu       $v0, $zero, 0x97
    ctx->pc = 0x29fae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x29fae4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29FAE4u;
    {
        const bool branch_taken_0x29fae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29FAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FAE4u;
        // 0x29fae8: 0x24020096  addiu       $v0, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fae4) {
            ctx->pc = 0x29FB00u;
            goto label_29fb00;
        }
    }
    ctx->pc = 0x29FAECu;
    // 0x29faec: 0x86650000  lh          $a1, 0x0($s3)
    ctx->pc = 0x29faecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29faf0: 0xc0a7e74  jal         func_29F9D0
    ctx->pc = 0x29FAF0u;
    SET_GPR_U32(ctx, 31, 0x29FAF8u);
    ctx->pc = 0x29FAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FAF0u;
    // 0x29faf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F9D0u, 0x29FAF0u, 0x29FAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FAF8u;
label_29faf8:
    // 0x29faf8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29FAF8u;
    {
        const bool branch_taken_0x29faf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FAF8u;
        // 0x29fafc: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29faf8) {
            ctx->pc = 0x29FB0Cu;
            goto label_29fb0c;
        }
    }
    ctx->pc = 0x29FB00u;
label_29fb00:
    // 0x29fb00: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29FB00u;
    {
        const bool branch_taken_0x29fb00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29FB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FB00u;
        // 0x29fb04: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fb00) {
            ctx->pc = 0x29FB3Cu;
            goto label_29fb3c;
        }
    }
    ctx->pc = 0x29FB08u;
    // 0x29fb08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_29fb0c:
    // 0x29fb0c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x29fb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x29fb10: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x29fb10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x29fb14: 0x31b83  sra         $v1, $v1, 14
    ctx->pc = 0x29fb14u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 14));
    // 0x29fb18: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x29fb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x29fb1c: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x29fb1cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29fb20: 0xa6240000  sh          $a0, 0x0($s1)
    ctx->pc = 0x29fb20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x29fb24: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x29fb24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29fb28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29fb2c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x29fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x29fb30: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x29fb30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x29fb34: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x29fb34u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x29fb38: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x29fb38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_29fb3c:
    // 0x29fb3c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x29fb3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29fb40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29fb44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29fb44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29fb48: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x29fb48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x29fb4c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x29fb4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29fb50: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x29fb50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29fb54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29fb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29fb58: 0x3e00008  jr          $ra
    ctx->pc = 0x29FB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FB58u;
        // 0x29fb5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29FB60u;
}
