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

// Function: sub_003EFA20
// Address: 0x3efa20 - 0x3efb60
void sub_003EFA20_0x3efa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EFA20_0x3efa20");
#endif

    switch (ctx->pc) {
        case 0x3efa20u: goto label_3efa20;
        case 0x3efa24u: goto label_3efa24;
        case 0x3efa28u: goto label_3efa28;
        case 0x3efa2cu: goto label_3efa2c;
        case 0x3efa30u: goto label_3efa30;
        case 0x3efa34u: goto label_3efa34;
        case 0x3efa38u: goto label_3efa38;
        case 0x3efa3cu: goto label_3efa3c;
        case 0x3efa40u: goto label_3efa40;
        case 0x3efa44u: goto label_3efa44;
        case 0x3efa48u: goto label_3efa48;
        case 0x3efa4cu: goto label_3efa4c;
        case 0x3efa50u: goto label_3efa50;
        case 0x3efa54u: goto label_3efa54;
        case 0x3efa58u: goto label_3efa58;
        case 0x3efa5cu: goto label_3efa5c;
        case 0x3efa60u: goto label_3efa60;
        case 0x3efa64u: goto label_3efa64;
        case 0x3efa68u: goto label_3efa68;
        case 0x3efa6cu: goto label_3efa6c;
        case 0x3efa70u: goto label_3efa70;
        case 0x3efa74u: goto label_3efa74;
        case 0x3efa78u: goto label_3efa78;
        case 0x3efa7cu: goto label_3efa7c;
        case 0x3efa80u: goto label_3efa80;
        case 0x3efa84u: goto label_3efa84;
        case 0x3efa88u: goto label_3efa88;
        case 0x3efa8cu: goto label_3efa8c;
        case 0x3efa90u: goto label_3efa90;
        case 0x3efa94u: goto label_3efa94;
        case 0x3efa98u: goto label_3efa98;
        case 0x3efa9cu: goto label_3efa9c;
        case 0x3efaa0u: goto label_3efaa0;
        case 0x3efaa4u: goto label_3efaa4;
        case 0x3efaa8u: goto label_3efaa8;
        case 0x3efaacu: goto label_3efaac;
        case 0x3efab0u: goto label_3efab0;
        case 0x3efab4u: goto label_3efab4;
        case 0x3efab8u: goto label_3efab8;
        case 0x3efabcu: goto label_3efabc;
        case 0x3efac0u: goto label_3efac0;
        case 0x3efac4u: goto label_3efac4;
        case 0x3efac8u: goto label_3efac8;
        case 0x3efaccu: goto label_3efacc;
        case 0x3efad0u: goto label_3efad0;
        case 0x3efad4u: goto label_3efad4;
        case 0x3efad8u: goto label_3efad8;
        case 0x3efadcu: goto label_3efadc;
        case 0x3efae0u: goto label_3efae0;
        case 0x3efae4u: goto label_3efae4;
        case 0x3efae8u: goto label_3efae8;
        case 0x3efaecu: goto label_3efaec;
        case 0x3efaf0u: goto label_3efaf0;
        case 0x3efaf4u: goto label_3efaf4;
        case 0x3efaf8u: goto label_3efaf8;
        case 0x3efafcu: goto label_3efafc;
        case 0x3efb00u: goto label_3efb00;
        case 0x3efb04u: goto label_3efb04;
        case 0x3efb08u: goto label_3efb08;
        case 0x3efb0cu: goto label_3efb0c;
        case 0x3efb10u: goto label_3efb10;
        case 0x3efb14u: goto label_3efb14;
        case 0x3efb18u: goto label_3efb18;
        case 0x3efb1cu: goto label_3efb1c;
        case 0x3efb20u: goto label_3efb20;
        case 0x3efb24u: goto label_3efb24;
        case 0x3efb28u: goto label_3efb28;
        case 0x3efb2cu: goto label_3efb2c;
        case 0x3efb30u: goto label_3efb30;
        case 0x3efb34u: goto label_3efb34;
        case 0x3efb38u: goto label_3efb38;
        case 0x3efb3cu: goto label_3efb3c;
        case 0x3efb40u: goto label_3efb40;
        case 0x3efb44u: goto label_3efb44;
        case 0x3efb48u: goto label_3efb48;
        case 0x3efb4cu: goto label_3efb4c;
        case 0x3efb50u: goto label_3efb50;
        case 0x3efb54u: goto label_3efb54;
        case 0x3efb58u: goto label_3efb58;
        case 0x3efb5cu: goto label_3efb5c;
        default: break;
    }

    ctx->pc = 0x3efa20u;

