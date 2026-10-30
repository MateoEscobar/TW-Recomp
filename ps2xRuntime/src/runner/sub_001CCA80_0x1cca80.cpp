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

// Function: sub_001CCA80
// Address: 0x1cca80 - 0x1ccd08
void sub_001CCA80_0x1cca80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCA80_0x1cca80");
#endif

    switch (ctx->pc) {
        case 0x1cca80u: goto label_1cca80;
        case 0x1cca84u: goto label_1cca84;
        case 0x1cca88u: goto label_1cca88;
        case 0x1cca8cu: goto label_1cca8c;
        case 0x1cca90u: goto label_1cca90;
        case 0x1cca94u: goto label_1cca94;
        case 0x1cca98u: goto label_1cca98;
        case 0x1cca9cu: goto label_1cca9c;
        case 0x1ccaa0u: goto label_1ccaa0;
        case 0x1ccaa4u: goto label_1ccaa4;
        case 0x1ccaa8u: goto label_1ccaa8;
        case 0x1ccaacu: goto label_1ccaac;
        case 0x1ccab0u: goto label_1ccab0;
        case 0x1ccab4u: goto label_1ccab4;
        case 0x1ccab8u: goto label_1ccab8;
        case 0x1ccabcu: goto label_1ccabc;
        case 0x1ccac0u: goto label_1ccac0;
        case 0x1ccac4u: goto label_1ccac4;
        case 0x1ccac8u: goto label_1ccac8;
        case 0x1ccaccu: goto label_1ccacc;
        case 0x1ccad0u: goto label_1ccad0;
        case 0x1ccad4u: goto label_1ccad4;
        case 0x1ccad8u: goto label_1ccad8;
        case 0x1ccadcu: goto label_1ccadc;
        case 0x1ccae0u: goto label_1ccae0;
        case 0x1ccae4u: goto label_1ccae4;
        case 0x1ccae8u: goto label_1ccae8;
        case 0x1ccaecu: goto label_1ccaec;
        case 0x1ccaf0u: goto label_1ccaf0;
        case 0x1ccaf4u: goto label_1ccaf4;
        case 0x1ccaf8u: goto label_1ccaf8;
        case 0x1ccafcu: goto label_1ccafc;
        case 0x1ccb00u: goto label_1ccb00;
        case 0x1ccb04u: goto label_1ccb04;
        case 0x1ccb08u: goto label_1ccb08;
        case 0x1ccb0cu: goto label_1ccb0c;
        case 0x1ccb10u: goto label_1ccb10;
        case 0x1ccb14u: goto label_1ccb14;
        case 0x1ccb18u: goto label_1ccb18;
        case 0x1ccb1cu: goto label_1ccb1c;
        case 0x1ccb20u: goto label_1ccb20;
        case 0x1ccb24u: goto label_1ccb24;
        case 0x1ccb28u: goto label_1ccb28;
        case 0x1ccb2cu: goto label_1ccb2c;
        case 0x1ccb30u: goto label_1ccb30;
        case 0x1ccb34u: goto label_1ccb34;
        case 0x1ccb38u: goto label_1ccb38;
        case 0x1ccb3cu: goto label_1ccb3c;
        case 0x1ccb40u: goto label_1ccb40;
        case 0x1ccb44u: goto label_1ccb44;
        case 0x1ccb48u: goto label_1ccb48;
        case 0x1ccb4cu: goto label_1ccb4c;
        case 0x1ccb50u: goto label_1ccb50;
        case 0x1ccb54u: goto label_1ccb54;
        case 0x1ccb58u: goto label_1ccb58;
        case 0x1ccb5cu: goto label_1ccb5c;
        case 0x1ccb60u: goto label_1ccb60;
        case 0x1ccb64u: goto label_1ccb64;
        case 0x1ccb68u: goto label_1ccb68;
        case 0x1ccb6cu: goto label_1ccb6c;
        case 0x1ccb70u: goto label_1ccb70;
        case 0x1ccb74u: goto label_1ccb74;
        case 0x1ccb78u: goto label_1ccb78;
        case 0x1ccb7cu: goto label_1ccb7c;
        case 0x1ccb80u: goto label_1ccb80;
        case 0x1ccb84u: goto label_1ccb84;
        case 0x1ccb88u: goto label_1ccb88;
        case 0x1ccb8cu: goto label_1ccb8c;
        case 0x1ccb90u: goto label_1ccb90;
        case 0x1ccb94u: goto label_1ccb94;
        case 0x1ccb98u: goto label_1ccb98;
        case 0x1ccb9cu: goto label_1ccb9c;
        case 0x1ccba0u: goto label_1ccba0;
        case 0x1ccba4u: goto label_1ccba4;
        case 0x1ccba8u: goto label_1ccba8;
        case 0x1ccbacu: goto label_1ccbac;
        case 0x1ccbb0u: goto label_1ccbb0;
        case 0x1ccbb4u: goto label_1ccbb4;
        case 0x1ccbb8u: goto label_1ccbb8;
        case 0x1ccbbcu: goto label_1ccbbc;
        case 0x1ccbc0u: goto label_1ccbc0;
        case 0x1ccbc4u: goto label_1ccbc4;
        case 0x1ccbc8u: goto label_1ccbc8;
        case 0x1ccbccu: goto label_1ccbcc;
        case 0x1ccbd0u: goto label_1ccbd0;
        case 0x1ccbd4u: goto label_1ccbd4;
        case 0x1ccbd8u: goto label_1ccbd8;
        case 0x1ccbdcu: goto label_1ccbdc;
        case 0x1ccbe0u: goto label_1ccbe0;
        case 0x1ccbe4u: goto label_1ccbe4;
        case 0x1ccbe8u: goto label_1ccbe8;
        case 0x1ccbecu: goto label_1ccbec;
        case 0x1ccbf0u: goto label_1ccbf0;
        case 0x1ccbf4u: goto label_1ccbf4;
        case 0x1ccbf8u: goto label_1ccbf8;
        case 0x1ccbfcu: goto label_1ccbfc;
        case 0x1ccc00u: goto label_1ccc00;
        case 0x1ccc04u: goto label_1ccc04;
        case 0x1ccc08u: goto label_1ccc08;
        case 0x1ccc0cu: goto label_1ccc0c;
        case 0x1ccc10u: goto label_1ccc10;
        case 0x1ccc14u: goto label_1ccc14;
        case 0x1ccc18u: goto label_1ccc18;
        case 0x1ccc1cu: goto label_1ccc1c;
        case 0x1ccc20u: goto label_1ccc20;
        case 0x1ccc24u: goto label_1ccc24;
        case 0x1ccc28u: goto label_1ccc28;
        case 0x1ccc2cu: goto label_1ccc2c;
        case 0x1ccc30u: goto label_1ccc30;
        case 0x1ccc34u: goto label_1ccc34;
        case 0x1ccc38u: goto label_1ccc38;
        case 0x1ccc3cu: goto label_1ccc3c;
        case 0x1ccc40u: goto label_1ccc40;
        case 0x1ccc44u: goto label_1ccc44;
        case 0x1ccc48u: goto label_1ccc48;
        case 0x1ccc4cu: goto label_1ccc4c;
        case 0x1ccc50u: goto label_1ccc50;
        case 0x1ccc54u: goto label_1ccc54;
        case 0x1ccc58u: goto label_1ccc58;
        case 0x1ccc5cu: goto label_1ccc5c;
        case 0x1ccc60u: goto label_1ccc60;
        case 0x1ccc64u: goto label_1ccc64;
        case 0x1ccc68u: goto label_1ccc68;
        case 0x1ccc6cu: goto label_1ccc6c;
        case 0x1ccc70u: goto label_1ccc70;
        case 0x1ccc74u: goto label_1ccc74;
        case 0x1ccc78u: goto label_1ccc78;
        case 0x1ccc7cu: goto label_1ccc7c;
        case 0x1ccc80u: goto label_1ccc80;
        case 0x1ccc84u: goto label_1ccc84;
        case 0x1ccc88u: goto label_1ccc88;
        case 0x1ccc8cu: goto label_1ccc8c;
        case 0x1ccc90u: goto label_1ccc90;
        case 0x1ccc94u: goto label_1ccc94;
        case 0x1ccc98u: goto label_1ccc98;
        case 0x1ccc9cu: goto label_1ccc9c;
        case 0x1ccca0u: goto label_1ccca0;
        case 0x1ccca4u: goto label_1ccca4;
        case 0x1ccca8u: goto label_1ccca8;
        case 0x1cccacu: goto label_1cccac;
        case 0x1cccb0u: goto label_1cccb0;
        case 0x1cccb4u: goto label_1cccb4;
        case 0x1cccb8u: goto label_1cccb8;
        case 0x1cccbcu: goto label_1cccbc;
        case 0x1cccc0u: goto label_1cccc0;
        case 0x1cccc4u: goto label_1cccc4;
        case 0x1cccc8u: goto label_1cccc8;
        case 0x1cccccu: goto label_1ccccc;
        case 0x1cccd0u: goto label_1cccd0;
        case 0x1cccd4u: goto label_1cccd4;
        case 0x1cccd8u: goto label_1cccd8;
        case 0x1cccdcu: goto label_1cccdc;
        case 0x1ccce0u: goto label_1ccce0;
        case 0x1ccce4u: goto label_1ccce4;
        case 0x1ccce8u: goto label_1ccce8;
        case 0x1cccecu: goto label_1cccec;
        case 0x1cccf0u: goto label_1cccf0;
        case 0x1cccf4u: goto label_1cccf4;
        case 0x1cccf8u: goto label_1cccf8;
        case 0x1cccfcu: goto label_1cccfc;
        case 0x1ccd00u: goto label_1ccd00;
        case 0x1ccd04u: goto label_1ccd04;
        default: break;
    }

    ctx->pc = 0x1cca80u;

