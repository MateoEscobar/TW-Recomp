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

// Function: sub_001BCA70
// Address: 0x1bca70 - 0x1bcc48
void sub_001BCA70_0x1bca70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCA70_0x1bca70");
#endif

    switch (ctx->pc) {
        case 0x1bca70u: goto label_1bca70;
        case 0x1bca74u: goto label_1bca74;
        case 0x1bca78u: goto label_1bca78;
        case 0x1bca7cu: goto label_1bca7c;
        case 0x1bca80u: goto label_1bca80;
        case 0x1bca84u: goto label_1bca84;
        case 0x1bca88u: goto label_1bca88;
        case 0x1bca8cu: goto label_1bca8c;
        case 0x1bca90u: goto label_1bca90;
        case 0x1bca94u: goto label_1bca94;
        case 0x1bca98u: goto label_1bca98;
        case 0x1bca9cu: goto label_1bca9c;
        case 0x1bcaa0u: goto label_1bcaa0;
        case 0x1bcaa4u: goto label_1bcaa4;
        case 0x1bcaa8u: goto label_1bcaa8;
        case 0x1bcaacu: goto label_1bcaac;
        case 0x1bcab0u: goto label_1bcab0;
        case 0x1bcab4u: goto label_1bcab4;
        case 0x1bcab8u: goto label_1bcab8;
        case 0x1bcabcu: goto label_1bcabc;
        case 0x1bcac0u: goto label_1bcac0;
        case 0x1bcac4u: goto label_1bcac4;
        case 0x1bcac8u: goto label_1bcac8;
        case 0x1bcaccu: goto label_1bcacc;
        case 0x1bcad0u: goto label_1bcad0;
        case 0x1bcad4u: goto label_1bcad4;
        case 0x1bcad8u: goto label_1bcad8;
        case 0x1bcadcu: goto label_1bcadc;
        case 0x1bcae0u: goto label_1bcae0;
        case 0x1bcae4u: goto label_1bcae4;
        case 0x1bcae8u: goto label_1bcae8;
        case 0x1bcaecu: goto label_1bcaec;
        case 0x1bcaf0u: goto label_1bcaf0;
        case 0x1bcaf4u: goto label_1bcaf4;
        case 0x1bcaf8u: goto label_1bcaf8;
        case 0x1bcafcu: goto label_1bcafc;
        case 0x1bcb00u: goto label_1bcb00;
        case 0x1bcb04u: goto label_1bcb04;
        case 0x1bcb08u: goto label_1bcb08;
        case 0x1bcb0cu: goto label_1bcb0c;
        case 0x1bcb10u: goto label_1bcb10;
        case 0x1bcb14u: goto label_1bcb14;
        case 0x1bcb18u: goto label_1bcb18;
        case 0x1bcb1cu: goto label_1bcb1c;
        case 0x1bcb20u: goto label_1bcb20;
        case 0x1bcb24u: goto label_1bcb24;
        case 0x1bcb28u: goto label_1bcb28;
        case 0x1bcb2cu: goto label_1bcb2c;
        case 0x1bcb30u: goto label_1bcb30;
        case 0x1bcb34u: goto label_1bcb34;
        case 0x1bcb38u: goto label_1bcb38;
        case 0x1bcb3cu: goto label_1bcb3c;
        case 0x1bcb40u: goto label_1bcb40;
        case 0x1bcb44u: goto label_1bcb44;
        case 0x1bcb48u: goto label_1bcb48;
        case 0x1bcb4cu: goto label_1bcb4c;
        case 0x1bcb50u: goto label_1bcb50;
        case 0x1bcb54u: goto label_1bcb54;
        case 0x1bcb58u: goto label_1bcb58;
        case 0x1bcb5cu: goto label_1bcb5c;
        case 0x1bcb60u: goto label_1bcb60;
        case 0x1bcb64u: goto label_1bcb64;
        case 0x1bcb68u: goto label_1bcb68;
        case 0x1bcb6cu: goto label_1bcb6c;
        case 0x1bcb70u: goto label_1bcb70;
        case 0x1bcb74u: goto label_1bcb74;
        case 0x1bcb78u: goto label_1bcb78;
        case 0x1bcb7cu: goto label_1bcb7c;
        case 0x1bcb80u: goto label_1bcb80;
        case 0x1bcb84u: goto label_1bcb84;
        case 0x1bcb88u: goto label_1bcb88;
        case 0x1bcb8cu: goto label_1bcb8c;
        case 0x1bcb90u: goto label_1bcb90;
        case 0x1bcb94u: goto label_1bcb94;
        case 0x1bcb98u: goto label_1bcb98;
        case 0x1bcb9cu: goto label_1bcb9c;
        case 0x1bcba0u: goto label_1bcba0;
        case 0x1bcba4u: goto label_1bcba4;
        case 0x1bcba8u: goto label_1bcba8;
        case 0x1bcbacu: goto label_1bcbac;
        case 0x1bcbb0u: goto label_1bcbb0;
        case 0x1bcbb4u: goto label_1bcbb4;
        case 0x1bcbb8u: goto label_1bcbb8;
        case 0x1bcbbcu: goto label_1bcbbc;
        case 0x1bcbc0u: goto label_1bcbc0;
        case 0x1bcbc4u: goto label_1bcbc4;
        case 0x1bcbc8u: goto label_1bcbc8;
        case 0x1bcbccu: goto label_1bcbcc;
        case 0x1bcbd0u: goto label_1bcbd0;
        case 0x1bcbd4u: goto label_1bcbd4;
        case 0x1bcbd8u: goto label_1bcbd8;
        case 0x1bcbdcu: goto label_1bcbdc;
        case 0x1bcbe0u: goto label_1bcbe0;
        case 0x1bcbe4u: goto label_1bcbe4;
        case 0x1bcbe8u: goto label_1bcbe8;
        case 0x1bcbecu: goto label_1bcbec;
        case 0x1bcbf0u: goto label_1bcbf0;
        case 0x1bcbf4u: goto label_1bcbf4;
        case 0x1bcbf8u: goto label_1bcbf8;
        case 0x1bcbfcu: goto label_1bcbfc;
        case 0x1bcc00u: goto label_1bcc00;
        case 0x1bcc04u: goto label_1bcc04;
        case 0x1bcc08u: goto label_1bcc08;
        case 0x1bcc0cu: goto label_1bcc0c;
        case 0x1bcc10u: goto label_1bcc10;
        case 0x1bcc14u: goto label_1bcc14;
        case 0x1bcc18u: goto label_1bcc18;
        case 0x1bcc1cu: goto label_1bcc1c;
        case 0x1bcc20u: goto label_1bcc20;
        case 0x1bcc24u: goto label_1bcc24;
        case 0x1bcc28u: goto label_1bcc28;
        case 0x1bcc2cu: goto label_1bcc2c;
        case 0x1bcc30u: goto label_1bcc30;
        case 0x1bcc34u: goto label_1bcc34;
        case 0x1bcc38u: goto label_1bcc38;
        case 0x1bcc3cu: goto label_1bcc3c;
        case 0x1bcc40u: goto label_1bcc40;
        case 0x1bcc44u: goto label_1bcc44;
        default: break;
    }

    ctx->pc = 0x1bca70u;

