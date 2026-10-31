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

// Function: sub_001EBC10
// Address: 0x1ebc10 - 0x1ebe00
void sub_001EBC10_0x1ebc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EBC10_0x1ebc10");
#endif

    switch (ctx->pc) {
        case 0x1ebc10u: goto label_1ebc10;
        case 0x1ebc14u: goto label_1ebc14;
        case 0x1ebc18u: goto label_1ebc18;
        case 0x1ebc1cu: goto label_1ebc1c;
        case 0x1ebc20u: goto label_1ebc20;
        case 0x1ebc24u: goto label_1ebc24;
        case 0x1ebc28u: goto label_1ebc28;
        case 0x1ebc2cu: goto label_1ebc2c;
        case 0x1ebc30u: goto label_1ebc30;
        case 0x1ebc34u: goto label_1ebc34;
        case 0x1ebc38u: goto label_1ebc38;
        case 0x1ebc3cu: goto label_1ebc3c;
        case 0x1ebc40u: goto label_1ebc40;
        case 0x1ebc44u: goto label_1ebc44;
        case 0x1ebc48u: goto label_1ebc48;
        case 0x1ebc4cu: goto label_1ebc4c;
        case 0x1ebc50u: goto label_1ebc50;
        case 0x1ebc54u: goto label_1ebc54;
        case 0x1ebc58u: goto label_1ebc58;
        case 0x1ebc5cu: goto label_1ebc5c;
        case 0x1ebc60u: goto label_1ebc60;
        case 0x1ebc64u: goto label_1ebc64;
        case 0x1ebc68u: goto label_1ebc68;
        case 0x1ebc6cu: goto label_1ebc6c;
        case 0x1ebc70u: goto label_1ebc70;
        case 0x1ebc74u: goto label_1ebc74;
        case 0x1ebc78u: goto label_1ebc78;
        case 0x1ebc7cu: goto label_1ebc7c;
        case 0x1ebc80u: goto label_1ebc80;
        case 0x1ebc84u: goto label_1ebc84;
        case 0x1ebc88u: goto label_1ebc88;
        case 0x1ebc8cu: goto label_1ebc8c;
        case 0x1ebc90u: goto label_1ebc90;
        case 0x1ebc94u: goto label_1ebc94;
        case 0x1ebc98u: goto label_1ebc98;
        case 0x1ebc9cu: goto label_1ebc9c;
        case 0x1ebca0u: goto label_1ebca0;
        case 0x1ebca4u: goto label_1ebca4;
        case 0x1ebca8u: goto label_1ebca8;
        case 0x1ebcacu: goto label_1ebcac;
        case 0x1ebcb0u: goto label_1ebcb0;
        case 0x1ebcb4u: goto label_1ebcb4;
        case 0x1ebcb8u: goto label_1ebcb8;
        case 0x1ebcbcu: goto label_1ebcbc;
        case 0x1ebcc0u: goto label_1ebcc0;
        case 0x1ebcc4u: goto label_1ebcc4;
        case 0x1ebcc8u: goto label_1ebcc8;
        case 0x1ebcccu: goto label_1ebccc;
        case 0x1ebcd0u: goto label_1ebcd0;
        case 0x1ebcd4u: goto label_1ebcd4;
        case 0x1ebcd8u: goto label_1ebcd8;
        case 0x1ebcdcu: goto label_1ebcdc;
        case 0x1ebce0u: goto label_1ebce0;
        case 0x1ebce4u: goto label_1ebce4;
        case 0x1ebce8u: goto label_1ebce8;
        case 0x1ebcecu: goto label_1ebcec;
        case 0x1ebcf0u: goto label_1ebcf0;
        case 0x1ebcf4u: goto label_1ebcf4;
        case 0x1ebcf8u: goto label_1ebcf8;
        case 0x1ebcfcu: goto label_1ebcfc;
        case 0x1ebd00u: goto label_1ebd00;
        case 0x1ebd04u: goto label_1ebd04;
        case 0x1ebd08u: goto label_1ebd08;
        case 0x1ebd0cu: goto label_1ebd0c;
        case 0x1ebd10u: goto label_1ebd10;
        case 0x1ebd14u: goto label_1ebd14;
        case 0x1ebd18u: goto label_1ebd18;
        case 0x1ebd1cu: goto label_1ebd1c;
        case 0x1ebd20u: goto label_1ebd20;
        case 0x1ebd24u: goto label_1ebd24;
        case 0x1ebd28u: goto label_1ebd28;
        case 0x1ebd2cu: goto label_1ebd2c;
        case 0x1ebd30u: goto label_1ebd30;
        case 0x1ebd34u: goto label_1ebd34;
        case 0x1ebd38u: goto label_1ebd38;
        case 0x1ebd3cu: goto label_1ebd3c;
        case 0x1ebd40u: goto label_1ebd40;
        case 0x1ebd44u: goto label_1ebd44;
        case 0x1ebd48u: goto label_1ebd48;
        case 0x1ebd4cu: goto label_1ebd4c;
        case 0x1ebd50u: goto label_1ebd50;
        case 0x1ebd54u: goto label_1ebd54;
        case 0x1ebd58u: goto label_1ebd58;
        case 0x1ebd5cu: goto label_1ebd5c;
        case 0x1ebd60u: goto label_1ebd60;
        case 0x1ebd64u: goto label_1ebd64;
        case 0x1ebd68u: goto label_1ebd68;
        case 0x1ebd6cu: goto label_1ebd6c;
        case 0x1ebd70u: goto label_1ebd70;
        case 0x1ebd74u: goto label_1ebd74;
        case 0x1ebd78u: goto label_1ebd78;
        case 0x1ebd7cu: goto label_1ebd7c;
        case 0x1ebd80u: goto label_1ebd80;
        case 0x1ebd84u: goto label_1ebd84;
        case 0x1ebd88u: goto label_1ebd88;
        case 0x1ebd8cu: goto label_1ebd8c;
        case 0x1ebd90u: goto label_1ebd90;
        case 0x1ebd94u: goto label_1ebd94;
        case 0x1ebd98u: goto label_1ebd98;
        case 0x1ebd9cu: goto label_1ebd9c;
        case 0x1ebda0u: goto label_1ebda0;
        case 0x1ebda4u: goto label_1ebda4;
        case 0x1ebda8u: goto label_1ebda8;
        case 0x1ebdacu: goto label_1ebdac;
        case 0x1ebdb0u: goto label_1ebdb0;
        case 0x1ebdb4u: goto label_1ebdb4;
        case 0x1ebdb8u: goto label_1ebdb8;
        case 0x1ebdbcu: goto label_1ebdbc;
        case 0x1ebdc0u: goto label_1ebdc0;
        case 0x1ebdc4u: goto label_1ebdc4;
        case 0x1ebdc8u: goto label_1ebdc8;
        case 0x1ebdccu: goto label_1ebdcc;
        case 0x1ebdd0u: goto label_1ebdd0;
        case 0x1ebdd4u: goto label_1ebdd4;
        case 0x1ebdd8u: goto label_1ebdd8;
        case 0x1ebddcu: goto label_1ebddc;
        case 0x1ebde0u: goto label_1ebde0;
        case 0x1ebde4u: goto label_1ebde4;
        case 0x1ebde8u: goto label_1ebde8;
        case 0x1ebdecu: goto label_1ebdec;
        case 0x1ebdf0u: goto label_1ebdf0;
        case 0x1ebdf4u: goto label_1ebdf4;
        case 0x1ebdf8u: goto label_1ebdf8;
        case 0x1ebdfcu: goto label_1ebdfc;
        default: break;
    }

    ctx->pc = 0x1ebc10u;

