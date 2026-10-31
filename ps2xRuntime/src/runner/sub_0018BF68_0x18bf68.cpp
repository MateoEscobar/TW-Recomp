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

// Function: sub_0018BF68
// Address: 0x18bf68 - 0x18c058
void sub_0018BF68_0x18bf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BF68_0x18bf68");
#endif

    switch (ctx->pc) {
        case 0x18bfbcu: goto label_18bfbc;
        case 0x18bfc8u: goto label_18bfc8;
        case 0x18bfd8u: goto label_18bfd8;
        case 0x18bfecu: goto label_18bfec;
        case 0x18c030u: goto label_18c030;
        case 0x18c03cu: goto label_18c03c;
        default: break;
    }

    ctx->pc = 0x18bf68u;

    // 0x18bf68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18bf68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18bf6c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18bf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x18bf70: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18bf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18bf74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18bf74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bf78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18bf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18bf7c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x18bf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x18bf80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18bf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18bf84: 0x8e04019c  lw          $a0, 0x19C($s0)
    ctx->pc = 0x18bf84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 412)));
    // 0x18bf88: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x18BF88u;
    {
        const bool branch_taken_0x18bf88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF88u;
        // 0x18bf8c: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bf88) {
            ctx->pc = 0x18BFBCu;
            goto label_18bfbc;
        }
    }
    ctx->pc = 0x18BF90u;
    // 0x18bf90: 0x8e050198  lw          $a1, 0x198($s0)
    ctx->pc = 0x18bf90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x18bf94: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x18bf94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x18bf98: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x18bf98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18bf9c: 0xae04019c  sw          $a0, 0x19C($s0)
    ctx->pc = 0x18bf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 4));
    // 0x18bfa0: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x18bfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x18bfa4: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x18bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x18bfa8: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x18bfa8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x18bfac: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18BFACu;
    {
        const bool branch_taken_0x18bfac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bfac) {
            ctx->pc = 0x18BFB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18BFACu;
            // 0x18bfb0: 0x96040212  lhu         $a0, 0x212($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 530)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18BFC0u;
            goto label_18bfc0;
        }
    }
    ctx->pc = 0x18BFB4u;
    // 0x18bfb4: 0xc062e54  jal         func_18B950
    ctx->pc = 0x18BFB4u;
    SET_GPR_U32(ctx, 31, 0x18BFBCu);
    ctx->pc = 0x18BFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BFB4u;
    // 0x18bfb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B950u, 0x18BFB4u, 0x18BFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BFBCu;
label_18bfbc:
    // 0x18bfbc: 0x96040212  lhu         $a0, 0x212($s0)
    ctx->pc = 0x18bfbcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 530)));
label_18bfc0:
    // 0x18bfc0: 0xc047e6c  jal         func_11F9B0
    ctx->pc = 0x18BFC0u;
    SET_GPR_U32(ctx, 31, 0x18BFC8u);
    ctx->pc = 0x18BFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BFC0u;
    // 0x18bfc4: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x18BFC0u, 0x18BFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BFC8u;
label_18bfc8:
    // 0x18bfc8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18BFC8u;
    {
        const bool branch_taken_0x18bfc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BFC8u;
        // 0x18bfcc: 0x2611015c  addiu       $s1, $s0, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bfc8) {
            ctx->pc = 0x18C000u;
            goto label_18c000;
        }
    }
    ctx->pc = 0x18BFD0u;
    // 0x18bfd0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18bfd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bfd4: 0x26100154  addiu       $s0, $s0, 0x154
    ctx->pc = 0x18bfd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 340));
label_18bfd8:
    // 0x18bfd8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18bfdc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18BFDCu;
    {
        const bool branch_taken_0x18bfdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bfdc) {
            ctx->pc = 0x18BFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18BFDCu;
            // 0x18bfe0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18BFF0u;
            goto label_18bff0;
        }
    }
    ctx->pc = 0x18BFE4u;
    // 0x18bfe4: 0xc066f04  jal         func_19BC10
    ctx->pc = 0x18BFE4u;
    SET_GPR_U32(ctx, 31, 0x18BFECu);
    ctx->pc = 0x18BFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BFE4u;
    // 0x18bfe8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BC10u, 0x18BFE4u, 0x18BFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BFECu;
label_18bfec:
    // 0x18bfec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18bfecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_18bff0:
    // 0x18bff0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x18bff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18bff4: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x18bff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x18bff8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x18BFF8u;
    {
        const bool branch_taken_0x18bff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BFF8u;
        // 0x18bffc: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bff8) {
            ctx->pc = 0x18BFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18bfd8;
        }
    }
    ctx->pc = 0x18C000u;
label_18c000:
    // 0x18c000: 0x8e62489c  lw          $v0, 0x489C($s3)
    ctx->pc = 0x18c000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
    // 0x18c004: 0x90430410  lbu         $v1, 0x410($v0)
    ctx->pc = 0x18c004u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1040)));
    // 0x18c008: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x18C008u;
    {
        const bool branch_taken_0x18c008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C008u;
        // 0x18c00c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c008) {
            ctx->pc = 0x18C03Cu;
            goto label_18c03c;
        }
    }
    ctx->pc = 0x18C010u;
    // 0x18c010: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18c010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c014: 0x24421e10  addiu       $v0, $v0, 0x1E10
    ctx->pc = 0x18c014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7696));
    // 0x18c018: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18c018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c01c: 0x2450ea30  addiu       $s0, $v0, -0x15D0
    ctx->pc = 0x18c01cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961712));
    // 0x18c020: 0xac432944  sw          $v1, 0x2944($v0)
    ctx->pc = 0x18c020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10564), GPR_U32(ctx, 3));
    // 0x18c024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c028: 0xc06c996  jal         func_1B2658
    ctx->pc = 0x18C028u;
    SET_GPR_U32(ctx, 31, 0x18C030u);
    ctx->pc = 0x18C02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C028u;
    // 0x18c02c: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2658u, 0x18C028u, 0x18C030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C030u;
label_18c030:
    // 0x18c030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c034: 0xc06c996  jal         func_1B2658
    ctx->pc = 0x18C034u;
    SET_GPR_U32(ctx, 31, 0x18C03Cu);
    ctx->pc = 0x18C038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C034u;
    // 0x18c038: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2658u, 0x18C034u, 0x18C03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C03Cu;
label_18c03c:
    // 0x18c03c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18c03cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18c040: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18c040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18c044: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18c044u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c048: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x18c048u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c04c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c050: 0x3e00008  jr          $ra
    ctx->pc = 0x18C050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C050u;
        // 0x18c054: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C058u;
}