label_1bca70:
    // 0x1bca70: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bca70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1bca74:
    // 0x1bca74: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1bca74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1bca78:
    // 0x1bca78: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x1bca78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1bca7c:
    // 0x1bca7c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1bca7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_1bca80:
    // 0x1bca80: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1bca80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1bca84:
    // 0x1bca84: 0x247114d4  addiu       $s1, $v1, 0x14D4
    ctx->pc = 0x1bca84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 5332));
label_1bca88:
    // 0x1bca88: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1bca88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1bca8c:
    // 0x1bca8c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1bca8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bca90:
    // 0x1bca90: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1bca90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bca94:
    // 0x1bca94: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1bca94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_1bca98:
    // 0x1bca98: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1bca98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_1bca9c:
    // 0x1bca9c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1bca9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1bcaa0:
    // 0x1bcaa0: 0xc107cfa  jal         func_41F3E8
label_1bcaa4:
    if (ctx->pc == 0x1BCAA4u) {
        ctx->pc = 0x1BCAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAA0u;
        // 0x1bcaa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCAA8u;
        goto label_1bcaa8;
    }
    ctx->pc = 0x1BCAA0u;
    SET_GPR_U32(ctx, 31, 0x1BCAA8u);
    ctx->pc = 0x1BCAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCAA0u;
    // 0x1bcaa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F3E8u, 0x1BCAA0u, 0x1BCAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCAA8u;
