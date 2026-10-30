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

// Function: sub_004CCC68
// Address: 0x4ccc68 - 0x4ccd98
void sub_004CCC68_0x4ccc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CCC68_0x4ccc68");
#endif

    switch (ctx->pc) {
        case 0x4ccc68u: goto label_4ccc68;
        case 0x4ccc6cu: goto label_4ccc6c;
        case 0x4ccc70u: goto label_4ccc70;
        case 0x4ccc74u: goto label_4ccc74;
        case 0x4ccc78u: goto label_4ccc78;
        case 0x4ccc7cu: goto label_4ccc7c;
        case 0x4ccc80u: goto label_4ccc80;
        case 0x4ccc84u: goto label_4ccc84;
        case 0x4ccc88u: goto label_4ccc88;
        case 0x4ccc8cu: goto label_4ccc8c;
        case 0x4ccc90u: goto label_4ccc90;
        case 0x4ccc94u: goto label_4ccc94;
        case 0x4ccc98u: goto label_4ccc98;
        case 0x4ccc9cu: goto label_4ccc9c;
        case 0x4ccca0u: goto label_4ccca0;
        case 0x4ccca4u: goto label_4ccca4;
        case 0x4ccca8u: goto label_4ccca8;
        case 0x4cccacu: goto label_4cccac;
        case 0x4cccb0u: goto label_4cccb0;
        case 0x4cccb4u: goto label_4cccb4;
        case 0x4cccb8u: goto label_4cccb8;
        case 0x4cccbcu: goto label_4cccbc;
        case 0x4cccc0u: goto label_4cccc0;
        case 0x4cccc4u: goto label_4cccc4;
        case 0x4cccc8u: goto label_4cccc8;
        case 0x4cccccu: goto label_4ccccc;
        case 0x4cccd0u: goto label_4cccd0;
        case 0x4cccd4u: goto label_4cccd4;
        case 0x4cccd8u: goto label_4cccd8;
        case 0x4cccdcu: goto label_4cccdc;
        case 0x4ccce0u: goto label_4ccce0;
        case 0x4ccce4u: goto label_4ccce4;
        case 0x4ccce8u: goto label_4ccce8;
        case 0x4cccecu: goto label_4cccec;
        case 0x4cccf0u: goto label_4cccf0;
        case 0x4cccf4u: goto label_4cccf4;
        case 0x4cccf8u: goto label_4cccf8;
        case 0x4cccfcu: goto label_4cccfc;
        case 0x4ccd00u: goto label_4ccd00;
        case 0x4ccd04u: goto label_4ccd04;
        case 0x4ccd08u: goto label_4ccd08;
        case 0x4ccd0cu: goto label_4ccd0c;
        case 0x4ccd10u: goto label_4ccd10;
        case 0x4ccd14u: goto label_4ccd14;
        case 0x4ccd18u: goto label_4ccd18;
        case 0x4ccd1cu: goto label_4ccd1c;
        case 0x4ccd20u: goto label_4ccd20;
        case 0x4ccd24u: goto label_4ccd24;
        case 0x4ccd28u: goto label_4ccd28;
        case 0x4ccd2cu: goto label_4ccd2c;
        case 0x4ccd30u: goto label_4ccd30;
        case 0x4ccd34u: goto label_4ccd34;
        case 0x4ccd38u: goto label_4ccd38;
        case 0x4ccd3cu: goto label_4ccd3c;
        case 0x4ccd40u: goto label_4ccd40;
        case 0x4ccd44u: goto label_4ccd44;
        case 0x4ccd48u: goto label_4ccd48;
        case 0x4ccd4cu: goto label_4ccd4c;
        case 0x4ccd50u: goto label_4ccd50;
        case 0x4ccd54u: goto label_4ccd54;
        case 0x4ccd58u: goto label_4ccd58;
        case 0x4ccd5cu: goto label_4ccd5c;
        case 0x4ccd60u: goto label_4ccd60;
        case 0x4ccd64u: goto label_4ccd64;
        case 0x4ccd68u: goto label_4ccd68;
        case 0x4ccd6cu: goto label_4ccd6c;
        case 0x4ccd70u: goto label_4ccd70;
        case 0x4ccd74u: goto label_4ccd74;
        case 0x4ccd78u: goto label_4ccd78;
        case 0x4ccd7cu: goto label_4ccd7c;
        case 0x4ccd80u: goto label_4ccd80;
        case 0x4ccd84u: goto label_4ccd84;
        case 0x4ccd88u: goto label_4ccd88;
        case 0x4ccd8cu: goto label_4ccd8c;
        case 0x4ccd90u: goto label_4ccd90;
        case 0x4ccd94u: goto label_4ccd94;
        default: break;
    }

    ctx->pc = 0x4ccc68u;

