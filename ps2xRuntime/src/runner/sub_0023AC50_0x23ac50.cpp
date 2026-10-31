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

// Function: sub_0023AC50
// Address: 0x23ac50 - 0x23ad88
void sub_0023AC50_0x23ac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AC50_0x23ac50");
#endif

    switch (ctx->pc) {
        case 0x23ac50u: goto label_23ac50;
        case 0x23ac54u: goto label_23ac54;
        case 0x23ac58u: goto label_23ac58;
        case 0x23ac5cu: goto label_23ac5c;
        case 0x23ac60u: goto label_23ac60;
        case 0x23ac64u: goto label_23ac64;
        case 0x23ac68u: goto label_23ac68;
        case 0x23ac6cu: goto label_23ac6c;
        case 0x23ac70u: goto label_23ac70;
        case 0x23ac74u: goto label_23ac74;
        case 0x23ac78u: goto label_23ac78;
        case 0x23ac7cu: goto label_23ac7c;
        case 0x23ac80u: goto label_23ac80;
        case 0x23ac84u: goto label_23ac84;
        case 0x23ac88u: goto label_23ac88;
        case 0x23ac8cu: goto label_23ac8c;
        case 0x23ac90u: goto label_23ac90;
        case 0x23ac94u: goto label_23ac94;
        case 0x23ac98u: goto label_23ac98;
        case 0x23ac9cu: goto label_23ac9c;
        case 0x23aca0u: goto label_23aca0;
        case 0x23aca4u: goto label_23aca4;
        case 0x23aca8u: goto label_23aca8;
        case 0x23acacu: goto label_23acac;
        case 0x23acb0u: goto label_23acb0;
        case 0x23acb4u: goto label_23acb4;
        case 0x23acb8u: goto label_23acb8;
        case 0x23acbcu: goto label_23acbc;
        case 0x23acc0u: goto label_23acc0;
        case 0x23acc4u: goto label_23acc4;
        case 0x23acc8u: goto label_23acc8;
        case 0x23acccu: goto label_23accc;
        case 0x23acd0u: goto label_23acd0;
        case 0x23acd4u: goto label_23acd4;
        case 0x23acd8u: goto label_23acd8;
        case 0x23acdcu: goto label_23acdc;
        case 0x23ace0u: goto label_23ace0;
        case 0x23ace4u: goto label_23ace4;
        case 0x23ace8u: goto label_23ace8;
        case 0x23acecu: goto label_23acec;
        case 0x23acf0u: goto label_23acf0;
        case 0x23acf4u: goto label_23acf4;
        case 0x23acf8u: goto label_23acf8;
        case 0x23acfcu: goto label_23acfc;
        case 0x23ad00u: goto label_23ad00;
        case 0x23ad04u: goto label_23ad04;
        case 0x23ad08u: goto label_23ad08;
        case 0x23ad0cu: goto label_23ad0c;
        case 0x23ad10u: goto label_23ad10;
        case 0x23ad14u: goto label_23ad14;
        case 0x23ad18u: goto label_23ad18;
        case 0x23ad1cu: goto label_23ad1c;
        case 0x23ad20u: goto label_23ad20;
        case 0x23ad24u: goto label_23ad24;
        case 0x23ad28u: goto label_23ad28;
        case 0x23ad2cu: goto label_23ad2c;
        case 0x23ad30u: goto label_23ad30;
        case 0x23ad34u: goto label_23ad34;
        case 0x23ad38u: goto label_23ad38;
        case 0x23ad3cu: goto label_23ad3c;
        case 0x23ad40u: goto label_23ad40;
        case 0x23ad44u: goto label_23ad44;
        case 0x23ad48u: goto label_23ad48;
        case 0x23ad4cu: goto label_23ad4c;
        case 0x23ad50u: goto label_23ad50;
        case 0x23ad54u: goto label_23ad54;
        case 0x23ad58u: goto label_23ad58;
        case 0x23ad5cu: goto label_23ad5c;
        case 0x23ad60u: goto label_23ad60;
        case 0x23ad64u: goto label_23ad64;
        case 0x23ad68u: goto label_23ad68;
        case 0x23ad6cu: goto label_23ad6c;
        case 0x23ad70u: goto label_23ad70;
        case 0x23ad74u: goto label_23ad74;
        case 0x23ad78u: goto label_23ad78;
        case 0x23ad7cu: goto label_23ad7c;
        case 0x23ad80u: goto label_23ad80;
        case 0x23ad84u: goto label_23ad84;
        default: break;
    }

    ctx->pc = 0x23ac50u;

label_23ac50:
    // 0x23ac50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x23ac50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_23ac54:
    // 0x23ac54: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_23ac58:
    // 0x23ac58: 0x24426710  addiu       $v0, $v0, 0x6710
    ctx->pc = 0x23ac58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26384));
