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

// Function: sub_002ACAF8
// Address: 0x2acaf8 - 0x2accc8
void sub_002ACAF8_0x2acaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACAF8_0x2acaf8");
#endif

    switch (ctx->pc) {
        case 0x2acaf8u: goto label_2acaf8;
        case 0x2acafcu: goto label_2acafc;
        case 0x2acb00u: goto label_2acb00;
        case 0x2acb04u: goto label_2acb04;
        case 0x2acb08u: goto label_2acb08;
        case 0x2acb0cu: goto label_2acb0c;
        case 0x2acb10u: goto label_2acb10;
        case 0x2acb14u: goto label_2acb14;
        case 0x2acb18u: goto label_2acb18;
        case 0x2acb1cu: goto label_2acb1c;
        case 0x2acb20u: goto label_2acb20;
        case 0x2acb24u: goto label_2acb24;
        case 0x2acb28u: goto label_2acb28;
        case 0x2acb2cu: goto label_2acb2c;
        case 0x2acb30u: goto label_2acb30;
        case 0x2acb34u: goto label_2acb34;
        case 0x2acb38u: goto label_2acb38;
        case 0x2acb3cu: goto label_2acb3c;
        case 0x2acb40u: goto label_2acb40;
        case 0x2acb44u: goto label_2acb44;
        case 0x2acb48u: goto label_2acb48;
        case 0x2acb4cu: goto label_2acb4c;
        case 0x2acb50u: goto label_2acb50;
        case 0x2acb54u: goto label_2acb54;
        case 0x2acb58u: goto label_2acb58;
        case 0x2acb5cu: goto label_2acb5c;
        case 0x2acb60u: goto label_2acb60;
        case 0x2acb64u: goto label_2acb64;
        case 0x2acb68u: goto label_2acb68;
        case 0x2acb6cu: goto label_2acb6c;
        case 0x2acb70u: goto label_2acb70;
        case 0x2acb74u: goto label_2acb74;
        case 0x2acb78u: goto label_2acb78;
        case 0x2acb7cu: goto label_2acb7c;
        case 0x2acb80u: goto label_2acb80;
        case 0x2acb84u: goto label_2acb84;
        case 0x2acb88u: goto label_2acb88;
        case 0x2acb8cu: goto label_2acb8c;
        case 0x2acb90u: goto label_2acb90;
        case 0x2acb94u: goto label_2acb94;
        case 0x2acb98u: goto label_2acb98;
        case 0x2acb9cu: goto label_2acb9c;
        case 0x2acba0u: goto label_2acba0;
        case 0x2acba4u: goto label_2acba4;
        case 0x2acba8u: goto label_2acba8;
        case 0x2acbacu: goto label_2acbac;
        case 0x2acbb0u: goto label_2acbb0;
        case 0x2acbb4u: goto label_2acbb4;
        case 0x2acbb8u: goto label_2acbb8;
        case 0x2acbbcu: goto label_2acbbc;
        case 0x2acbc0u: goto label_2acbc0;
        case 0x2acbc4u: goto label_2acbc4;
        case 0x2acbc8u: goto label_2acbc8;
        case 0x2acbccu: goto label_2acbcc;
        case 0x2acbd0u: goto label_2acbd0;
        case 0x2acbd4u: goto label_2acbd4;
        case 0x2acbd8u: goto label_2acbd8;
        case 0x2acbdcu: goto label_2acbdc;
        case 0x2acbe0u: goto label_2acbe0;
        case 0x2acbe4u: goto label_2acbe4;
        case 0x2acbe8u: goto label_2acbe8;
        case 0x2acbecu: goto label_2acbec;
        case 0x2acbf0u: goto label_2acbf0;
        case 0x2acbf4u: goto label_2acbf4;
        case 0x2acbf8u: goto label_2acbf8;
        case 0x2acbfcu: goto label_2acbfc;
        case 0x2acc00u: goto label_2acc00;
        case 0x2acc04u: goto label_2acc04;
        case 0x2acc08u: goto label_2acc08;
        case 0x2acc0cu: goto label_2acc0c;
        case 0x2acc10u: goto label_2acc10;
        case 0x2acc14u: goto label_2acc14;
        case 0x2acc18u: goto label_2acc18;
        case 0x2acc1cu: goto label_2acc1c;
        case 0x2acc20u: goto label_2acc20;
        case 0x2acc24u: goto label_2acc24;
        case 0x2acc28u: goto label_2acc28;
        case 0x2acc2cu: goto label_2acc2c;
        case 0x2acc30u: goto label_2acc30;
        case 0x2acc34u: goto label_2acc34;
        case 0x2acc38u: goto label_2acc38;
        case 0x2acc3cu: goto label_2acc3c;
        case 0x2acc40u: goto label_2acc40;
        case 0x2acc44u: goto label_2acc44;
        case 0x2acc48u: goto label_2acc48;
        case 0x2acc4cu: goto label_2acc4c;
        case 0x2acc50u: goto label_2acc50;
        case 0x2acc54u: goto label_2acc54;
        case 0x2acc58u: goto label_2acc58;
        case 0x2acc5cu: goto label_2acc5c;
        case 0x2acc60u: goto label_2acc60;
        case 0x2acc64u: goto label_2acc64;
        case 0x2acc68u: goto label_2acc68;
        case 0x2acc6cu: goto label_2acc6c;
        case 0x2acc70u: goto label_2acc70;
        case 0x2acc74u: goto label_2acc74;
        case 0x2acc78u: goto label_2acc78;
        case 0x2acc7cu: goto label_2acc7c;
        case 0x2acc80u: goto label_2acc80;
        case 0x2acc84u: goto label_2acc84;
        case 0x2acc88u: goto label_2acc88;
        case 0x2acc8cu: goto label_2acc8c;
        case 0x2acc90u: goto label_2acc90;
        case 0x2acc94u: goto label_2acc94;
        case 0x2acc98u: goto label_2acc98;
        case 0x2acc9cu: goto label_2acc9c;
        case 0x2acca0u: goto label_2acca0;
        case 0x2acca4u: goto label_2acca4;
        case 0x2acca8u: goto label_2acca8;
        case 0x2accacu: goto label_2accac;
        case 0x2accb0u: goto label_2accb0;
        case 0x2accb4u: goto label_2accb4;
        case 0x2accb8u: goto label_2accb8;
        case 0x2accbcu: goto label_2accbc;
        case 0x2accc0u: goto label_2accc0;
        case 0x2accc4u: goto label_2accc4;
        default: break;
    }

    ctx->pc = 0x2acaf8u;

