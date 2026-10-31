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

// Function: sub_003EBED8
// Address: 0x3ebed8 - 0x3ebfe8
void sub_003EBED8_0x3ebed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EBED8_0x3ebed8");
#endif

    switch (ctx->pc) {
        case 0x3ebed8u: goto label_3ebed8;
        case 0x3ebedcu: goto label_3ebedc;
        case 0x3ebee0u: goto label_3ebee0;
        case 0x3ebee4u: goto label_3ebee4;
        case 0x3ebee8u: goto label_3ebee8;
        case 0x3ebeecu: goto label_3ebeec;
        case 0x3ebef0u: goto label_3ebef0;
        case 0x3ebef4u: goto label_3ebef4;
        case 0x3ebef8u: goto label_3ebef8;
        case 0x3ebefcu: goto label_3ebefc;
        case 0x3ebf00u: goto label_3ebf00;
        case 0x3ebf04u: goto label_3ebf04;
        case 0x3ebf08u: goto label_3ebf08;
        case 0x3ebf0cu: goto label_3ebf0c;
        case 0x3ebf10u: goto label_3ebf10;
        case 0x3ebf14u: goto label_3ebf14;
        case 0x3ebf18u: goto label_3ebf18;
        case 0x3ebf1cu: goto label_3ebf1c;
        case 0x3ebf20u: goto label_3ebf20;
        case 0x3ebf24u: goto label_3ebf24;
        case 0x3ebf28u: goto label_3ebf28;
        case 0x3ebf2cu: goto label_3ebf2c;
        case 0x3ebf30u: goto label_3ebf30;
        case 0x3ebf34u: goto label_3ebf34;
        case 0x3ebf38u: goto label_3ebf38;
        case 0x3ebf3cu: goto label_3ebf3c;
        case 0x3ebf40u: goto label_3ebf40;
        case 0x3ebf44u: goto label_3ebf44;
        case 0x3ebf48u: goto label_3ebf48;
        case 0x3ebf4cu: goto label_3ebf4c;
        case 0x3ebf50u: goto label_3ebf50;
        case 0x3ebf54u: goto label_3ebf54;
        case 0x3ebf58u: goto label_3ebf58;
        case 0x3ebf5cu: goto label_3ebf5c;
        case 0x3ebf60u: goto label_3ebf60;
        case 0x3ebf64u: goto label_3ebf64;
        case 0x3ebf68u: goto label_3ebf68;
        case 0x3ebf6cu: goto label_3ebf6c;
        case 0x3ebf70u: goto label_3ebf70;
        case 0x3ebf74u: goto label_3ebf74;
        case 0x3ebf78u: goto label_3ebf78;
        case 0x3ebf7cu: goto label_3ebf7c;
        case 0x3ebf80u: goto label_3ebf80;
        case 0x3ebf84u: goto label_3ebf84;
        case 0x3ebf88u: goto label_3ebf88;
        case 0x3ebf8cu: goto label_3ebf8c;
        case 0x3ebf90u: goto label_3ebf90;
        case 0x3ebf94u: goto label_3ebf94;
        case 0x3ebf98u: goto label_3ebf98;
        case 0x3ebf9cu: goto label_3ebf9c;
        case 0x3ebfa0u: goto label_3ebfa0;
        case 0x3ebfa4u: goto label_3ebfa4;
        case 0x3ebfa8u: goto label_3ebfa8;
        case 0x3ebfacu: goto label_3ebfac;
        case 0x3ebfb0u: goto label_3ebfb0;
        case 0x3ebfb4u: goto label_3ebfb4;
        case 0x3ebfb8u: goto label_3ebfb8;
        case 0x3ebfbcu: goto label_3ebfbc;
        case 0x3ebfc0u: goto label_3ebfc0;
        case 0x3ebfc4u: goto label_3ebfc4;
        case 0x3ebfc8u: goto label_3ebfc8;
        case 0x3ebfccu: goto label_3ebfcc;
        case 0x3ebfd0u: goto label_3ebfd0;
        case 0x3ebfd4u: goto label_3ebfd4;
        case 0x3ebfd8u: goto label_3ebfd8;
        case 0x3ebfdcu: goto label_3ebfdc;
        case 0x3ebfe0u: goto label_3ebfe0;
        case 0x3ebfe4u: goto label_3ebfe4;
        default: break;
    }

    ctx->pc = 0x3ebed8u;