label_1bcaa8:
    // 0x1bcaa8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x1bcaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_1bcaac:
    // 0x1bcaac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bcaacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bcab0:
    // 0x1bcab0: 0xc050fda  jal         func_143F68
label_1bcab4:
    if (ctx->pc == 0x1BCAB4u) {
        ctx->pc = 0x1BCAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAB0u;
        // 0x1bcab4: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCAB8u;
        goto label_1bcab8;
    }
    ctx->pc = 0x1BCAB0u;
    SET_GPR_U32(ctx, 31, 0x1BCAB8u);
    ctx->pc = 0x1BCAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCAB0u;
    // 0x1bcab4: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x1BCAB0u, 0x1BCAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCAB8u;
label_1bcab8:
    // 0x1bcab8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bcab8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bcabc:
    // 0x1bcabc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bcabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1bcac0:
    // 0x1bcac0: 0xc06f28c  jal         func_1BCA30
label_1bcac4:
    if (ctx->pc == 0x1BCAC4u) {
        ctx->pc = 0x1BCAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAC0u;
        // 0x1bcac4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCAC8u;
        goto label_1bcac8;
    }
    ctx->pc = 0x1BCAC0u;
    SET_GPR_U32(ctx, 31, 0x1BCAC8u);
    ctx->pc = 0x1BCAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCAC0u;
    // 0x1bcac4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCA30u, 0x1BCAC0u, 0x1BCAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCAC8u;
label_1bcac8:
    // 0x1bcac8: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
label_1bcacc:
    if (ctx->pc == 0x1BCACCu) {
        ctx->pc = 0x1BCACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAC8u;
        // 0x1bcacc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCAD0u;
        goto label_1bcad0;
    }
    ctx->pc = 0x1BCAC8u;
    {
        const bool branch_taken_0x1bcac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAC8u;
        // 0x1bcacc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcac8) {
            ctx->pc = 0x1BCC2Cu;
            goto label_1bcc2c;
        }
    }
    ctx->pc = 0x1BCAD0u;
label_1bcad0:
    // 0x1bcad0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bcad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1bcad4:
    // 0x1bcad4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1bcad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1bcad8:
    // 0x1bcad8: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x1bcad8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1bcadc:
    // 0x1bcadc: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1bcadcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1bcae0:
    // 0x1bcae0: 0x24a54c48  addiu       $a1, $a1, 0x4C48
    ctx->pc = 0x1bcae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19528));
label_1bcae4:
    // 0x1bcae4: 0x25084c08  addiu       $t0, $t0, 0x4C08
    ctx->pc = 0x1bcae4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19464));
label_1bcae8:
    // 0x1bcae8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1bcae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1bcaec:
    // 0x1bcaec: 0x24060230  addiu       $a2, $zero, 0x230
    ctx->pc = 0x1bcaecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_1bcaf0:
    // 0x1bcaf0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1bcaf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1bcaf4:
    // 0x1bcaf4: 0x240900e6  addiu       $t1, $zero, 0xE6
    ctx->pc = 0x1bcaf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
label_1bcaf8:
    // 0x1bcaf8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1bcaf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1bcafc:
    // 0x1bcafc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1bcafcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bcb00:
    // 0x1bcb00: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1bcb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1bcb04:
    // 0x1bcb04: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1bcb04u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bcb08:
    // 0x1bcb08: 0x40f809  jalr        $v0
