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

// Function: sub_002EBCA0
// Address: 0x2ebca0 - 0x2ebdb0
void sub_002EBCA0_0x2ebca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBCA0_0x2ebca0");
#endif

    switch (ctx->pc) {
        case 0x2ebca0u: goto label_2ebca0;
        case 0x2ebca4u: goto label_2ebca4;
        case 0x2ebca8u: goto label_2ebca8;
        case 0x2ebcacu: goto label_2ebcac;
        case 0x2ebcb0u: goto label_2ebcb0;
        case 0x2ebcb4u: goto label_2ebcb4;
        case 0x2ebcb8u: goto label_2ebcb8;
        case 0x2ebcbcu: goto label_2ebcbc;
        case 0x2ebcc0u: goto label_2ebcc0;
        case 0x2ebcc4u: goto label_2ebcc4;
        case 0x2ebcc8u: goto label_2ebcc8;
        case 0x2ebcccu: goto label_2ebccc;
        case 0x2ebcd0u: goto label_2ebcd0;
        case 0x2ebcd4u: goto label_2ebcd4;
        case 0x2ebcd8u: goto label_2ebcd8;
        case 0x2ebcdcu: goto label_2ebcdc;
        case 0x2ebce0u: goto label_2ebce0;
        case 0x2ebce4u: goto label_2ebce4;
        case 0x2ebce8u: goto label_2ebce8;
        case 0x2ebcecu: goto label_2ebcec;
        case 0x2ebcf0u: goto label_2ebcf0;
        case 0x2ebcf4u: goto label_2ebcf4;
        case 0x2ebcf8u: goto label_2ebcf8;
        case 0x2ebcfcu: goto label_2ebcfc;
        case 0x2ebd00u: goto label_2ebd00;
        case 0x2ebd04u: goto label_2ebd04;
        case 0x2ebd08u: goto label_2ebd08;
        case 0x2ebd0cu: goto label_2ebd0c;
        case 0x2ebd10u: goto label_2ebd10;
        case 0x2ebd14u: goto label_2ebd14;
        case 0x2ebd18u: goto label_2ebd18;
        case 0x2ebd1cu: goto label_2ebd1c;
        case 0x2ebd20u: goto label_2ebd20;
        case 0x2ebd24u: goto label_2ebd24;
        case 0x2ebd28u: goto label_2ebd28;
        case 0x2ebd2cu: goto label_2ebd2c;
        case 0x2ebd30u: goto label_2ebd30;
        case 0x2ebd34u: goto label_2ebd34;
        case 0x2ebd38u: goto label_2ebd38;
        case 0x2ebd3cu: goto label_2ebd3c;
        case 0x2ebd40u: goto label_2ebd40;
        case 0x2ebd44u: goto label_2ebd44;
        case 0x2ebd48u: goto label_2ebd48;
        case 0x2ebd4cu: goto label_2ebd4c;
        case 0x2ebd50u: goto label_2ebd50;
        case 0x2ebd54u: goto label_2ebd54;
        case 0x2ebd58u: goto label_2ebd58;
        case 0x2ebd5cu: goto label_2ebd5c;
        case 0x2ebd60u: goto label_2ebd60;
        case 0x2ebd64u: goto label_2ebd64;
        case 0x2ebd68u: goto label_2ebd68;
        case 0x2ebd6cu: goto label_2ebd6c;
        case 0x2ebd70u: goto label_2ebd70;
        case 0x2ebd74u: goto label_2ebd74;
        case 0x2ebd78u: goto label_2ebd78;
        case 0x2ebd7cu: goto label_2ebd7c;
        case 0x2ebd80u: goto label_2ebd80;
        case 0x2ebd84u: goto label_2ebd84;
        case 0x2ebd88u: goto label_2ebd88;
        case 0x2ebd8cu: goto label_2ebd8c;
        case 0x2ebd90u: goto label_2ebd90;
        case 0x2ebd94u: goto label_2ebd94;
        case 0x2ebd98u: goto label_2ebd98;
        case 0x2ebd9cu: goto label_2ebd9c;
        case 0x2ebda0u: goto label_2ebda0;
        case 0x2ebda4u: goto label_2ebda4;
        case 0x2ebda8u: goto label_2ebda8;
        case 0x2ebdacu: goto label_2ebdac;
        default: break;
    }

    ctx->pc = 0x2ebca0u;