label_2acaf8:
    // 0x2acaf8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2acaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2acafc:
    // 0x2acafc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2acafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2acb00:
    // 0x2acb00: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2acb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2acb04:
    // 0x2acb04: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2acb04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2acb08:
    // 0x2acb08: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2acb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2acb0c:
    // 0x2acb0c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2acb0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2acb10:
    // 0x2acb10: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2acb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2acb14:
    // 0x2acb14: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2acb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2acb18:
    // 0x2acb18: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2acb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_2acb1c:
    // 0x2acb1c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2acb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_2acb20:
    // 0x2acb20: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2acb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_2acb24:
    // 0x2acb24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2acb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2acb28:
    // 0x2acb28: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2acb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2acb2c:
    // 0x2acb2c: 0x92630039  lbu         $v1, 0x39($s3)
    ctx->pc = 0x2acb2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 57)));
label_2acb30:
    // 0x2acb30: 0x10700058  beq         $v1, $s0, . + 4 + (0x58 << 2)
label_2acb34:
    if (ctx->pc == 0x2ACB34u) {
        ctx->pc = 0x2ACB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB30u;
        // 0x2acb34: 0x8c550000  lw          $s5, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACB38u;
        goto label_2acb38;
    }
    ctx->pc = 0x2ACB30u;
    {
        const bool branch_taken_0x2acb30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x2ACB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB30u;
        // 0x2acb34: 0x8c550000  lw          $s5, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acb30) {
            ctx->pc = 0x2ACC94u;
            goto label_2acc94;
        }
    }
    ctx->pc = 0x2ACB38u;
label_2acb38:
    // 0x2acb38: 0x86a30092  lh          $v1, 0x92($s5)
    ctx->pc = 0x2acb38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