label_1ebc10:
    // 0x1ebc10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ebc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1ebc14:
    // 0x1ebc14: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1ebc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1ebc18:
    // 0x1ebc18: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1ebc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1ebc1c:
    // 0x1ebc1c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ebc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1ebc20:
    // 0x1ebc20: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ebc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ebc24:
    // 0x1ebc24: 0xc07f88a  jal         func_1FE228
label_1ebc28:
    if (ctx->pc == 0x1EBC28u) {
        ctx->pc = 0x1EBC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC24u;
        // 0x1ebc28: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBC2Cu;
        goto label_1ebc2c;
    }
    ctx->pc = 0x1EBC24u;
    SET_GPR_U32(ctx, 31, 0x1EBC2Cu);
    ctx->pc = 0x1EBC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBC24u;
    // 0x1ebc28: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE228u, 0x1EBC24u, 0x1EBC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBC2Cu;
label_1ebc2c:
    // 0x1ebc2c: 0x1440006f  bnez        $v0, . + 4 + (0x6F << 2)
label_1ebc30:
    if (ctx->pc == 0x1EBC30u) {
        ctx->pc = 0x1EBC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC2Cu;
        // 0x1ebc30: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBC34u;
        goto label_1ebc34;
    }
    ctx->pc = 0x1EBC2Cu;
    {
        const bool branch_taken_0x1ebc2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC2Cu;
        // 0x1ebc30: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc2c) {
            ctx->pc = 0x1EBDECu;
            goto label_1ebdec;
        }
    }
    ctx->pc = 0x1EBC34u;
