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

// Function: sub_0031BF48
// Address: 0x31bf48 - 0x31c010
void sub_0031BF48_0x31bf48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BF48_0x31bf48");
#endif

    switch (ctx->pc) {
        case 0x31bf48u: goto label_31bf48;
        case 0x31bf4cu: goto label_31bf4c;
        case 0x31bf50u: goto label_31bf50;
        case 0x31bf54u: goto label_31bf54;
        case 0x31bf58u: goto label_31bf58;
        case 0x31bf5cu: goto label_31bf5c;
        case 0x31bf60u: goto label_31bf60;
        case 0x31bf64u: goto label_31bf64;
        case 0x31bf68u: goto label_31bf68;
        case 0x31bf6cu: goto label_31bf6c;
        case 0x31bf70u: goto label_31bf70;
        case 0x31bf74u: goto label_31bf74;
        case 0x31bf78u: goto label_31bf78;
        case 0x31bf7cu: goto label_31bf7c;
        case 0x31bf80u: goto label_31bf80;
        case 0x31bf84u: goto label_31bf84;
        case 0x31bf88u: goto label_31bf88;
        case 0x31bf8cu: goto label_31bf8c;
        case 0x31bf90u: goto label_31bf90;
        case 0x31bf94u: goto label_31bf94;
        case 0x31bf98u: goto label_31bf98;
        case 0x31bf9cu: goto label_31bf9c;
        case 0x31bfa0u: goto label_31bfa0;
        case 0x31bfa4u: goto label_31bfa4;
        case 0x31bfa8u: goto label_31bfa8;
        case 0x31bfacu: goto label_31bfac;
        case 0x31bfb0u: goto label_31bfb0;
        case 0x31bfb4u: goto label_31bfb4;
        case 0x31bfb8u: goto label_31bfb8;
        case 0x31bfbcu: goto label_31bfbc;
        case 0x31bfc0u: goto label_31bfc0;
        case 0x31bfc4u: goto label_31bfc4;
        case 0x31bfc8u: goto label_31bfc8;
        case 0x31bfccu: goto label_31bfcc;
        case 0x31bfd0u: goto label_31bfd0;
        case 0x31bfd4u: goto label_31bfd4;
        case 0x31bfd8u: goto label_31bfd8;
        case 0x31bfdcu: goto label_31bfdc;
        case 0x31bfe0u: goto label_31bfe0;
        case 0x31bfe4u: goto label_31bfe4;
        case 0x31bfe8u: goto label_31bfe8;
        case 0x31bfecu: goto label_31bfec;
        case 0x31bff0u: goto label_31bff0;
        case 0x31bff4u: goto label_31bff4;
        case 0x31bff8u: goto label_31bff8;
        case 0x31bffcu: goto label_31bffc;
        case 0x31c000u: goto label_31c000;
        case 0x31c004u: goto label_31c004;
        case 0x31c008u: goto label_31c008;
        case 0x31c00cu: goto label_31c00c;
        default: break;
    }

    ctx->pc = 0x31bf48u;

label_31bf48:
    // 0x31bf48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31bf48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_31bf4c:
    // 0x31bf4c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x31bf4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_31bf50:
    // 0x31bf50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31bf50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_31bf54:
    // 0x31bf54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31bf54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31bf58:
    // 0x31bf58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31bf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31bf5c:
    // 0x31bf5c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x31bf5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31bf60:
    // 0x31bf60: 0xc08a61a  jal         func_229868
label_31bf64:
    if (ctx->pc == 0x31BF64u) {
        ctx->pc = 0x31BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BF60u;
        // 0x31bf64: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BF68u;
        goto label_31bf68;
    }
    ctx->pc = 0x31BF60u;
    SET_GPR_U32(ctx, 31, 0x31BF68u);
    ctx->pc = 0x31BF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BF60u;
    // 0x31bf64: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x31BF60u, 0x31BF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BF68u;