label_2acb3c:
    // 0x2acb3c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2acb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2acb40:
    // 0x2acb40: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2acb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2acb44:
    // 0x2acb44: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x2acb44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_2acb48:
    // 0x2acb48: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2acb48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2acb4c:
    // 0x2acb4c: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x2acb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
label_2acb50:
    // 0x2acb50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2acb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2acb54:
    // 0x2acb54: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2acb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2acb58:
    // 0x2acb58: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2acb58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2acb5c:
    // 0x2acb5c: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x2acb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2acb60:
    // 0x2acb60: 0xc10904c  jal         func_424130
label_2acb64:
    if (ctx->pc == 0x2ACB64u) {
        ctx->pc = 0x2ACB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB60u;
        // 0x2acb64: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACB68u;
        goto label_2acb68;
    }
    ctx->pc = 0x2ACB60u;
    SET_GPR_U32(ctx, 31, 0x2ACB68u);
    ctx->pc = 0x2ACB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACB60u;
    // 0x2acb64: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x2ACB60u, 0x2ACB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACB68u;
label_2acb68:
    // 0x2acb68: 0x1450004b  bne         $v0, $s0, . + 4 + (0x4B << 2)
label_2acb6c:
    if (ctx->pc == 0x2ACB6Cu) {
        ctx->pc = 0x2ACB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB68u;
        // 0x2acb6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACB70u;
        goto label_2acb70;
    }
    ctx->pc = 0x2ACB68u;
    {
        const bool branch_taken_0x2acb68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2ACB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB68u;
        // 0x2acb6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acb68) {
            ctx->pc = 0x2ACC98u;
            goto label_2acc98;
        }
    }
    ctx->pc = 0x2ACB70u;
label_2acb70:
    // 0x2acb70: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2acb70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_2acb74:
    // 0x2acb74: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2acb74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_2acb78:
    // 0x2acb78: 0x24910c80  addiu       $s1, $a0, 0xC80
    ctx->pc = 0x2acb78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
label_2acb7c:
    // 0x2acb7c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2acb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2acb80:
    // 0x2acb80: 0x346398c0  ori         $v1, $v1, 0x98C0
    ctx->pc = 0x2acb80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39104);
label_2acb84:
    // 0x2acb84: 0x24570840  addiu       $s7, $v0, 0x840
    ctx->pc = 0x2acb84u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_2acb88:
    // 0x2acb88: 0x223b021  addu        $s6, $s1, $v1
    ctx->pc = 0x2acb88u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_2acb8c:
    // 0x2acb8c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2acb8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acb90:
    // 0x2acb90: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2acb90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2acb94:
    // 0x2acb94: 0x0  nop
    ctx->pc = 0x2acb94u;
    // NOP
label_2acb98:
    // 0x2acb98: 0xc089f98  jal         func_227E60
label_2acb9c:
    if (ctx->pc == 0x2ACB9Cu) {
        ctx->pc = 0x2ACB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACB98u;
        // 0x2acb9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACBA0u;
        goto label_2acba0;
    }
    ctx->pc = 0x2ACB98u;
    SET_GPR_U32(ctx, 31, 0x2ACBA0u);
    ctx->pc = 0x2ACB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACB98u;
    // 0x2acb9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x2ACB98u, 0x2ACBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACBA0u;
label_2acba0:
    // 0x2acba0: 0x50520029  beql        $v0, $s2, . + 4 + (0x29 << 2)
label_2acba4:
    if (ctx->pc == 0x2ACBA4u) {
        ctx->pc = 0x2ACBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACBA0u;
        // 0x2acba4: 0x263106d0  addiu       $s1, $s1, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACBA8u;
        goto label_2acba8;
    }
    ctx->pc = 0x2ACBA0u;
    {
        const bool branch_taken_0x2acba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2acba0) {
            ctx->pc = 0x2ACBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACBA0u;
            // 0x2acba4: 0x263106d0  addiu       $s1, $s1, 0x6D0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACC48u;
            goto label_2acc48;
        }
    }
    ctx->pc = 0x2ACBA8u;
label_2acba8:
    // 0x2acba8: 0xc087502  jal         func_21D408
