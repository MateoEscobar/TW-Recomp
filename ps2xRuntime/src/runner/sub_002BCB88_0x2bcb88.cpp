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

// Function: sub_002BCB88
// Address: 0x2bcb88 - 0x2bcc28
void sub_002BCB88_0x2bcb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BCB88_0x2bcb88");
#endif

    switch (ctx->pc) {
        case 0x2bcb88u: goto label_2bcb88;
        case 0x2bcb8cu: goto label_2bcb8c;
        case 0x2bcb90u: goto label_2bcb90;
        case 0x2bcb94u: goto label_2bcb94;
        case 0x2bcb98u: goto label_2bcb98;
        case 0x2bcb9cu: goto label_2bcb9c;
        case 0x2bcba0u: goto label_2bcba0;
        case 0x2bcba4u: goto label_2bcba4;
        case 0x2bcba8u: goto label_2bcba8;
        case 0x2bcbacu: goto label_2bcbac;
        case 0x2bcbb0u: goto label_2bcbb0;
        case 0x2bcbb4u: goto label_2bcbb4;
        case 0x2bcbb8u: goto label_2bcbb8;
        case 0x2bcbbcu: goto label_2bcbbc;
        case 0x2bcbc0u: goto label_2bcbc0;
        case 0x2bcbc4u: goto label_2bcbc4;
        case 0x2bcbc8u: goto label_2bcbc8;
        case 0x2bcbccu: goto label_2bcbcc;
        case 0x2bcbd0u: goto label_2bcbd0;
        case 0x2bcbd4u: goto label_2bcbd4;
        case 0x2bcbd8u: goto label_2bcbd8;
        case 0x2bcbdcu: goto label_2bcbdc;
        case 0x2bcbe0u: goto label_2bcbe0;
        case 0x2bcbe4u: goto label_2bcbe4;
        case 0x2bcbe8u: goto label_2bcbe8;
        case 0x2bcbecu: goto label_2bcbec;
        case 0x2bcbf0u: goto label_2bcbf0;
        case 0x2bcbf4u: goto label_2bcbf4;
        case 0x2bcbf8u: goto label_2bcbf8;
        case 0x2bcbfcu: goto label_2bcbfc;
        case 0x2bcc00u: goto label_2bcc00;
        case 0x2bcc04u: goto label_2bcc04;
        case 0x2bcc08u: goto label_2bcc08;
        case 0x2bcc0cu: goto label_2bcc0c;
        case 0x2bcc10u: goto label_2bcc10;
        case 0x2bcc14u: goto label_2bcc14;
        case 0x2bcc18u: goto label_2bcc18;
        case 0x2bcc1cu: goto label_2bcc1c;
        case 0x2bcc20u: goto label_2bcc20;
        case 0x2bcc24u: goto label_2bcc24;
        default: break;
    }

    ctx->pc = 0x2bcb88u;

label_2bcb88:
    // 0x2bcb88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bcb88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2bcb8c:
    // 0x2bcb8c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2bcb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2bcb90:
    // 0x2bcb90: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2bcb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2bcb94:
    // 0x2bcb94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bcb94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bcb98:
    // 0x2bcb98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bcb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2bcb9c:
    // 0x2bcb9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bcb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bcba0:
    // 0x2bcba0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2bcba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2bcba4:
    // 0x2bcba4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2bcba4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bcba8:
    // 0x2bcba8: 0xc0e409a  jal         func_390268
label_2bcbac:
    if (ctx->pc == 0x2BCBACu) {
        ctx->pc = 0x2BCBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBA8u;
        // 0x2bcbac: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCBB0u;
        goto label_2bcbb0;
    }
    ctx->pc = 0x2BCBA8u;
    SET_GPR_U32(ctx, 31, 0x2BCBB0u);
    ctx->pc = 0x2BCBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCBA8u;
    // 0x2bcbac: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BCBA8u, 0x2BCBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCBB0u;
label_2bcbb0:
    // 0x2bcbb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bcbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bcbb4:
    // 0x2bcbb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bcbb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bcbb8:
    // 0x2bcbb8: 0xc0a352c  jal         func_28D4B0
label_2bcbbc:
    if (ctx->pc == 0x2BCBBCu) {
        ctx->pc = 0x2BCBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBB8u;
        // 0x2bcbbc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCBC0u;
        goto label_2bcbc0;
    }
    ctx->pc = 0x2BCBB8u;
    SET_GPR_U32(ctx, 31, 0x2BCBC0u);
    ctx->pc = 0x2BCBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCBB8u;
    // 0x2bcbbc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2BCBB8u, 0x2BCBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCBC0u;
