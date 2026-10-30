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

// Function: sub_004EBFA0
// Address: 0x4ebfa0 - 0x4ec020
void sub_004EBFA0_0x4ebfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EBFA0_0x4ebfa0");
#endif

    switch (ctx->pc) {
        case 0x4ebfa0u: goto label_4ebfa0;
        case 0x4ebfa4u: goto label_4ebfa4;
        case 0x4ebfa8u: goto label_4ebfa8;
        case 0x4ebfacu: goto label_4ebfac;
        case 0x4ebfb0u: goto label_4ebfb0;
        case 0x4ebfb4u: goto label_4ebfb4;
        case 0x4ebfb8u: goto label_4ebfb8;
        case 0x4ebfbcu: goto label_4ebfbc;
        case 0x4ebfc0u: goto label_4ebfc0;
        case 0x4ebfc4u: goto label_4ebfc4;
        case 0x4ebfc8u: goto label_4ebfc8;
        case 0x4ebfccu: goto label_4ebfcc;
        case 0x4ebfd0u: goto label_4ebfd0;
        case 0x4ebfd4u: goto label_4ebfd4;
        case 0x4ebfd8u: goto label_4ebfd8;
        case 0x4ebfdcu: goto label_4ebfdc;
        case 0x4ebfe0u: goto label_4ebfe0;
        case 0x4ebfe4u: goto label_4ebfe4;
        case 0x4ebfe8u: goto label_4ebfe8;
        case 0x4ebfecu: goto label_4ebfec;
        case 0x4ebff0u: goto label_4ebff0;
        case 0x4ebff4u: goto label_4ebff4;
        case 0x4ebff8u: goto label_4ebff8;
        case 0x4ebffcu: goto label_4ebffc;
        case 0x4ec000u: goto label_4ec000;
        case 0x4ec004u: goto label_4ec004;
        case 0x4ec008u: goto label_4ec008;
        case 0x4ec00cu: goto label_4ec00c;
        case 0x4ec010u: goto label_4ec010;
        case 0x4ec014u: goto label_4ec014;
        case 0x4ec018u: goto label_4ec018;
        case 0x4ec01cu: goto label_4ec01c;
        default: break;
    }

    ctx->pc = 0x4ebfa0u;

label_4ebfa0:
    // 0x4ebfa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ebfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4ebfa4:
    // 0x4ebfa4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4ebfa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4ebfa8:
    // 0x4ebfa8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ebfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4ebfac:
    // 0x4ebfac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ebfacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ebfb0:
    // 0x4ebfb0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4ebfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4ebfb4:
    // 0x4ebfb4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ebfb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ebfb8:
    // 0x4ebfb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ebfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ebfbc:
    // 0x4ebfbc: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4ebfc0:
    if (ctx->pc == 0x4EBFC0u) {
        ctx->pc = 0x4EBFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBFBCu;
        // 0x4ebfc0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBFC4u;
        goto label_4ebfc4;
    }
    ctx->pc = 0x4EBFBCu;
    {
        const bool branch_taken_0x4ebfbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EBFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBFBCu;
        // 0x4ebfc0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ebfbc) {
            ctx->pc = 0x4EC004u;
            goto label_4ec004;
        }
    }
    ctx->pc = 0x4EBFC4u;
label_4ebfc4:
    // 0x4ebfc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ebfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ebfc8:
    // 0x4ebfc8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ebfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ebfcc:
    // 0x4ebfcc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4ebfccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4ebfd0:
    // 0x4ebfd0: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4ebfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4ebfd4:
    // 0x4ebfd4: 0x60f809  jalr        $v1
label_4ebfd8:
    if (ctx->pc == 0x4EBFD8u) {
        ctx->pc = 0x4EBFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBFD4u;
        // 0x4ebfd8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EBFDCu;
        goto label_4ebfdc;
    }
    ctx->pc = 0x4EBFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EBFDCu);
        ctx->pc = 0x4EBFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBFD4u;
        // 0x4ebfd8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBFD4u, 0x4EBFDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EBFDCu;
label_4ebfdc:
    // 0x4ebfdc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4ebfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4ebfe0:
    // 0x4ebfe0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ebfe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ebfe4:
    // 0x4ebfe4: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4ebfe4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4ebfe8:
    // 0x4ebfe8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4ebfe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ebfec:
    // 0x4ebfec: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4ebfecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ebff0:
    // 0x4ebff0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4ebff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4ebff4:
    // 0x4ebff4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4ebff4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4ebff8:
    // 0x4ebff8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4ebff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4ebffc:
    // 0x4ebffc: 0x60f809  jalr        $v1
label_4ec000:
    if (ctx->pc == 0x4EC000u) {
        ctx->pc = 0x4EC000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBFFCu;
        // 0x4ec000: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC004u;
        goto label_4ec004;
    }
    ctx->pc = 0x4EBFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EC004u);
        ctx->pc = 0x4EC000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EBFFCu;
        // 0x4ec000: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EBFFCu, 0x4EC004u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EC004u;
label_4ec004:
    // 0x4ec004: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4ec004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ec008:
    // 0x4ec008: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ec008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ec00c:
    // 0x4ec00c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4ec00cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ec010:
    // 0x4ec010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ec010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ec014:
    // 0x4ec014: 0x3e00008  jr          $ra
label_4ec018:
    if (ctx->pc == 0x4EC018u) {
        ctx->pc = 0x4EC018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC014u;
        // 0x4ec018: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC01Cu;
        goto label_4ec01c;
    }
    ctx->pc = 0x4EC014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EC018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC014u;
        // 0x4ec018: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EC014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EC01Cu;
label_4ec01c:
    // 0x4ec01c: 0x0  nop
    ctx->pc = 0x4ec01cu;
    // NOP
    ctx->pc = 0x4ec020u;
}