label_1bcb0c:
    if (ctx->pc == 0x1BCB0Cu) {
        ctx->pc = 0x1BCB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB08u;
        // 0x1bcb0c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCB10u;
        goto label_1bcb10;
    }
    ctx->pc = 0x1BCB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BCB10u);
        ctx->pc = 0x1BCB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB08u;
        // 0x1bcb0c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCB08u, 0x1BCB10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BCB10u;
label_1bcb10:
    // 0x1bcb10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bcb10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bcb14:
    // 0x1bcb14: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1bcb18:
    if (ctx->pc == 0x1BCB18u) {
        ctx->pc = 0x1BCB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB14u;
        // 0x1bcb18: 0xafb00034  sw          $s0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCB1Cu;
        goto label_1bcb1c;
    }
    ctx->pc = 0x1BCB14u;
    {
        const bool branch_taken_0x1bcb14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB14u;
        // 0x1bcb18: 0xafb00034  sw          $s0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcb14) {
            ctx->pc = 0x1BCB48u;
            goto label_1bcb48;
        }
    }
    ctx->pc = 0x1BCB1Cu;
label_1bcb1c:
    // 0x1bcb1c: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x1bcb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
label_1bcb20:
    // 0x1bcb20: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x1bcb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1bcb24:
    // 0x1bcb24: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1bcb24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_1bcb28:
    // 0x1bcb28: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1bcb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1bcb2c:
    // 0x1bcb2c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1bcb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1bcb30:
    // 0x1bcb30: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1bcb30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1bcb34:
    // 0x1bcb34: 0xc0784ce  jal         func_1E1338
label_1bcb38:
    if (ctx->pc == 0x1BCB38u) {
        ctx->pc = 0x1BCB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB34u;
        // 0x1bcb38: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCB3Cu;
        goto label_1bcb3c;
    }
    ctx->pc = 0x1BCB34u;
    SET_GPR_U32(ctx, 31, 0x1BCB3Cu);
    ctx->pc = 0x1BCB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCB34u;
    // 0x1bcb38: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1338u, 0x1BCB34u, 0x1BCB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCB3Cu;
label_1bcb3c:
    // 0x1bcb3c: 0xc0686fe  jal         func_1A1BF8
label_1bcb40:
    if (ctx->pc == 0x1BCB40u) {
        ctx->pc = 0x1BCB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB3Cu;
        // 0x1bcb40: 0x26040130  addiu       $a0, $s0, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCB44u;
        goto label_1bcb44;
    }
    ctx->pc = 0x1BCB3Cu;
    SET_GPR_U32(ctx, 31, 0x1BCB44u);
    ctx->pc = 0x1BCB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCB3Cu;
    // 0x1bcb40: 0x26040130  addiu       $a0, $s0, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1BCB3Cu, 0x1BCB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCB44u;
label_1bcb44:
    // 0x1bcb44: 0xafb00034  sw          $s0, 0x34($sp)
    ctx->pc = 0x1bcb44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 16));
label_1bcb48:
    // 0x1bcb48: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x1bcb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_1bcb4c:
    // 0x1bcb4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bcb50:
    // 0x1bcb50: 0xc107d50  jal         func_41F540
label_1bcb54:
    if (ctx->pc == 0x1BCB54u) {
        ctx->pc = 0x1BCB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB50u;
        // 0x1bcb54: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCB58u;
        goto label_1bcb58;
    }
    ctx->pc = 0x1BCB50u;
    SET_GPR_U32(ctx, 31, 0x1BCB58u);
    ctx->pc = 0x1BCB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCB50u;
    // 0x1bcb54: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F540u, 0x1BCB50u, 0x1BCB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCB58u;
label_1bcb58:
    // 0x1bcb58: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x1bcb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_1bcb5c:
    // 0x1bcb5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bcb60:
    // 0x1bcb60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bcb60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bcb64:
    // 0x1bcb64: 0xc107d50  jal         func_41F540