label_23ac5c:
    // 0x23ac5c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x23ac5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_23ac60:
    // 0x23ac60: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x23ac60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_23ac64:
    // 0x23ac64: 0x2450000c  addiu       $s0, $v0, 0xC
    ctx->pc = 0x23ac64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_23ac68:
    // 0x23ac68: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x23ac68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_23ac6c:
    // 0x23ac6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23ac6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ac70:
    // 0x23ac70: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x23ac70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_23ac74:
    // 0x23ac74: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23ac74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ac78:
    // 0x23ac78: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x23ac78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_23ac7c:
    // 0x23ac7c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23ac7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23ac80:
    // 0x23ac80: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x23ac80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_23ac84:
    // 0x23ac84: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x23ac84u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_23ac88:
    // 0x23ac88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23ac88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23ac8c:
    // 0x23ac8c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x23ac8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23ac90:
    // 0x23ac90: 0x8e02fffc  lw          $v0, -0x4($s0)
    ctx->pc = 0x23ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
label_23ac94:
    // 0x23ac94: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_23ac98:
    if (ctx->pc == 0x23AC98u) {
        ctx->pc = 0x23AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC94u;
        // 0x23ac98: 0x8e02fff8  lw          $v0, -0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AC9Cu;
        goto label_23ac9c;
    }
    ctx->pc = 0x23AC94u;
    {
        const bool branch_taken_0x23ac94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ac94) {
            ctx->pc = 0x23AC98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AC94u;
            // 0x23ac98: 0x8e02fff8  lw          $v0, -0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23ACB0u;
            goto label_23acb0;
        }
    }
    ctx->pc = 0x23AC9Cu;
label_23ac9c:
    // 0x23ac9c: 0xc0e409a  jal         func_390268
label_23aca0:
    if (ctx->pc == 0x23ACA0u) {
        ctx->pc = 0x23ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC9Cu;
        // 0x23aca0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ACA4u;
        goto label_23aca4;
    }
    ctx->pc = 0x23AC9Cu;
    SET_GPR_U32(ctx, 31, 0x23ACA4u);
    ctx->pc = 0x23ACA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AC9Cu;
    // 0x23aca0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x23AC9Cu, 0x23ACA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ACA4u;
label_23aca4:
    // 0x23aca4: 0x5453002b  bnel        $v0, $s3, . + 4 + (0x2B << 2)
label_23aca8:
    if (ctx->pc == 0x23ACA8u) {
        ctx->pc = 0x23ACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACA4u;
        // 0x23aca8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ACACu;
        goto label_23acac;
    }
    ctx->pc = 0x23ACA4u;
    {
        const bool branch_taken_0x23aca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x23aca4) {
            ctx->pc = 0x23ACA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23ACA4u;
            // 0x23aca8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AD54u;
            goto label_23ad54;
        }
    }
    ctx->pc = 0x23ACACu;
label_23acac:
    // 0x23acac: 0x8e02fff8  lw          $v0, -0x8($s0)
    ctx->pc = 0x23acacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
label_23acb0:
    // 0x23acb0: 0x14550028  bne         $v0, $s5, . + 4 + (0x28 << 2)
label_23acb4:
    if (ctx->pc == 0x23ACB4u) {
        ctx->pc = 0x23ACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACB0u;
        // 0x23acb4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ACB8u;
        goto label_23acb8;
    }
    ctx->pc = 0x23ACB0u;
    {
        const bool branch_taken_0x23acb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x23ACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACB0u;
        // 0x23acb4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23acb0) {
            ctx->pc = 0x23AD54u;
            goto label_23ad54;
        }
    }
    ctx->pc = 0x23ACB8u;
label_23acb8:
    // 0x23acb8: 0x8e862b04  lw          $a2, 0x2B04($s4)
    ctx->pc = 0x23acb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11012)));
label_23acbc:
    // 0x23acbc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x23acbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23acc0:
    // 0x23acc0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x23acc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_23acc4:
    // 0x23acc4: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x23acc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_23acc8:
    // 0x23acc8: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x23acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_23accc:
    // 0x23accc: 0x40f809  jalr        $v0
label_23acd0:
    if (ctx->pc == 0x23ACD0u) {
        ctx->pc = 0x23ACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACCCu;
        // 0x23acd0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ACD4u;
        goto label_23acd4;
    }
    ctx->pc = 0x23ACCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23ACD4u);
        ctx->pc = 0x23ACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACCCu;
        // 0x23acd0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23ACCCu, 0x23ACD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23ACD4u;
label_23acd4:
    // 0x23acd4: 0x8e902b04  lw          $s0, 0x2B04($s4)
    ctx->pc = 0x23acd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11012)));
label_23acd8:
    // 0x23acd8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x23acd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_23acdc:
    // 0x23acdc: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x23acdcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23ace0:
    // 0x23ace0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x23ace0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_23ace4:
    // 0x23ace4: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x23ace4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_23ace8:
    // 0x23ace8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x23ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_23acec:
    // 0x23acec: 0x26310058  addiu       $s1, $s1, 0x58
    ctx->pc = 0x23acecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_23acf0:
    // 0x23acf0: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x23acf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_23acf4:
    // 0x23acf4: 0x40f809  jalr        $v0