label_2bcbc0:
    // 0x2bcbc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bcbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bcbc4:
    // 0x2bcbc4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2bcbc8:
    if (ctx->pc == 0x2BCBC8u) {
        ctx->pc = 0x2BCBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBC4u;
        // 0x2bcbc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCBCCu;
        goto label_2bcbcc;
    }
    ctx->pc = 0x2BCBC4u;
    {
        const bool branch_taken_0x2bcbc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBC4u;
        // 0x2bcbc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcbc4) {
            ctx->pc = 0x2BCBE4u;
            goto label_2bcbe4;
        }
    }
    ctx->pc = 0x2BCBCCu;
label_2bcbcc:
    // 0x2bcbcc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bcbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bcbd0:
    // 0x2bcbd0: 0xc08750a  jal         func_21D428
label_2bcbd4:
    if (ctx->pc == 0x2BCBD4u) {
        ctx->pc = 0x2BCBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBD0u;
        // 0x2bcbd4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCBD8u;
        goto label_2bcbd8;
    }
    ctx->pc = 0x2BCBD0u;
    SET_GPR_U32(ctx, 31, 0x2BCBD8u);
    ctx->pc = 0x2BCBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCBD0u;
    // 0x2bcbd4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x2BCBD0u, 0x2BCBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCBD8u;
label_2bcbd8:
    // 0x2bcbd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bcbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bcbdc:
    // 0x2bcbdc: 0xc0a580a  jal         func_296028
label_2bcbe0:
    if (ctx->pc == 0x2BCBE0u) {
        ctx->pc = 0x2BCBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBDCu;
        // 0x2bcbe0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCBE4u;
        goto label_2bcbe4;
    }
    ctx->pc = 0x2BCBDCu;
    SET_GPR_U32(ctx, 31, 0x2BCBE4u);
    ctx->pc = 0x2BCBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCBDCu;
    // 0x2bcbe0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296028u, 0x2BCBDCu, 0x2BCBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCBE4u;
label_2bcbe4:
    // 0x2bcbe4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2bcbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2bcbe8:
    // 0x2bcbe8: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x2bcbe8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_2bcbec:
    // 0x2bcbec: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2bcbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2bcbf0:
    // 0x2bcbf0: 0x60f809  jalr        $v1
label_2bcbf4:
    if (ctx->pc == 0x2BCBF4u) {
        ctx->pc = 0x2BCBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBF0u;
        // 0x2bcbf4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCBF8u;
        goto label_2bcbf8;
    }
    ctx->pc = 0x2BCBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2BCBF8u);
        ctx->pc = 0x2BCBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBF0u;
        // 0x2bcbf4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCBF0u, 0x2BCBF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BCBF8u;
label_2bcbf8:
    // 0x2bcbf8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2bcbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bcbfc:
    // 0x2bcbfc: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x2bcbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bcc00:
    // 0x2bcc00: 0xe440012c  swc1        $f0, 0x12C($v0)
    ctx->pc = 0x2bcc00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
label_2bcc04:
    // 0x2bcc04: 0x82250031  lb          $a1, 0x31($s1)
    ctx->pc = 0x2bcc04u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
label_2bcc08:
    // 0x2bcc08: 0xc0a337e  jal         func_28CDF8
label_2bcc0c:
    if (ctx->pc == 0x2BCC0Cu) {
        ctx->pc = 0x2BCC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCC08u;
        // 0x2bcc0c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCC10u;
        goto label_2bcc10;
    }
    ctx->pc = 0x2BCC08u;
    SET_GPR_U32(ctx, 31, 0x2BCC10u);
    ctx->pc = 0x2BCC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCC08u;
    // 0x2bcc0c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2BCC08u, 0x2BCC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCC10u;
label_2bcc10:
    // 0x2bcc10: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2bcc10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2bcc14:
    // 0x2bcc14: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2bcc14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2bcc18:
    // 0x2bcc18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bcc18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bcc1c:
    // 0x2bcc1c: 0x3e00008  jr          $ra
label_2bcc20:
    if (ctx->pc == 0x2BCC20u) {
        ctx->pc = 0x2BCC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCC1Cu;
        // 0x2bcc20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCC24u;
        goto label_2bcc24;
    }
    ctx->pc = 0x2BCC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCC1Cu;
        // 0x2bcc20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCC24u;
label_2bcc24:
    // 0x2bcc24: 0x0  nop
    ctx->pc = 0x2bcc24u;
    // NOP
    ctx->pc = 0x2bcc28u;
}