label_1bcb68:
    if (ctx->pc == 0x1BCB68u) {
        ctx->pc = 0x1BCB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB64u;
        // 0x1bcb68: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCB6Cu;
        goto label_1bcb6c;
    }
    ctx->pc = 0x1BCB64u;
    SET_GPR_U32(ctx, 31, 0x1BCB6Cu);
    ctx->pc = 0x1BCB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCB64u;
    // 0x1bcb68: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F540u, 0x1BCB64u, 0x1BCB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCB6Cu;
label_1bcb6c:
    // 0x1bcb6c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1bcb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bcb70:
    // 0x1bcb70: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1bcb70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1bcb74:
    // 0x1bcb74: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1bcb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bcb78:
    // 0x1bcb78: 0x240300aa  addiu       $v1, $zero, 0xAA
    ctx->pc = 0x1bcb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
label_1bcb7c:
    // 0x1bcb7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bcb7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1bcb80:
    // 0x1bcb80: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bcb80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bcb84:
    // 0x1bcb84: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1bcb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1bcb88:
    // 0x1bcb88: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1bcb88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1bcb8c:
    // 0x1bcb8c: 0x240c00ff  addiu       $t4, $zero, 0xFF
    ctx->pc = 0x1bcb8cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1bcb90:
    // 0x1bcb90: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x1bcb90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1bcb94:
    // 0x1bcb94: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1bcb94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1bcb98:
    // 0x1bcb98: 0xe4a2000c  swc1        $f2, 0xC($a1)
    ctx->pc = 0x1bcb98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_1bcb9c:
    // 0x1bcb9c: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x1bcb9cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_1bcba0:
    // 0x1bcba0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1bcba0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_1bcba4:
    // 0x1bcba4: 0x3c090014  lui         $t1, 0x14
    ctx->pc = 0x1bcba4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)20 << 16));
label_1bcba8:
    // 0x1bcba8: 0xa3a30030  sb          $v1, 0x30($sp)
    ctx->pc = 0x1bcba8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 3));
label_1bcbac:
    // 0x1bcbac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bcbacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bcbb0:
    // 0x1bcbb0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1bcbb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_1bcbb4:
    // 0x1bcbb4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1bcbb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bcbb8:
    // 0x1bcbb8: 0xa04c0003  sb          $t4, 0x3($v0)
    ctx->pc = 0x1bcbb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 12));
label_1bcbbc:
    // 0x1bcbbc: 0x35290005  ori         $t1, $t1, 0x5
    ctx->pc = 0x1bcbbcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)5);
label_1bcbc0:
    // 0x1bcbc0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1bcbc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_1bcbc4:
    // 0x1bcbc4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1bcbc4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bcbc8:
    // 0x1bcbc8: 0xc48ce888  lwc1        $f12, -0x1778($a0)
    ctx->pc = 0x1bcbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294961288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bcbcc:
    // 0x1bcbcc: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x1bcbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_1bcbd0:
    // 0x1bcbd0: 0xc54de84c  lwc1        $f13, -0x17B4($t2)
    ctx->pc = 0x1bcbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294961228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1bcbd4:
    // 0x1bcbd4: 0x8e6a0090  lw          $t2, 0x90($s3)
    ctx->pc = 0x1bcbd4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_1bcbd8:
    // 0x1bcbd8: 0x24840130  addiu       $a0, $a0, 0x130
    ctx->pc = 0x1bcbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 304));
label_1bcbdc:
    // 0x1bcbdc: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1bcbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1bcbe0:
    // 0x1bcbe0: 0xafac0010  sw          $t4, 0x10($sp)
    ctx->pc = 0x1bcbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
label_1bcbe4:
    // 0x1bcbe4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1bcbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1bcbe8:
    // 0x1bcbe8: 0xc06876e  jal         func_1A1DB8