label_4ccc68:
    // 0x4ccc68: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4ccc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4ccc6c:
    // 0x4ccc6c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x4ccc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_4ccc70:
    // 0x4ccc70: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x4ccc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_4ccc74:
    // 0x4ccc74: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x4ccc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_4ccc78:
    // 0x4ccc78: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x4ccc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_4ccc7c:
    // 0x4ccc7c: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x4ccc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_4ccc80:
    // 0x4ccc80: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x4ccc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_4ccc84:
    // 0x4ccc84: 0xc1332ba  jal         func_4CCAE8
label_4ccc88:
    if (ctx->pc == 0x4CCC88u) {
        ctx->pc = 0x4CCC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCC84u;
        // 0x4ccc88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCC8Cu;
        goto label_4ccc8c;
    }
    ctx->pc = 0x4CCC84u;
    SET_GPR_U32(ctx, 31, 0x4CCC8Cu);
    ctx->pc = 0x4CCC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CCC84u;
    // 0x4ccc88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CCAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CCAE8u, 0x4CCC84u, 0x4CCC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CCC8Cu;
label_4ccc8c:
    // 0x4ccc8c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4ccc8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ccc90:
    // 0x4ccc90: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4ccc90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4ccc94:
    // 0x4ccc94: 0x8c434804  lw          $v1, 0x4804($v0)
    ctx->pc = 0x4ccc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18436)));
label_4ccc98:
    // 0x4ccc98: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_4ccc9c:
    if (ctx->pc == 0x4CCC9Cu) {
        ctx->pc = 0x4CCC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCC98u;
        // 0x4ccc9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCCA0u;
        goto label_4ccca0;
    }
    ctx->pc = 0x4CCC98u;
    {
        const bool branch_taken_0x4ccc98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CCC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCC98u;
        // 0x4ccc9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ccc98) {
            ctx->pc = 0x4CCCD4u;
            goto label_4cccd4;
        }
    }
    ctx->pc = 0x4CCCA0u;
label_4ccca0:
    // 0x4ccca0: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4ccca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4ccca4:
    // 0x4ccca4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4ccca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_4ccca8:
    // 0x4ccca8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4ccca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4cccac:
    // 0x4cccac: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4cccacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4cccb0:
    // 0x4cccb0: 0x24433970  addiu       $v1, $v0, 0x3970
    ctx->pc = 0x4cccb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 14704));
label_4cccb4:
    // 0x4cccb4: 0x0  nop
    ctx->pc = 0x4cccb4u;
    // NOP
label_4cccb8:
    // 0x4cccb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4cccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4cccbc:
    // 0x4cccbc: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
label_4cccc0:
    if (ctx->pc == 0x4CCCC0u) {
        ctx->pc = 0x4CCCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCCBCu;
        // 0x4cccc0: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCCC4u;
        goto label_4cccc4;
    }
    ctx->pc = 0x4CCCBCu;
    {
        const bool branch_taken_0x4cccbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x4cccbc) {
            ctx->pc = 0x4CCCC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CCCBCu;
            // 0x4cccc0: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CCCC4u;
            goto label_4cccc4;
        }
    }
    ctx->pc = 0x4CCCC4u;
label_4cccc4:
    // 0x4cccc4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4cccc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4cccc8:
    // 0x4cccc8: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x4cccc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_4ccccc:
    // 0x4ccccc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_4cccd0:
    if (ctx->pc == 0x4CCCD0u) {
        ctx->pc = 0x4CCCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCCCCu;
        // 0x4cccd0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCCD4u;
        goto label_4cccd4;
    }
    ctx->pc = 0x4CCCCCu;
    {
        const bool branch_taken_0x4ccccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CCCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCCCCu;
        // 0x4cccd0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ccccc) {
            ctx->pc = 0x4CCCB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cccb8;
        }
    }
    ctx->pc = 0x4CCCD4u;
