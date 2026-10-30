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

// Function: sub_002BFCE0
// Address: 0x2bfce0 - 0x2bfe00
void sub_002BFCE0_0x2bfce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFCE0_0x2bfce0");
#endif

    switch (ctx->pc) {
        case 0x2bfce0u: goto label_2bfce0;
        case 0x2bfce4u: goto label_2bfce4;
        case 0x2bfce8u: goto label_2bfce8;
        case 0x2bfcecu: goto label_2bfcec;
        case 0x2bfcf0u: goto label_2bfcf0;
        case 0x2bfcf4u: goto label_2bfcf4;
        case 0x2bfcf8u: goto label_2bfcf8;
        case 0x2bfcfcu: goto label_2bfcfc;
        case 0x2bfd00u: goto label_2bfd00;
        case 0x2bfd04u: goto label_2bfd04;
        case 0x2bfd08u: goto label_2bfd08;
        case 0x2bfd0cu: goto label_2bfd0c;
        case 0x2bfd10u: goto label_2bfd10;
        case 0x2bfd14u: goto label_2bfd14;
        case 0x2bfd18u: goto label_2bfd18;
        case 0x2bfd1cu: goto label_2bfd1c;
        case 0x2bfd20u: goto label_2bfd20;
        case 0x2bfd24u: goto label_2bfd24;
        case 0x2bfd28u: goto label_2bfd28;
        case 0x2bfd2cu: goto label_2bfd2c;
        case 0x2bfd30u: goto label_2bfd30;
        case 0x2bfd34u: goto label_2bfd34;
        case 0x2bfd38u: goto label_2bfd38;
        case 0x2bfd3cu: goto label_2bfd3c;
        case 0x2bfd40u: goto label_2bfd40;
        case 0x2bfd44u: goto label_2bfd44;
        case 0x2bfd48u: goto label_2bfd48;
        case 0x2bfd4cu: goto label_2bfd4c;
        case 0x2bfd50u: goto label_2bfd50;
        case 0x2bfd54u: goto label_2bfd54;
        case 0x2bfd58u: goto label_2bfd58;
        case 0x2bfd5cu: goto label_2bfd5c;
        case 0x2bfd60u: goto label_2bfd60;
        case 0x2bfd64u: goto label_2bfd64;
        case 0x2bfd68u: goto label_2bfd68;
        case 0x2bfd6cu: goto label_2bfd6c;
        case 0x2bfd70u: goto label_2bfd70;
        case 0x2bfd74u: goto label_2bfd74;
        case 0x2bfd78u: goto label_2bfd78;
        case 0x2bfd7cu: goto label_2bfd7c;
        case 0x2bfd80u: goto label_2bfd80;
        case 0x2bfd84u: goto label_2bfd84;
        case 0x2bfd88u: goto label_2bfd88;
        case 0x2bfd8cu: goto label_2bfd8c;
        case 0x2bfd90u: goto label_2bfd90;
        case 0x2bfd94u: goto label_2bfd94;
        case 0x2bfd98u: goto label_2bfd98;
        case 0x2bfd9cu: goto label_2bfd9c;
        case 0x2bfda0u: goto label_2bfda0;
        case 0x2bfda4u: goto label_2bfda4;
        case 0x2bfda8u: goto label_2bfda8;
        case 0x2bfdacu: goto label_2bfdac;
        case 0x2bfdb0u: goto label_2bfdb0;
        case 0x2bfdb4u: goto label_2bfdb4;
        case 0x2bfdb8u: goto label_2bfdb8;
        case 0x2bfdbcu: goto label_2bfdbc;
        case 0x2bfdc0u: goto label_2bfdc0;
        case 0x2bfdc4u: goto label_2bfdc4;
        case 0x2bfdc8u: goto label_2bfdc8;
        case 0x2bfdccu: goto label_2bfdcc;
        case 0x2bfdd0u: goto label_2bfdd0;
        case 0x2bfdd4u: goto label_2bfdd4;
        case 0x2bfdd8u: goto label_2bfdd8;
        case 0x2bfddcu: goto label_2bfddc;
        case 0x2bfde0u: goto label_2bfde0;
        case 0x2bfde4u: goto label_2bfde4;
        case 0x2bfde8u: goto label_2bfde8;
        case 0x2bfdecu: goto label_2bfdec;
        case 0x2bfdf0u: goto label_2bfdf0;
        case 0x2bfdf4u: goto label_2bfdf4;
        case 0x2bfdf8u: goto label_2bfdf8;
        case 0x2bfdfcu: goto label_2bfdfc;
        default: break;
    }

    ctx->pc = 0x2bfce0u;