label_1bcbec:
    if (ctx->pc == 0x1BCBECu) {
        ctx->pc = 0x1BCBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBE8u;
        // 0x1bcbec: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCBF0u;
        goto label_1bcbf0;
    }
    ctx->pc = 0x1BCBE8u;
    SET_GPR_U32(ctx, 31, 0x1BCBF0u);
    ctx->pc = 0x1BCBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCBE8u;
    // 0x1bcbec: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1BCBE8u, 0x1BCBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCBF0u;
label_1bcbf0:
    // 0x1bcbf0: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x1bcbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_1bcbf4:
    // 0x1bcbf4: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1bcbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1bcbf8:
    // 0x1bcbf8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1bcbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1bcbfc:
    // 0x1bcbfc: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
label_1bcc00:
    if (ctx->pc == 0x1BCC00u) {
        ctx->pc = 0x1BCC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBFCu;
        // 0x1bcc00: 0x27a60034  addiu       $a2, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCC04u;
        goto label_1bcc04;
    }
    ctx->pc = 0x1BCBFCu;
    {
        const bool branch_taken_0x1bcbfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BCC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBFCu;
        // 0x1bcc00: 0x27a60034  addiu       $a2, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcbfc) {
            ctx->pc = 0x1BCC20u;
            goto label_1bcc20;
        }
    }
    ctx->pc = 0x1BCC04u;
label_1bcc04:
    // 0x1bcc04: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_1bcc08:
    if (ctx->pc == 0x1BCC08u) {
        ctx->pc = 0x1BCC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC04u;
        // 0x1bcc08: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCC0Cu;
        goto label_1bcc0c;
    }
    ctx->pc = 0x1BCC04u;
    {
        const bool branch_taken_0x1bcc04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC04u;
        // 0x1bcc08: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc04) {
            ctx->pc = 0x1BCC10u;
            goto label_1bcc10;
        }
    }
    ctx->pc = 0x1BCC0Cu;
label_1bcc0c:
    // 0x1bcc0c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1bcc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1bcc10:
    // 0x1bcc10: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1bcc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1bcc14:
    // 0x1bcc14: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1bcc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1bcc18:
    // 0x1bcc18: 0x10000003  b           . + 4 + (0x3 << 2)
label_1bcc1c:
    if (ctx->pc == 0x1BCC1Cu) {
        ctx->pc = 0x1BCC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC18u;
        // 0x1bcc1c: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCC20u;
        goto label_1bcc20;
    }
    ctx->pc = 0x1BCC18u;
    {
        const bool branch_taken_0x1bcc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC18u;
        // 0x1bcc1c: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc18) {
            ctx->pc = 0x1BCC28u;
            goto label_1bcc28;
        }
    }
    ctx->pc = 0x1BCC20u;
label_1bcc20:
    // 0x1bcc20: 0xc1393be  jal         func_4E4EF8
label_1bcc24:
    if (ctx->pc == 0x1BCC24u) {
        ctx->pc = 0x1BCC28u;
        goto label_1bcc28;
    }
    ctx->pc = 0x1BCC20u;
    SET_GPR_U32(ctx, 31, 0x1BCC28u);
    ctx->pc = 0x4E4EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4EF8u, 0x1BCC20u, 0x1BCC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC28u;
label_1bcc28:
    // 0x1bcc28: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1bcc28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1bcc2c:
    // 0x1bcc2c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1bcc2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1bcc30:
    // 0x1bcc30: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1bcc30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1bcc34:
    // 0x1bcc34: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1bcc34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1bcc38:
    // 0x1bcc38: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1bcc38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1bcc3c:
    // 0x1bcc3c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1bcc3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1bcc40:
    // 0x1bcc40: 0x3e00008  jr          $ra
label_1bcc44:
    if (ctx->pc == 0x1BCC44u) {
        ctx->pc = 0x1BCC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC40u;
        // 0x1bcc44: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCC48u;
        goto label_fallthrough_0x1bcc40;
    }
    ctx->pc = 0x1BCC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC40u;
        // 0x1bcc44: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bcc40:
    ctx->pc = 0x1BCC48u;
}