label_2ebca0:
    // 0x2ebca0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ebca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2ebca4:
    // 0x2ebca4: 0x3c013ff5  lui         $at, 0x3FF5
    ctx->pc = 0x2ebca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16373 << 16));
label_2ebca8:
    // 0x2ebca8: 0x3421be0c  ori         $at, $at, 0xBE0C
    ctx->pc = 0x2ebca8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48652);
label_2ebcac:
    // 0x2ebcac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ebcacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ebcb0:
    // 0x2ebcb0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2ebcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2ebcb4:
    // 0x2ebcb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ebcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ebcb8:
    // 0x2ebcb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ebcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2ebcbc:
    // 0x2ebcbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ebcbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ebcc0:
    // 0x2ebcc0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2ebcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2ebcc4:
    // 0x2ebcc4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2ebcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ebcc8:
    // 0x2ebcc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ebcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ebccc:
    // 0x2ebccc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2ebcccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ebcd0:
    // 0x2ebcd0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ebcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ebcd4:
    // 0x2ebcd4: 0xac64021c  sw          $a0, 0x21C($v1)
    ctx->pc = 0x2ebcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 4));
label_2ebcd8:
    // 0x2ebcd8: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x2ebcd8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ebcdc:
    // 0x2ebcdc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ebcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ebce0:
    // 0x2ebce0: 0xa0510265  sb          $s1, 0x265($v0)
    ctx->pc = 0x2ebce0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 17));
label_2ebce4:
    // 0x2ebce4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ebce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ebce8:
    // 0x2ebce8: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x2ebce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
label_2ebcec:
    // 0x2ebcec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ebcecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ebcf0:
    // 0x2ebcf0: 0xc0a22c6  jal         func_288B18
label_2ebcf4:
    if (ctx->pc == 0x2EBCF4u) {
        ctx->pc = 0x2EBCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBCF0u;
        // 0x2ebcf4: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBCF8u;
        goto label_2ebcf8;
    }
    ctx->pc = 0x2EBCF0u;
    SET_GPR_U32(ctx, 31, 0x2EBCF8u);
    ctx->pc = 0x2EBCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBCF0u;
    // 0x2ebcf4: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B18u, 0x2EBCF0u, 0x2EBCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBCF8u;
label_2ebcf8:
    // 0x2ebcf8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ebcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ebcfc:
    // 0x2ebcfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ebcfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ebd00:
    // 0x2ebd00: 0xc0a447a  jal         func_2911E8
label_2ebd04:
    if (ctx->pc == 0x2EBD04u) {
        ctx->pc = 0x2EBD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD00u;
        // 0x2ebd04: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBD08u;
        goto label_2ebd08;
    }
    ctx->pc = 0x2EBD00u;
    SET_GPR_U32(ctx, 31, 0x2EBD08u);
    ctx->pc = 0x2EBD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBD00u;
    // 0x2ebd04: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911E8u, 0x2EBD00u, 0x2EBD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBD08u;
label_2ebd08:
    // 0x2ebd08: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2ebd08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2ebd0c:
    // 0x2ebd0c: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x2ebd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
label_2ebd10:
    // 0x2ebd10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ebd10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2ebd14:
    // 0x2ebd14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ebd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ebd18:
    // 0x2ebd18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ebd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ebd1c:
    // 0x2ebd1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ebd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ebd20:
    // 0x2ebd20: 0xc087612  jal         func_21D848
label_2ebd24:
    if (ctx->pc == 0x2EBD24u) {
        ctx->pc = 0x2EBD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD20u;
        // 0x2ebd24: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBD28u;
        goto label_2ebd28;
    }
    ctx->pc = 0x2EBD20u;
    SET_GPR_U32(ctx, 31, 0x2EBD28u);
    ctx->pc = 0x2EBD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBD20u;
    // 0x2ebd24: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D848u, 0x2EBD20u, 0x2EBD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBD28u;
label_2ebd28:
    // 0x2ebd28: 0xc0bb13a  jal         func_2EC4E8