label_3efa20:
    // 0x3efa20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3efa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3efa24:
    // 0x3efa24: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3efa24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3efa28:
    // 0x3efa28: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3efa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3efa2c:
    // 0x3efa2c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3efa2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3efa30:
    // 0x3efa30: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3efa30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3efa34:
    // 0x3efa34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3efa34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3efa38:
    // 0x3efa38: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3efa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3efa3c:
    // 0x3efa3c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3efa3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3efa40:
    // 0x3efa40: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3efa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3efa44:
    // 0x3efa44: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3efa44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3efa48:
    // 0x3efa48: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3efa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3efa4c:
    // 0x3efa4c: 0x40f809  jalr        $v0
label_3efa50:
    if (ctx->pc == 0x3EFA50u) {
        ctx->pc = 0x3EFA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFA4Cu;
        // 0x3efa50: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFA54u;
        goto label_3efa54;
    }
    ctx->pc = 0x3EFA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EFA54u);
        ctx->pc = 0x3EFA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFA4Cu;
        // 0x3efa50: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EFA4Cu, 0x3EFA54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EFA54u;
label_3efa54:
    // 0x3efa54: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3efa54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3efa58:
    // 0x3efa58: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3efa58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3efa5c:
    // 0x3efa5c: 0x1242002a  beq         $s2, $v0, . + 4 + (0x2A << 2)
label_3efa60:
    if (ctx->pc == 0x3EFA60u) {
        ctx->pc = 0x3EFA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFA5Cu;
        // 0x3efa60: 0x2e420013  sltiu       $v0, $s2, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFA64u;
        goto label_3efa64;
    }
    ctx->pc = 0x3EFA5Cu;
    {
        const bool branch_taken_0x3efa5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EFA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFA5Cu;
        // 0x3efa60: 0x2e420013  sltiu       $v0, $s2, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efa5c) {
            ctx->pc = 0x3EFB08u;
            goto label_3efb08;
        }
    }
    ctx->pc = 0x3EFA64u;
label_3efa64:
    // 0x3efa64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3efa68:
    if (ctx->pc == 0x3EFA68u) {
        ctx->pc = 0x3EFA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFA64u;
        // 0x3efa68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFA6Cu;
        goto label_3efa6c;
    }
    ctx->pc = 0x3EFA64u;
    {
        const bool branch_taken_0x3efa64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFA64u;
        // 0x3efa68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efa64) {
            ctx->pc = 0x3EFA7Cu;
            goto label_3efa7c;
        }
    }
    ctx->pc = 0x3EFA6Cu;
label_3efa6c:
    // 0x3efa6c: 0x12420008  beq         $s2, $v0, . + 4 + (0x8 << 2)
label_3efa70:
    if (ctx->pc == 0x3EFA70u) {
        ctx->pc = 0x3EFA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFA6Cu;
        // 0x3efa70: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFA74u;
        goto label_3efa74;
    }
    ctx->pc = 0x3EFA6Cu;
    {
        const bool branch_taken_0x3efa6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EFA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFA6Cu;
        // 0x3efa70: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efa6c) {
            ctx->pc = 0x3EFA90u;
            goto label_3efa90;
        }
    }
    ctx->pc = 0x3EFA74u;
label_3efa74:
    // 0x3efa74: 0x10000034  b           . + 4 + (0x34 << 2)
label_3efa78:
    if (ctx->pc == 0x3EFA78u) {
        ctx->pc = 0x3EFA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFA74u;
        // 0x3efa78: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFA7Cu;
        goto label_3efa7c;
    }
    ctx->pc = 0x3EFA74u;
    {
        const bool branch_taken_0x3efa74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFA74u;
        // 0x3efa78: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efa74) {
            ctx->pc = 0x3EFB48u;
            goto label_3efb48;
        }
    }
    ctx->pc = 0x3EFA7Cu;
label_3efa7c:
    // 0x3efa7c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x3efa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3efa80:
    // 0x3efa80: 0x1242002c  beq         $s2, $v0, . + 4 + (0x2C << 2)
label_3efa84:
    if (ctx->pc == 0x3EFA84u) {
        ctx->pc = 0x3EFA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFA80u;
        // 0x3efa84: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFA88u;
        goto label_3efa88;
    }
    ctx->pc = 0x3EFA80u;
    {
        const bool branch_taken_0x3efa80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EFA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFA80u;
        // 0x3efa84: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efa80) {
            ctx->pc = 0x3EFB34u;
            goto label_3efb34;
        }
    }
    ctx->pc = 0x3EFA88u;
label_3efa88:
    // 0x3efa88: 0x10000030  b           . + 4 + (0x30 << 2)
label_3efa8c:
    if (ctx->pc == 0x3EFA8Cu) {
        ctx->pc = 0x3EFA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFA88u;
        // 0x3efa8c: 0x7bb10080  lq          $s1, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFA90u;
        goto label_3efa90;
    }
    ctx->pc = 0x3EFA88u;
    {
        const bool branch_taken_0x3efa88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFA88u;
        // 0x3efa8c: 0x7bb10080  lq          $s1, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efa88) {
            ctx->pc = 0x3EFB4Cu;
            goto label_3efb4c;
        }
    }
    ctx->pc = 0x3EFA90u;
