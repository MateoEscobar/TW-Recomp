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

// Function: sub_003DFCC0
// Address: 0x3dfcc0 - 0x3dfe18
void sub_003DFCC0_0x3dfcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DFCC0_0x3dfcc0");
#endif

    switch (ctx->pc) {
        case 0x3dfcc0u: goto label_3dfcc0;
        case 0x3dfcc4u: goto label_3dfcc4;
        case 0x3dfcc8u: goto label_3dfcc8;
        case 0x3dfcccu: goto label_3dfccc;
        case 0x3dfcd0u: goto label_3dfcd0;
        case 0x3dfcd4u: goto label_3dfcd4;
        case 0x3dfcd8u: goto label_3dfcd8;
        case 0x3dfcdcu: goto label_3dfcdc;
        case 0x3dfce0u: goto label_3dfce0;
        case 0x3dfce4u: goto label_3dfce4;
        case 0x3dfce8u: goto label_3dfce8;
        case 0x3dfcecu: goto label_3dfcec;
        case 0x3dfcf0u: goto label_3dfcf0;
        case 0x3dfcf4u: goto label_3dfcf4;
        case 0x3dfcf8u: goto label_3dfcf8;
        case 0x3dfcfcu: goto label_3dfcfc;
        case 0x3dfd00u: goto label_3dfd00;
        case 0x3dfd04u: goto label_3dfd04;
        case 0x3dfd08u: goto label_3dfd08;
        case 0x3dfd0cu: goto label_3dfd0c;
        case 0x3dfd10u: goto label_3dfd10;
        case 0x3dfd14u: goto label_3dfd14;
        case 0x3dfd18u: goto label_3dfd18;
        case 0x3dfd1cu: goto label_3dfd1c;
        case 0x3dfd20u: goto label_3dfd20;
        case 0x3dfd24u: goto label_3dfd24;
        case 0x3dfd28u: goto label_3dfd28;
        case 0x3dfd2cu: goto label_3dfd2c;
        case 0x3dfd30u: goto label_3dfd30;
        case 0x3dfd34u: goto label_3dfd34;
        case 0x3dfd38u: goto label_3dfd38;
        case 0x3dfd3cu: goto label_3dfd3c;
        case 0x3dfd40u: goto label_3dfd40;
        case 0x3dfd44u: goto label_3dfd44;
        case 0x3dfd48u: goto label_3dfd48;
        case 0x3dfd4cu: goto label_3dfd4c;
        case 0x3dfd50u: goto label_3dfd50;
        case 0x3dfd54u: goto label_3dfd54;
        case 0x3dfd58u: goto label_3dfd58;
        case 0x3dfd5cu: goto label_3dfd5c;
        case 0x3dfd60u: goto label_3dfd60;
        case 0x3dfd64u: goto label_3dfd64;
        case 0x3dfd68u: goto label_3dfd68;
        case 0x3dfd6cu: goto label_3dfd6c;
        case 0x3dfd70u: goto label_3dfd70;
        case 0x3dfd74u: goto label_3dfd74;
        case 0x3dfd78u: goto label_3dfd78;
        case 0x3dfd7cu: goto label_3dfd7c;
        case 0x3dfd80u: goto label_3dfd80;
        case 0x3dfd84u: goto label_3dfd84;
        case 0x3dfd88u: goto label_3dfd88;
        case 0x3dfd8cu: goto label_3dfd8c;
        case 0x3dfd90u: goto label_3dfd90;
        case 0x3dfd94u: goto label_3dfd94;
        case 0x3dfd98u: goto label_3dfd98;
        case 0x3dfd9cu: goto label_3dfd9c;
        case 0x3dfda0u: goto label_3dfda0;
        case 0x3dfda4u: goto label_3dfda4;
        case 0x3dfda8u: goto label_3dfda8;
        case 0x3dfdacu: goto label_3dfdac;
        case 0x3dfdb0u: goto label_3dfdb0;
        case 0x3dfdb4u: goto label_3dfdb4;
        case 0x3dfdb8u: goto label_3dfdb8;
        case 0x3dfdbcu: goto label_3dfdbc;
        case 0x3dfdc0u: goto label_3dfdc0;
        case 0x3dfdc4u: goto label_3dfdc4;
        case 0x3dfdc8u: goto label_3dfdc8;
        case 0x3dfdccu: goto label_3dfdcc;
        case 0x3dfdd0u: goto label_3dfdd0;
        case 0x3dfdd4u: goto label_3dfdd4;
        case 0x3dfdd8u: goto label_3dfdd8;
        case 0x3dfddcu: goto label_3dfddc;
        case 0x3dfde0u: goto label_3dfde0;
        case 0x3dfde4u: goto label_3dfde4;
        case 0x3dfde8u: goto label_3dfde8;
        case 0x3dfdecu: goto label_3dfdec;
        case 0x3dfdf0u: goto label_3dfdf0;
        case 0x3dfdf4u: goto label_3dfdf4;
        case 0x3dfdf8u: goto label_3dfdf8;
        case 0x3dfdfcu: goto label_3dfdfc;
        case 0x3dfe00u: goto label_3dfe00;
        case 0x3dfe04u: goto label_3dfe04;
        case 0x3dfe08u: goto label_3dfe08;
        case 0x3dfe0cu: goto label_3dfe0c;
        case 0x3dfe10u: goto label_3dfe10;
        case 0x3dfe14u: goto label_3dfe14;
        default: break;
    }

    ctx->pc = 0x3dfcc0u;