label_1ebc34:
    // 0x1ebc34: 0x922300c4  lbu         $v1, 0xC4($s1)
    ctx->pc = 0x1ebc34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 196)));
label_1ebc38:
    // 0x1ebc38: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1ebc3c:
    if (ctx->pc == 0x1EBC3Cu) {
        ctx->pc = 0x1EBC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC38u;
        // 0x1ebc3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBC40u;
        goto label_1ebc40;
    }
    ctx->pc = 0x1EBC38u;
    {
        const bool branch_taken_0x1ebc38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC38u;
        // 0x1ebc3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc38) {
            ctx->pc = 0x1EBC60u;
            goto label_1ebc60;
        }
    }
    ctx->pc = 0x1EBC40u;
label_1ebc40:
    // 0x1ebc40: 0x5462006b  bnel        $v1, $v0, . + 4 + (0x6B << 2)
label_1ebc44:
    if (ctx->pc == 0x1EBC44u) {
        ctx->pc = 0x1EBC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC40u;
        // 0x1ebc44: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBC48u;
        goto label_1ebc48;
    }
    ctx->pc = 0x1EBC40u;
    {
        const bool branch_taken_0x1ebc40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ebc40) {
            ctx->pc = 0x1EBC44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EBC40u;
            // 0x1ebc44: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EBDF0u;
            goto label_1ebdf0;
        }
    }
    ctx->pc = 0x1EBC48u;
label_1ebc48:
    // 0x1ebc48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ebc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ebc4c:
    // 0x1ebc4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ebc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ebc50:
    // 0x1ebc50: 0xc07aee4  jal         func_1EBB90
label_1ebc54:
    if (ctx->pc == 0x1EBC54u) {
        ctx->pc = 0x1EBC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC50u;
        // 0x1ebc54: 0xa22200c4  sb          $v0, 0xC4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 196), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBC58u;
        goto label_1ebc58;
    }
    ctx->pc = 0x1EBC50u;
    SET_GPR_U32(ctx, 31, 0x1EBC58u);
    ctx->pc = 0x1EBC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBC50u;
    // 0x1ebc54: 0xa22200c4  sb          $v0, 0xC4($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 196), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBB90u, 0x1EBC50u, 0x1EBC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBC58u;
label_1ebc58:
    // 0x1ebc58: 0x10000064  b           . + 4 + (0x64 << 2)