label_23acf8:
    if (ctx->pc == 0x23ACF8u) {
        ctx->pc = 0x23ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACF4u;
        // 0x23acf8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ACFCu;
        goto label_23acfc;
    }
    ctx->pc = 0x23ACF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23ACFCu);
        ctx->pc = 0x23ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACF4u;
        // 0x23acf8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23ACF4u, 0x23ACFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23ACFCu;
label_23acfc:
    // 0x23acfc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x23acfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_23ad00:
    // 0x23ad00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ad00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23ad04:
    // 0x23ad04: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x23ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_23ad08:
    // 0x23ad08: 0x40f809  jalr        $v0
label_23ad0c:
    if (ctx->pc == 0x23AD0Cu) {
        ctx->pc = 0x23AD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD08u;
        // 0x23ad0c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AD10u;
        goto label_23ad10;
    }
    ctx->pc = 0x23AD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23AD10u);
        ctx->pc = 0x23AD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD08u;
        // 0x23ad0c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AD08u, 0x23AD10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23AD10u;
label_23ad10:
    // 0x23ad10: 0x8e862b04  lw          $a2, 0x2B04($s4)
    ctx->pc = 0x23ad10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11012)));
label_23ad14:
    // 0x23ad14: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x23ad14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23ad18:
    // 0x23ad18: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x23ad18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_23ad1c:
    // 0x23ad1c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x23ad1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_23ad20:
    // 0x23ad20: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x23ad20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_23ad24:
    // 0x23ad24: 0x60f809  jalr        $v1
label_23ad28:
    if (ctx->pc == 0x23AD28u) {
        ctx->pc = 0x23AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD24u;
        // 0x23ad28: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AD2Cu;
        goto label_23ad2c;
    }
    ctx->pc = 0x23AD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23AD2Cu);
        ctx->pc = 0x23AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD24u;
        // 0x23ad28: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AD24u, 0x23AD2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23AD2Cu;
label_23ad2c:
    // 0x23ad2c: 0x8e872b04  lw          $a3, 0x2B04($s4)
    ctx->pc = 0x23ad2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11012)));
label_23ad30:
    // 0x23ad30: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23ad30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23ad34:
    // 0x23ad34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23ad34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ad38:
    // 0x23ad38: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x23ad38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_23ad3c:
    // 0x23ad3c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x23ad3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_23ad40:
    // 0x23ad40: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x23ad40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_23ad44:
    // 0x23ad44: 0x60f809  jalr        $v1
label_23ad48:
    if (ctx->pc == 0x23AD48u) {
        ctx->pc = 0x23AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD44u;
        // 0x23ad48: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AD4Cu;
        goto label_23ad4c;
    }
    ctx->pc = 0x23AD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23AD4Cu);
        ctx->pc = 0x23AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD44u;
        // 0x23ad48: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AD44u, 0x23AD4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23AD4Cu;
label_23ad4c:
    // 0x23ad4c: 0x10000006  b           . + 4 + (0x6 << 2)
label_23ad50:
    if (ctx->pc == 0x23AD50u) {
        ctx->pc = 0x23AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD4Cu;
        // 0x23ad50: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AD54u;
        goto label_23ad54;
    }
    ctx->pc = 0x23AD4Cu;
    {
        const bool branch_taken_0x23ad4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD4Cu;
        // 0x23ad50: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ad4c) {
            ctx->pc = 0x23AD68u;
            goto label_23ad68;
        }
    }
    ctx->pc = 0x23AD54u;
label_23ad54:
    // 0x23ad54: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x23ad54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_23ad58:
    // 0x23ad58: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x23ad58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_23ad5c:
    // 0x23ad5c: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
label_23ad60:
    if (ctx->pc == 0x23AD60u) {
        ctx->pc = 0x23AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD5Cu;
        // 0x23ad60: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AD64u;
        goto label_23ad64;
    }
    ctx->pc = 0x23AD5Cu;
    {
        const bool branch_taken_0x23ad5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD5Cu;
        // 0x23ad60: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ad5c) {
            ctx->pc = 0x23AC90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ac90;
        }
    }
    ctx->pc = 0x23AD64u;
label_23ad64:
    // 0x23ad64: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x23ad64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_23ad68:
    // 0x23ad68: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x23ad68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_23ad6c:
    // 0x23ad6c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x23ad6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23ad70:
    // 0x23ad70: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x23ad70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23ad74:
    // 0x23ad74: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x23ad74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23ad78:
    // 0x23ad78: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x23ad78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23ad7c:
    // 0x23ad7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23ad7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23ad80:
    // 0x23ad80: 0x3e00008  jr          $ra
label_23ad84:
    if (ctx->pc == 0x23AD84u) {
        ctx->pc = 0x23AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD80u;
        // 0x23ad84: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AD88u;
        goto label_fallthrough_0x23ad80;
    }
    ctx->pc = 0x23AD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD80u;
        // 0x23ad84: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AD80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23ad80:
    ctx->pc = 0x23AD88u;
}