label_1cca80:
    // 0x1cca80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cca80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1cca84:
    // 0x1cca84: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1cca84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1cca88:
    // 0x1cca88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1cca88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1cca8c:
    // 0x1cca8c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1cca8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1cca90:
    // 0x1cca90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cca90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cca94:
    // 0x1cca94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cca94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cca98:
    // 0x1cca98: 0x8e260078  lw          $a2, 0x78($s1)
    ctx->pc = 0x1cca98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_1cca9c:
    // 0x1cca9c: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1ccaa0:
    if (ctx->pc == 0x1CCAA0u) {
        ctx->pc = 0x1CCAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA9Cu;
        // 0x1ccaa0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCAA4u;
        goto label_1ccaa4;
    }
    ctx->pc = 0x1CCA9Cu;
    {
        const bool branch_taken_0x1cca9c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA9Cu;
        // 0x1ccaa0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cca9c) {
            ctx->pc = 0x1CCAC0u;
            goto label_1ccac0;
        }
    }
    ctx->pc = 0x1CCAA4u;
label_1ccaa4:
    // 0x1ccaa4: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x1ccaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_1ccaa8:
    // 0x1ccaa8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1ccaa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1ccaac:
    // 0x1ccaac: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1ccaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1ccab0:
    // 0x1ccab0: 0x40f809  jalr        $v0