label_1ebc5c:
    if (ctx->pc == 0x1EBC5Cu) {
        ctx->pc = 0x1EBC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC58u;
        // 0x1ebc5c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBC60u;
        goto label_1ebc60;
    }
    ctx->pc = 0x1EBC58u;
    {
        const bool branch_taken_0x1ebc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC58u;
        // 0x1ebc5c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc58) {
            ctx->pc = 0x1EBDECu;
            goto label_1ebdec;
        }
    }
    ctx->pc = 0x1EBC60u;
label_1ebc60:
    // 0x1ebc60: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ebc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ebc64:
    // 0x1ebc64: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1ebc64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1ebc68:
    // 0x1ebc68: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1ebc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1ebc6c:
    // 0x1ebc6c: 0x40f809  jalr        $v0
label_1ebc70:
    if (ctx->pc == 0x1EBC70u) {
        ctx->pc = 0x1EBC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC6Cu;
        // 0x1ebc70: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBC74u;
        goto label_1ebc74;
    }
    ctx->pc = 0x1EBC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EBC74u);
        ctx->pc = 0x1EBC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC6Cu;
        // 0x1ebc70: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBC6Cu, 0x1EBC74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBC74u;
label_1ebc74:
    // 0x1ebc74: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
label_1ebc78:
    if (ctx->pc == 0x1EBC78u) {
        ctx->pc = 0x1EBC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC74u;
        // 0x1ebc78: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBC7Cu;
        goto label_1ebc7c;
    }
    ctx->pc = 0x1EBC74u;
    {
        const bool branch_taken_0x1ebc74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC74u;
        // 0x1ebc78: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc74) {
            ctx->pc = 0x1EBDECu;
            goto label_1ebdec;
        }
    }
    ctx->pc = 0x1EBC7Cu;
label_1ebc7c:
    // 0x1ebc7c: 0x8e2500b8  lw          $a1, 0xB8($s1)
    ctx->pc = 0x1ebc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_1ebc80:
    // 0x1ebc80: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ebc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ebc84:
    // 0x1ebc84: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1ebc84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1ebc88:
    // 0x1ebc88: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1ebc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1ebc8c:
    // 0x1ebc8c: 0x60f809  jalr        $v1
label_1ebc90:
    if (ctx->pc == 0x1EBC90u) {
        ctx->pc = 0x1EBC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC8Cu;
        // 0x1ebc90: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBC94u;
        goto label_1ebc94;
    }
    ctx->pc = 0x1EBC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EBC94u);
        ctx->pc = 0x1EBC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBC8Cu;
        // 0x1ebc90: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBC8Cu, 0x1EBC94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBC94u;
label_1ebc94:
    // 0x1ebc94: 0x8e2600bc  lw          $a2, 0xBC($s1)
    ctx->pc = 0x1ebc94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_1ebc98:
    // 0x1ebc98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ebc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ebc9c:
    // 0x1ebc9c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ebc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ebca0:
    // 0x1ebca0: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x1ebca0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1ebca4:
    // 0x1ebca4: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1ebca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1ebca8:
    // 0x1ebca8: 0x60f809  jalr        $v1
label_1ebcac:
    if (ctx->pc == 0x1EBCACu) {
        ctx->pc = 0x1EBCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBCA8u;
        // 0x1ebcac: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBCB0u;
        goto label_1ebcb0;
    }
    ctx->pc = 0x1EBCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EBCB0u);
        ctx->pc = 0x1EBCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBCA8u;
        // 0x1ebcac: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBCA8u, 0x1EBCB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBCB0u;