label_2acbac:
    if (ctx->pc == 0x2ACBACu) {
        ctx->pc = 0x2ACBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACBA8u;
        // 0x2acbac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACBB0u;
        goto label_2acbb0;
    }
    ctx->pc = 0x2ACBA8u;
    SET_GPR_U32(ctx, 31, 0x2ACBB0u);
    ctx->pc = 0x2ACBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACBA8u;
    // 0x2acbac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2ACBA8u, 0x2ACBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACBB0u;
label_2acbb0:
    // 0x2acbb0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2acbb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2acbb4:
    // 0x2acbb4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2acbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2acbb8:
    // 0x2acbb8: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x2acbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_2acbbc:
    // 0x2acbbc: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
label_2acbc0:
    if (ctx->pc == 0x2ACBC0u) {
        ctx->pc = 0x2ACBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACBBCu;
        // 0x2acbc0: 0x263106d0  addiu       $s1, $s1, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACBC4u;
        goto label_2acbc4;
    }
    ctx->pc = 0x2ACBBCu;
    {
        const bool branch_taken_0x2acbbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2acbbc) {
            ctx->pc = 0x2ACBC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACBBCu;
            // 0x2acbc0: 0x263106d0  addiu       $s1, $s1, 0x6D0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACC48u;
            goto label_2acc48;
        }
    }
    ctx->pc = 0x2ACBC4u;
label_2acbc4:
    // 0x2acbc4: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x2acbc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_2acbc8:
    // 0x2acbc8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2acbcc:
    if (ctx->pc == 0x2ACBCCu) {
        ctx->pc = 0x2ACBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACBC8u;
        // 0x2acbcc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACBD0u;
        goto label_2acbd0;
    }
    ctx->pc = 0x2ACBC8u;
    {
        const bool branch_taken_0x2acbc8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2ACBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACBC8u;
        // 0x2acbcc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acbc8) {
            ctx->pc = 0x2ACBDCu;
            goto label_2acbdc;
        }
    }
    ctx->pc = 0x2ACBD0u;
label_2acbd0:
    // 0x2acbd0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2acbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2acbd4:
    // 0x2acbd4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2acbd8:
    if (ctx->pc == 0x2ACBD8u) {
        ctx->pc = 0x2ACBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACBD4u;
        // 0x2acbd8: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACBDCu;
        goto label_2acbdc;
    }
    ctx->pc = 0x2ACBD4u;
    {
        const bool branch_taken_0x2acbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACBD4u;
        // 0x2acbd8: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acbd4) {
            ctx->pc = 0x2ACBE0u;
            goto label_2acbe0;
        }
    }
    ctx->pc = 0x2ACBDCu;
label_2acbdc:
    // 0x2acbdc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2acbdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acbe0:
    // 0x2acbe0: 0x52000019  beql        $s0, $zero, . + 4 + (0x19 << 2)
label_2acbe4:
    if (ctx->pc == 0x2ACBE4u) {
        ctx->pc = 0x2ACBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACBE0u;
        // 0x2acbe4: 0x263106d0  addiu       $s1, $s1, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACBE8u;
        goto label_2acbe8;
    }
    ctx->pc = 0x2ACBE0u;
    {
        const bool branch_taken_0x2acbe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acbe0) {
            ctx->pc = 0x2ACBE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACBE0u;
            // 0x2acbe4: 0x263106d0  addiu       $s1, $s1, 0x6D0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACC48u;
            goto label_2acc48;
        }
    }
    ctx->pc = 0x2ACBE8u;
label_2acbe8:
    // 0x2acbe8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2acbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2acbec:
    // 0x2acbec: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2acbecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2acbf0:
    // 0x2acbf0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2acbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2acbf4:
    // 0x2acbf4: 0x40f809  jalr        $v0
label_2acbf8:
    if (ctx->pc == 0x2ACBF8u) {
        ctx->pc = 0x2ACBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACBF4u;
        // 0x2acbf8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACBFCu;
        goto label_2acbfc;
    }
    ctx->pc = 0x2ACBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ACBFCu);
        ctx->pc = 0x2ACBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACBF4u;
        // 0x2acbf8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACBF4u, 0x2ACBFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ACBFCu;