label_1ccab4:
    if (ctx->pc == 0x1CCAB4u) {
        ctx->pc = 0x1CCAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAB0u;
        // 0x1ccab4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCAB8u;
        goto label_1ccab8;
    }
    ctx->pc = 0x1CCAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CCAB8u);
        ctx->pc = 0x1CCAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAB0u;
        // 0x1ccab4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCAB0u, 0x1CCAB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CCAB8u;
label_1ccab8:
    // 0x1ccab8: 0x1440008d  bnez        $v0, . + 4 + (0x8D << 2)
label_1ccabc:
    if (ctx->pc == 0x1CCABCu) {
        ctx->pc = 0x1CCABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAB8u;
        // 0x1ccabc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCAC0u;
        goto label_1ccac0;
    }
    ctx->pc = 0x1CCAB8u;
    {
        const bool branch_taken_0x1ccab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAB8u;
        // 0x1ccabc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccab8) {
            ctx->pc = 0x1CCCF0u;
            goto label_1cccf0;
        }
    }
    ctx->pc = 0x1CCAC0u;
label_1ccac0:
    // 0x1ccac0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1ccac4:
    if (ctx->pc == 0x1CCAC4u) {
        ctx->pc = 0x1CCAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAC0u;
        // 0x1ccac4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCAC8u;
        goto label_1ccac8;
    }
    ctx->pc = 0x1CCAC0u;
    {
        const bool branch_taken_0x1ccac0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAC0u;
        // 0x1ccac4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccac0) {
            ctx->pc = 0x1CCAD8u;
            goto label_1ccad8;
        }
    }
    ctx->pc = 0x1CCAC8u;
label_1ccac8:
    // 0x1ccac8: 0xc0750fa  jal         func_1D43E8
label_1ccacc:
    if (ctx->pc == 0x1CCACCu) {
        ctx->pc = 0x1CCACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAC8u;
        // 0x1ccacc: 0x8e240070  lw          $a0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCAD0u;
        goto label_1ccad0;
    }
    ctx->pc = 0x1CCAC8u;
    SET_GPR_U32(ctx, 31, 0x1CCAD0u);
    ctx->pc = 0x1CCACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCAC8u;
    // 0x1ccacc: 0x8e240070  lw          $a0, 0x70($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43E8u, 0x1CCAC8u, 0x1CCAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCAD0u;
label_1ccad0:
    // 0x1ccad0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ccad4:
    if (ctx->pc == 0x1CCAD4u) {
        ctx->pc = 0x1CCAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAD0u;
        // 0x1ccad4: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCAD8u;
        goto label_1ccad8;
    }
    ctx->pc = 0x1CCAD0u;
    {
        const bool branch_taken_0x1ccad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAD0u;
        // 0x1ccad4: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccad0) {
            ctx->pc = 0x1CCAECu;
            goto label_1ccaec;
        }
    }
    ctx->pc = 0x1CCAD8u;
label_1ccad8:
    // 0x1ccad8: 0x16020011  bne         $s0, $v0, . + 4 + (0x11 << 2)
label_1ccadc:
    if (ctx->pc == 0x1CCADCu) {
        ctx->pc = 0x1CCADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAD8u;
        // 0x1ccadc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCAE0u;
        goto label_1ccae0;
    }
    ctx->pc = 0x1CCAD8u;
    {
        const bool branch_taken_0x1ccad8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CCADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAD8u;
        // 0x1ccadc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccad8) {
            ctx->pc = 0x1CCB20u;
            goto label_1ccb20;
        }
    }
    ctx->pc = 0x1CCAE0u;
label_1ccae0:
    // 0x1ccae0: 0xc0750fa  jal         func_1D43E8
label_1ccae4:
    if (ctx->pc == 0x1CCAE4u) {
        ctx->pc = 0x1CCAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAE0u;
        // 0x1ccae4: 0x8e240070  lw          $a0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCAE8u;
        goto label_1ccae8;
    }
    ctx->pc = 0x1CCAE0u;
    SET_GPR_U32(ctx, 31, 0x1CCAE8u);
    ctx->pc = 0x1CCAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCAE0u;
    // 0x1ccae4: 0x8e240070  lw          $a0, 0x70($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43E8u, 0x1CCAE0u, 0x1CCAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCAE8u;
label_1ccae8:
    // 0x1ccae8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1ccae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1ccaec:
    // 0x1ccaec: 0x14430080  bne         $v0, $v1, . + 4 + (0x80 << 2)
label_1ccaf0:
    if (ctx->pc == 0x1CCAF0u) {
        ctx->pc = 0x1CCAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAECu;
        // 0x1ccaf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCAF4u;
        goto label_1ccaf4;
    }
    ctx->pc = 0x1CCAECu;
    {
        const bool branch_taken_0x1ccaec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CCAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAECu;
        // 0x1ccaf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccaec) {
            ctx->pc = 0x1CCCF0u;
            goto label_1cccf0;
        }
    }
    ctx->pc = 0x1CCAF4u;