label_2ebd2c:
    if (ctx->pc == 0x2EBD2Cu) {
        ctx->pc = 0x2EBD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD28u;
        // 0x2ebd2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBD30u;
        goto label_2ebd30;
    }
    ctx->pc = 0x2EBD28u;
    SET_GPR_U32(ctx, 31, 0x2EBD30u);
    ctx->pc = 0x2EBD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBD28u;
    // 0x2ebd2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC4E8u, 0x2EBD28u, 0x2EBD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBD30u;
label_2ebd30:
    // 0x2ebd30: 0x1451001a  bne         $v0, $s1, . + 4 + (0x1A << 2)
label_2ebd34:
    if (ctx->pc == 0x2EBD34u) {
        ctx->pc = 0x2EBD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD30u;
        // 0x2ebd34: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBD38u;
        goto label_2ebd38;
    }
    ctx->pc = 0x2EBD30u;
    {
        const bool branch_taken_0x2ebd30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2EBD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD30u;
        // 0x2ebd34: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebd30) {
            ctx->pc = 0x2EBD9Cu;
            goto label_2ebd9c;
        }
    }
    ctx->pc = 0x2EBD38u;
label_2ebd38:
    // 0x2ebd38: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2ebd38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2ebd3c:
    // 0x2ebd3c: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x2ebd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
label_2ebd40:
    // 0x2ebd40: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ebd40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2ebd44:
    // 0x2ebd44: 0x2404ff7f  addiu       $a0, $zero, -0x81
    ctx->pc = 0x2ebd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_2ebd48:
    // 0x2ebd48: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2ebd48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
label_2ebd4c:
    // 0x2ebd4c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2ebd4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_2ebd50:
    // 0x2ebd50: 0x52878  dsll        $a1, $a1, 1
    ctx->pc = 0x2ebd50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 1);
label_2ebd54:
    // 0x2ebd54: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x2ebd54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
label_2ebd58:
    // 0x2ebd58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ebd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ebd5c:
    // 0x2ebd5c: 0x2406feff  addiu       $a2, $zero, -0x101
    ctx->pc = 0x2ebd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_2ebd60:
    // 0x2ebd60: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2ebd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2ebd64:
    // 0x2ebd64: 0x2407fdff  addiu       $a3, $zero, -0x201
    ctx->pc = 0x2ebd64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
label_2ebd68:
    // 0x2ebd68: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2ebd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_2ebd6c:
    // 0x2ebd6c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2ebd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ebd70:
    // 0x2ebd70: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2ebd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_2ebd74:
    // 0x2ebd74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ebd74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2ebd78:
    // 0x2ebd78: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ebd78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ebd7c:
    // 0x2ebd7c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2ebd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_2ebd80:
    // 0x2ebd80: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2ebd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2ebd84:
    // 0x2ebd84: 0xfe4200e0  sd          $v0, 0xE0($s2)
    ctx->pc = 0x2ebd84u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
label_2ebd88:
    // 0x2ebd88: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x2ebd88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_2ebd8c:
    // 0x2ebd8c: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x2ebd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_2ebd90:
    // 0x2ebd90: 0x40f809  jalr        $v0
label_2ebd94:
    if (ctx->pc == 0x2EBD94u) {
        ctx->pc = 0x2EBD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD90u;
        // 0x2ebd94: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBD98u;
        goto label_2ebd98;
    }
    ctx->pc = 0x2EBD90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EBD98u);
        ctx->pc = 0x2EBD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD90u;
        // 0x2ebd94: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBD90u, 0x2EBD98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EBD98u;
label_2ebd98:
    // 0x2ebd98: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2ebd98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ebd9c:
    // 0x2ebd9c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ebd9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ebda0:
    // 0x2ebda0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2ebda0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ebda4:
    // 0x2ebda4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ebda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ebda8:
    // 0x2ebda8: 0x3e00008  jr          $ra
label_2ebdac:
    if (ctx->pc == 0x2EBDACu) {
        ctx->pc = 0x2EBDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBDA8u;
        // 0x2ebdac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EBDB0u;
        goto label_fallthrough_0x2ebda8;
    }
    ctx->pc = 0x2EBDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBDA8u;
        // 0x2ebdac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ebda8:
    ctx->pc = 0x2EBDB0u;
}