label_2acbfc:
    // 0x2acbfc: 0x38420080  xori        $v0, $v0, 0x80
    ctx->pc = 0x2acbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)128);
label_2acc00:
    // 0x2acc00: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_2acc04:
    if (ctx->pc == 0x2ACC04u) {
        ctx->pc = 0x2ACC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC00u;
        // 0x2acc04: 0x263106d0  addiu       $s1, $s1, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACC08u;
        goto label_2acc08;
    }
    ctx->pc = 0x2ACC00u;
    {
        const bool branch_taken_0x2acc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2acc00) {
            ctx->pc = 0x2ACC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACC00u;
            // 0x2acc04: 0x263106d0  addiu       $s1, $s1, 0x6D0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACC48u;
            goto label_2acc48;
        }
    }
    ctx->pc = 0x2ACC08u;
label_2acc08:
    // 0x2acc08: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2acc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2acc0c:
    // 0x2acc0c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2acc0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2acc10:
    // 0x2acc10: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2acc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2acc14:
    // 0x2acc14: 0x40f809  jalr        $v0
label_2acc18:
    if (ctx->pc == 0x2ACC18u) {
        ctx->pc = 0x2ACC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC14u;
        // 0x2acc18: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACC1Cu;
        goto label_2acc1c;
    }
    ctx->pc = 0x2ACC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ACC1Cu);
        ctx->pc = 0x2ACC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC14u;
        // 0x2acc18: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACC14u, 0x2ACC1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ACC1Cu;
label_2acc1c:
    // 0x2acc1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2acc1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2acc20:
    // 0x2acc20: 0x26e415d0  addiu       $a0, $s7, 0x15D0
    ctx->pc = 0x2acc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 5584));
label_2acc24:
    // 0x2acc24: 0xc071462  jal         func_1C5188
label_2acc28:
    if (ctx->pc == 0x2ACC28u) {
        ctx->pc = 0x2ACC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC24u;
        // 0x2acc28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACC2Cu;
        goto label_2acc2c;
    }
    ctx->pc = 0x2ACC24u;
    SET_GPR_U32(ctx, 31, 0x2ACC2Cu);
    ctx->pc = 0x2ACC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACC24u;
    // 0x2acc28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5188u, 0x2ACC24u, 0x2ACC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACC2Cu;
label_2acc2c:
    // 0x2acc2c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2acc2cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2acc30:
    // 0x2acc30: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2acc30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2acc34:
    // 0x2acc34: 0x10520003  beq         $v0, $s2, . + 4 + (0x3 << 2)
label_2acc38:
    if (ctx->pc == 0x2ACC38u) {
        ctx->pc = 0x2ACC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC34u;
        // 0x2acc38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACC3Cu;
        goto label_2acc3c;
    }
    ctx->pc = 0x2ACC34u;
    {
        const bool branch_taken_0x2acc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2ACC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC34u;
        // 0x2acc38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acc34) {
            ctx->pc = 0x2ACC44u;
            goto label_2acc44;
        }
    }
    ctx->pc = 0x2ACC3Cu;
label_2acc3c:
    // 0x2acc3c: 0xc0b1fb8  jal         func_2C7EE0
label_2acc40:
    if (ctx->pc == 0x2ACC40u) {
        ctx->pc = 0x2ACC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC3Cu;
        // 0x2acc40: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACC44u;
        goto label_2acc44;
    }
    ctx->pc = 0x2ACC3Cu;
    SET_GPR_U32(ctx, 31, 0x2ACC44u);
    ctx->pc = 0x2ACC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACC3Cu;
    // 0x2acc40: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7EE0u, 0x2ACC3Cu, 0x2ACC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACC44u;
label_2acc44:
    // 0x2acc44: 0x263106d0  addiu       $s1, $s1, 0x6D0
    ctx->pc = 0x2acc44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
label_2acc48:
    // 0x2acc48: 0x236102a  slt         $v0, $s1, $s6
    ctx->pc = 0x2acc48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_2acc4c:
    // 0x2acc4c: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