label_4cccd4:
    // 0x4cccd4: 0x6000025  bltz        $s0, . + 4 + (0x25 << 2)
label_4cccd8:
    if (ctx->pc == 0x4CCCD8u) {
        ctx->pc = 0x4CCCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCCD4u;
        // 0x4cccd8: 0x3c130071  lui         $s3, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCCDCu;
        goto label_4cccdc;
    }
    ctx->pc = 0x4CCCD4u;
    {
        const bool branch_taken_0x4cccd4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x4CCCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCCD4u;
        // 0x4cccd8: 0x3c130071  lui         $s3, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cccd4) {
            ctx->pc = 0x4CCD6Cu;
            goto label_4ccd6c;
        }
    }
    ctx->pc = 0x4CCCDCu;
label_4cccdc:
    // 0x4cccdc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4cccdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4ccce0:
    // 0x4ccce0: 0x8c6246ac  lw          $v0, 0x46AC($v1)
    ctx->pc = 0x4ccce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18092)));
label_4ccce4:
    // 0x4ccce4: 0x0  nop
    ctx->pc = 0x4ccce4u;
    // NOP
label_4ccce8:
    // 0x4ccce8: 0x0  nop
    ctx->pc = 0x4ccce8u;
    // NOP
label_4cccec:
    // 0x4cccec: 0x0  nop
    ctx->pc = 0x4cccecu;
    // NOP
label_4cccf0:
    // 0x4cccf0: 0x0  nop
    ctx->pc = 0x4cccf0u;
    // NOP
label_4cccf4:
    // 0x4cccf4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_4cccf8:
    if (ctx->pc == 0x4CCCF8u) {
        ctx->pc = 0x4CCCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCCF4u;
        // 0x4cccf8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCCFCu;
        goto label_4cccfc;
    }
    ctx->pc = 0x4CCCF4u;
    {
        const bool branch_taken_0x4cccf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CCCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCCF4u;
        // 0x4cccf8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cccf4) {
            ctx->pc = 0x4CCCE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ccce0;
        }
    }
    ctx->pc = 0x4CCCFCu;
label_4cccfc:
    // 0x4cccfc: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x4cccfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_4ccd00:
    // 0x4ccd00: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x4ccd00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_4ccd04:
    // 0x4ccd04: 0x3c120053  lui         $s2, 0x53
    ctx->pc = 0x4ccd04u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)83 << 16));
label_4ccd08:
    // 0x4ccd08: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4ccd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4ccd0c:
    // 0x4ccd0c: 0x3c110044  lui         $s1, 0x44
    ctx->pc = 0x4ccd0cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)68 << 16));
label_4ccd10:
    // 0x4ccd10: 0xac4046b0  sw          $zero, 0x46B0($v0)
    ctx->pc = 0x4ccd10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18096), GPR_U32(ctx, 0));
label_4ccd14:
    // 0x4ccd14: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x4ccd14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
label_4ccd18:
    // 0x4ccd18: 0x8e423968  lw          $v0, 0x3968($s2)
    ctx->pc = 0x4ccd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14696)));
label_4ccd1c:
    // 0x4ccd1c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4ccd20:
    if (ctx->pc == 0x4CCD20u) {
        ctx->pc = 0x4CCD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCD1Cu;
        // 0x4ccd20: 0x2622fed8  addiu       $v0, $s1, -0x128 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCD24u;
        goto label_4ccd24;
    }
    ctx->pc = 0x4CCD1Cu;
    {
        const bool branch_taken_0x4ccd1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CCD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCD1Cu;
        // 0x4ccd20: 0x2622fed8  addiu       $v0, $s1, -0x128 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ccd1c) {
            ctx->pc = 0x4CCD28u;
            goto label_4ccd28;
        }
    }
    ctx->pc = 0x4CCD24u;