label_3ebed8:
    // 0x3ebed8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3ebed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3ebedc:
    // 0x3ebedc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3ebedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3ebee0:
    // 0x3ebee0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3ebee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3ebee4:
    // 0x3ebee4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ebee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ebee8:
    // 0x3ebee8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3ebee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3ebeec:
    // 0x3ebeec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ebeecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ebef0:
    // 0x3ebef0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3ebef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3ebef4:
    // 0x3ebef4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3ebef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3ebef8:
    // 0x3ebef8: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x3ebef8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3ebefc:
    // 0x3ebefc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ebefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ebf00:
    // 0x3ebf00: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ebf00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ebf04:
    // 0x3ebf04: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ebf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ebf08:
    // 0x3ebf08: 0x40f809  jalr        $v0
label_3ebf0c:
    if (ctx->pc == 0x3EBF0Cu) {
        ctx->pc = 0x3EBF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBF08u;
        // 0x3ebf0c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBF10u;
        goto label_3ebf10;
    }
    ctx->pc = 0x3EBF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EBF10u);
        ctx->pc = 0x3EBF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBF08u;
        // 0x3ebf0c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EBF08u, 0x3EBF10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EBF10u;
label_3ebf10:
    // 0x3ebf10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3ebf10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ebf14:
    // 0x3ebf14: 0xc0ea146  jal         func_3A8518
label_3ebf18:
    if (ctx->pc == 0x3EBF18u) {
        ctx->pc = 0x3EBF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBF14u;
        // 0x3ebf18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBF1Cu;
        goto label_3ebf1c;
    }
    ctx->pc = 0x3EBF14u;
    SET_GPR_U32(ctx, 31, 0x3EBF1Cu);
    ctx->pc = 0x3EBF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBF14u;
    // 0x3ebf18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3EBF14u, 0x3EBF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBF1Cu;
label_3ebf1c:
    // 0x3ebf1c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3ebf1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ebf20:
    // 0x3ebf20: 0xc0ea13a  jal         func_3A84E8
label_3ebf24:
    if (ctx->pc == 0x3EBF24u) {
        ctx->pc = 0x3EBF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBF20u;
        // 0x3ebf24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBF28u;
        goto label_3ebf28;
    }
    ctx->pc = 0x3EBF20u;
    SET_GPR_U32(ctx, 31, 0x3EBF28u);
    ctx->pc = 0x3EBF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBF20u;
    // 0x3ebf24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3EBF20u, 0x3EBF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBF28u;
label_3ebf28:
    // 0x3ebf28: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3ebf28u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3ebf2c:
    // 0x3ebf2c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ebf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ebf30:
    // 0x3ebf30: 0xc0ea12a  jal         func_3A84A8
label_3ebf34:
    if (ctx->pc == 0x3EBF34u) {
        ctx->pc = 0x3EBF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBF30u;
        // 0x3ebf34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBF38u;
        goto label_3ebf38;
    }
    ctx->pc = 0x3EBF30u;
    SET_GPR_U32(ctx, 31, 0x3EBF38u);
    ctx->pc = 0x3EBF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBF30u;
    // 0x3ebf34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EBF30u, 0x3EBF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBF38u;
label_3ebf38:
    // 0x3ebf38: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ebf38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ebf3c:
    // 0x3ebf3c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ebf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ebf40:
    // 0x3ebf40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ebf40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ebf44:
    // 0x3ebf44: 0xc0ea12a  jal         func_3A84A8
label_3ebf48:
    if (ctx->pc == 0x3EBF48u) {
        ctx->pc = 0x3EBF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBF44u;
        // 0x3ebf48: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBF4Cu;
        goto label_3ebf4c;
    }
    ctx->pc = 0x3EBF44u;
    SET_GPR_U32(ctx, 31, 0x3EBF4Cu);
    ctx->pc = 0x3EBF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBF44u;
    // 0x3ebf48: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EBF44u, 0x3EBF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBF4Cu;
label_3ebf4c:
    // 0x3ebf4c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ebf4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ebf50:
    // 0x3ebf50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ebf50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ebf54:
    // 0x3ebf54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ebf54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ebf58:
    // 0x3ebf58: 0xc0e858c  jal         func_3A1630