label_2bfce0:
    // 0x2bfce0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2bfce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2bfce4:
    // 0x2bfce4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2bfce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2bfce8:
    // 0x2bfce8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2bfce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_2bfcec:
    // 0x2bfcec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2bfcecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bfcf0:
    // 0x2bfcf0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2bfcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_2bfcf4:
    // 0x2bfcf4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bfcf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bfcf8:
    // 0x2bfcf8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2bfcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2bfcfc:
    // 0x2bfcfc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2bfcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2bfd00:
    // 0x2bfd00: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2bfd00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2bfd04:
    // 0x2bfd04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2bfd04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bfd08:
    // 0x2bfd08: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2bfd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_2bfd0c:
    // 0x2bfd0c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2bfd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2bfd10:
    // 0x2bfd10: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2bfd10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_2bfd14:
    // 0x2bfd14: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2bfd14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2bfd18:
    // 0x2bfd18: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2bfd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2bfd1c:
    // 0x2bfd1c: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2bfd1cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2bfd20:
    // 0x2bfd20: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2bfd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2bfd24:
    // 0x2bfd24: 0x60f809  jalr        $v1
label_2bfd28:
    if (ctx->pc == 0x2BFD28u) {
        ctx->pc = 0x2BFD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD24u;
        // 0x2bfd28: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFD2Cu;
        goto label_2bfd2c;
    }
    ctx->pc = 0x2BFD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2BFD2Cu);
        ctx->pc = 0x2BFD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD24u;
        // 0x2bfd28: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFD24u, 0x2BFD2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BFD2Cu;
label_2bfd2c:
    // 0x2bfd2c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2bfd2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bfd30:
    // 0x2bfd30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2bfd30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bfd34:
    // 0x2bfd34: 0xc05b0e2  jal         func_16C388
label_2bfd38:
    if (ctx->pc == 0x2BFD38u) {
        ctx->pc = 0x2BFD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD34u;
        // 0x2bfd38: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFD3Cu;
        goto label_2bfd3c;
    }
    ctx->pc = 0x2BFD34u;
    SET_GPR_U32(ctx, 31, 0x2BFD3Cu);
    ctx->pc = 0x2BFD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFD34u;
    // 0x2bfd38: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x2BFD34u, 0x2BFD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFD3Cu;
label_2bfd3c:
    // 0x2bfd3c: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x2bfd3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_2bfd40:
    // 0x2bfd40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bfd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bfd44:
    // 0x2bfd44: 0x0  nop
    ctx->pc = 0x2bfd44u;
    // NOP
label_2bfd48:
    // 0x2bfd48: 0xc137866  jal         func_4DE198
label_2bfd4c:
    if (ctx->pc == 0x2BFD4Cu) {
        ctx->pc = 0x2BFD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD48u;
        // 0x2bfd4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFD50u;
        goto label_2bfd50;
    }
    ctx->pc = 0x2BFD48u;
    SET_GPR_U32(ctx, 31, 0x2BFD50u);
    ctx->pc = 0x2BFD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFD48u;
    // 0x2bfd4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x2BFD48u, 0x2BFD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFD50u;
label_2bfd50:
    // 0x2bfd50: 0xc0e409a  jal         func_390268
label_2bfd54:
    if (ctx->pc == 0x2BFD54u) {
        ctx->pc = 0x2BFD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD50u;
        // 0x2bfd54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFD58u;
        goto label_2bfd58;
    }
    ctx->pc = 0x2BFD50u;
    SET_GPR_U32(ctx, 31, 0x2BFD58u);
    ctx->pc = 0x2BFD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFD50u;
    // 0x2bfd54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2BFD50u, 0x2BFD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFD58u;