label_2acc50:
    if (ctx->pc == 0x2ACC50u) {
        ctx->pc = 0x2ACC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC4Cu;
        // 0x2acc50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACC54u;
        goto label_2acc54;
    }
    ctx->pc = 0x2ACC4Cu;
    {
        const bool branch_taken_0x2acc4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC4Cu;
        // 0x2acc50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acc4c) {
            ctx->pc = 0x2ACB98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2acb98;
        }
    }
    ctx->pc = 0x2ACC54u;
label_2acc54:
    // 0x2acc54: 0x56820010  bnel        $s4, $v0, . + 4 + (0x10 << 2)
label_2acc58:
    if (ctx->pc == 0x2ACC58u) {
        ctx->pc = 0x2ACC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC54u;
        // 0x2acc58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACC5Cu;
        goto label_2acc5c;
    }
    ctx->pc = 0x2ACC54u;
    {
        const bool branch_taken_0x2acc54 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x2acc54) {
            ctx->pc = 0x2ACC58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ACC54u;
            // 0x2acc58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ACC98u;
            goto label_2acc98;
        }
    }
    ctx->pc = 0x2ACC5Cu;
label_2acc5c:
    // 0x2acc5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2acc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2acc60:
    // 0x2acc60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2acc60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2acc64:
    // 0x2acc64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2acc64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2acc68:
    // 0x2acc68: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2acc68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2acc6c:
    // 0x2acc6c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2acc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2acc70:
    // 0x2acc70: 0x240500aa  addiu       $a1, $zero, 0xAA
    ctx->pc = 0x2acc70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
label_2acc74:
    // 0x2acc74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2acc74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acc78:
    // 0x2acc78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2acc78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2acc7c:
    // 0x2acc7c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2acc7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2acc80:
    // 0x2acc80: 0xc088178  jal         func_2205E0
label_2acc84:
    if (ctx->pc == 0x2ACC84u) {
        ctx->pc = 0x2ACC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC80u;
        // 0x2acc84: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACC88u;
        goto label_2acc88;
    }
    ctx->pc = 0x2ACC80u;
    SET_GPR_U32(ctx, 31, 0x2ACC88u);
    ctx->pc = 0x2ACC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACC80u;
    // 0x2acc84: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2ACC80u, 0x2ACC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACC88u;
label_2acc88:
    // 0x2acc88: 0xa2740039  sb          $s4, 0x39($s3)
    ctx->pc = 0x2acc88u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 57), (uint8_t)GPR_U32(ctx, 20));
label_2acc8c:
    // 0x2acc8c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2acc90:
    if (ctx->pc == 0x2ACC90u) {
        ctx->pc = 0x2ACC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC8Cu;
        // 0x2acc90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACC94u;
        goto label_2acc94;
    }
    ctx->pc = 0x2ACC8Cu;
    {
        const bool branch_taken_0x2acc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC8Cu;
        // 0x2acc90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acc8c) {
            ctx->pc = 0x2ACC98u;
            goto label_2acc98;
        }
    }
    ctx->pc = 0x2ACC94u;
label_2acc94:
    // 0x2acc94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2acc94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2acc98:
    // 0x2acc98: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2acc98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2acc9c:
    // 0x2acc9c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2acc9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2acca0:
    // 0x2acca0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2acca0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2acca4:
    // 0x2acca4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2acca4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2acca8:
    // 0x2acca8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2acca8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2accac:
    // 0x2accac: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2accacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2accb0:
    // 0x2accb0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2accb0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2accb4:
    // 0x2accb4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2accb4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2accb8:
    // 0x2accb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2accb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2accbc:
    // 0x2accbc: 0x3e00008  jr          $ra
label_2accc0:
    if (ctx->pc == 0x2ACCC0u) {
        ctx->pc = 0x2ACCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACCBCu;
        // 0x2accc0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ACCC4u;
        goto label_2accc4;
    }
    ctx->pc = 0x2ACCBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACCBCu;
        // 0x2accc0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACCBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACCC4u;
label_2accc4:
    // 0x2accc4: 0x0  nop
    ctx->pc = 0x2accc4u;
    // NOP
    ctx->pc = 0x2accc8u;
}