label_31bf68:
    // 0x31bf68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31bf68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31bf6c:
    // 0x31bf6c: 0x10a0002b  beqz        $a1, . + 4 + (0x2B << 2)
label_31bf70:
    if (ctx->pc == 0x31BF70u) {
        ctx->pc = 0x31BF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BF6Cu;
        // 0x31bf70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BF74u;
        goto label_31bf74;
    }
    ctx->pc = 0x31BF6Cu;
    {
        const bool branch_taken_0x31bf6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BF6Cu;
        // 0x31bf70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bf6c) {
            ctx->pc = 0x31C01Cu;
            return;
        }
    }
    ctx->pc = 0x31BF74u;
label_31bf74:
    // 0x31bf74: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x31bf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_31bf78:
    // 0x31bf78: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x31bf78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_31bf7c:
    // 0x31bf7c: 0x2c830016  sltiu       $v1, $a0, 0x16
    ctx->pc = 0x31bf7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
label_31bf80:
    // 0x31bf80: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_31bf84:
    if (ctx->pc == 0x31BF84u) {
        ctx->pc = 0x31BF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BF80u;
        // 0x31bf84: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BF88u;
        goto label_31bf88;
    }
    ctx->pc = 0x31BF80u;
    {
        const bool branch_taken_0x31bf80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BF80u;
        // 0x31bf84: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bf80) {
            ctx->pc = 0x31C018u;
            return;
        }
    }
    ctx->pc = 0x31BF88u;
label_31bf88:
    // 0x31bf88: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x31bf88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_31bf8c:
    // 0x31bf8c: 0x24421950  addiu       $v0, $v0, 0x1950
    ctx->pc = 0x31bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6480));
label_31bf90:
    // 0x31bf90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31bf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31bf94:
    // 0x31bf94: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x31bf94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_31bf98:
    // 0x31bf98: 0x800008  jr          $a0
label_31bf9c:
    if (ctx->pc == 0x31BF9Cu) {
        ctx->pc = 0x31BFA0u;
        goto label_31bfa0;
    }
    ctx->pc = 0x31BF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x31BFA0u: goto label_31bfa0;
            case 0x31BFB0u: goto label_31bfb0;
            case 0x31BFE4u: goto label_31bfe4;
            case 0x31BFF0u: goto label_31bff0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BF98u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x31BFA0u;
label_31bfa0:
    // 0x31bfa0: 0xc0c6f4e  jal         func_31BD38
label_31bfa4:
    if (ctx->pc == 0x31BFA4u) {
        ctx->pc = 0x31BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BFA0u;
        // 0x31bfa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BFA8u;
        goto label_31bfa8;
    }
    ctx->pc = 0x31BFA0u;
    SET_GPR_U32(ctx, 31, 0x31BFA8u);
    ctx->pc = 0x31BFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BFA0u;
    // 0x31bfa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BD38u, 0x31BFA0u, 0x31BFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BFA8u;
label_31bfa8:
    // 0x31bfa8: 0x1000001c  b           . + 4 + (0x1C << 2)
label_31bfac:
    if (ctx->pc == 0x31BFACu) {
        ctx->pc = 0x31BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BFA8u;
        // 0x31bfac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BFB0u;
        goto label_31bfb0;
    }
    ctx->pc = 0x31BFA8u;
    {
        const bool branch_taken_0x31bfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BFA8u;
        // 0x31bfac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bfa8) {
            ctx->pc = 0x31C01Cu;
            return;
        }
    }
    ctx->pc = 0x31BFB0u;
label_31bfb0:
    // 0x31bfb0: 0xc087502  jal         func_21D408
label_31bfb4:
    if (ctx->pc == 0x31BFB4u) {
        ctx->pc = 0x31BFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BFB0u;
        // 0x31bfb4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BFB8u;
        goto label_31bfb8;
    }
    ctx->pc = 0x31BFB0u;
    SET_GPR_U32(ctx, 31, 0x31BFB8u);
    ctx->pc = 0x31BFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BFB0u;
    // 0x31bfb4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31BFB0u, 0x31BFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BFB8u;