label_1ebcb0:
    // 0x1ebcb0: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1ebcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1ebcb4:
    // 0x1ebcb4: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1ebcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_1ebcb8:
    // 0x1ebcb8: 0xc461ee48  lwc1        $f1, -0x11B8($v1)
    ctx->pc = 0x1ebcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ebcbc:
    // 0x1ebcbc: 0xc440ee44  lwc1        $f0, -0x11BC($v0)
    ctx->pc = 0x1ebcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ebcc0:
    // 0x1ebcc0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ebcc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1ebcc4:
    // 0x1ebcc4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ebcc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1ebcc8:
    // 0x1ebcc8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ebcc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1ebccc:
    // 0x1ebccc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ebcccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ebcd0:
    // 0x1ebcd0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ebcd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ebcd4:
    // 0x1ebcd4: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1ebcd4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1ebcd8:
    // 0x1ebcd8: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x1ebcd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1ebcdc:
    // 0x1ebcdc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1ebcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1ebce0:
    // 0x1ebce0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1ebce0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1ebce4:
    // 0x1ebce4: 0x8e2500bc  lw          $a1, 0xBC($s1)
    ctx->pc = 0x1ebce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_1ebce8:
    // 0x1ebce8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1ebce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1ebcec:
    // 0x1ebcec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ebcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ebcf0:
    // 0x1ebcf0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1ebcf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1ebcf4:
    // 0x1ebcf4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1ebcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1ebcf8:
    // 0x1ebcf8: 0x60f809  jalr        $v1
label_1ebcfc:
    if (ctx->pc == 0x1EBCFCu) {
        ctx->pc = 0x1EBCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBCF8u;
        // 0x1ebcfc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBD00u;
        goto label_1ebd00;
    }
    ctx->pc = 0x1EBCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EBD00u);
        ctx->pc = 0x1EBCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBCF8u;
        // 0x1ebcfc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBCF8u, 0x1EBD00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBD00u;
label_1ebd00:
    // 0x1ebd00: 0x8e2500bc  lw          $a1, 0xBC($s1)
    ctx->pc = 0x1ebd00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_1ebd04:
    // 0x1ebd04: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ebd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ebd08:
    // 0x1ebd08: 0x84640110  lh          $a0, 0x110($v1)
    ctx->pc = 0x1ebd08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 272)));
label_1ebd0c:
    // 0x1ebd0c: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x1ebd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
label_1ebd10:
    // 0x1ebd10: 0x40f809  jalr        $v0
label_1ebd14:
    if (ctx->pc == 0x1EBD14u) {
        ctx->pc = 0x1EBD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD10u;
        // 0x1ebd14: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBD18u;
        goto label_1ebd18;
    }
    ctx->pc = 0x1EBD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EBD18u);
        ctx->pc = 0x1EBD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD10u;
        // 0x1ebd14: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBD10u, 0x1EBD18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBD18u;
label_1ebd18:
    // 0x1ebd18: 0x8e2500bc  lw          $a1, 0xBC($s1)
    ctx->pc = 0x1ebd18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_1ebd1c:
    // 0x1ebd1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ebd1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ebd20:
    // 0x1ebd20: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ebd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ebd24:
    // 0x1ebd24: 0x84640108  lh          $a0, 0x108($v1)
    ctx->pc = 0x1ebd24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 264)));
label_1ebd28:
    // 0x1ebd28: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x1ebd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_1ebd2c:
    // 0x1ebd2c: 0x40f809  jalr        $v0
label_1ebd30:
    if (ctx->pc == 0x1EBD30u) {
        ctx->pc = 0x1EBD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD2Cu;
        // 0x1ebd30: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBD34u;
        goto label_1ebd34;
    }
    ctx->pc = 0x1EBD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EBD34u);
        ctx->pc = 0x1EBD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD2Cu;
        // 0x1ebd30: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBD2Cu, 0x1EBD34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBD34u;
label_1ebd34:
    // 0x1ebd34: 0x8e2300a4  lw          $v1, 0xA4($s1)
    ctx->pc = 0x1ebd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_1ebd38:
    // 0x1ebd38: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