label_3efa90:
    // 0x3efa90: 0xc0ea12a  jal         func_3A84A8
label_3efa94:
    if (ctx->pc == 0x3EFA94u) {
        ctx->pc = 0x3EFA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFA90u;
        // 0x3efa94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFA98u;
        goto label_3efa98;
    }
    ctx->pc = 0x3EFA90u;
    SET_GPR_U32(ctx, 31, 0x3EFA98u);
    ctx->pc = 0x3EFA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFA90u;
    // 0x3efa94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EFA90u, 0x3EFA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFA98u;
label_3efa98:
    // 0x3efa98: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3efa98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3efa9c:
    // 0x3efa9c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3efa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3efaa0:
    // 0x3efaa0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3efaa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3efaa4:
    // 0x3efaa4: 0xc0ea12a  jal         func_3A84A8
label_3efaa8:
    if (ctx->pc == 0x3EFAA8u) {
        ctx->pc = 0x3EFAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFAA4u;
        // 0x3efaa8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFAACu;
        goto label_3efaac;
    }
    ctx->pc = 0x3EFAA4u;
    SET_GPR_U32(ctx, 31, 0x3EFAACu);
    ctx->pc = 0x3EFAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFAA4u;
    // 0x3efaa8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EFAA4u, 0x3EFAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFAACu;
label_3efaac:
    // 0x3efaac: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3efaacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3efab0:
    // 0x3efab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3efab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3efab4:
    // 0x3efab4: 0xc0ea146  jal         func_3A8518
label_3efab8:
    if (ctx->pc == 0x3EFAB8u) {
        ctx->pc = 0x3EFAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFAB4u;
        // 0x3efab8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFABCu;
        goto label_3efabc;
    }
    ctx->pc = 0x3EFAB4u;
    SET_GPR_U32(ctx, 31, 0x3EFABCu);
    ctx->pc = 0x3EFAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFAB4u;
    // 0x3efab8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3EFAB4u, 0x3EFABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFABCu;
label_3efabc:
    // 0x3efabc: 0xc0ea146  jal         func_3A8518
label_3efac0:
    if (ctx->pc == 0x3EFAC0u) {
        ctx->pc = 0x3EFAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFABCu;
        // 0x3efac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFAC4u;
        goto label_3efac4;
    }
    ctx->pc = 0x3EFABCu;
    SET_GPR_U32(ctx, 31, 0x3EFAC4u);
    ctx->pc = 0x3EFAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFABCu;
    // 0x3efac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3EFABCu, 0x3EFAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFAC4u;
label_3efac4:
    // 0x3efac4: 0xc0ea14c  jal         func_3A8530
label_3efac8:
    if (ctx->pc == 0x3EFAC8u) {
        ctx->pc = 0x3EFAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFAC4u;
        // 0x3efac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFACCu;
        goto label_3efacc;
    }
    ctx->pc = 0x3EFAC4u;
    SET_GPR_U32(ctx, 31, 0x3EFACCu);
    ctx->pc = 0x3EFAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFAC4u;
    // 0x3efac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3EFAC4u, 0x3EFACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFACCu;
label_3efacc:
    // 0x3efacc: 0xc0ea14c  jal         func_3A8530
label_3efad0:
    if (ctx->pc == 0x3EFAD0u) {
        ctx->pc = 0x3EFAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFACCu;
        // 0x3efad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFAD4u;
        goto label_3efad4;
    }
    ctx->pc = 0x3EFACCu;
    SET_GPR_U32(ctx, 31, 0x3EFAD4u);
    ctx->pc = 0x3EFAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFACCu;
    // 0x3efad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3EFACCu, 0x3EFAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFAD4u;
label_3efad4:
    // 0x3efad4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3efad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3efad8:
    // 0x3efad8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3efad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3efadc:
    // 0x3efadc: 0xacb20020  sw          $s2, 0x20($a1)
    ctx->pc = 0x3efadcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 18));
label_3efae0:
    // 0x3efae0: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x3efae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_3efae4:
    // 0x3efae4: 0xafb10054  sw          $s1, 0x54($sp)
    ctx->pc = 0x3efae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 17));
label_3efae8:
    // 0x3efae8: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3efae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_3efaec:
    // 0x3efaec: 0xa3a00041  sb          $zero, 0x41($sp)
    ctx->pc = 0x3efaecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 0));
label_3efaf0:
    // 0x3efaf0: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x3efaf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_3efaf4:
    // 0x3efaf4: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x3efaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_3efaf8:
    // 0x3efaf8: 0x40f809  jalr        $v0