label_2bfd58:
    // 0x2bfd58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bfd58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bfd5c:
    // 0x2bfd5c: 0x5200001a  beql        $s0, $zero, . + 4 + (0x1A << 2)
label_2bfd60:
    if (ctx->pc == 0x2BFD60u) {
        ctx->pc = 0x2BFD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD5Cu;
        // 0x2bfd60: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFD64u;
        goto label_2bfd64;
    }
    ctx->pc = 0x2BFD5Cu;
    {
        const bool branch_taken_0x2bfd5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfd5c) {
            ctx->pc = 0x2BFD60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFD5Cu;
            // 0x2bfd60: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFDC8u;
            goto label_2bfdc8;
        }
    }
    ctx->pc = 0x2BFD64u;
label_2bfd64:
    // 0x2bfd64: 0x52120018  beql        $s0, $s2, . + 4 + (0x18 << 2)
label_2bfd68:
    if (ctx->pc == 0x2BFD68u) {
        ctx->pc = 0x2BFD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD64u;
        // 0x2bfd68: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFD6Cu;
        goto label_2bfd6c;
    }
    ctx->pc = 0x2BFD64u;
    {
        const bool branch_taken_0x2bfd64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        if (branch_taken_0x2bfd64) {
            ctx->pc = 0x2BFD68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFD64u;
            // 0x2bfd68: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFDC8u;
            goto label_2bfdc8;
        }
    }
    ctx->pc = 0x2BFD6Cu;
label_2bfd6c:
    // 0x2bfd6c: 0xc088edc  jal         func_223B70
label_2bfd70:
    if (ctx->pc == 0x2BFD70u) {
        ctx->pc = 0x2BFD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD6Cu;
        // 0x2bfd70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFD74u;
        goto label_2bfd74;
    }
    ctx->pc = 0x2BFD6Cu;
    SET_GPR_U32(ctx, 31, 0x2BFD74u);
    ctx->pc = 0x2BFD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFD6Cu;
    // 0x2bfd70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x2BFD6Cu, 0x2BFD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFD74u;
label_2bfd74:
    // 0x2bfd74: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_2bfd78:
    if (ctx->pc == 0x2BFD78u) {
        ctx->pc = 0x2BFD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD74u;
        // 0x2bfd78: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFD7Cu;
        goto label_2bfd7c;
    }
    ctx->pc = 0x2BFD74u;
    {
        const bool branch_taken_0x2bfd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfd74) {
            ctx->pc = 0x2BFD78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFD74u;
            // 0x2bfd78: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFDC8u;
            goto label_2bfdc8;
        }
    }
    ctx->pc = 0x2BFD7Cu;
label_2bfd7c:
    // 0x2bfd7c: 0xc087502  jal         func_21D408
label_2bfd80:
    if (ctx->pc == 0x2BFD80u) {
        ctx->pc = 0x2BFD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD7Cu;
        // 0x2bfd80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFD84u;
        goto label_2bfd84;
    }
    ctx->pc = 0x2BFD7Cu;
    SET_GPR_U32(ctx, 31, 0x2BFD84u);
    ctx->pc = 0x2BFD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFD7Cu;
    // 0x2bfd80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2BFD7Cu, 0x2BFD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFD84u;
label_2bfd84:
    // 0x2bfd84: 0x8c430288  lw          $v1, 0x288($v0)
    ctx->pc = 0x2bfd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 648)));
label_2bfd88:
    // 0x2bfd88: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
label_2bfd8c:
    if (ctx->pc == 0x2BFD8Cu) {
        ctx->pc = 0x2BFD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD88u;
        // 0x2bfd8c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFD90u;
        goto label_2bfd90;
    }
    ctx->pc = 0x2BFD88u;
    {
        const bool branch_taken_0x2bfd88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bfd88) {
            ctx->pc = 0x2BFD8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFD88u;
            // 0x2bfd8c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFDC8u;
            goto label_2bfdc8;
        }
    }
    ctx->pc = 0x2BFD90u;