label_1ebd3c:
    if (ctx->pc == 0x1EBD3Cu) {
        ctx->pc = 0x1EBD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD38u;
        // 0x1ebd3c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBD40u;
        goto label_1ebd40;
    }
    ctx->pc = 0x1EBD38u;
    {
        const bool branch_taken_0x1ebd38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EBD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD38u;
        // 0x1ebd3c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebd38) {
            ctx->pc = 0x1EBD9Cu;
            goto label_1ebd9c;
        }
    }
    ctx->pc = 0x1EBD40u;
label_1ebd40:
    // 0x1ebd40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ebd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ebd44:
    // 0x1ebd44: 0x846400d0  lh          $a0, 0xD0($v1)
    ctx->pc = 0x1ebd44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
label_1ebd48:
    // 0x1ebd48: 0x8c6200d4  lw          $v0, 0xD4($v1)
    ctx->pc = 0x1ebd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_1ebd4c:
    // 0x1ebd4c: 0x40f809  jalr        $v0
label_1ebd50:
    if (ctx->pc == 0x1EBD50u) {
        ctx->pc = 0x1EBD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD4Cu;
        // 0x1ebd50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBD54u;
        goto label_1ebd54;
    }
    ctx->pc = 0x1EBD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EBD54u);
        ctx->pc = 0x1EBD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD4Cu;
        // 0x1ebd50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBD4Cu, 0x1EBD54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBD54u;
label_1ebd54:
    // 0x1ebd54: 0x8e2300a8  lw          $v1, 0xA8($s1)
    ctx->pc = 0x1ebd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_1ebd58:
    // 0x1ebd58: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_1ebd5c:
    if (ctx->pc == 0x1EBD5Cu) {
        ctx->pc = 0x1EBD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD58u;
        // 0x1ebd5c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBD60u;
        goto label_1ebd60;
    }
    ctx->pc = 0x1EBD58u;
    {
        const bool branch_taken_0x1ebd58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EBD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD58u;
        // 0x1ebd5c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebd58) {
            ctx->pc = 0x1EBD9Cu;
            goto label_1ebd9c;
        }
    }
    ctx->pc = 0x1EBD60u;
label_1ebd60:
    // 0x1ebd60: 0x8e2500bc  lw          $a1, 0xBC($s1)
    ctx->pc = 0x1ebd60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_1ebd64:
    // 0x1ebd64: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ebd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ebd68:
    // 0x1ebd68: 0x84640108  lh          $a0, 0x108($v1)
    ctx->pc = 0x1ebd68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 264)));
label_1ebd6c:
    // 0x1ebd6c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x1ebd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_1ebd70:
    // 0x1ebd70: 0x40f809  jalr        $v0
label_1ebd74:
    if (ctx->pc == 0x1EBD74u) {
        ctx->pc = 0x1EBD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD70u;
        // 0x1ebd74: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBD78u;
        goto label_1ebd78;
    }
    ctx->pc = 0x1EBD70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EBD78u);
        ctx->pc = 0x1EBD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD70u;
        // 0x1ebd74: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBD70u, 0x1EBD78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBD78u;
label_1ebd78:
    // 0x1ebd78: 0xae2200a4  sw          $v0, 0xA4($s1)
    ctx->pc = 0x1ebd78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
label_1ebd7c:
    // 0x1ebd7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ebd7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ebd80:
    // 0x1ebd80: 0x8e2500a8  lw          $a1, 0xA8($s1)
    ctx->pc = 0x1ebd80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_1ebd84:
    // 0x1ebd84: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ebd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ebd88:
    // 0x1ebd88: 0x84440108  lh          $a0, 0x108($v0)
    ctx->pc = 0x1ebd88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 264)));
label_1ebd8c:
    // 0x1ebd8c: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x1ebd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_1ebd90:
    // 0x1ebd90: 0x60f809  jalr        $v1