label_1ccaf4:
    // 0x1ccaf4: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x1ccaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_1ccaf8:
    // 0x1ccaf8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ccaf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ccafc:
    // 0x1ccafc: 0x24820070  addiu       $v0, $a0, 0x70
    ctx->pc = 0x1ccafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_1ccb00:
    // 0x1ccb00: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ccb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ccb04:
    // 0x1ccb04: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1ccb04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1ccb08:
    // 0x1ccb08: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x1ccb08u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1ccb0c:
    // 0x1ccb0c: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x1ccb0cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
label_1ccb10:
    // 0x1ccb10: 0xc0752e2  jal         func_1D4B88
label_1ccb14:
    if (ctx->pc == 0x1CCB14u) {
        ctx->pc = 0x1CCB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB10u;
        // 0x1ccb14: 0x24a5fffe  addiu       $a1, $a1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCB18u;
        goto label_1ccb18;
    }
    ctx->pc = 0x1CCB10u;
    SET_GPR_U32(ctx, 31, 0x1CCB18u);
    ctx->pc = 0x1CCB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCB10u;
    // 0x1ccb14: 0x24a5fffe  addiu       $a1, $a1, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4B88u, 0x1CCB10u, 0x1CCB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCB18u;
label_1ccb18:
    // 0x1ccb18: 0x10000075  b           . + 4 + (0x75 << 2)
label_1ccb1c:
    if (ctx->pc == 0x1CCB1Cu) {
        ctx->pc = 0x1CCB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB18u;
        // 0x1ccb1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCB20u;
        goto label_1ccb20;
    }
    ctx->pc = 0x1CCB18u;
    {
        const bool branch_taken_0x1ccb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB18u;
        // 0x1ccb1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccb18) {
            ctx->pc = 0x1CCCF0u;
            goto label_1cccf0;
        }
    }
    ctx->pc = 0x1CCB20u;
label_1ccb20:
    // 0x1ccb20: 0x16020073  bne         $s0, $v0, . + 4 + (0x73 << 2)
label_1ccb24:
    if (ctx->pc == 0x1CCB24u) {
        ctx->pc = 0x1CCB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB20u;
        // 0x1ccb24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCB28u;
        goto label_1ccb28;
    }
    ctx->pc = 0x1CCB20u;
    {
        const bool branch_taken_0x1ccb20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CCB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB20u;
        // 0x1ccb24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccb20) {
            ctx->pc = 0x1CCCF0u;
            goto label_1cccf0;
        }
    }
    ctx->pc = 0x1CCB28u;
label_1ccb28:
    // 0x1ccb28: 0xc0750fa  jal         func_1D43E8
label_1ccb2c:
    if (ctx->pc == 0x1CCB2Cu) {
        ctx->pc = 0x1CCB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB28u;
        // 0x1ccb2c: 0x8e240070  lw          $a0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCB30u;
        goto label_1ccb30;
    }
    ctx->pc = 0x1CCB28u;
    SET_GPR_U32(ctx, 31, 0x1CCB30u);
    ctx->pc = 0x1CCB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCB28u;
    // 0x1ccb2c: 0x8e240070  lw          $a0, 0x70($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43E8u, 0x1CCB28u, 0x1CCB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCB30u;
label_1ccb30:
    // 0x1ccb30: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x1ccb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_1ccb34:
    // 0x1ccb34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ccb34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ccb38:
    // 0x1ccb38: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x1ccb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1ccb3c:
    // 0x1ccb3c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1ccb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1ccb40:
    // 0x1ccb40: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1ccb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1ccb44:
    // 0x1ccb44: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1ccb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ccb48:
    // 0x1ccb48: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1ccb48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1ccb4c:
    // 0x1ccb4c: 0x2443fffe  addiu       $v1, $v0, -0x2
    ctx->pc = 0x1ccb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1ccb50:
    // 0x1ccb50: 0x16030024  bne         $s0, $v1, . + 4 + (0x24 << 2)
label_1ccb54:
    if (ctx->pc == 0x1CCB54u) {
        ctx->pc = 0x1CCB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB50u;
        // 0x1ccb54: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCB58u;
        goto label_1ccb58;
    }
    ctx->pc = 0x1CCB50u;
    {
        const bool branch_taken_0x1ccb50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CCB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB50u;
        // 0x1ccb54: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccb50) {
            ctx->pc = 0x1CCBE4u;
            goto label_1ccbe4;
        }
    }
    ctx->pc = 0x1CCB58u;
label_1ccb58:
    // 0x1ccb58: 0x2622007d  addiu       $v0, $s1, 0x7D
    ctx->pc = 0x1ccb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 125));
label_1ccb5c:
    // 0x1ccb5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ccb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ccb60:
    // 0x1ccb60: 0xc10c3ac  jal         func_430EB0
label_1ccb64:
    if (ctx->pc == 0x1CCB64u) {
        ctx->pc = 0x1CCB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB60u;
        // 0x1ccb64: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCB68u;
        goto label_1ccb68;
    }
    ctx->pc = 0x1CCB60u;
    SET_GPR_U32(ctx, 31, 0x1CCB68u);
    ctx->pc = 0x1CCB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCB60u;
    // 0x1ccb64: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1CCB60u, 0x1CCB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCB68u;
