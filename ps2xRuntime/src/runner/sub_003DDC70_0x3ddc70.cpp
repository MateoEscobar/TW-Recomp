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

// Function: sub_003DDC70
// Address: 0x3ddc70 - 0x3ddd70
void sub_003DDC70_0x3ddc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DDC70_0x3ddc70");
#endif

    switch (ctx->pc) {
        case 0x3ddc70u: goto label_3ddc70;
        case 0x3ddc74u: goto label_3ddc74;
        case 0x3ddc78u: goto label_3ddc78;
        case 0x3ddc7cu: goto label_3ddc7c;
        case 0x3ddc80u: goto label_3ddc80;
        case 0x3ddc84u: goto label_3ddc84;
        case 0x3ddc88u: goto label_3ddc88;
        case 0x3ddc8cu: goto label_3ddc8c;
        case 0x3ddc90u: goto label_3ddc90;
        case 0x3ddc94u: goto label_3ddc94;
        case 0x3ddc98u: goto label_3ddc98;
        case 0x3ddc9cu: goto label_3ddc9c;
        case 0x3ddca0u: goto label_3ddca0;
        case 0x3ddca4u: goto label_3ddca4;
        case 0x3ddca8u: goto label_3ddca8;
        case 0x3ddcacu: goto label_3ddcac;
        case 0x3ddcb0u: goto label_3ddcb0;
        case 0x3ddcb4u: goto label_3ddcb4;
        case 0x3ddcb8u: goto label_3ddcb8;
        case 0x3ddcbcu: goto label_3ddcbc;
        case 0x3ddcc0u: goto label_3ddcc0;
        case 0x3ddcc4u: goto label_3ddcc4;
        case 0x3ddcc8u: goto label_3ddcc8;
        case 0x3ddcccu: goto label_3ddccc;
        case 0x3ddcd0u: goto label_3ddcd0;
        case 0x3ddcd4u: goto label_3ddcd4;
        case 0x3ddcd8u: goto label_3ddcd8;
        case 0x3ddcdcu: goto label_3ddcdc;
        case 0x3ddce0u: goto label_3ddce0;
        case 0x3ddce4u: goto label_3ddce4;
        case 0x3ddce8u: goto label_3ddce8;
        case 0x3ddcecu: goto label_3ddcec;
        case 0x3ddcf0u: goto label_3ddcf0;
        case 0x3ddcf4u: goto label_3ddcf4;
        case 0x3ddcf8u: goto label_3ddcf8;
        case 0x3ddcfcu: goto label_3ddcfc;
        case 0x3ddd00u: goto label_3ddd00;
        case 0x3ddd04u: goto label_3ddd04;
        case 0x3ddd08u: goto label_3ddd08;
        case 0x3ddd0cu: goto label_3ddd0c;
        case 0x3ddd10u: goto label_3ddd10;
        case 0x3ddd14u: goto label_3ddd14;
        case 0x3ddd18u: goto label_3ddd18;
        case 0x3ddd1cu: goto label_3ddd1c;
        case 0x3ddd20u: goto label_3ddd20;
        case 0x3ddd24u: goto label_3ddd24;
        case 0x3ddd28u: goto label_3ddd28;
        case 0x3ddd2cu: goto label_3ddd2c;
        case 0x3ddd30u: goto label_3ddd30;
        case 0x3ddd34u: goto label_3ddd34;
        case 0x3ddd38u: goto label_3ddd38;
        case 0x3ddd3cu: goto label_3ddd3c;
        case 0x3ddd40u: goto label_3ddd40;
        case 0x3ddd44u: goto label_3ddd44;
        case 0x3ddd48u: goto label_3ddd48;
        case 0x3ddd4cu: goto label_3ddd4c;
        case 0x3ddd50u: goto label_3ddd50;
        case 0x3ddd54u: goto label_3ddd54;
        case 0x3ddd58u: goto label_3ddd58;
        case 0x3ddd5cu: goto label_3ddd5c;
        case 0x3ddd60u: goto label_3ddd60;
        case 0x3ddd64u: goto label_3ddd64;
        case 0x3ddd68u: goto label_3ddd68;
        case 0x3ddd6cu: goto label_3ddd6c;
        default: break;
    }

    ctx->pc = 0x3ddc70u;

label_3ddc70:
    // 0x3ddc70: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x3ddc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
label_3ddc74:
    // 0x3ddc74: 0x7fb00430  sq          $s0, 0x430($sp)
    ctx->pc = 0x3ddc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 16));