label_3efafc:
    if (ctx->pc == 0x3EFAFCu) {
        ctx->pc = 0x3EFAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFAF8u;
        // 0x3efafc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFB00u;
        goto label_3efb00;
    }
    ctx->pc = 0x3EFAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EFB00u);
        ctx->pc = 0x3EFAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFAF8u;
        // 0x3efafc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EFAF8u, 0x3EFB00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EFB00u;
label_3efb00:
    // 0x3efb00: 0x10000011  b           . + 4 + (0x11 << 2)
label_3efb04:
    if (ctx->pc == 0x3EFB04u) {
        ctx->pc = 0x3EFB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFB00u;
        // 0x3efb04: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFB08u;
        goto label_3efb08;
    }
    ctx->pc = 0x3EFB00u;
    {
        const bool branch_taken_0x3efb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFB00u;
        // 0x3efb04: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efb00) {
            ctx->pc = 0x3EFB48u;
            goto label_3efb48;
        }
    }
    ctx->pc = 0x3EFB08u;
label_3efb08:
    // 0x3efb08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3efb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3efb0c:
    // 0x3efb0c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3efb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3efb10:
    // 0x3efb10: 0xc094040  jal         func_250100
label_3efb14:
    if (ctx->pc == 0x3EFB14u) {
        ctx->pc = 0x3EFB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFB10u;
        // 0x3efb14: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFB18u;
        goto label_3efb18;
    }
    ctx->pc = 0x3EFB10u;
    SET_GPR_U32(ctx, 31, 0x3EFB18u);
    ctx->pc = 0x3EFB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFB10u;
    // 0x3efb14: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250100u, 0x3EFB10u, 0x3EFB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFB18u;
label_3efb18:
    // 0x3efb18: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3efb18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3efb1c:
    // 0x3efb1c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_3efb20:
    if (ctx->pc == 0x3EFB20u) {
        ctx->pc = 0x3EFB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFB1Cu;
        // 0x3efb20: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFB24u;
        goto label_3efb24;
    }
    ctx->pc = 0x3EFB1Cu;
    {
        const bool branch_taken_0x3efb1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFB1Cu;
        // 0x3efb20: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efb1c) {
            ctx->pc = 0x3EFB48u;
            goto label_3efb48;
        }
    }
    ctx->pc = 0x3EFB24u;
label_3efb24:
    // 0x3efb24: 0x94620048  lhu         $v0, 0x48($v1)
    ctx->pc = 0x3efb24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_3efb28:
    // 0x3efb28: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x3efb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
label_3efb2c:
    // 0x3efb2c: 0x10000006  b           . + 4 + (0x6 << 2)
label_3efb30:
    if (ctx->pc == 0x3EFB30u) {
        ctx->pc = 0x3EFB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFB2Cu;
        // 0x3efb30: 0xa4620048  sh          $v0, 0x48($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 72), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFB34u;
        goto label_3efb34;
    }
    ctx->pc = 0x3EFB2Cu;
    {
        const bool branch_taken_0x3efb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EFB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFB2Cu;
        // 0x3efb30: 0xa4620048  sh          $v0, 0x48($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 72), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3efb2c) {
            ctx->pc = 0x3EFB48u;
            goto label_3efb48;
        }
    }
    ctx->pc = 0x3EFB34u;
label_3efb34:
    // 0x3efb34: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3efb34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_3efb38:
    // 0x3efb38: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3efb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3efb3c:
    // 0x3efb3c: 0xc0e91f0  jal         func_3A47C0
label_3efb40:
    if (ctx->pc == 0x3EFB40u) {
        ctx->pc = 0x3EFB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFB3Cu;
        // 0x3efb40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFB44u;
        goto label_3efb44;
    }
    ctx->pc = 0x3EFB3Cu;
    SET_GPR_U32(ctx, 31, 0x3EFB44u);
    ctx->pc = 0x3EFB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EFB3Cu;
    // 0x3efb40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A47C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A47C0u, 0x3EFB3Cu, 0x3EFB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EFB44u;
label_3efb44:
    // 0x3efb44: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3efb44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3efb48:
    // 0x3efb48: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3efb48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3efb4c:
    // 0x3efb4c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3efb4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3efb50:
    // 0x3efb50: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3efb50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3efb54:
    // 0x3efb54: 0x3e00008  jr          $ra
label_3efb58:
    if (ctx->pc == 0x3EFB58u) {
        ctx->pc = 0x3EFB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFB54u;
        // 0x3efb58: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EFB5Cu;
        goto label_3efb5c;
    }
    ctx->pc = 0x3EFB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EFB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EFB54u;
        // 0x3efb58: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EFB54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EFB5Cu;
label_3efb5c:
    // 0x3efb5c: 0x0  nop
    ctx->pc = 0x3efb5cu;
    // NOP
    ctx->pc = 0x3efb60u;
}