label_3ebf5c:
    if (ctx->pc == 0x3EBF5Cu) {
        ctx->pc = 0x3EBF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBF58u;
        // 0x3ebf5c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBF60u;
        goto label_3ebf60;
    }
    ctx->pc = 0x3EBF58u;
    SET_GPR_U32(ctx, 31, 0x3EBF60u);
    ctx->pc = 0x3EBF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBF58u;
    // 0x3ebf5c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3EBF58u, 0x3EBF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBF60u;
label_3ebf60:
    // 0x3ebf60: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3ebf60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_3ebf64:
    // 0x3ebf64: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3ebf64u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ebf68:
    // 0x3ebf68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ebf68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ebf6c:
    // 0x3ebf6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ebf6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ebf70:
    // 0x3ebf70: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3ebf70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3ebf74:
    // 0x3ebf74: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3ebf74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3ebf78:
    // 0x3ebf78: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3ebf78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3ebf7c:
    // 0x3ebf7c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x3ebf7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_3ebf80:
    // 0x3ebf80: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3ebf80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ebf84:
    // 0x3ebf84: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x3ebf84u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_3ebf88:
    // 0x3ebf88: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x3ebf88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ebf8c:
    // 0x3ebf8c: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x3ebf8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_3ebf90:
    // 0x3ebf90: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ebf90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ebf94:
    // 0x3ebf94: 0x86020070  lh          $v0, 0x70($s0)
    ctx->pc = 0x3ebf94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 112)));
label_3ebf98:
    // 0x3ebf98: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x3ebf98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_3ebf9c:
    // 0x3ebf9c: 0xc136b24  jal         func_4DAC90
label_3ebfa0:
    if (ctx->pc == 0x3EBFA0u) {
        ctx->pc = 0x3EBFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBF9Cu;
        // 0x3ebfa0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBFA4u;
        goto label_3ebfa4;
    }
    ctx->pc = 0x3EBF9Cu;
    SET_GPR_U32(ctx, 31, 0x3EBFA4u);
    ctx->pc = 0x3EBFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EBF9Cu;
    // 0x3ebfa0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3EBF9Cu, 0x3EBFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EBFA4u;
label_3ebfa4:
    // 0x3ebfa4: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x3ebfa4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ebfa8:
    // 0x3ebfa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ebfa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ebfac:
    // 0x3ebfac: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3ebfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3ebfb0:
    // 0x3ebfb0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3ebfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ebfb4:
    // 0x3ebfb4: 0x40f809  jalr        $v0
label_3ebfb8:
    if (ctx->pc == 0x3EBFB8u) {
        ctx->pc = 0x3EBFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBFB4u;
        // 0x3ebfb8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBFBCu;
        goto label_3ebfbc;
    }
    ctx->pc = 0x3EBFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EBFBCu);
        ctx->pc = 0x3EBFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBFB4u;
        // 0x3ebfb8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EBFB4u, 0x3EBFBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EBFBCu;
label_3ebfbc:
    // 0x3ebfbc: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x3ebfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
label_3ebfc0:
    // 0x3ebfc0: 0xe6540008  swc1        $f20, 0x8($s2)
    ctx->pc = 0x3ebfc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_3ebfc4:
    // 0x3ebfc4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3ebfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_3ebfc8:
    // 0x3ebfc8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3ebfc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3ebfcc:
    // 0x3ebfcc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3ebfccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ebfd0:
    // 0x3ebfd0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3ebfd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ebfd4:
    // 0x3ebfd4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3ebfd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ebfd8:
    // 0x3ebfd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3ebfd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3ebfdc:
    // 0x3ebfdc: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x3ebfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ebfe0:
    // 0x3ebfe0: 0x3e00008  jr          $ra
label_3ebfe4:
    if (ctx->pc == 0x3EBFE4u) {
        ctx->pc = 0x3EBFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBFE0u;
        // 0x3ebfe4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EBFE8u;
        goto label_fallthrough_0x3ebfe0;
    }
    ctx->pc = 0x3EBFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EBFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EBFE0u;
        // 0x3ebfe4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EBFE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ebfe0:
    ctx->pc = 0x3EBFE8u;
}