label_4ccd24:
    // 0x4ccd24: 0x2602fe98  addiu       $v0, $s0, -0x168
    ctx->pc = 0x4ccd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966936));
label_4ccd28:
    // 0x4ccd28: 0x8e6446a0  lw          $a0, 0x46A0($s3)
    ctx->pc = 0x4ccd28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18080)));
label_4ccd2c:
    // 0x4ccd2c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4ccd2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4ccd30:
    // 0x4ccd30: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x4ccd30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_4ccd34:
    // 0x4ccd34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4ccd34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ccd38:
    // 0x4ccd38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4ccd38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ccd3c:
    // 0x4ccd3c: 0x40f809  jalr        $v0
label_4ccd40:
    if (ctx->pc == 0x4CCD40u) {
        ctx->pc = 0x4CCD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCD3Cu;
        // 0x4ccd40: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCD44u;
        goto label_4ccd44;
    }
    ctx->pc = 0x4CCD3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4CCD44u);
        ctx->pc = 0x4CCD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCD3Cu;
        // 0x4ccd40: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CCD3Cu, 0x4CCD44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4CCD44u;
label_4ccd44:
    // 0x4ccd44: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
label_4ccd48:
    if (ctx->pc == 0x4CCD48u) {
        ctx->pc = 0x4CCD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCD44u;
        // 0x4ccd48: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCD4Cu;
        goto label_4ccd4c;
    }
    ctx->pc = 0x4CCD44u;
    {
        const bool branch_taken_0x4ccd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CCD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCD44u;
        // 0x4ccd48: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ccd44) {
            ctx->pc = 0x4CCD18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ccd18;
        }
    }
    ctx->pc = 0x4CCD4Cu;
label_4ccd4c:
    // 0x4ccd4c: 0x0  nop
    ctx->pc = 0x4ccd4cu;
    // NOP
label_4ccd50:
    // 0x4ccd50: 0x8c6246b0  lw          $v0, 0x46B0($v1)
    ctx->pc = 0x4ccd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18096)));
label_4ccd54:
    // 0x4ccd54: 0x0  nop
    ctx->pc = 0x4ccd54u;
    // NOP
label_4ccd58:
    // 0x4ccd58: 0x0  nop
    ctx->pc = 0x4ccd58u;
    // NOP
label_4ccd5c:
    // 0x4ccd5c: 0x0  nop
    ctx->pc = 0x4ccd5cu;
    // NOP
label_4ccd60:
    // 0x4ccd60: 0x0  nop
    ctx->pc = 0x4ccd60u;
    // NOP
label_4ccd64:
    // 0x4ccd64: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_4ccd68:
    if (ctx->pc == 0x4CCD68u) {
        ctx->pc = 0x4CCD6Cu;
        goto label_4ccd6c;
    }
    ctx->pc = 0x4CCD64u;
    {
        const bool branch_taken_0x4ccd64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ccd64) {
            ctx->pc = 0x4CCD50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ccd50;
        }
    }
    ctx->pc = 0x4CCD6Cu;
label_4ccd6c:
    // 0x4ccd6c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x4ccd6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ccd70:
    // 0x4ccd70: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x4ccd70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4ccd74:
    // 0x4ccd74: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x4ccd74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_4ccd78:
    // 0x4ccd78: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x4ccd78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4ccd7c:
    // 0x4ccd7c: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x4ccd7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_4ccd80:
    // 0x4ccd80: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x4ccd80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4ccd84:
    // 0x4ccd84: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x4ccd84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_4ccd88:
    // 0x4ccd88: 0x3e00008  jr          $ra
label_4ccd8c:
    if (ctx->pc == 0x4CCD8Cu) {
        ctx->pc = 0x4CCD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCD88u;
        // 0x4ccd8c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CCD90u;
        goto label_4ccd90;
    }
    ctx->pc = 0x4CCD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CCD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CCD88u;
        // 0x4ccd8c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CCD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CCD90u;
label_4ccd90:
    // 0x4ccd90: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4ccd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4ccd94:
    // 0x4ccd94: 0x0  nop
    ctx->pc = 0x4ccd94u;
    // NOP
    ctx->pc = 0x4ccd98u;
}