label_3ddc78:
    // 0x3ddc78: 0x7fb10420  sq          $s1, 0x420($sp)
    ctx->pc = 0x3ddc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 17));
label_3ddc7c:
    // 0x3ddc7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ddc7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ddc80:
    // 0x3ddc80: 0xffbf0410  sd          $ra, 0x410($sp)
    ctx->pc = 0x3ddc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
label_3ddc84:
    // 0x3ddc84: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ddc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ddc88:
    // 0x3ddc88: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ddc88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ddc8c:
    // 0x3ddc8c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ddc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ddc90:
    // 0x3ddc90: 0x40f809  jalr        $v0
label_3ddc94:
    if (ctx->pc == 0x3DDC94u) {
        ctx->pc = 0x3DDC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDC90u;
        // 0x3ddc94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDC98u;
        goto label_3ddc98;
    }
    ctx->pc = 0x3DDC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DDC98u);
        ctx->pc = 0x3DDC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDC90u;
        // 0x3ddc94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DDC90u, 0x3DDC98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DDC98u;
label_3ddc98:
    // 0x3ddc98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ddc98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ddc9c:
    // 0x3ddc9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ddc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ddca0:
    // 0x3ddca0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3ddca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ddca4:
    // 0x3ddca4: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3ddca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3ddca8:
    // 0x3ddca8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ddca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3ddcac:
    // 0x3ddcac: 0x0  nop
    ctx->pc = 0x3ddcacu;
    // NOP
label_3ddcb0:
    // 0x3ddcb0: 0x0  nop
    ctx->pc = 0x3ddcb0u;
    // NOP
label_3ddcb4:
    // 0x3ddcb4: 0x0  nop
    ctx->pc = 0x3ddcb4u;
    // NOP
label_3ddcb8:
    // 0x3ddcb8: 0x0  nop
    ctx->pc = 0x3ddcb8u;
    // NOP
label_3ddcbc:
    // 0x3ddcbc: 0x0  nop
    ctx->pc = 0x3ddcbcu;
    // NOP
label_3ddcc0:
    // 0x3ddcc0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3ddcc4:
    if (ctx->pc == 0x3DDCC4u) {
        ctx->pc = 0x3DDCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDCC0u;
        // 0x3ddcc4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDCC8u;
        goto label_3ddcc8;
    }
    ctx->pc = 0x3DDCC0u;
    {
        const bool branch_taken_0x3ddcc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3DDCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDCC0u;
        // 0x3ddcc4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddcc0) {
            ctx->pc = 0x3DDCB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ddcb0;
        }
    }
    ctx->pc = 0x3DDCC8u;
label_3ddcc8:
    // 0x3ddcc8: 0xc138ddc  jal         func_4E3770
label_3ddccc:
    if (ctx->pc == 0x3DDCCCu) {
        ctx->pc = 0x3DDCD0u;
        goto label_3ddcd0;
    }
    ctx->pc = 0x3DDCC8u;
    SET_GPR_U32(ctx, 31, 0x3DDCD0u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3DDCC8u, 0x3DDCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDCD0u;
label_3ddcd0:
    // 0x3ddcd0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ddcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ddcd4:
    // 0x3ddcd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ddcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ddcd8:
    // 0x3ddcd8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3ddcdc:
    if (ctx->pc == 0x3DDCDCu) {
        ctx->pc = 0x3DDCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDCD8u;
        // 0x3ddcdc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDCE0u;
        goto label_3ddce0;
    }
    ctx->pc = 0x3DDCD8u;
    {
        const bool branch_taken_0x3ddcd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DDCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDCD8u;
        // 0x3ddcdc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddcd8) {
            ctx->pc = 0x3DDD00u;
            goto label_3ddd00;
        }
    }
    ctx->pc = 0x3DDCE0u;
label_3ddce0:
    // 0x3ddce0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3ddce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3ddce4:
    // 0x3ddce4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ddce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ddce8:
    // 0x3ddce8: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3ddce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_3ddcec:
    // 0x3ddcec: 0x34420028  ori         $v0, $v0, 0x28
    ctx->pc = 0x3ddcecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40);
label_3ddcf0:
    // 0x3ddcf0: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3ddcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_3ddcf4:
    // 0x3ddcf4: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x3ddcf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_3ddcf8:
    // 0x3ddcf8: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x3ddcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