label_1ccb68:
    // 0x1ccb68: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1ccb68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ccb6c:
    // 0x1ccb6c: 0x10c0001a  beqz        $a2, . + 4 + (0x1A << 2)
label_1ccb70:
    if (ctx->pc == 0x1CCB70u) {
        ctx->pc = 0x1CCB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB6Cu;
        // 0x1ccb70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCB74u;
        goto label_1ccb74;
    }
    ctx->pc = 0x1CCB6Cu;
    {
        const bool branch_taken_0x1ccb6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB6Cu;
        // 0x1ccb70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccb6c) {
            ctx->pc = 0x1CCBD8u;
            goto label_1ccbd8;
        }
    }
    ctx->pc = 0x1CCB74u;
label_1ccb74:
    // 0x1ccb74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ccb74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ccb78:
    // 0x1ccb78: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_1ccb7c:
    if (ctx->pc == 0x1CCB7Cu) {
        ctx->pc = 0x1CCB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB78u;
        // 0x1ccb7c: 0x3c090051  lui         $t1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCB80u;
        goto label_1ccb80;
    }
    ctx->pc = 0x1CCB78u;
    {
        const bool branch_taken_0x1ccb78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB78u;
        // 0x1ccb7c: 0x3c090051  lui         $t1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccb78) {
            ctx->pc = 0x1CCBA4u;
            goto label_1ccba4;
        }
    }
    ctx->pc = 0x1CCB80u;
label_1ccb80:
    // 0x1ccb80: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ccb80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ccb84:
    // 0x1ccb84: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1ccb84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ccb88:
    // 0x1ccb88: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x1ccb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_1ccb8c:
    // 0x1ccb8c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1ccb8cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1ccb90:
    // 0x1ccb90: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ccb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1ccb94:
    // 0x1ccb94: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x1ccb94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1ccb98:
    // 0x1ccb98: 0x38630020  xori        $v1, $v1, 0x20
    ctx->pc = 0x1ccb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)32);
label_1ccb9c:
    // 0x1ccb9c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1ccba0:
    if (ctx->pc == 0x1CCBA0u) {
        ctx->pc = 0x1CCBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB9Cu;
        // 0x1ccba0: 0x103280b  movn        $a1, $t0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCBA4u;
        goto label_1ccba4;
    }
    ctx->pc = 0x1CCB9Cu;
    {
        const bool branch_taken_0x1ccb9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB9Cu;
        // 0x1ccba0: 0x103280b  movn        $a1, $t0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccb9c) {
            ctx->pc = 0x1CCB88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccb88;
        }
    }
    ctx->pc = 0x1CCBA4u;
label_1ccba4:
    // 0x1ccba4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_1ccba8:
    if (ctx->pc == 0x1CCBA8u) {
        ctx->pc = 0x1CCBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBA4u;
        // 0x1ccba8: 0x8d24aa84  lw          $a0, -0x557C($t1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCBACu;
        goto label_1ccbac;
    }
    ctx->pc = 0x1CCBA4u;
    {
        const bool branch_taken_0x1ccba4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBA4u;
        // 0x1ccba8: 0x8d24aa84  lw          $a0, -0x557C($t1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccba4) {
            ctx->pc = 0x1CCBC8u;
            goto label_1ccbc8;
        }
    }
    ctx->pc = 0x1CCBACu;
label_1ccbac:
    // 0x1ccbac: 0xc043f0c  jal         func_10FC30
label_1ccbb0:
    if (ctx->pc == 0x1CCBB0u) {
        ctx->pc = 0x1CCBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBACu;
        // 0x1ccbb0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCBB4u;
        goto label_1ccbb4;
    }
    ctx->pc = 0x1CCBACu;
    SET_GPR_U32(ctx, 31, 0x1CCBB4u);
    ctx->pc = 0x1CCBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCBACu;
    // 0x1ccbb0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1CCBACu, 0x1CCBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCBB4u;
label_1ccbb4:
    // 0x1ccbb4: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x1ccbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1ccbb8:
    // 0x1ccbb8: 0x60f809  jalr        $v1
label_1ccbbc:
    if (ctx->pc == 0x1CCBBCu) {
        ctx->pc = 0x1CCBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBB8u;
        // 0x1ccbbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCBC0u;
        goto label_1ccbc0;
    }
    ctx->pc = 0x1CCBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CCBC0u);
        ctx->pc = 0x1CCBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBB8u;
        // 0x1ccbbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCBB8u, 0x1CCBC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CCBC0u;
label_1ccbc0:
    // 0x1ccbc0: 0x1000004b  b           . + 4 + (0x4B << 2)
label_1ccbc4:
    if (ctx->pc == 0x1CCBC4u) {
        ctx->pc = 0x1CCBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBC0u;
        // 0x1ccbc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCBC8u;
        goto label_1ccbc8;
    }
    ctx->pc = 0x1CCBC0u;
    {
        const bool branch_taken_0x1ccbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBC0u;
        // 0x1ccbc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccbc0) {
            ctx->pc = 0x1CCCF0u;
            goto label_1cccf0;
        }
    }
    ctx->pc = 0x1CCBC8u;
label_1ccbc8:
    // 0x1ccbc8: 0xc043f0c  jal         func_10FC30