label_3dfcc0:
    // 0x3dfcc0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3dfcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3dfcc4:
    // 0x3dfcc4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3dfcc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3dfcc8:
    // 0x3dfcc8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3dfcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3dfccc:
    // 0x3dfccc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3dfcccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dfcd0:
    // 0x3dfcd0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3dfcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3dfcd4:
    // 0x3dfcd4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3dfcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3dfcd8:
    // 0x3dfcd8: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x3dfcd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3dfcdc:
    // 0x3dfcdc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3dfcdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dfce0:
    // 0x3dfce0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3dfce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3dfce4:
    // 0x3dfce4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3dfce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3dfce8:
    // 0x3dfce8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dfce8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dfcec:
    // 0x3dfcec: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dfcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dfcf0:
    // 0x3dfcf0: 0x40f809  jalr        $v0
label_3dfcf4:
    if (ctx->pc == 0x3DFCF4u) {
        ctx->pc = 0x3DFCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFCF0u;
        // 0x3dfcf4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFCF8u;
        goto label_3dfcf8;
    }
    ctx->pc = 0x3DFCF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DFCF8u);
        ctx->pc = 0x3DFCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFCF0u;
        // 0x3dfcf4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DFCF0u, 0x3DFCF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DFCF8u;
label_3dfcf8:
    // 0x3dfcf8: 0x24030480  addiu       $v1, $zero, 0x480
    ctx->pc = 0x3dfcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
label_3dfcfc:
    // 0x3dfcfc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3dfcfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dfd00:
    // 0x3dfd00: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x3dfd00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_3dfd04:
    // 0x3dfd04: 0xc0ea13a  jal         func_3A84E8
label_3dfd08:
    if (ctx->pc == 0x3DFD08u) {
        ctx->pc = 0x3DFD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFD04u;
        // 0x3dfd08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFD0Cu;
        goto label_3dfd0c;
    }
    ctx->pc = 0x3DFD04u;
    SET_GPR_U32(ctx, 31, 0x3DFD0Cu);
    ctx->pc = 0x3DFD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFD04u;
    // 0x3dfd08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3DFD04u, 0x3DFD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFD0Cu;
label_3dfd0c:
    // 0x3dfd0c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3dfd0cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3dfd10:
    // 0x3dfd10: 0xc0ea146  jal         func_3A8518
label_3dfd14:
    if (ctx->pc == 0x3DFD14u) {
        ctx->pc = 0x3DFD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFD10u;
        // 0x3dfd14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFD18u;
        goto label_3dfd18;
    }
    ctx->pc = 0x3DFD10u;
    SET_GPR_U32(ctx, 31, 0x3DFD18u);
    ctx->pc = 0x3DFD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFD10u;
    // 0x3dfd14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3DFD10u, 0x3DFD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFD18u;