label_1ebd94:
    if (ctx->pc == 0x1EBD94u) {
        ctx->pc = 0x1EBD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD90u;
        // 0x1ebd94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBD98u;
        goto label_1ebd98;
    }
    ctx->pc = 0x1EBD90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EBD98u);
        ctx->pc = 0x1EBD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD90u;
        // 0x1ebd94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBD90u, 0x1EBD98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBD98u;
label_1ebd98:
    // 0x1ebd98: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ebd98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ebd9c:
    // 0x1ebd9c: 0x263000b0  addiu       $s0, $s1, 0xB0
    ctx->pc = 0x1ebd9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_1ebda0:
    // 0x1ebda0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1ebda0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ebda4:
    // 0x1ebda4: 0x0  nop
    ctx->pc = 0x1ebda4u;
    // NOP
label_1ebda8:
    // 0x1ebda8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ebda8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ebdac:
    // 0x1ebdac: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1ebdacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1ebdb0:
    // 0x1ebdb0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ebdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ebdb4:
    // 0x1ebdb4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1ebdb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1ebdb8:
    // 0x1ebdb8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1ebdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1ebdbc:
    // 0x1ebdbc: 0x60f809  jalr        $v1
label_1ebdc0:
    if (ctx->pc == 0x1EBDC0u) {
        ctx->pc = 0x1EBDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBDBCu;
        // 0x1ebdc0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBDC4u;
        goto label_1ebdc4;
    }
    ctx->pc = 0x1EBDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EBDC4u);
        ctx->pc = 0x1EBDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBDBCu;
        // 0x1ebdc0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBDBCu, 0x1EBDC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBDC4u;
label_1ebdc4:
    // 0x1ebdc4: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x1ebdc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1ebdc8:
    // 0x1ebdc8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_1ebdcc:
    if (ctx->pc == 0x1EBDCCu) {
        ctx->pc = 0x1EBDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBDC8u;
        // 0x1ebdcc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBDD0u;
        goto label_1ebdd0;
    }
    ctx->pc = 0x1EBDC8u;
    {
        const bool branch_taken_0x1ebdc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebdc8) {
            ctx->pc = 0x1EBDCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EBDC8u;
            // 0x1ebdcc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EBDA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ebda8;
        }
    }
    ctx->pc = 0x1EBDD0u;
label_1ebdd0:
    // 0x1ebdd0: 0x8e2500c0  lw          $a1, 0xC0($s1)
    ctx->pc = 0x1ebdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_1ebdd4:
    // 0x1ebdd4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ebdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ebdd8:
    // 0x1ebdd8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1ebdd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1ebddc:
    // 0x1ebddc: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1ebddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1ebde0:
    // 0x1ebde0: 0x60f809  jalr        $v1
label_1ebde4:
    if (ctx->pc == 0x1EBDE4u) {
        ctx->pc = 0x1EBDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBDE0u;
        // 0x1ebde4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBDE8u;
        goto label_1ebde8;
    }
    ctx->pc = 0x1EBDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EBDE8u);
        ctx->pc = 0x1EBDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBDE0u;
        // 0x1ebde4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBDE0u, 0x1EBDE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBDE8u;
label_1ebde8:
    // 0x1ebde8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1ebde8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ebdec:
    // 0x1ebdec: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1ebdecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ebdf0:
    // 0x1ebdf0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ebdf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ebdf4:
    // 0x1ebdf4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ebdf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ebdf8:
    // 0x1ebdf8: 0x3e00008  jr          $ra
label_1ebdfc:
    if (ctx->pc == 0x1EBDFCu) {
        ctx->pc = 0x1EBDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBDF8u;
        // 0x1ebdfc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBE00u;
        goto label_fallthrough_0x1ebdf8;
    }
    ctx->pc = 0x1EBDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBDF8u;
        // 0x1ebdfc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ebdf8:
    ctx->pc = 0x1EBE00u;
}