label_1ccbcc:
    if (ctx->pc == 0x1CCBCCu) {
        ctx->pc = 0x1CCBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBC8u;
        // 0x1ccbcc: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCBD0u;
        goto label_1ccbd0;
    }
    ctx->pc = 0x1CCBC8u;
    SET_GPR_U32(ctx, 31, 0x1CCBD0u);
    ctx->pc = 0x1CCBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCBC8u;
    // 0x1ccbcc: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1CCBC8u, 0x1CCBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCBD0u;
label_1ccbd0:
    // 0x1ccbd0: 0x10000047  b           . + 4 + (0x47 << 2)
label_1ccbd4:
    if (ctx->pc == 0x1CCBD4u) {
        ctx->pc = 0x1CCBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBD0u;
        // 0x1ccbd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCBD8u;
        goto label_1ccbd8;
    }
    ctx->pc = 0x1CCBD0u;
    {
        const bool branch_taken_0x1ccbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBD0u;
        // 0x1ccbd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccbd0) {
            ctx->pc = 0x1CCCF0u;
            goto label_1cccf0;
        }
    }
    ctx->pc = 0x1CCBD8u;
label_1ccbd8:
    // 0x1ccbd8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ccbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ccbdc:
    // 0x1ccbdc: 0x10000011  b           . + 4 + (0x11 << 2)
label_1ccbe0:
    if (ctx->pc == 0x1CCBE0u) {
        ctx->pc = 0x1CCBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBDCu;
        // 0x1ccbe0: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCBE4u;
        goto label_1ccbe4;
    }
    ctx->pc = 0x1CCBDCu;
    {
        const bool branch_taken_0x1ccbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBDCu;
        // 0x1ccbe0: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccbdc) {
            ctx->pc = 0x1CCC24u;
            goto label_1ccc24;
        }
    }
    ctx->pc = 0x1CCBE4u;
label_1ccbe4:
    // 0x1ccbe4: 0x16020013  bne         $s0, $v0, . + 4 + (0x13 << 2)
label_1ccbe8:
    if (ctx->pc == 0x1CCBE8u) {
        ctx->pc = 0x1CCBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBE4u;
        // 0x1ccbe8: 0x2622007d  addiu       $v0, $s1, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 125));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCBECu;
        goto label_1ccbec;
    }
    ctx->pc = 0x1CCBE4u;
    {
        const bool branch_taken_0x1ccbe4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CCBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBE4u;
        // 0x1ccbe8: 0x2622007d  addiu       $v0, $s1, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 125));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccbe4) {
            ctx->pc = 0x1CCC34u;
            goto label_1ccc34;
        }
    }
    ctx->pc = 0x1CCBECu;
label_1ccbec:
    // 0x1ccbec: 0x2630007d  addiu       $s0, $s1, 0x7D
    ctx->pc = 0x1ccbecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 125));
label_1ccbf0:
    // 0x1ccbf0: 0xc10c3ac  jal         func_430EB0
label_1ccbf4:
    if (ctx->pc == 0x1CCBF4u) {
        ctx->pc = 0x1CCBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBF0u;
        // 0x1ccbf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCBF8u;
        goto label_1ccbf8;
    }
    ctx->pc = 0x1CCBF0u;
    SET_GPR_U32(ctx, 31, 0x1CCBF8u);
    ctx->pc = 0x1CCBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCBF0u;
    // 0x1ccbf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1CCBF0u, 0x1CCBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCBF8u;
label_1ccbf8:
    // 0x1ccbf8: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_1ccbfc:
    if (ctx->pc == 0x1CCBFCu) {
        ctx->pc = 0x1CCBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBF8u;
        // 0x1ccbfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCC00u;
        goto label_1ccc00;
    }
    ctx->pc = 0x1CCBF8u;
    {
        const bool branch_taken_0x1ccbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBF8u;
        // 0x1ccbfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccbf8) {
            ctx->pc = 0x1CCCF0u;
            goto label_1cccf0;
        }
    }
    ctx->pc = 0x1CCC00u;
label_1ccc00:
    // 0x1ccc00: 0xc10c3ac  jal         func_430EB0
label_1ccc04:
    if (ctx->pc == 0x1CCC04u) {
        ctx->pc = 0x1CCC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC00u;
        // 0x1ccc04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCC08u;
        goto label_1ccc08;
    }
    ctx->pc = 0x1CCC00u;
    SET_GPR_U32(ctx, 31, 0x1CCC08u);
    ctx->pc = 0x1CCC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCC00u;
    // 0x1ccc04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1CCC00u, 0x1CCC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC08u;
label_1ccc08:
    // 0x1ccc08: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1ccc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1ccc0c:
    // 0x1ccc0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ccc0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ccc10:
    // 0x1ccc10: 0xa040ffff  sb          $zero, -0x1($v0)
    ctx->pc = 0x1ccc10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 0));
label_1ccc14:
    // 0x1ccc14: 0xc073478  jal         func_1CD1E0
label_1ccc18:
    if (ctx->pc == 0x1CCC18u) {
        ctx->pc = 0x1CCC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC14u;
        // 0x1ccc18: 0x8e240098  lw          $a0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCC1Cu;
        goto label_1ccc1c;
    }
    ctx->pc = 0x1CCC14u;
    SET_GPR_U32(ctx, 31, 0x1CCC1Cu);
    ctx->pc = 0x1CCC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCC14u;
    // 0x1ccc18: 0x8e240098  lw          $a0, 0x98($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1CCC14u, 0x1CCC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC1Cu;