label_3dfd18:
    // 0x3dfd18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dfd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dfd1c:
    // 0x3dfd1c: 0xc0ea14c  jal         func_3A8530
label_3dfd20:
    if (ctx->pc == 0x3DFD20u) {
        ctx->pc = 0x3DFD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFD1Cu;
        // 0x3dfd20: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFD24u;
        goto label_3dfd24;
    }
    ctx->pc = 0x3DFD1Cu;
    SET_GPR_U32(ctx, 31, 0x3DFD24u);
    ctx->pc = 0x3DFD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFD1Cu;
    // 0x3dfd20: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3DFD1Cu, 0x3DFD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFD24u;
label_3dfd24:
    // 0x3dfd24: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3dfd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3dfd28:
    // 0x3dfd28: 0xc0ea12a  jal         func_3A84A8
label_3dfd2c:
    if (ctx->pc == 0x3DFD2Cu) {
        ctx->pc = 0x3DFD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFD28u;
        // 0x3dfd2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFD30u;
        goto label_3dfd30;
    }
    ctx->pc = 0x3DFD28u;
    SET_GPR_U32(ctx, 31, 0x3DFD30u);
    ctx->pc = 0x3DFD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFD28u;
    // 0x3dfd2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DFD28u, 0x3DFD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFD30u;
label_3dfd30:
    // 0x3dfd30: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x3dfd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3dfd34:
    // 0x3dfd34: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x3dfd34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3dfd38:
    // 0x3dfd38: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3dfd38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dfd3c:
    // 0x3dfd3c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3dfd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3dfd40:
    // 0x3dfd40: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x3dfd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_3dfd44:
    // 0x3dfd44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3dfd44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3dfd48:
    // 0x3dfd48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3dfd48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dfd4c:
    // 0x3dfd4c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3dfd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3dfd50:
    // 0x3dfd50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dfd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dfd54:
    // 0x3dfd54: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x3dfd54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_3dfd58:
    // 0x3dfd58: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x3dfd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3dfd5c:
    // 0x3dfd5c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x3dfd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_3dfd60:
    // 0x3dfd60: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x3dfd60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_3dfd64:
    // 0x3dfd64: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x3dfd64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3dfd68:
    // 0x3dfd68: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x3dfd68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3dfd6c:
    // 0x3dfd6c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3dfd6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3dfd70:
    // 0x3dfd70: 0xc136b24  jal         func_4DAC90
label_3dfd74:
    if (ctx->pc == 0x3DFD74u) {
        ctx->pc = 0x3DFD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFD70u;
        // 0x3dfd74: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFD78u;
        goto label_3dfd78;
    }
    ctx->pc = 0x3DFD70u;
    SET_GPR_U32(ctx, 31, 0x3DFD78u);
    ctx->pc = 0x3DFD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFD70u;
    // 0x3dfd74: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3DFD70u, 0x3DFD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFD78u;
label_3dfd78:
    // 0x3dfd78: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3dfd78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3dfd7c:
    // 0x3dfd7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3dfd7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3dfd80:
    // 0x3dfd80: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3dfd80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dfd84:
    // 0x3dfd84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dfd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dfd88:
    // 0x3dfd88: 0xc136b18  jal         func_4DAC60
label_3dfd8c:
    if (ctx->pc == 0x3DFD8Cu) {
        ctx->pc = 0x3DFD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFD88u;
        // 0x3dfd8c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFD90u;
        goto label_3dfd90;
    }
    ctx->pc = 0x3DFD88u;
    SET_GPR_U32(ctx, 31, 0x3DFD90u);
    ctx->pc = 0x3DFD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFD88u;
    // 0x3dfd8c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3DFD88u, 0x3DFD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFD90u;
label_3dfd90:
    // 0x3dfd90: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3dfd90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3dfd94:
    // 0x3dfd94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3dfd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3dfd98:
    // 0x3dfd98: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3dfd98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3dfd9c:
    // 0x3dfd9c: 0x7e620010  sq          $v0, 0x10($s3)
    ctx->pc = 0x3dfd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
label_3dfda0:
    // 0x3dfda0: 0xc0e858c  jal         func_3A1630