label_31bfb8:
    // 0x31bfb8: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x31bfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_31bfbc:
    // 0x31bfbc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x31bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31bfc0:
    // 0x31bfc0: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_31bfc4:
    if (ctx->pc == 0x31BFC4u) {
        ctx->pc = 0x31BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BFC0u;
        // 0x31bfc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BFC8u;
        goto label_31bfc8;
    }
    ctx->pc = 0x31BFC0u;
    {
        const bool branch_taken_0x31bfc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BFC0u;
        // 0x31bfc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bfc0) {
            ctx->pc = 0x31C01Cu;
            return;
        }
    }
    ctx->pc = 0x31BFC8u;
label_31bfc8:
    // 0x31bfc8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x31bfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_31bfcc:
    // 0x31bfcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31bfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31bfd0:
    // 0x31bfd0: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_31bfd4:
    if (ctx->pc == 0x31BFD4u) {
        ctx->pc = 0x31BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BFD0u;
        // 0x31bfd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BFD8u;
        goto label_31bfd8;
    }
    ctx->pc = 0x31BFD0u;
    {
        const bool branch_taken_0x31bfd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BFD0u;
        // 0x31bfd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bfd0) {
            ctx->pc = 0x31C01Cu;
            return;
        }
    }
    ctx->pc = 0x31BFD8u;
label_31bfd8:
    // 0x31bfd8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x31bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_31bfdc:
    // 0x31bfdc: 0x10000006  b           . + 4 + (0x6 << 2)
label_31bfe0:
    if (ctx->pc == 0x31BFE0u) {
        ctx->pc = 0x31BFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BFDCu;
        // 0x31bfe0: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BFE4u;
        goto label_31bfe4;
    }
    ctx->pc = 0x31BFDCu;
    {
        const bool branch_taken_0x31bfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BFDCu;
        // 0x31bfe0: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bfdc) {
            ctx->pc = 0x31BFF8u;
            goto label_31bff8;
        }
    }
    ctx->pc = 0x31BFE4u;
label_31bfe4:
    // 0x31bfe4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x31bfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_31bfe8:
    // 0x31bfe8: 0x10000003  b           . + 4 + (0x3 << 2)
label_31bfec:
    if (ctx->pc == 0x31BFECu) {
        ctx->pc = 0x31BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BFE8u;
        // 0x31bfec: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31BFF0u;
        goto label_31bff0;
    }
    ctx->pc = 0x31BFE8u;
    {
        const bool branch_taken_0x31bfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BFE8u;
        // 0x31bfec: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bfe8) {
            ctx->pc = 0x31BFF8u;
            goto label_31bff8;
        }
    }
    ctx->pc = 0x31BFF0u;
label_31bff0:
    // 0x31bff0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x31bff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_31bff4:
    // 0x31bff4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x31bff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_31bff8:
    // 0x31bff8: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x31bff8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_31bffc:
    // 0x31bffc: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x31bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_31c000:
    // 0x31c000: 0x60f809  jalr        $v1
label_31c004:
    if (ctx->pc == 0x31C004u) {
        ctx->pc = 0x31C004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C000u;
        // 0x31c004: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C008u;
        goto label_31c008;
    }
    ctx->pc = 0x31C000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31C008u);
        ctx->pc = 0x31C004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C000u;
        // 0x31c004: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C000u, 0x31C008u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31C008u;
label_31c008:
    // 0x31c008: 0x10000004  b           . + 4 + (0x4 << 2)
label_31c00c:
    if (ctx->pc == 0x31C00Cu) {
        ctx->pc = 0x31C00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C008u;
        // 0x31c00c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C010u;
        goto label_fallthrough_0x31c008;
    }
    ctx->pc = 0x31C008u;
    {
        const bool branch_taken_0x31c008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C008u;
        // 0x31c00c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c008) {
            ctx->pc = 0x31C01Cu;
            return;
        }
    }
label_fallthrough_0x31c008:
    ctx->pc = 0x31C010u;
}