label_1ccc1c:
    // 0x1ccc1c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ccc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ccc20:
    // 0x1ccc20: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1ccc20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1ccc24:
    // 0x1ccc24: 0xc043f0c  jal         func_10FC30
label_1ccc28:
    if (ctx->pc == 0x1CCC28u) {
        ctx->pc = 0x1CCC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC24u;
        // 0x1ccc28: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCC2Cu;
        goto label_1ccc2c;
    }
    ctx->pc = 0x1CCC24u;
    SET_GPR_U32(ctx, 31, 0x1CCC2Cu);
    ctx->pc = 0x1CCC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCC24u;
    // 0x1ccc28: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1CCC24u, 0x1CCC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC2Cu;
label_1ccc2c:
    // 0x1ccc2c: 0x10000030  b           . + 4 + (0x30 << 2)
label_1ccc30:
    if (ctx->pc == 0x1CCC30u) {
        ctx->pc = 0x1CCC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC2Cu;
        // 0x1ccc30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCC34u;
        goto label_1ccc34;
    }
    ctx->pc = 0x1CCC2Cu;
    {
        const bool branch_taken_0x1ccc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC2Cu;
        // 0x1ccc30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc2c) {
            ctx->pc = 0x1CCCF0u;
            goto label_1cccf0;
        }
    }
    ctx->pc = 0x1CCC34u;
label_1ccc34:
    // 0x1ccc34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ccc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ccc38:
    // 0x1ccc38: 0xc10c3ac  jal         func_430EB0
label_1ccc3c:
    if (ctx->pc == 0x1CCC3Cu) {
        ctx->pc = 0x1CCC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC38u;
        // 0x1ccc3c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCC40u;
        goto label_1ccc40;
    }
    ctx->pc = 0x1CCC38u;
    SET_GPR_U32(ctx, 31, 0x1CCC40u);
    ctx->pc = 0x1CCC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCC38u;
    // 0x1ccc3c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1CCC38u, 0x1CCC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC40u;
label_1ccc40:
    // 0x1ccc40: 0x9223007c  lbu         $v1, 0x7C($s1)
    ctx->pc = 0x1ccc40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 124)));
label_1ccc44:
    // 0x1ccc44: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1ccc44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1ccc48:
    // 0x1ccc48: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1ccc4c:
    if (ctx->pc == 0x1CCC4Cu) {
        ctx->pc = 0x1CCC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC48u;
        // 0x1ccc4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCC50u;
        goto label_1ccc50;
    }
    ctx->pc = 0x1CCC48u;
    {
        const bool branch_taken_0x1ccc48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC48u;
        // 0x1ccc4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc48) {
            ctx->pc = 0x1CCCA0u;
            goto label_1ccca0;
        }
    }
    ctx->pc = 0x1CCC50u;
label_1ccc50:
    // 0x1ccc50: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x1ccc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_1ccc54:
    // 0x1ccc54: 0xc0750fc  jal         func_1D43F0
label_1ccc58:
    if (ctx->pc == 0x1CCC58u) {
        ctx->pc = 0x1CCC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC54u;
        // 0x1ccc58: 0x24100020  addiu       $s0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCC5Cu;
        goto label_1ccc5c;
    }
    ctx->pc = 0x1CCC54u;
    SET_GPR_U32(ctx, 31, 0x1CCC5Cu);
    ctx->pc = 0x1CCC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCC54u;
    // 0x1ccc58: 0x24100020  addiu       $s0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43F0u, 0x1CCC54u, 0x1CCC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC5Cu;
label_1ccc5c:
    // 0x1ccc5c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1ccc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1ccc60:
    // 0x1ccc60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ccc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ccc64:
    // 0x1ccc64: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1ccc64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_1ccc68:
    // 0x1ccc68: 0x3843005f  xori        $v1, $v0, 0x5F
    ctx->pc = 0x1ccc68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)95);
label_1ccc6c:
    // 0x1ccc6c: 0xc10c3ac  jal         func_430EB0
label_1ccc70:
    if (ctx->pc == 0x1CCC70u) {
        ctx->pc = 0x1CCC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC6Cu;
        // 0x1ccc70: 0x43800b  movn        $s0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCC74u;
        goto label_1ccc74;
    }
    ctx->pc = 0x1CCC6Cu;
    SET_GPR_U32(ctx, 31, 0x1CCC74u);
    ctx->pc = 0x1CCC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCC6Cu;
    // 0x1ccc70: 0x43800b  movn        $s0, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1CCC6Cu, 0x1CCC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC74u;
label_1ccc74:
    // 0x1ccc74: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1ccc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1ccc78:
    // 0x1ccc78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ccc78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ccc7c:
    // 0x1ccc7c: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x1ccc7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
label_1ccc80:
    // 0x1ccc80: 0xc073478  jal         func_1CD1E0
label_1ccc84:
    if (ctx->pc == 0x1CCC84u) {
        ctx->pc = 0x1CCC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC80u;
        // 0x1ccc84: 0x8e240098  lw          $a0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCC88u;
        goto label_1ccc88;
    }
    ctx->pc = 0x1CCC80u;
    SET_GPR_U32(ctx, 31, 0x1CCC88u);
    ctx->pc = 0x1CCC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCC80u;
    // 0x1ccc84: 0x8e240098  lw          $a0, 0x98($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x1CCC80u, 0x1CCC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC88u;