label_3ddcfc:
    // 0x3ddcfc: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x3ddcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
label_3ddd00:
    // 0x3ddd00: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ddd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ddd04:
    // 0x3ddd04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ddd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ddd08:
    // 0x3ddd08: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_3ddd0c:
    if (ctx->pc == 0x3DDD0Cu) {
        ctx->pc = 0x3DDD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDD08u;
        // 0x3ddd0c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDD10u;
        goto label_3ddd10;
    }
    ctx->pc = 0x3DDD08u;
    {
        const bool branch_taken_0x3ddd08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3DDD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDD08u;
        // 0x3ddd0c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddd08) {
            ctx->pc = 0x3DDD2Cu;
            goto label_3ddd2c;
        }
    }
    ctx->pc = 0x3DDD10u;
label_3ddd10:
    // 0x3ddd10: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3ddd10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3ddd14:
    // 0x3ddd14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ddd14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ddd18:
    // 0x3ddd18: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3ddd18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_3ddd1c:
    // 0x3ddd1c: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x3ddd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
label_3ddd20:
    // 0x3ddd20: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x3ddd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_3ddd24:
    // 0x3ddd24: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ddd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ddd28:
    // 0x3ddd28: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ddd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ddd2c:
    // 0x3ddd2c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_3ddd30:
    if (ctx->pc == 0x3DDD30u) {
        ctx->pc = 0x3DDD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDD2Cu;
        // 0x3ddd30: 0x3c026666  lui         $v0, 0x6666 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDD34u;
        goto label_3ddd34;
    }
    ctx->pc = 0x3DDD2Cu;
    {
        const bool branch_taken_0x3ddd2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DDD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDD2Cu;
        // 0x3ddd30: 0x3c026666  lui         $v0, 0x6666 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddd2c) {
            ctx->pc = 0x3DDD48u;
            goto label_3ddd48;
        }
    }
    ctx->pc = 0x3DDD34u;
label_3ddd34:
    // 0x3ddd34: 0xc0e9694  jal         func_3A5A50
label_3ddd38:
    if (ctx->pc == 0x3DDD38u) {
        ctx->pc = 0x3DDD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDD34u;
        // 0x3ddd38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDD3Cu;
        goto label_3ddd3c;
    }
    ctx->pc = 0x3DDD34u;
    SET_GPR_U32(ctx, 31, 0x3DDD3Cu);
    ctx->pc = 0x3DDD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDD34u;
    // 0x3ddd38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3DDD34u, 0x3DDD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDD3Cu;
label_3ddd3c:
    // 0x3ddd3c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3ddd40:
    if (ctx->pc == 0x3DDD40u) {
        ctx->pc = 0x3DDD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDD3Cu;
        // 0x3ddd40: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDD44u;
        goto label_3ddd44;
    }
    ctx->pc = 0x3DDD3Cu;
    {
        const bool branch_taken_0x3ddd3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ddd3c) {
            ctx->pc = 0x3DDD40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DDD3Cu;
            // 0x3ddd40: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DDD50u;
            goto label_3ddd50;
        }
    }
    ctx->pc = 0x3DDD44u;
label_3ddd44:
    // 0x3ddd44: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3ddd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_3ddd48:
    // 0x3ddd48: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x3ddd48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
label_3ddd4c:
    // 0x3ddd4c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ddd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ddd50:
    // 0x3ddd50: 0x7bb00430  lq          $s0, 0x430($sp)
    ctx->pc = 0x3ddd50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3ddd54:
    // 0x3ddd54: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x3ddd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_3ddd58:
    // 0x3ddd58: 0x7bb10420  lq          $s1, 0x420($sp)
    ctx->pc = 0x3ddd58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3ddd5c:
    // 0x3ddd5c: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x3ddd5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_3ddd60:
    // 0x3ddd60: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ddd60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3ddd64:
    // 0x3ddd64: 0x3e00008  jr          $ra
label_3ddd68:
    if (ctx->pc == 0x3DDD68u) {
        ctx->pc = 0x3DDD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDD64u;
        // 0x3ddd68: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDD6Cu;
        goto label_3ddd6c;
    }
    ctx->pc = 0x3DDD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DDD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDD64u;
        // 0x3ddd68: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DDD64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DDD6Cu;
label_3ddd6c:
    // 0x3ddd6c: 0x0  nop
    ctx->pc = 0x3ddd6cu;
    // NOP
    ctx->pc = 0x3ddd70u;
}