label_3dfda4:
    if (ctx->pc == 0x3DFDA4u) {
        ctx->pc = 0x3DFDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFDA0u;
        // 0x3dfda4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFDA8u;
        goto label_3dfda8;
    }
    ctx->pc = 0x3DFDA0u;
    SET_GPR_U32(ctx, 31, 0x3DFDA8u);
    ctx->pc = 0x3DFDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DFDA0u;
    // 0x3dfda4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DFDA0u, 0x3DFDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DFDA8u;
label_3dfda8:
    // 0x3dfda8: 0x3c0140f0  lui         $at, 0x40F0
    ctx->pc = 0x3dfda8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16624 << 16));
label_3dfdac:
    // 0x3dfdac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3dfdacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3dfdb0:
    // 0x3dfdb0: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x3dfdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_3dfdb4:
    // 0x3dfdb4: 0x344200e4  ori         $v0, $v0, 0xE4
    ctx->pc = 0x3dfdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)228);
label_3dfdb8:
    // 0x3dfdb8: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3dfdb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_3dfdbc:
    // 0x3dfdbc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3dfdbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3dfdc0:
    // 0x3dfdc0: 0x4602a042  mul.s       $f1, $f20, $f2
    ctx->pc = 0x3dfdc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_3dfdc4:
    // 0x3dfdc4: 0xae620084  sw          $v0, 0x84($s3)
    ctx->pc = 0x3dfdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 2));
label_3dfdc8:
    // 0x3dfdc8: 0xae620080  sw          $v0, 0x80($s3)
    ctx->pc = 0x3dfdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
label_3dfdcc:
    // 0x3dfdcc: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x3dfdccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3dfdd0:
    // 0x3dfdd0: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x3dfdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_3dfdd4:
    // 0x3dfdd4: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x3dfdd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3dfdd8:
    // 0x3dfdd8: 0xe661008c  swc1        $f1, 0x8C($s3)
    ctx->pc = 0x3dfdd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 140), bits); }
label_3dfddc:
    // 0x3dfddc: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3dfddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3dfde0:
    // 0x3dfde0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3dfde0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3dfde4:
    // 0x3dfde4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_3dfde8:
    if (ctx->pc == 0x3DFDE8u) {
        ctx->pc = 0x3DFDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFDE4u;
        // 0x3dfde8: 0xe6600090  swc1        $f0, 0x90($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 144), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFDECu;
        goto label_3dfdec;
    }
    ctx->pc = 0x3DFDE4u;
    {
        const bool branch_taken_0x3dfde4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DFDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFDE4u;
        // 0x3dfde8: 0xe6600090  swc1        $f0, 0x90($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfde4) {
            ctx->pc = 0x3DFDF4u;
            goto label_3dfdf4;
        }
    }
    ctx->pc = 0x3DFDECu;
label_3dfdec:
    // 0x3dfdec: 0xe6630090  swc1        $f3, 0x90($s3)
    ctx->pc = 0x3dfdecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 144), bits); }
label_3dfdf0:
    // 0x3dfdf0: 0xe663008c  swc1        $f3, 0x8C($s3)
    ctx->pc = 0x3dfdf0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 140), bits); }
label_3dfdf4:
    // 0x3dfdf4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3dfdf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3dfdf8:
    // 0x3dfdf8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3dfdf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3dfdfc:
    // 0x3dfdfc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3dfdfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3dfe00:
    // 0x3dfe00: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3dfe00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3dfe04:
    // 0x3dfe04: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3dfe04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3dfe08:
    // 0x3dfe08: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x3dfe08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3dfe0c:
    // 0x3dfe0c: 0x3e00008  jr          $ra
label_3dfe10:
    if (ctx->pc == 0x3DFE10u) {
        ctx->pc = 0x3DFE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFE0Cu;
        // 0x3dfe10: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DFE14u;
        goto label_3dfe14;
    }
    ctx->pc = 0x3DFE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DFE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFE0Cu;
        // 0x3dfe10: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DFE0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DFE14u;
label_3dfe14:
    // 0x3dfe14: 0x0  nop
    ctx->pc = 0x3dfe14u;
    // NOP
    ctx->pc = 0x3dfe18u;
}