label_1ccc88:
    // 0x1ccc88: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ccc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ccc8c:
    // 0x1ccc8c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ccc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1ccc90:
    // 0x1ccc90: 0xc043f0c  jal         func_10FC30
label_1ccc94:
    if (ctx->pc == 0x1CCC94u) {
        ctx->pc = 0x1CCC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC90u;
        // 0x1ccc94: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCC98u;
        goto label_1ccc98;
    }
    ctx->pc = 0x1CCC90u;
    SET_GPR_U32(ctx, 31, 0x1CCC98u);
    ctx->pc = 0x1CCC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCC90u;
    // 0x1ccc94: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1CCC90u, 0x1CCC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC98u;
label_1ccc98:
    // 0x1ccc98: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ccc9c:
    if (ctx->pc == 0x1CCC9Cu) {
        ctx->pc = 0x1CCCA0u;
        goto label_1ccca0;
    }
    ctx->pc = 0x1CCC98u;
    {
        const bool branch_taken_0x1ccc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccc98) {
            ctx->pc = 0x1CCCB0u;
            goto label_1cccb0;
        }
    }
    ctx->pc = 0x1CCCA0u;
label_1ccca0:
    // 0x1ccca0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ccca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ccca4:
    // 0x1ccca4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1ccca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1ccca8:
    // 0x1ccca8: 0xc043f0c  jal         func_10FC30
label_1cccac:
    if (ctx->pc == 0x1CCCACu) {
        ctx->pc = 0x1CCCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCCA8u;
        // 0x1cccac: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCCB0u;
        goto label_1cccb0;
    }
    ctx->pc = 0x1CCCA8u;
    SET_GPR_U32(ctx, 31, 0x1CCCB0u);
    ctx->pc = 0x1CCCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCCA8u;
    // 0x1cccac: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1CCCA8u, 0x1CCCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCCB0u;
label_1cccb0:
    // 0x1cccb0: 0xc10c3ac  jal         func_430EB0
label_1cccb4:
    if (ctx->pc == 0x1CCCB4u) {
        ctx->pc = 0x1CCCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCCB0u;
        // 0x1cccb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCCB8u;
        goto label_1cccb8;
    }
    ctx->pc = 0x1CCCB0u;
    SET_GPR_U32(ctx, 31, 0x1CCCB8u);
    ctx->pc = 0x1CCCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCCB0u;
    // 0x1cccb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1CCCB0u, 0x1CCCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCCB8u;
label_1cccb8:
    // 0x1cccb8: 0x9223007c  lbu         $v1, 0x7C($s1)
    ctx->pc = 0x1cccb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 124)));
label_1cccbc:
    // 0x1cccbc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1cccbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1cccc0:
    // 0x1cccc0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1cccc4:
    if (ctx->pc == 0x1CCCC4u) {
        ctx->pc = 0x1CCCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCCC0u;
        // 0x1cccc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCCC8u;
        goto label_1cccc8;
    }
    ctx->pc = 0x1CCCC0u;
    {
        const bool branch_taken_0x1cccc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCCC0u;
        // 0x1cccc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cccc0) {
            ctx->pc = 0x1CCCF0u;
            goto label_1cccf0;
        }
    }
    ctx->pc = 0x1CCCC8u;
label_1cccc8:
    // 0x1cccc8: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x1cccc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_1ccccc:
    // 0x1ccccc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cccccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cccd0:
    // 0x1cccd0: 0x24820070  addiu       $v0, $a0, 0x70
    ctx->pc = 0x1cccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_1cccd4:
    // 0x1cccd4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1cccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1cccd8:
    // 0x1cccd8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1cccd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1cccdc:
    // 0x1cccdc: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x1cccdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1ccce0:
    // 0x1ccce0: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x1ccce0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
label_1ccce4:
    // 0x1ccce4: 0xc0752e2  jal         func_1D4B88
label_1ccce8:
    if (ctx->pc == 0x1CCCE8u) {
        ctx->pc = 0x1CCCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCCE4u;
        // 0x1ccce8: 0x24a5fffe  addiu       $a1, $a1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCCECu;
        goto label_1cccec;
    }
    ctx->pc = 0x1CCCE4u;
    SET_GPR_U32(ctx, 31, 0x1CCCECu);
    ctx->pc = 0x1CCCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCCE4u;
    // 0x1ccce8: 0x24a5fffe  addiu       $a1, $a1, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4B88u, 0x1CCCE4u, 0x1CCCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCCECu;
label_1cccec:
    // 0x1cccec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cccecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cccf0:
    // 0x1cccf0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1cccf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cccf4:
    // 0x1cccf4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1cccf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cccf8:
    // 0x1cccf8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1cccf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cccfc:
    // 0x1cccfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cccfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ccd00:
    // 0x1ccd00: 0x3e00008  jr          $ra
label_1ccd04:
    if (ctx->pc == 0x1CCD04u) {
        ctx->pc = 0x1CCD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD00u;
        // 0x1ccd04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCD08u;
        goto label_fallthrough_0x1ccd00;
    }
    ctx->pc = 0x1CCD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD00u;
        // 0x1ccd04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCD00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ccd00:
    ctx->pc = 0x1CCD08u;
}