label_2bfd90:
    // 0x2bfd90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2bfd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2bfd94:
    // 0x2bfd94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bfd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2bfd98:
    // 0x2bfd98: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2bfd98u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2bfd9c:
    // 0x2bfd9c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2bfd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2bfda0:
    // 0x2bfda0: 0x60f809  jalr        $v1
label_2bfda4:
    if (ctx->pc == 0x2BFDA4u) {
        ctx->pc = 0x2BFDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDA0u;
        // 0x2bfda4: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFDA8u;
        goto label_2bfda8;
    }
    ctx->pc = 0x2BFDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2BFDA8u);
        ctx->pc = 0x2BFDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDA0u;
        // 0x2bfda4: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFDA0u, 0x2BFDA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BFDA8u;
label_2bfda8:
    // 0x2bfda8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bfda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bfdac:
    // 0x2bfdac: 0xc0cdb38  jal         func_336CE0
label_2bfdb0:
    if (ctx->pc == 0x2BFDB0u) {
        ctx->pc = 0x2BFDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDACu;
        // 0x2bfdb0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFDB4u;
        goto label_2bfdb4;
    }
    ctx->pc = 0x2BFDACu;
    SET_GPR_U32(ctx, 31, 0x2BFDB4u);
    ctx->pc = 0x2BFDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFDACu;
    // 0x2bfdb0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2BFDACu, 0x2BFDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFDB4u;
label_2bfdb4:
    // 0x2bfdb4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2bfdb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bfdb8:
    // 0x2bfdb8: 0x0  nop
    ctx->pc = 0x2bfdb8u;
    // NOP
label_2bfdbc:
    // 0x2bfdbc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_2bfdc0:
    if (ctx->pc == 0x2BFDC0u) {
        ctx->pc = 0x2BFDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDBCu;
        // 0x2bfdc0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFDC4u;
        goto label_2bfdc4;
    }
    ctx->pc = 0x2BFDBCu;
    {
        const bool branch_taken_0x2bfdbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BFDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDBCu;
        // 0x2bfdc0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfdbc) {
            ctx->pc = 0x2BFDD8u;
            goto label_2bfdd8;
        }
    }
    ctx->pc = 0x2BFDC4u;
label_2bfdc4:
    // 0x2bfdc4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2bfdc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2bfdc8:
    // 0x2bfdc8: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x2bfdc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_2bfdcc:
    // 0x2bfdcc: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_2bfdd0:
    if (ctx->pc == 0x2BFDD0u) {
        ctx->pc = 0x2BFDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDCCu;
        // 0x2bfdd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFDD4u;
        goto label_2bfdd4;
    }
    ctx->pc = 0x2BFDCCu;
    {
        const bool branch_taken_0x2bfdcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDCCu;
        // 0x2bfdd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfdcc) {
            ctx->pc = 0x2BFD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bfd48;
        }
    }
    ctx->pc = 0x2BFDD4u;
label_2bfdd4:
    // 0x2bfdd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bfdd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bfdd8:
    // 0x2bfdd8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2bfdd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2bfddc:
    // 0x2bfddc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2bfddcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2bfde0:
    // 0x2bfde0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2bfde0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2bfde4:
    // 0x2bfde4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2bfde4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2bfde8:
    // 0x2bfde8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2bfde8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2bfdec:
    // 0x2bfdec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2bfdecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2bfdf0:
    // 0x2bfdf0: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2bfdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2bfdf4:
    // 0x2bfdf4: 0x3e00008  jr          $ra
label_2bfdf8:
    if (ctx->pc == 0x2BFDF8u) {
        ctx->pc = 0x2BFDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDF4u;
        // 0x2bfdf8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFDFCu;
        goto label_2bfdfc;
    }
    ctx->pc = 0x2BFDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDF4u;
        // 0x2bfdf8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFDF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFDFCu;
label_2bfdfc:
    // 0x2bfdfc: 0x0  nop
    ctx->pc = 0x2bfdfcu;
    // NOP
    ctx->pc = 0x2bfe00u;
}
