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

// Function: sub_0049CE08
// Address: 0x49ce08 - 0x49dd80
void sub_0049CE08_0x49ce08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049CE08_0x49ce08");
#endif

    switch (ctx->pc) {
        case 0x49cea4u: goto label_49cea4;
        case 0x49cec0u: goto label_49cec0;
        case 0x49cf30u: goto label_49cf30;
        case 0x49cf40u: goto label_49cf40;
        case 0x49cf74u: goto label_49cf74;
        case 0x49cf90u: goto label_49cf90;
        case 0x49cfa4u: goto label_49cfa4;
        case 0x49cfbcu: goto label_49cfbc;
        case 0x49cff8u: goto label_49cff8;
        case 0x49d018u: goto label_49d018;
        case 0x49d020u: goto label_49d020;
        case 0x49d030u: goto label_49d030;
        case 0x49d04cu: goto label_49d04c;
        case 0x49d1b0u: goto label_49d1b0;
        case 0x49d1c8u: goto label_49d1c8;
        case 0x49d258u: goto label_49d258;
        case 0x49d270u: goto label_49d270;
        case 0x49d2fcu: goto label_49d2fc;
        case 0x49d380u: goto label_49d380;
        case 0x49d398u: goto label_49d398;
        case 0x49d450u: goto label_49d450;
        case 0x49d468u: goto label_49d468;
        case 0x49d518u: goto label_49d518;
        case 0x49d588u: goto label_49d588;
        case 0x49d6b0u: goto label_49d6b0;
        case 0x49d6f0u: goto label_49d6f0;
        case 0x49d7e0u: goto label_49d7e0;
        case 0x49d808u: goto label_49d808;
        case 0x49d89cu: goto label_49d89c;
        case 0x49d920u: goto label_49d920;
        case 0x49d938u: goto label_49d938;
        case 0x49d9c0u: goto label_49d9c0;
        case 0x49d9e8u: goto label_49d9e8;
        case 0x49dac0u: goto label_49dac0;
        case 0x49db00u: goto label_49db00;
        case 0x49dbb8u: goto label_49dbb8;
        case 0x49dc30u: goto label_49dc30;
        case 0x49dd4cu: goto label_49dd4c;
        default: break;
    }

    ctx->pc = 0x49ce08u;

    // 0x49ce08: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x49ce08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x49ce0c: 0x8f838a20  lw          $v1, -0x75E0($gp)
    ctx->pc = 0x49ce0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x49ce10: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x49ce10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x49ce14: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x49ce14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x49ce18: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x49ce18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ce1c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x49ce1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x49ce20: 0x263b021  addu        $s6, $s3, $v1
    ctx->pc = 0x49ce20u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x49ce24: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x49ce24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x49ce28: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x49ce28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x49ce2c: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x49ce2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x49ce30: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x49ce30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x49ce34: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x49ce34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x49ce38: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x49ce38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x49ce3c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x49ce3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x49ce40: 0x92c20036  lbu         $v0, 0x36($s6)
    ctx->pc = 0x49ce40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 54)));
    // 0x49ce44: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x49ce44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x49ce48: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x49CE48u;
    {
        const bool branch_taken_0x49ce48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49CE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CE48u;
        // 0x49ce4c: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ce48) {
            ctx->pc = 0x49CEC0u;
            goto label_49cec0;
        }
    }
    ctx->pc = 0x49CE50u;
    // 0x49ce50: 0x8e68000c  lw          $t0, 0xC($s3)
    ctx->pc = 0x49ce50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x49ce54: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x49ce54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x49ce58: 0x8e690010  lw          $t1, 0x10($s3)
    ctx->pc = 0x49ce58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x49ce5c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x49ce5cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ce60: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x49ce60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x49ce64: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x49ce64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x49ce68: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x49ce68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x49ce6c: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x49ce6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    // 0x49ce70: 0xafa9002c  sw          $t1, 0x2C($sp)
    ctx->pc = 0x49ce70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 9));
    // 0x49ce74: 0x8f878a58  lw          $a3, -0x75A8($gp)
    ctx->pc = 0x49ce74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
    // 0x49ce78: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x49ce78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x49ce7c: 0x84e6001c  lh          $a2, 0x1C($a3)
    ctx->pc = 0x49ce7cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x49ce80: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x49ce80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x49ce84: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x49ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x49ce88: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x49ce88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x49ce8c: 0x84e6001e  lh          $a2, 0x1E($a3)
    ctx->pc = 0x49ce8cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 30)));
    // 0x49ce90: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x49ce90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x49ce94: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x49ce94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x49ce98: 0xafa9001c  sw          $t1, 0x1C($sp)
    ctx->pc = 0x49ce98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 9));
    // 0x49ce9c: 0xc1265d8  jal         func_499760
    ctx->pc = 0x49CE9Cu;
    SET_GPR_U32(ctx, 31, 0x49CEA4u);
    ctx->pc = 0x49CEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49CE9Cu;
    // 0x49cea0: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499760u, 0x49CE9Cu, 0x49CEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49CEA4u;
label_49cea4:
    // 0x49cea4: 0x104003aa  beqz        $v0, . + 4 + (0x3AA << 2)
    ctx->pc = 0x49CEA4u;
    {
        const bool branch_taken_0x49cea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CEA4u;
        // 0x49cea8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cea4) {
            ctx->pc = 0x49DD50u;
            goto label_49dd50;
        }
    }
    ctx->pc = 0x49CEACu;
    // 0x49ceac: 0x92620020  lbu         $v0, 0x20($s3)
    ctx->pc = 0x49ceacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x49ceb0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49ceb4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x49ceb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x49ceb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x49CEB8u;
    {
        const bool branch_taken_0x49ceb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CEB8u;
        // 0x49cebc: 0x8f828a58  lw          $v0, -0x75A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ceb8) {
            ctx->pc = 0x49CEC8u;
            goto label_49cec8;
        }
    }
    ctx->pc = 0x49CEC0u;
label_49cec0:
    // 0x49cec0: 0x100003a3  b           . + 4 + (0x3A3 << 2)
    ctx->pc = 0x49CEC0u;
    {
        const bool branch_taken_0x49cec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CEC0u;
        // 0x49cec4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cec0) {
            ctx->pc = 0x49DD50u;
            goto label_49dd50;
        }
    }
    ctx->pc = 0x49CEC8u;
label_49cec8:
    // 0x49cec8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x49cec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49cecc: 0x90430020  lbu         $v1, 0x20($v0)
    ctx->pc = 0x49ceccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x49ced0: 0x1064fffb  beq         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x49CED0u;
    {
        const bool branch_taken_0x49ced0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x49CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CED0u;
        // 0x49ced4: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ced0) {
            ctx->pc = 0x49CEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49cec0;
        }
    }
    ctx->pc = 0x49CED8u;
    // 0x49ced8: 0x91630020  lbu         $v1, 0x20($t3)
    ctx->pc = 0x49ced8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x49cedc: 0x1064fff8  beq         $v1, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x49CEDCu;
    {
        const bool branch_taken_0x49cedc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x49CEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CEDCu;
        // 0x49cee0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cedc) {
            ctx->pc = 0x49CEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49cec0;
        }
    }
    ctx->pc = 0x49CEE4u;
    // 0x49cee4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49CEE4u;
    {
        const bool branch_taken_0x49cee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CEE4u;
        // 0x49cee8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cee4) {
            ctx->pc = 0x49CEFCu;
            goto label_49cefc;
        }
    }
    ctx->pc = 0x49CEECu;
    // 0x49ceec: 0x10600059  beqz        $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x49CEECu;
    {
        const bool branch_taken_0x49ceec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CEECu;
        // 0x49cef0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ceec) {
            ctx->pc = 0x49D054u;
            goto label_49d054;
        }
    }
    ctx->pc = 0x49CEF4u;
    // 0x49cef4: 0x10000397  b           . + 4 + (0x397 << 2)
    ctx->pc = 0x49CEF4u;
    {
        const bool branch_taken_0x49cef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CEF4u;
        // 0x49cef8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cef4) {
            ctx->pc = 0x49DD54u;
            goto label_49dd54;
        }
    }
    ctx->pc = 0x49CEFCu;
label_49cefc:
    // 0x49cefc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49CEFCu;
    {
        const bool branch_taken_0x49cefc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49CF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CEFCu;
        // 0x49cf00: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cefc) {
            ctx->pc = 0x49CF14u;
            goto label_49cf14;
        }
    }
    ctx->pc = 0x49CF04u;
    // 0x49cf04: 0x10620053  beq         $v1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x49CF04u;
    {
        const bool branch_taken_0x49cf04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CF04u;
        // 0x49cf08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cf04) {
            ctx->pc = 0x49D054u;
            goto label_49d054;
        }
    }
    ctx->pc = 0x49CF0Cu;
    // 0x49cf0c: 0x10000391  b           . + 4 + (0x391 << 2)
    ctx->pc = 0x49CF0Cu;
    {
        const bool branch_taken_0x49cf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CF0Cu;
        // 0x49cf10: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cf0c) {
            ctx->pc = 0x49DD54u;
            goto label_49dd54;
        }
    }
    ctx->pc = 0x49CF14u;
label_49cf14:
    // 0x49cf14: 0x8fb10024  lw          $s1, 0x24($sp)
    ctx->pc = 0x49cf14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x49cf18: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x49cf18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x49cf1c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x49cf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x49cf20: 0x24170040  addiu       $s7, $zero, 0x40
    ctx->pc = 0x49cf20u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x49cf24: 0x8fb20014  lw          $s2, 0x14($sp)
    ctx->pc = 0x49cf24u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x49cf28: 0xc12638e  jal         func_498E38
    ctx->pc = 0x49CF28u;
    SET_GPR_U32(ctx, 31, 0x49CF30u);
    ctx->pc = 0x49CF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49CF28u;
    // 0x49cf2c: 0x222a821  addu        $s5, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498E38u, 0x49CF28u, 0x49CF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49CF30u;
label_49cf30:
    // 0x49cf30: 0x2b12023  subu        $a0, $s5, $s1
    ctx->pc = 0x49cf30u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x49cf34: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x49CF34u;
    {
        const bool branch_taken_0x49cf34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49cf34) {
            ctx->pc = 0x49D010u;
            goto label_49d010;
        }
    }
    ctx->pc = 0x49CF3Cu;
    // 0x49cf3c: 0x27948a60  addiu       $s4, $gp, -0x75A0
    ctx->pc = 0x49cf3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937184));
label_49cf40:
    // 0x49cf40: 0x2e4282b  sltu        $a1, $s7, $a0
    ctx->pc = 0x49cf40u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x49cf44: 0x8f838a68  lw          $v1, -0x7598($gp)
    ctx->pc = 0x49cf44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937192)));
    // 0x49cf48: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x49cf48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49cf4c: 0xafb10024  sw          $s1, 0x24($sp)
    ctx->pc = 0x49cf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 17));
    // 0x49cf50: 0x85100a  movz        $v0, $a0, $a1
    ctx->pc = 0x49cf50u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x49cf54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x49cf54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x49cf58: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x49cf58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x49cf5c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x49cf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x49cf60: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x49cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x49cf64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x49cf64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49cf68: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x49cf68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x49cf6c: 0xc128fd6  jal         func_4A3F58
    ctx->pc = 0x49CF6Cu;
    SET_GPR_U32(ctx, 31, 0x49CF74u);
    ctx->pc = 0x49CF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49CF6Cu;
    // 0x49cf70: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3F58u, 0x49CF6Cu, 0x49CF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49CF74u;
label_49cf74:
    // 0x49cf74: 0x8f828a68  lw          $v0, -0x7598($gp)
    ctx->pc = 0x49cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937192)));
    // 0x49cf78: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x49cf78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49cf7c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x49cf7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49cf80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49cf84: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x49cf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x49cf88: 0xc1218b8  jal         func_4862E0
    ctx->pc = 0x49CF88u;
    SET_GPR_U32(ctx, 31, 0x49CF90u);
    ctx->pc = 0x49CF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49CF88u;
    // 0x49cf8c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4862E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4862E0u, 0x49CF88u, 0x49CF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49CF90u;
label_49cf90:
    // 0x49cf90: 0x8f838a68  lw          $v1, -0x7598($gp)
    ctx->pc = 0x49cf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937192)));
    // 0x49cf94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x49cf94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x49cf98: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x49cf98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x49cf9c: 0xc1266a2  jal         func_499A88
    ctx->pc = 0x49CF9Cu;
    SET_GPR_U32(ctx, 31, 0x49CFA4u);
    ctx->pc = 0x49CFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49CF9Cu;
    // 0x49cfa0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499A88u, 0x49CF9Cu, 0x49CFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49CFA4u;
label_49cfa4:
    // 0x49cfa4: 0x8f828a68  lw          $v0, -0x7598($gp)
    ctx->pc = 0x49cfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937192)));
    // 0x49cfa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49cfa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49cfac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49cfb0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x49cfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x49cfb4: 0xc128ed2  jal         func_4A3B48
    ctx->pc = 0x49CFB4u;
    SET_GPR_U32(ctx, 31, 0x49CFBCu);
    ctx->pc = 0x49CFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49CFB4u;
    // 0x49cfb8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3B48u, 0x49CFB4u, 0x49CFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49CFBCu;
label_49cfbc:
    // 0x49cfbc: 0x8faa0028  lw          $t2, 0x28($sp)
    ctx->pc = 0x49cfbcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x49cfc0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x49cfc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49cfc4: 0x8fab002c  lw          $t3, 0x2C($sp)
    ctx->pc = 0x49cfc4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x49cfc8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x49cfc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49cfcc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x49cfccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49cfd0: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x49cfd0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x49cfd4: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x49cfd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49cfd8: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x49cfd8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x49cfdc: 0x254afff8  addiu       $t2, $t2, -0x8
    ctx->pc = 0x49cfdcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
    // 0x49cfe0: 0x256bfff8  addiu       $t3, $t3, -0x8
    ctx->pc = 0x49cfe0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967288));
    // 0x49cfe4: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x49cfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x49cfe8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x49cfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x49cfec: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x49cfecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x49cff0: 0xc126424  jal         func_499090
    ctx->pc = 0x49CFF0u;
    SET_GPR_U32(ctx, 31, 0x49CFF8u);
    ctx->pc = 0x49CFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49CFF0u;
    // 0x49cff4: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499090u, 0x49CFF0u, 0x49CFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49CFF8u;
label_49cff8:
    // 0x49cff8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x49cff8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49cffc: 0x8f828a68  lw          $v0, -0x7598($gp)
    ctx->pc = 0x49cffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937192)));
    // 0x49d000: 0x2b12023  subu        $a0, $s5, $s1
    ctx->pc = 0x49d000u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x49d004: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x49d004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x49d008: 0x1480ffcd  bnez        $a0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x49D008u;
    {
        const bool branch_taken_0x49d008 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x49D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D008u;
        // 0x49d00c: 0xaf828a68  sw          $v0, -0x7598($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d008) {
            ctx->pc = 0x49CF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49cf40;
        }
    }
    ctx->pc = 0x49D010u;
label_49d010:
    // 0x49d010: 0xc126482  jal         func_499208
    ctx->pc = 0x49D010u;
    SET_GPR_U32(ctx, 31, 0x49D018u);
    ctx->pc = 0x499208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499208u, 0x49D010u, 0x49D018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D018u;
label_49d018:
    // 0x49d018: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x49D018u;
    SET_GPR_U32(ctx, 31, 0x49D020u);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x49D018u, 0x49D020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D020u;
label_49d020:
    // 0x49d020: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x49d020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x49d024: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x49d024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x49d028: 0xc110cc4  jal         func_443310
    ctx->pc = 0x49D028u;
    SET_GPR_U32(ctx, 31, 0x49D030u);
    ctx->pc = 0x49D02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D028u;
    // 0x49d02c: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x49D028u, 0x49D030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D030u;
label_49d030:
    // 0x49d030: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x49d030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x49d034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49d034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49d038: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x49d038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x49d03c: 0x14620344  bne         $v1, $v0, . + 4 + (0x344 << 2)
    ctx->pc = 0x49D03Cu;
    {
        const bool branch_taken_0x49d03c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x49D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D03Cu;
        // 0x49d040: 0xaec30004  sw          $v1, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d03c) {
            ctx->pc = 0x49DD50u;
            goto label_49dd50;
        }
    }
    ctx->pc = 0x49D044u;
    // 0x49d044: 0xc1237ea  jal         func_48DFA8
    ctx->pc = 0x49D044u;
    SET_GPR_U32(ctx, 31, 0x49D04Cu);
    ctx->pc = 0x49D048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D044u;
    // 0x49d048: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DFA8u, 0x49D044u, 0x49D04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D04Cu;
label_49d04c:
    // 0x49d04c: 0x10000340  b           . + 4 + (0x340 << 2)
    ctx->pc = 0x49D04Cu;
    {
        const bool branch_taken_0x49d04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D04Cu;
        // 0x49d050: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d04c) {
            ctx->pc = 0x49DD50u;
            goto label_49dd50;
        }
    }
    ctx->pc = 0x49D054u;
label_49d054:
    // 0x49d054: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x49d054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x49d058: 0x1040033d  beqz        $v0, . + 4 + (0x33D << 2)
    ctx->pc = 0x49D058u;
    {
        const bool branch_taken_0x49d058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D058u;
        // 0x49d05c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d058) {
            ctx->pc = 0x49DD50u;
            goto label_49dd50;
        }
    }
    ctx->pc = 0x49D060u;
    // 0x49d060: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x49d060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x49d064: 0x1040ff96  beqz        $v0, . + 4 + (-0x6A << 2)
    ctx->pc = 0x49D064u;
    {
        const bool branch_taken_0x49d064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D064u;
        // 0x49d068: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d064) {
            ctx->pc = 0x49CEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49cec0;
        }
    }
    ctx->pc = 0x49D06Cu;
    // 0x49d06c: 0x8565001c  lh          $a1, 0x1C($t3)
    ctx->pc = 0x49d06cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 28)));
    // 0x49d070: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x49d070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49d074: 0x8d630014  lw          $v1, 0x14($t3)
    ctx->pc = 0x49d074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x49d078: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x49d078u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x49d07c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x49d07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x49d080: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x49d080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x49d084: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x49d084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x49d088: 0x380c3  sra         $s0, $v1, 3
    ctx->pc = 0x49d088u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 3));
    // 0x49d08c: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x49d08cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x49d090: 0x8562001e  lh          $v0, 0x1E($t3)
    ctx->pc = 0x49d090u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 30)));
    // 0x49d094: 0x24a30007  addiu       $v1, $a1, 0x7
    ctx->pc = 0x49d094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x49d098: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x49d098u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x49d09c: 0x388c3  sra         $s1, $v1, 3
    ctx->pc = 0x49d09cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 3));
    // 0x49d0a0: 0x14a6000e  bne         $a1, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x49D0A0u;
    {
        const bool branch_taken_0x49d0a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x49D0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D0A0u;
        // 0x49d0a4: 0xafa40014  sw          $a0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d0a0) {
            ctx->pc = 0x49D0DCu;
            goto label_49d0dc;
        }
    }
    ctx->pc = 0x49D0A8u;
    // 0x49d0a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x49d0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49d0ac: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x49d0acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x49d0b0: 0x417c2  srl         $v0, $a0, 31
    ctx->pc = 0x49d0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x49d0b4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x49d0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49d0b8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x49d0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x49d0bc: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x49d0bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x49d0c0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x49d0c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x49d0c4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x49d0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x49d0c8: 0xc29023  subu        $s2, $a2, $v0
    ctx->pc = 0x49d0c8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x49d0cc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x49d0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d0d0: 0x2439023  subu        $s2, $s2, $v1
    ctx->pc = 0x49d0d0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x49d0d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x49D0D4u;
    {
        const bool branch_taken_0x49d0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D0D4u;
        // 0x49d0d8: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d0d4) {
            ctx->pc = 0x49D100u;
            goto label_49d100;
        }
    }
    ctx->pc = 0x49D0DCu;
label_49d0dc:
    // 0x49d0dc: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x49d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x49d0e0: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x49D0E0u;
    {
        const bool branch_taken_0x49d0e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x49d0e0) {
            ctx->pc = 0x49D0E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49D0E0u;
            // 0x49d0e4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x49D0E8u;
            goto label_49d0e8;
        }
    }
    ctx->pc = 0x49D0E8u;
label_49d0e8:
    // 0x49d0e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x49d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49d0ec: 0x51001b  divu        $zero, $v0, $s1
    ctx->pc = 0x49d0ecu;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x49d0f0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x49d0f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d0f4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x49d0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d0f8: 0x2012  mflo        $a0
    ctx->pc = 0x49d0f8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x49d0fc: 0x839023  subu        $s2, $a0, $v1
    ctx->pc = 0x49d0fcu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_49d100:
    // 0x49d100: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x49d100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x49d104: 0x8f848a58  lw          $a0, -0x75A8($gp)
    ctx->pc = 0x49d104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
    // 0x49d108: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x49d108u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x49d10c: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x49D10Cu;
    {
        const bool branch_taken_0x49d10c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x49d10c) {
            ctx->pc = 0x49D110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49D10Cu;
            // 0x49d110: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x49D114u;
            goto label_49d114;
        }
    }
    ctx->pc = 0x49D114u;
label_49d114:
    // 0x49d114: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x49d114u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d118: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x49d118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x49d11c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x49d11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x49d120: 0x2463ffeb  addiu       $v1, $v1, -0x15
    ctx->pc = 0x49d120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967275));
    // 0x49d124: 0x2c640018  sltiu       $a0, $v1, 0x18
    ctx->pc = 0x49d124u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x49d128: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x49d128u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x49d12c: 0x1012  mflo        $v0
    ctx->pc = 0x49d12cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x49d130: 0x1080ff63  beqz        $a0, . + 4 + (-0x9D << 2)
    ctx->pc = 0x49D130u;
    {
        const bool branch_taken_0x49d130 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D130u;
        // 0x49d134: 0x45a023  subu        $s4, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d130) {
            ctx->pc = 0x49CEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49cec0;
        }
    }
    ctx->pc = 0x49D138u;
    // 0x49d138: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x49d138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x49d13c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x49d13cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x49d140: 0x2442fd80  addiu       $v0, $v0, -0x280
    ctx->pc = 0x49d140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966656));
    // 0x49d144: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49d144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x49d148: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x49d148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49d14c: 0x800008  jr          $a0
    ctx->pc = 0x49D14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x49CEC0u: goto label_49cec0;
            case 0x49D154u: goto label_49d154;
            case 0x49D1F8u: goto label_49d1f8;
            case 0x49D2D8u: goto label_49d2d8;
            case 0x49D780u: goto label_49d780;
            case 0x49D878u: goto label_49d878;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49D14Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x49D154u;
label_49d154:
    // 0x49d154: 0x8d660018  lw          $a2, 0x18($t3)
    ctx->pc = 0x49d154u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x49d158: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x49d158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x49d15c: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x49d15cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x49d160: 0x8fa90010  lw          $t1, 0x10($sp)
    ctx->pc = 0x49d160u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49d164: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x49d164u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x49d168: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x49d168u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49d16c: 0x1473818  mult        $a3, $t2, $a3
    ctx->pc = 0x49d16cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x49d170: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x49d170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49d174: 0x2094818  mult        $t1, $s0, $t1
    ctx->pc = 0x49d174u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x49d178: 0x2284018  mult        $t0, $s1, $t0
    ctx->pc = 0x49d178u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x49d17c: 0x8d640004  lw          $a0, 0x4($t3)
    ctx->pc = 0x49d17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x49d180: 0x8d620014  lw          $v0, 0x14($t3)
    ctx->pc = 0x49d180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x49d184: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x49d184u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d188: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x49d188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x49d18c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x49d18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x49d190: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x49d190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x49d194: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x49d194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x49d198: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x49d198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x49d19c: 0x290c3  sra         $s2, $v0, 3
    ctx->pc = 0x49d19cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 3));
    // 0x49d1a0: 0x898821  addu        $s1, $a0, $t1
    ctx->pc = 0x49d1a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x49d1a4: 0x688021  addu        $s0, $v1, $t0
    ctx->pc = 0x49d1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x49d1a8: 0x114002e8  beqz        $t2, . + 4 + (0x2E8 << 2)
    ctx->pc = 0x49D1A8u;
    {
        const bool branch_taken_0x49d1a8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D1A8u;
        // 0x49d1ac: 0xafa5001c  sw          $a1, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d1a8) {
            ctx->pc = 0x49DD4Cu;
            goto label_49dd4c;
        }
    }
    ctx->pc = 0x49D1B0u;
label_49d1b0:
    // 0x49d1b0: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x49d1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49d1b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x49d1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d1b8: 0xd20018  mult        $zero, $a2, $s2
    ctx->pc = 0x49d1b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x49d1bc: 0x3012  mflo        $a2
    ctx->pc = 0x49d1bcu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x49d1c0: 0xc10c190  jal         func_430640
    ctx->pc = 0x49D1C0u;
    SET_GPR_U32(ctx, 31, 0x49D1C8u);
    ctx->pc = 0x49D1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D1C0u;
    // 0x49d1c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x49D1C0u, 0x49D1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D1C8u;
label_49d1c8:
    // 0x49d1c8: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x49d1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49d1cc: 0x8f828a58  lw          $v0, -0x75A8($gp)
    ctx->pc = 0x49d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
    // 0x49d1d0: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x49d1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x49d1d4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x49d1d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d1d8: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x49d1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x49d1dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x49d1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x49d1e0: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x49d1e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x49d1e4: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x49d1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x49d1e8: 0x14c0fff1  bnez        $a2, . + 4 + (-0xF << 2)
    ctx->pc = 0x49D1E8u;
    {
        const bool branch_taken_0x49d1e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x49D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D1E8u;
        // 0x49d1ec: 0x2258821  addu        $s1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d1e8) {
            ctx->pc = 0x49D1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d1b0;
        }
    }
    ctx->pc = 0x49D1F0u;
    // 0x49d1f0: 0x100002d7  b           . + 4 + (0x2D7 << 2)
    ctx->pc = 0x49D1F0u;
    {
        const bool branch_taken_0x49d1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D1F0u;
        // 0x49d1f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d1f0) {
            ctx->pc = 0x49DD50u;
            goto label_49dd50;
        }
    }
    ctx->pc = 0x49D1F8u;
label_49d1f8:
    // 0x49d1f8: 0x8d660018  lw          $a2, 0x18($t3)
    ctx->pc = 0x49d1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x49d1fc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x49d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x49d200: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x49d200u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x49d204: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x49d204u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49d208: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x49d208u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x49d20c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x49d20cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49d210: 0x1473818  mult        $a3, $t2, $a3
    ctx->pc = 0x49d210u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x49d214: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x49d214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49d218: 0x2084018  mult        $t0, $s0, $t0
    ctx->pc = 0x49d218u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x49d21c: 0x2252818  mult        $a1, $s1, $a1
    ctx->pc = 0x49d21cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x49d220: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x49d220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x49d224: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x49d224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x49d228: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x49d228u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d22c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x49d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x49d230: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x49d230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x49d234: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x49d234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x49d238: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x49d238u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x49d23c: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x49d23cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x49d240: 0x112002c2  beqz        $t1, . + 4 + (0x2C2 << 2)
    ctx->pc = 0x49D240u;
    {
        const bool branch_taken_0x49d240 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D240u;
        // 0x49d244: 0xafa4001c  sw          $a0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d240) {
            ctx->pc = 0x49DD4Cu;
            goto label_49dd4c;
        }
    }
    ctx->pc = 0x49D248u;
    // 0x49d248: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x49d248u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x49d24c: 0x126040  sll         $t4, $s2, 1
    ctx->pc = 0x49d24cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x49d250: 0x145880  sll         $t3, $s4, 2
    ctx->pc = 0x49d250u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x49d254: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x49d254u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_49d258:
    // 0x49d258: 0x8faa0018  lw          $t2, 0x18($sp)
    ctx->pc = 0x49d258u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49d25c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x49d25cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x49d260: 0x11470015  beq         $t2, $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x49D260u;
    {
        const bool branch_taken_0x49d260 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 7));
        ctx->pc = 0x49D264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D260u;
        // 0x49d264: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d260) {
            ctx->pc = 0x49D2B8u;
            goto label_49d2b8;
        }
    }
    ctx->pc = 0x49D268u;
    // 0x49d268: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x49d268u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x49d26c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x49d26cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_49d270:
    // 0x49d270: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x49d270u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49d274: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x49d274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x49d278: 0x30647c00  andi        $a0, $v1, 0x7C00
    ctx->pc = 0x49d278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31744);
    // 0x49d27c: 0x306503e0  andi        $a1, $v1, 0x3E0
    ctx->pc = 0x49d27cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)992);
    // 0x49d280: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49d280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49d284: 0x42240  sll         $a0, $a0, 9
    ctx->pc = 0x49d284u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
    // 0x49d288: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x49d288u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x49d28c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49d28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49d290: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x49d290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x49d294: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x49d294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x49d298: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x49d298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x49d29c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x49d29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x49d2a0: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x49d2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x49d2a4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x49d2a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x49d2a8: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x49d2a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x49d2ac: 0x1549fff0  bne         $t2, $t1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x49D2ACu;
    {
        const bool branch_taken_0x49d2ac = (GPR_U64(ctx, 10) != GPR_U64(ctx, 9));
        ctx->pc = 0x49D2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D2ACu;
        // 0x49d2b0: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d2ac) {
            ctx->pc = 0x49D270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d270;
        }
    }
    ctx->pc = 0x49D2B4u;
    // 0x49d2b4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_49d2b8:
    // 0x49d2b8: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x49d2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x49d2bc: 0x10b4021  addu        $t0, $t0, $t3
    ctx->pc = 0x49d2bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x49d2c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49d2c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d2c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49d2c8: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x49D2C8u;
    {
        const bool branch_taken_0x49d2c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49D2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D2C8u;
        // 0x49d2cc: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d2c8) {
            ctx->pc = 0x49D258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d258;
        }
    }
    ctx->pc = 0x49D2D0u;
    // 0x49d2d0: 0x1000029f  b           . + 4 + (0x29F << 2)
    ctx->pc = 0x49D2D0u;
    {
        const bool branch_taken_0x49d2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D2D0u;
        // 0x49d2d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d2d0) {
            ctx->pc = 0x49DD50u;
            goto label_49dd50;
        }
    }
    ctx->pc = 0x49D2D8u;
label_49d2d8:
    // 0x49d2d8: 0x92620022  lbu         $v0, 0x22($s3)
    ctx->pc = 0x49d2d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x49d2dc: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x49d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x49d2e0: 0x30550001  andi        $s5, $v0, 0x1
    ctx->pc = 0x49d2e0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x49d2e4: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x49D2E4u;
    {
        const bool branch_taken_0x49d2e4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x49D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D2E4u;
        // 0x49d2e8: 0x8f868a58  lw          $a2, -0x75A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d2e4) {
            ctx->pc = 0x49D300u;
            goto label_49d300;
        }
    }
    ctx->pc = 0x49D2ECu;
    // 0x49d2ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x49d2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d2f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49d2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d2f4: 0xc121902  jal         func_486408
    ctx->pc = 0x49D2F4u;
    SET_GPR_U32(ctx, 31, 0x49D2FCu);
    ctx->pc = 0x49D2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D2F4u;
    // 0x49d2f8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486408u, 0x49D2F4u, 0x49D2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D2FCu;
label_49d2fc:
    // 0x49d2fc: 0x8f868a58  lw          $a2, -0x75A8($gp)
    ctx->pc = 0x49d2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
label_49d300:
    // 0x49d300: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x49d300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x49d304: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x49d304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x49d308: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x49d308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x49d30c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x49d30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49d310: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x49d310u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49d314: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x49d314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x49d318: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x49d318u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x49d31c: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x49d31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x49d320: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49d320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49d324: 0x14a70069  bne         $a1, $a3, . + 4 + (0x69 << 2)
    ctx->pc = 0x49D324u;
    {
        const bool branch_taken_0x49d324 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x49D328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D324u;
        // 0x49d328: 0x444021  addu        $t0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d324) {
            ctx->pc = 0x49D4CCu;
            goto label_49d4cc;
        }
    }
    ctx->pc = 0x49D32Cu;
    // 0x49d32c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x49d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x49d330: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x49d330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49d334: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x49d334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x49d338: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x49d338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49d33c: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x49d33cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x49d340: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x49d340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x49d344: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x49d344u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x49d348: 0x92620023  lbu         $v0, 0x23($s3)
    ctx->pc = 0x49d348u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
    // 0x49d34c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x49d34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x49d350: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x49d350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x49d354: 0x14460034  bne         $v0, $a2, . + 4 + (0x34 << 2)
    ctx->pc = 0x49D354u;
    {
        const bool branch_taken_0x49d354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x49D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D354u;
        // 0x49d358: 0x643821  addu        $a3, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d354) {
            ctx->pc = 0x49D428u;
            goto label_49d428;
        }
    }
    ctx->pc = 0x49D35Cu;
    // 0x49d35c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49d35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49d360: 0x8e6c0008  lw          $t4, 0x8($s3)
    ctx->pc = 0x49d360u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x49d364: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49d364u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d368: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49d368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49d36c: 0x10600273  beqz        $v1, . + 4 + (0x273 << 2)
    ctx->pc = 0x49D36Cu;
    {
        const bool branch_taken_0x49d36c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D36Cu;
        // 0x49d370: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d36c) {
            ctx->pc = 0x49DD3Cu;
            goto label_49dd3c;
        }
    }
    ctx->pc = 0x49D374u;
    // 0x49d374: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x49d374u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x49d378: 0x145880  sll         $t3, $s4, 2
    ctx->pc = 0x49d378u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x49d37c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x49d37cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_49d380:
    // 0x49d380: 0x8faa0018  lw          $t2, 0x18($sp)
    ctx->pc = 0x49d380u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49d384: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x49d384u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x49d388: 0x1149001f  beq         $t2, $t1, . + 4 + (0x1F << 2)
    ctx->pc = 0x49D388u;
    {
        const bool branch_taken_0x49d388 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 9));
        ctx->pc = 0x49D38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D388u;
        // 0x49d38c: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d388) {
            ctx->pc = 0x49D408u;
            goto label_49d408;
        }
    }
    ctx->pc = 0x49D390u;
    // 0x49d390: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x49d390u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x49d394: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x49d394u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_49d398:
    // 0x49d398: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x49d398u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49d39c: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x49d39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x49d3a0: 0x30440008  andi        $a0, $v0, 0x8
    ctx->pc = 0x49d3a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x49d3a4: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x49d3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x49d3a8: 0x304200e7  andi        $v0, $v0, 0xE7
    ctx->pc = 0x49d3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)231);
    // 0x49d3ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x49d3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x49d3b0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x49d3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x49d3b4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49d3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49d3b8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x49d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49d3bc: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x49d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x49d3c0: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x49d3c0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49d3c4: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x49d3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x49d3c8: 0x30827c00  andi        $v0, $a0, 0x7C00
    ctx->pc = 0x49d3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x49d3cc: 0x308503e0  andi        $a1, $a0, 0x3E0
    ctx->pc = 0x49d3ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)992);
    // 0x49d3d0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49d3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49d3d4: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x49d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x49d3d8: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x49d3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x49d3dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49d3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49d3e0: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x49d3e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x49d3e4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x49d3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x49d3e8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x49d3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x49d3ec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x49d3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x49d3f0: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x49d3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x49d3f4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x49d3f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x49d3f8: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x49d3f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x49d3fc: 0x1546ffe6  bne         $t2, $a2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x49D3FCu;
    {
        const bool branch_taken_0x49d3fc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 6));
        ctx->pc = 0x49D400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D3FCu;
        // 0x49d400: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d3fc) {
            ctx->pc = 0x49D398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d398;
        }
    }
    ctx->pc = 0x49D404u;
    // 0x49d404: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49d404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_49d408:
    // 0x49d408: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x49d408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x49d40c: 0x10b4021  addu        $t0, $t0, $t3
    ctx->pc = 0x49d40cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x49d410: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49d410u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d414: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49d414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49d418: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x49D418u;
    {
        const bool branch_taken_0x49d418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49D41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D418u;
        // 0x49d41c: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d418) {
            ctx->pc = 0x49D380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d380;
        }
    }
    ctx->pc = 0x49D420u;
    // 0x49d420: 0x10000246  b           . + 4 + (0x246 << 2)
    ctx->pc = 0x49D420u;
    {
        const bool branch_taken_0x49d420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49d420) {
            ctx->pc = 0x49DD3Cu;
            goto label_49dd3c;
        }
    }
    ctx->pc = 0x49D428u;
label_49d428:
    // 0x49d428: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49d428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49d42c: 0x8e690008  lw          $t1, 0x8($s3)
    ctx->pc = 0x49d42cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x49d430: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49d430u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d434: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49d434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49d438: 0x10600240  beqz        $v1, . + 4 + (0x240 << 2)
    ctx->pc = 0x49D438u;
    {
        const bool branch_taken_0x49d438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D438u;
        // 0x49d43c: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d438) {
            ctx->pc = 0x49DD3Cu;
            goto label_49dd3c;
        }
    }
    ctx->pc = 0x49D440u;
    // 0x49d440: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x49d440u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x49d444: 0x145880  sll         $t3, $s4, 2
    ctx->pc = 0x49d444u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x49d448: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x49d448u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x49d44c: 0x0  nop
    ctx->pc = 0x49d44cu;
    // NOP
label_49d450:
    // 0x49d450: 0x8faa0018  lw          $t2, 0x18($sp)
    ctx->pc = 0x49d450u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49d454: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x49d454u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x49d458: 0x11460014  beq         $t2, $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x49D458u;
    {
        const bool branch_taken_0x49d458 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 6));
        ctx->pc = 0x49D45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D458u;
        // 0x49d45c: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d458) {
            ctx->pc = 0x49D4ACu;
            goto label_49d4ac;
        }
    }
    ctx->pc = 0x49D460u;
    // 0x49d460: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x49d460u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x49d464: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x49d464u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_49d468:
    // 0x49d468: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x49d468u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49d46c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x49d46cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x49d470: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x49d470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x49d474: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x49d474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x49d478: 0x30440008  andi        $a0, $v0, 0x8
    ctx->pc = 0x49d478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x49d47c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x49d47cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x49d480: 0x304200e7  andi        $v0, $v0, 0xE7
    ctx->pc = 0x49d480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)231);
    // 0x49d484: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x49d484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x49d488: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x49d488u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x49d48c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49d48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49d490: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49d490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49d494: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x49d494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x49d498: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x49d498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49d49c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x49d49cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x49d4a0: 0x1545fff1  bne         $t2, $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x49D4A0u;
    {
        const bool branch_taken_0x49d4a0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 5));
        ctx->pc = 0x49D4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D4A0u;
        // 0x49d4a4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d4a0) {
            ctx->pc = 0x49D468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d468;
        }
    }
    ctx->pc = 0x49D4A8u;
    // 0x49d4a8: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_49d4ac:
    // 0x49d4ac: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x49d4acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x49d4b0: 0x10b4021  addu        $t0, $t0, $t3
    ctx->pc = 0x49d4b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x49d4b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49d4b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d4b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49d4bc: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x49D4BCu;
    {
        const bool branch_taken_0x49d4bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49D4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D4BCu;
        // 0x49d4c0: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d4bc) {
            ctx->pc = 0x49D450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d450;
        }
    }
    ctx->pc = 0x49D4C4u;
    // 0x49d4c4: 0x1000021d  b           . + 4 + (0x21D << 2)
    ctx->pc = 0x49D4C4u;
    {
        const bool branch_taken_0x49d4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49d4c4) {
            ctx->pc = 0x49DD3Cu;
            goto label_49dd3c;
        }
    }
    ctx->pc = 0x49D4CCu;
label_49d4cc:
    // 0x49d4cc: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x49d4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x49d4d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x49d4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49d4d4: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x49d4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x49d4d8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x49d4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x49d4dc: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x49d4dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x49d4e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x49d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49d4e4: 0x92630023  lbu         $v1, 0x23($s3)
    ctx->pc = 0x49d4e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
    // 0x49d4e8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x49d4e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x49d4ec: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x49d4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x49d4f0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x49d4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x49d4f4: 0x1466006a  bne         $v1, $a2, . + 4 + (0x6A << 2)
    ctx->pc = 0x49D4F4u;
    {
        const bool branch_taken_0x49d4f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x49D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D4F4u;
        // 0x49d4f8: 0x823821  addu        $a3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d4f4) {
            ctx->pc = 0x49D6A0u;
            goto label_49d6a0;
        }
    }
    ctx->pc = 0x49D4FCu;
    // 0x49d4fc: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49d4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49d500: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x49d500u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x49d504: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49d504u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d508: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49d508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49d50c: 0x1060020b  beqz        $v1, . + 4 + (0x20B << 2)
    ctx->pc = 0x49D50Cu;
    {
        const bool branch_taken_0x49d50c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D50Cu;
        // 0x49d510: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d50c) {
            ctx->pc = 0x49DD3Cu;
            goto label_49dd3c;
        }
    }
    ctx->pc = 0x49D514u;
    // 0x49d514: 0x0  nop
    ctx->pc = 0x49d514u;
    // NOP
label_49d518:
    // 0x49d518: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x49d518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49d51c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x49d51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x49d520: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x49D520u;
    {
        const bool branch_taken_0x49d520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D520u;
        // 0x49d524: 0x8faa0018  lw          $t2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d520) {
            ctx->pc = 0x49D578u;
            goto label_49d578;
        }
    }
    ctx->pc = 0x49D528u;
    // 0x49d528: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x49d528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49d52c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x49d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x49d530: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x49d530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49d534: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x49d534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x49d538: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x49d538u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49d53c: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x49d53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x49d540: 0x30827c00  andi        $v0, $a0, 0x7C00
    ctx->pc = 0x49d540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x49d544: 0x308503e0  andi        $a1, $a0, 0x3E0
    ctx->pc = 0x49d544u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)992);
    // 0x49d548: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49d548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49d54c: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x49d54cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x49d550: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x49d550u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x49d554: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49d554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49d558: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x49d558u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x49d55c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x49d55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x49d560: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x49d560u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x49d564: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x49d564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x49d568: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x49d568u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x49d56c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x49d56cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x49d570: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x49d570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x49d574: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x49d574u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_49d578:
    // 0x49d578: 0x2d420002  sltiu       $v0, $t2, 0x2
    ctx->pc = 0x49d578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x49d57c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x49D57Cu;
    {
        const bool branch_taken_0x49d57c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49D580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D57Cu;
        // 0x49d580: 0x145880  sll         $t3, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d57c) {
            ctx->pc = 0x49D628u;
            goto label_49d628;
        }
    }
    ctx->pc = 0x49D584u;
    // 0x49d584: 0x0  nop
    ctx->pc = 0x49d584u;
    // NOP
label_49d588:
    // 0x49d588: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x49d588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49d58c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x49d58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x49d590: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x49d590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49d594: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x49d594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x49d598: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x49d598u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49d59c: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x49d59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x49d5a0: 0x30827c00  andi        $v0, $a0, 0x7C00
    ctx->pc = 0x49d5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x49d5a4: 0x308503e0  andi        $a1, $a0, 0x3E0
    ctx->pc = 0x49d5a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)992);
    // 0x49d5a8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49d5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49d5ac: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x49d5acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x49d5b0: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x49d5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x49d5b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49d5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49d5b8: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x49d5b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x49d5bc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x49d5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x49d5c0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x49d5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x49d5c4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x49d5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x49d5c8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x49d5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x49d5cc: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x49d5ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x49d5d0: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x49d5d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49d5d4: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x49d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x49d5d8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x49d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49d5dc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x49d5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x49d5e0: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x49d5e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49d5e4: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x49d5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x49d5e8: 0x30827c00  andi        $v0, $a0, 0x7C00
    ctx->pc = 0x49d5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x49d5ec: 0x308503e0  andi        $a1, $a0, 0x3E0
    ctx->pc = 0x49d5ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)992);
    // 0x49d5f0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49d5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49d5f4: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x49d5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x49d5f8: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x49d5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x49d5fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49d5fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49d600: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x49d600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x49d604: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x49d604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x49d608: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x49d608u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x49d60c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x49d60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x49d610: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x49d610u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x49d614: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x49d614u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x49d618: 0x254afffe  addiu       $t2, $t2, -0x2
    ctx->pc = 0x49d618u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967294));
    // 0x49d61c: 0x2d420002  sltiu       $v0, $t2, 0x2
    ctx->pc = 0x49d61cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x49d620: 0x1040ffd9  beqz        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x49D620u;
    {
        const bool branch_taken_0x49d620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D620u;
        // 0x49d624: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d620) {
            ctx->pc = 0x49D588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d588;
        }
    }
    ctx->pc = 0x49D628u;
label_49d628:
    // 0x49d628: 0x11400015  beqz        $t2, . + 4 + (0x15 << 2)
    ctx->pc = 0x49D628u;
    {
        const bool branch_taken_0x49d628 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D628u;
        // 0x49d62c: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d628) {
            ctx->pc = 0x49D680u;
            goto label_49d680;
        }
    }
    ctx->pc = 0x49D630u;
    // 0x49d630: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x49d630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49d634: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x49d634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x49d638: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x49d638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49d63c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x49d63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x49d640: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x49d640u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49d644: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x49d644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x49d648: 0x30827c00  andi        $v0, $a0, 0x7C00
    ctx->pc = 0x49d648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x49d64c: 0x308503e0  andi        $a1, $a0, 0x3E0
    ctx->pc = 0x49d64cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)992);
    // 0x49d650: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49d650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49d654: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x49d654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x49d658: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x49d658u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x49d65c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49d65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49d660: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x49d660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x49d664: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x49d664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x49d668: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x49d668u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x49d66c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x49d66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x49d670: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x49d670u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x49d674: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x49d674u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x49d678: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49d678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49d67c: 0x0  nop
    ctx->pc = 0x49d67cu;
    // NOP
label_49d680:
    // 0x49d680: 0x10b4021  addu        $t0, $t0, $t3
    ctx->pc = 0x49d680u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x49d684: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x49d684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x49d688: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49d688u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d68c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49d690: 0x1460ffa1  bnez        $v1, . + 4 + (-0x5F << 2)
    ctx->pc = 0x49D690u;
    {
        const bool branch_taken_0x49d690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49D694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D690u;
        // 0x49d694: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d690) {
            ctx->pc = 0x49D518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d518;
        }
    }
    ctx->pc = 0x49D698u;
    // 0x49d698: 0x100001a8  b           . + 4 + (0x1A8 << 2)
    ctx->pc = 0x49D698u;
    {
        const bool branch_taken_0x49d698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49d698) {
            ctx->pc = 0x49DD3Cu;
            goto label_49dd3c;
        }
    }
    ctx->pc = 0x49D6A0u;
label_49d6a0:
    // 0x49d6a0: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49d6a4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x49D6A4u;
    {
        const bool branch_taken_0x49d6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D6A4u;
        // 0x49d6a8: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d6a4) {
            ctx->pc = 0x49D768u;
            goto label_49d768;
        }
    }
    ctx->pc = 0x49D6ACu;
    // 0x49d6ac: 0x0  nop
    ctx->pc = 0x49d6acu;
    // NOP
label_49d6b0:
    // 0x49d6b0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x49d6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49d6b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x49d6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x49d6b8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x49D6B8u;
    {
        const bool branch_taken_0x49d6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D6B8u;
        // 0x49d6bc: 0x8faa0018  lw          $t2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d6b8) {
            ctx->pc = 0x49D6E4u;
            goto label_49d6e4;
        }
    }
    ctx->pc = 0x49D6C0u;
    // 0x49d6c0: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x49d6c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49d6c4: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x49d6c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x49d6c8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x49d6c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x49d6cc: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x49d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x49d6d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49d6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49d6d4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x49d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x49d6d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x49d6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49d6dc: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x49d6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x49d6e0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x49d6e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_49d6e4:
    // 0x49d6e4: 0x2d420002  sltiu       $v0, $t2, 0x2
    ctx->pc = 0x49d6e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x49d6e8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x49D6E8u;
    {
        const bool branch_taken_0x49d6e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D6E8u;
        // 0x49d6ec: 0x145880  sll         $t3, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d6e8) {
            ctx->pc = 0x49D738u;
            goto label_49d738;
        }
    }
    ctx->pc = 0x49D6F0u;
label_49d6f0:
    // 0x49d6f0: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x49d6f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49d6f4: 0x254afffe  addiu       $t2, $t2, -0x2
    ctx->pc = 0x49d6f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967294));
    // 0x49d6f8: 0x2d440002  sltiu       $a0, $t2, 0x2
    ctx->pc = 0x49d6f8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x49d6fc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x49d6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x49d700: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49d700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49d704: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x49d704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x49d708: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x49d708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49d70c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x49d70cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x49d710: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x49d710u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x49d714: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x49d714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49d718: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x49d718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x49d71c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x49d71cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x49d720: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49d720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49d724: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x49d724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x49d728: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x49d728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49d72c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x49d72cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x49d730: 0x1080ffef  beqz        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x49D730u;
    {
        const bool branch_taken_0x49d730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D730u;
        // 0x49d734: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d730) {
            ctx->pc = 0x49D6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d6f0;
        }
    }
    ctx->pc = 0x49D738u;
label_49d738:
    // 0x49d738: 0x11400009  beqz        $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x49D738u;
    {
        const bool branch_taken_0x49d738 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D738u;
        // 0x49d73c: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d738) {
            ctx->pc = 0x49D760u;
            goto label_49d760;
        }
    }
    ctx->pc = 0x49D740u;
    // 0x49d740: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x49d740u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49d744: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x49d744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x49d748: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49d748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49d74c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x49d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x49d750: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x49d750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49d754: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x49d754u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x49d758: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x49d758u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x49d75c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_49d760:
    // 0x49d760: 0x10b4021  addu        $t0, $t0, $t3
    ctx->pc = 0x49d760u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x49d764: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x49d764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
label_49d768:
    // 0x49d768: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49d768u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d76c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49d770: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x49D770u;
    {
        const bool branch_taken_0x49d770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49D774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D770u;
        // 0x49d774: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d770) {
            ctx->pc = 0x49D6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d6b0;
        }
    }
    ctx->pc = 0x49D778u;
    // 0x49d778: 0x10000170  b           . + 4 + (0x170 << 2)
    ctx->pc = 0x49D778u;
    {
        const bool branch_taken_0x49d778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49d778) {
            ctx->pc = 0x49DD3Cu;
            goto label_49dd3c;
        }
    }
    ctx->pc = 0x49D780u;
label_49d780:
    // 0x49d780: 0x8d660018  lw          $a2, 0x18($t3)
    ctx->pc = 0x49d780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x49d784: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x49d784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x49d788: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x49d788u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x49d78c: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x49d78cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49d790: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x49d790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x49d794: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x49d794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49d798: 0x1473818  mult        $a3, $t2, $a3
    ctx->pc = 0x49d798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x49d79c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x49d79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49d7a0: 0x2084018  mult        $t0, $s0, $t0
    ctx->pc = 0x49d7a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x49d7a4: 0x2252818  mult        $a1, $s1, $a1
    ctx->pc = 0x49d7a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x49d7a8: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x49d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x49d7ac: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x49d7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x49d7b0: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x49d7b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d7b4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x49d7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x49d7b8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x49d7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x49d7bc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x49d7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x49d7c0: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x49d7c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x49d7c4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x49d7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x49d7c8: 0x11200160  beqz        $t1, . + 4 + (0x160 << 2)
    ctx->pc = 0x49D7C8u;
    {
        const bool branch_taken_0x49d7c8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D7C8u;
        // 0x49d7cc: 0xafa4001c  sw          $a0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d7c8) {
            ctx->pc = 0x49DD4Cu;
            goto label_49dd4c;
        }
    }
    ctx->pc = 0x49D7D0u;
    // 0x49d7d0: 0x3c0effff  lui         $t6, 0xFFFF
    ctx->pc = 0x49d7d0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)65535 << 16));
    // 0x49d7d4: 0x123080  sll         $a2, $s2, 2
    ctx->pc = 0x49d7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x49d7d8: 0x146840  sll         $t5, $s4, 1
    ctx->pc = 0x49d7d8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x49d7dc: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x49d7dcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
label_49d7e0:
    // 0x49d7e0: 0x8faa0018  lw          $t2, 0x18($sp)
    ctx->pc = 0x49d7e0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49d7e4: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x49d7e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x49d7e8: 0x114e001b  beq         $t2, $t6, . + 4 + (0x1B << 2)
    ctx->pc = 0x49D7E8u;
    {
        const bool branch_taken_0x49d7e8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 14));
        ctx->pc = 0x49D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D7E8u;
        // 0x49d7ec: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d7e8) {
            ctx->pc = 0x49D858u;
            goto label_49d858;
        }
    }
    ctx->pc = 0x49D7F0u;
    // 0x49d7f0: 0x3c0b3fff  lui         $t3, 0x3FFF
    ctx->pc = 0x49d7f0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16383 << 16));
    // 0x49d7f4: 0x3c0cffff  lui         $t4, 0xFFFF
    ctx->pc = 0x49d7f4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65535 << 16));
    // 0x49d7f8: 0x3c0700f8  lui         $a3, 0xF8
    ctx->pc = 0x49d7f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)248 << 16));
    // 0x49d7fc: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x49d7fcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x49d800: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x49d800u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x49d804: 0x0  nop
    ctx->pc = 0x49d804u;
    // NOP
label_49d808:
    // 0x49d808: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49d808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49d80c: 0x471824  and         $v1, $v0, $a3
    ctx->pc = 0x49d80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x49d810: 0x3044f800  andi        $a0, $v0, 0xF800
    ctx->pc = 0x49d810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63488);
    // 0x49d814: 0x34a42  srl         $t1, $v1, 9
    ctx->pc = 0x49d814u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), 9));
    // 0x49d818: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x49d818u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x49d81c: 0x304300f8  andi        $v1, $v0, 0xF8
    ctx->pc = 0x49d81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)248);
    // 0x49d820: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x49d820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x49d824: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49D824u;
    {
        const bool branch_taken_0x49d824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D824u;
        // 0x49d828: 0x318c2  srl         $v1, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d824) {
            ctx->pc = 0x49D838u;
            goto label_49d838;
        }
    }
    ctx->pc = 0x49D82Cu;
    // 0x49d82c: 0x34828000  ori         $v0, $a0, 0x8000
    ctx->pc = 0x49d82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x49d830: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x49D830u;
    {
        const bool branch_taken_0x49d830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D830u;
        // 0x49d834: 0x1221025  or          $v0, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d830) {
            ctx->pc = 0x49D83Cu;
            goto label_49d83c;
        }
    }
    ctx->pc = 0x49D838u;
label_49d838:
    // 0x49d838: 0x1241025  or          $v0, $t1, $a0
    ctx->pc = 0x49d838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
label_49d83c:
    // 0x49d83c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x49d83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x49d840: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x49d840u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49d844: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x49d844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x49d848: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x49d848u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x49d84c: 0x154cffee  bne         $t2, $t4, . + 4 + (-0x12 << 2)
    ctx->pc = 0x49D84Cu;
    {
        const bool branch_taken_0x49d84c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        ctx->pc = 0x49D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D84Cu;
        // 0x49d850: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d84c) {
            ctx->pc = 0x49D808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d808;
        }
    }
    ctx->pc = 0x49D854u;
    // 0x49d854: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49d854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_49d858:
    // 0x49d858: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x49d858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x49d85c: 0x10d4021  addu        $t0, $t0, $t5
    ctx->pc = 0x49d85cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x49d860: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49d860u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d864: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49d864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49d868: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x49D868u;
    {
        const bool branch_taken_0x49d868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49D86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D868u;
        // 0x49d86c: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d868) {
            ctx->pc = 0x49D7E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d7e0;
        }
    }
    ctx->pc = 0x49D870u;
    // 0x49d870: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x49D870u;
    {
        const bool branch_taken_0x49d870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D870u;
        // 0x49d874: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d870) {
            ctx->pc = 0x49DD50u;
            goto label_49dd50;
        }
    }
    ctx->pc = 0x49D878u;
label_49d878:
    // 0x49d878: 0x92620022  lbu         $v0, 0x22($s3)
    ctx->pc = 0x49d878u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x49d87c: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x49d87cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x49d880: 0x30550001  andi        $s5, $v0, 0x1
    ctx->pc = 0x49d880u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x49d884: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x49D884u;
    {
        const bool branch_taken_0x49d884 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x49D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D884u;
        // 0x49d888: 0x8f868a58  lw          $a2, -0x75A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d884) {
            ctx->pc = 0x49D8A0u;
            goto label_49d8a0;
        }
    }
    ctx->pc = 0x49D88Cu;
    // 0x49d88c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x49d88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d890: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49d890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d894: 0xc121902  jal         func_486408
    ctx->pc = 0x49D894u;
    SET_GPR_U32(ctx, 31, 0x49D89Cu);
    ctx->pc = 0x49D898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D894u;
    // 0x49d898: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486408u, 0x49D894u, 0x49D89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D89Cu;
label_49d89c:
    // 0x49d89c: 0x8f868a58  lw          $a2, -0x75A8($gp)
    ctx->pc = 0x49d89cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
label_49d8a0:
    // 0x49d8a0: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x49d8a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x49d8a4: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x49d8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x49d8a8: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x49d8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x49d8ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x49d8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49d8b0: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x49d8b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49d8b4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x49d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x49d8b8: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x49d8b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x49d8bc: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x49d8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x49d8c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49d8c4: 0x14a7006c  bne         $a1, $a3, . + 4 + (0x6C << 2)
    ctx->pc = 0x49D8C4u;
    {
        const bool branch_taken_0x49d8c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x49D8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D8C4u;
        // 0x49d8c8: 0x444021  addu        $t0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d8c4) {
            ctx->pc = 0x49DA78u;
            goto label_49da78;
        }
    }
    ctx->pc = 0x49D8CCu;
    // 0x49d8cc: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x49d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x49d8d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x49d8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49d8d4: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x49d8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x49d8d8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x49d8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49d8dc: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x49d8dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x49d8e0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x49d8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x49d8e4: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x49d8e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x49d8e8: 0x92620023  lbu         $v0, 0x23($s3)
    ctx->pc = 0x49d8e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
    // 0x49d8ec: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x49d8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x49d8f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x49d8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x49d8f4: 0x14460029  bne         $v0, $a2, . + 4 + (0x29 << 2)
    ctx->pc = 0x49D8F4u;
    {
        const bool branch_taken_0x49d8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x49D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D8F4u;
        // 0x49d8f8: 0x642821  addu        $a1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d8f4) {
            ctx->pc = 0x49D99Cu;
            goto label_49d99c;
        }
    }
    ctx->pc = 0x49D8FCu;
    // 0x49d8fc: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49d900: 0x8e690008  lw          $t1, 0x8($s3)
    ctx->pc = 0x49d900u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x49d904: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49d904u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d908: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49d908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49d90c: 0x1060010b  beqz        $v1, . + 4 + (0x10B << 2)
    ctx->pc = 0x49D90Cu;
    {
        const bool branch_taken_0x49d90c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D90Cu;
        // 0x49d910: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d90c) {
            ctx->pc = 0x49DD3Cu;
            goto label_49dd3c;
        }
    }
    ctx->pc = 0x49D914u;
    // 0x49d914: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x49d914u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x49d918: 0x146840  sll         $t5, $s4, 1
    ctx->pc = 0x49d918u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x49d91c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x49d91cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_49d920:
    // 0x49d920: 0x8faa0018  lw          $t2, 0x18($sp)
    ctx->pc = 0x49d920u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49d924: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x49d924u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x49d928: 0x11470014  beq         $t2, $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x49D928u;
    {
        const bool branch_taken_0x49d928 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 7));
        ctx->pc = 0x49D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D928u;
        // 0x49d92c: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d928) {
            ctx->pc = 0x49D97Cu;
            goto label_49d97c;
        }
    }
    ctx->pc = 0x49D930u;
    // 0x49d930: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x49d930u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x49d934: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x49d934u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_49d938:
    // 0x49d938: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x49d938u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49d93c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x49d93cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x49d940: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x49d940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x49d944: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x49d944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x49d948: 0x30440008  andi        $a0, $v0, 0x8
    ctx->pc = 0x49d948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x49d94c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x49d94cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x49d950: 0x304200e7  andi        $v0, $v0, 0xE7
    ctx->pc = 0x49d950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)231);
    // 0x49d954: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x49d954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x49d958: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x49d958u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x49d95c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49d95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49d960: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x49d960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49d964: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x49d964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x49d968: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x49d968u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49d96c: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x49d96cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49d970: 0x1546fff1  bne         $t2, $a2, . + 4 + (-0xF << 2)
    ctx->pc = 0x49D970u;
    {
        const bool branch_taken_0x49d970 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 6));
        ctx->pc = 0x49D974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D970u;
        // 0x49d974: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d970) {
            ctx->pc = 0x49D938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d938;
        }
    }
    ctx->pc = 0x49D978u;
    // 0x49d978: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49d978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_49d97c:
    // 0x49d97c: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x49d97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x49d980: 0x10d4021  addu        $t0, $t0, $t5
    ctx->pc = 0x49d980u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x49d984: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49d984u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d988: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49d988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49d98c: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x49D98Cu;
    {
        const bool branch_taken_0x49d98c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49D990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D98Cu;
        // 0x49d990: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d98c) {
            ctx->pc = 0x49D920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d920;
        }
    }
    ctx->pc = 0x49D994u;
    // 0x49d994: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x49D994u;
    {
        const bool branch_taken_0x49d994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49d994) {
            ctx->pc = 0x49DD3Cu;
            goto label_49dd3c;
        }
    }
    ctx->pc = 0x49D99Cu;
label_49d99c:
    // 0x49d99c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49d9a0: 0x8e6c0008  lw          $t4, 0x8($s3)
    ctx->pc = 0x49d9a0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x49d9a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49d9a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d9a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49d9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49d9ac: 0x106000e3  beqz        $v1, . + 4 + (0xE3 << 2)
    ctx->pc = 0x49D9ACu;
    {
        const bool branch_taken_0x49d9ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D9ACu;
        // 0x49d9b0: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d9ac) {
            ctx->pc = 0x49DD3Cu;
            goto label_49dd3c;
        }
    }
    ctx->pc = 0x49D9B4u;
    // 0x49d9b4: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x49d9b4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
    // 0x49d9b8: 0x146840  sll         $t5, $s4, 1
    ctx->pc = 0x49d9b8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x49d9bc: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x49d9bcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
label_49d9c0:
    // 0x49d9c0: 0x8faa0018  lw          $t2, 0x18($sp)
    ctx->pc = 0x49d9c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49d9c4: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x49d9c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x49d9c8: 0x114b0023  beq         $t2, $t3, . + 4 + (0x23 << 2)
    ctx->pc = 0x49D9C8u;
    {
        const bool branch_taken_0x49d9c8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 11));
        ctx->pc = 0x49D9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D9C8u;
        // 0x49d9cc: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d9c8) {
            ctx->pc = 0x49DA58u;
            goto label_49da58;
        }
    }
    ctx->pc = 0x49D9D0u;
    // 0x49d9d0: 0x3c073fff  lui         $a3, 0x3FFF
    ctx->pc = 0x49d9d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16383 << 16));
    // 0x49d9d4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x49d9d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x49d9d8: 0x3c0e00f8  lui         $t6, 0xF8
    ctx->pc = 0x49d9d8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)248 << 16));
    // 0x49d9dc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x49d9dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x49d9e0: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x49d9e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x49d9e4: 0x0  nop
    ctx->pc = 0x49d9e4u;
    // NOP
label_49d9e8:
    // 0x49d9e8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x49d9e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49d9ec: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x49d9ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x49d9f0: 0x30440008  andi        $a0, $v0, 0x8
    ctx->pc = 0x49d9f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x49d9f4: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x49d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x49d9f8: 0x304200e7  andi        $v0, $v0, 0xE7
    ctx->pc = 0x49d9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)231);
    // 0x49d9fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x49d9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x49da00: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x49da00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x49da04: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49da04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49da08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49da08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49da0c: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x49da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x49da10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x49da10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49da14: 0x6e2024  and         $a0, $v1, $t6
    ctx->pc = 0x49da14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 14));
    // 0x49da18: 0x3062f800  andi        $v0, $v1, 0xF800
    ctx->pc = 0x49da18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63488);
    // 0x49da1c: 0x43242  srl         $a2, $a0, 9
    ctx->pc = 0x49da1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 9));
    // 0x49da20: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x49da20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x49da24: 0x306400f8  andi        $a0, $v1, 0xF8
    ctx->pc = 0x49da24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x49da28: 0xe3182b  sltu        $v1, $a3, $v1
    ctx->pc = 0x49da28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x49da2c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x49DA2Cu;
    {
        const bool branch_taken_0x49da2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DA2Cu;
        // 0x49da30: 0x420c2  srl         $a0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49da2c) {
            ctx->pc = 0x49DA38u;
            goto label_49da38;
        }
    }
    ctx->pc = 0x49DA34u;
    // 0x49da34: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x49da34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_49da38:
    // 0x49da38: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x49da38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x49da3c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49da3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49da40: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x49da40u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49da44: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x49da44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x49da48: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x49da48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x49da4c: 0x1549ffe6  bne         $t2, $t1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x49DA4Cu;
    {
        const bool branch_taken_0x49da4c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 9));
        ctx->pc = 0x49DA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DA4Cu;
        // 0x49da50: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49da4c) {
            ctx->pc = 0x49D9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d9e8;
        }
    }
    ctx->pc = 0x49DA54u;
    // 0x49da54: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49da54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_49da58:
    // 0x49da58: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x49da58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x49da5c: 0x10d4021  addu        $t0, $t0, $t5
    ctx->pc = 0x49da5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x49da60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49da60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49da64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49da64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49da68: 0x1460ffd5  bnez        $v1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x49DA68u;
    {
        const bool branch_taken_0x49da68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DA68u;
        // 0x49da6c: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49da68) {
            ctx->pc = 0x49D9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d9c0;
        }
    }
    ctx->pc = 0x49DA70u;
    // 0x49da70: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x49DA70u;
    {
        const bool branch_taken_0x49da70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49da70) {
            ctx->pc = 0x49DD3Cu;
            goto label_49dd3c;
        }
    }
    ctx->pc = 0x49DA78u;
label_49da78:
    // 0x49da78: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x49da78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x49da7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x49da7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49da80: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x49da80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x49da84: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x49da84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x49da88: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x49da88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x49da8c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x49da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49da90: 0x92630023  lbu         $v1, 0x23($s3)
    ctx->pc = 0x49da90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
    // 0x49da94: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x49da94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x49da98: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x49da98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x49da9c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x49da9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x49daa0: 0x1466003b  bne         $v1, $a2, . + 4 + (0x3B << 2)
    ctx->pc = 0x49DAA0u;
    {
        const bool branch_taken_0x49daa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x49DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DAA0u;
        // 0x49daa4: 0x822821  addu        $a1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49daa0) {
            ctx->pc = 0x49DB90u;
            goto label_49db90;
        }
    }
    ctx->pc = 0x49DAA8u;
    // 0x49daa8: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49daac: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x49daacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x49dab0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49dab0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49dab4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49dab8: 0x106000a0  beqz        $v1, . + 4 + (0xA0 << 2)
    ctx->pc = 0x49DAB8u;
    {
        const bool branch_taken_0x49dab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DAB8u;
        // 0x49dabc: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dab8) {
            ctx->pc = 0x49DD3Cu;
            goto label_49dd3c;
        }
    }
    ctx->pc = 0x49DAC0u;
label_49dac0:
    // 0x49dac0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x49dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49dac4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x49dac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x49dac8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x49DAC8u;
    {
        const bool branch_taken_0x49dac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DAC8u;
        // 0x49dacc: 0x8faa0018  lw          $t2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dac8) {
            ctx->pc = 0x49DAF4u;
            goto label_49daf4;
        }
    }
    ctx->pc = 0x49DAD0u;
    // 0x49dad0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x49dad0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49dad4: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x49dad4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x49dad8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x49dad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x49dadc: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x49dadcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x49dae0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x49dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49dae4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x49dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x49dae8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x49dae8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49daec: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x49daecu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49daf0: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x49daf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_49daf4:
    // 0x49daf4: 0x2d420002  sltiu       $v0, $t2, 0x2
    ctx->pc = 0x49daf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x49daf8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x49DAF8u;
    {
        const bool branch_taken_0x49daf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49DAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DAF8u;
        // 0x49dafc: 0x146840  sll         $t5, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49daf8) {
            ctx->pc = 0x49DB48u;
            goto label_49db48;
        }
    }
    ctx->pc = 0x49DB00u;
label_49db00:
    // 0x49db00: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x49db00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49db04: 0x254afffe  addiu       $t2, $t2, -0x2
    ctx->pc = 0x49db04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967294));
    // 0x49db08: 0x2d440002  sltiu       $a0, $t2, 0x2
    ctx->pc = 0x49db08u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x49db0c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x49db0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x49db10: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x49db10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49db14: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x49db14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x49db18: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x49db18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49db1c: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x49db1cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49db20: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x49db20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x49db24: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x49db24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49db28: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x49db28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x49db2c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x49db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x49db30: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x49db30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49db34: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x49db34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x49db38: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x49db38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49db3c: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x49db3cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49db40: 0x1080ffef  beqz        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x49DB40u;
    {
        const bool branch_taken_0x49db40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DB40u;
        // 0x49db44: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49db40) {
            ctx->pc = 0x49DB00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49db00;
        }
    }
    ctx->pc = 0x49DB48u;
label_49db48:
    // 0x49db48: 0x11400009  beqz        $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x49DB48u;
    {
        const bool branch_taken_0x49db48 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DB48u;
        // 0x49db4c: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49db48) {
            ctx->pc = 0x49DB70u;
            goto label_49db70;
        }
    }
    ctx->pc = 0x49DB50u;
    // 0x49db50: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x49db50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49db54: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x49db54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x49db58: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x49db58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49db5c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x49db5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x49db60: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x49db60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49db64: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x49db64u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49db68: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x49db68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x49db6c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49db6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_49db70:
    // 0x49db70: 0x10d4021  addu        $t0, $t0, $t5
    ctx->pc = 0x49db70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x49db74: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x49db74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x49db78: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49db78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49db7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49db80: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x49DB80u;
    {
        const bool branch_taken_0x49db80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DB80u;
        // 0x49db84: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49db80) {
            ctx->pc = 0x49DAC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49dac0;
        }
    }
    ctx->pc = 0x49DB88u;
    // 0x49db88: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x49DB88u;
    {
        const bool branch_taken_0x49db88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49db88) {
            ctx->pc = 0x49DD3Cu;
            goto label_49dd3c;
        }
    }
    ctx->pc = 0x49DB90u;
label_49db90:
    // 0x49db90: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49db90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x49db94: 0x8e690008  lw          $t1, 0x8($s3)
    ctx->pc = 0x49db94u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x49db98: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49db98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49db9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49db9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49dba0: 0x10600066  beqz        $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x49DBA0u;
    {
        const bool branch_taken_0x49dba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DBA0u;
        // 0x49dba4: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dba0) {
            ctx->pc = 0x49DD3Cu;
            goto label_49dd3c;
        }
    }
    ctx->pc = 0x49DBA8u;
    // 0x49dba8: 0x3c0c3fff  lui         $t4, 0x3FFF
    ctx->pc = 0x49dba8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16383 << 16));
    // 0x49dbac: 0x3c0e00f8  lui         $t6, 0xF8
    ctx->pc = 0x49dbacu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)248 << 16));
    // 0x49dbb0: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x49dbb0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x49dbb4: 0x0  nop
    ctx->pc = 0x49dbb4u;
    // NOP
label_49dbb8:
    // 0x49dbb8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x49dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49dbbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x49dbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x49dbc0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x49DBC0u;
    {
        const bool branch_taken_0x49dbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DBC0u;
        // 0x49dbc4: 0x8faa0018  lw          $t2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dbc0) {
            ctx->pc = 0x49DC18u;
            goto label_49dc18;
        }
    }
    ctx->pc = 0x49DBC8u;
    // 0x49dbc8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x49dbc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49dbcc: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x49dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x49dbd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49dbd4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x49dbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x49dbd8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x49dbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49dbdc: 0x6e2024  and         $a0, $v1, $t6
    ctx->pc = 0x49dbdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 14));
    // 0x49dbe0: 0x3062f800  andi        $v0, $v1, 0xF800
    ctx->pc = 0x49dbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63488);
    // 0x49dbe4: 0x43242  srl         $a2, $a0, 9
    ctx->pc = 0x49dbe4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 9));
    // 0x49dbe8: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x49dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x49dbec: 0x306400f8  andi        $a0, $v1, 0xF8
    ctx->pc = 0x49dbecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x49dbf0: 0x183182b  sltu        $v1, $t4, $v1
    ctx->pc = 0x49dbf0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x49dbf4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x49DBF4u;
    {
        const bool branch_taken_0x49dbf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DBF4u;
        // 0x49dbf8: 0x420c2  srl         $a0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dbf4) {
            ctx->pc = 0x49DC00u;
            goto label_49dc00;
        }
    }
    ctx->pc = 0x49DBFCu;
    // 0x49dbfc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x49dbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_49dc00:
    // 0x49dc00: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x49dc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x49dc04: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49dc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49dc08: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x49dc08u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49dc0c: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x49dc0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x49dc10: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x49dc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x49dc14: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x49dc14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_49dc18:
    // 0x49dc18: 0x2d420002  sltiu       $v0, $t2, 0x2
    ctx->pc = 0x49dc18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x49dc1c: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x49DC1Cu;
    {
        const bool branch_taken_0x49dc1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49DC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DC1Cu;
        // 0x49dc20: 0x146840  sll         $t5, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dc1c) {
            ctx->pc = 0x49DCD0u;
            goto label_49dcd0;
        }
    }
    ctx->pc = 0x49DC24u;
    // 0x49dc24: 0x3c073fff  lui         $a3, 0x3FFF
    ctx->pc = 0x49dc24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16383 << 16));
    // 0x49dc28: 0x3c0b00f8  lui         $t3, 0xF8
    ctx->pc = 0x49dc28u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)248 << 16));
    // 0x49dc2c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x49dc2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_49dc30:
    // 0x49dc30: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x49dc30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49dc34: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x49dc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x49dc38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49dc3c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x49dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x49dc40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x49dc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49dc44: 0x6b2024  and         $a0, $v1, $t3
    ctx->pc = 0x49dc44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 11));
    // 0x49dc48: 0x3062f800  andi        $v0, $v1, 0xF800
    ctx->pc = 0x49dc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63488);
    // 0x49dc4c: 0x43242  srl         $a2, $a0, 9
    ctx->pc = 0x49dc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 9));
    // 0x49dc50: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x49dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x49dc54: 0x306400f8  andi        $a0, $v1, 0xF8
    ctx->pc = 0x49dc54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x49dc58: 0xe3182b  sltu        $v1, $a3, $v1
    ctx->pc = 0x49dc58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x49dc5c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x49DC5Cu;
    {
        const bool branch_taken_0x49dc5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DC5Cu;
        // 0x49dc60: 0x420c2  srl         $a0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dc5c) {
            ctx->pc = 0x49DC68u;
            goto label_49dc68;
        }
    }
    ctx->pc = 0x49DC64u;
    // 0x49dc64: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x49dc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_49dc68:
    // 0x49dc68: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x49dc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x49dc6c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49dc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49dc70: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x49dc70u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49dc74: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x49dc74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x49dc78: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x49dc78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49dc7c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x49dc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x49dc80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49dc84: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x49dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x49dc88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x49dc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49dc8c: 0x6b2024  and         $a0, $v1, $t3
    ctx->pc = 0x49dc8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 11));
    // 0x49dc90: 0x3062f800  andi        $v0, $v1, 0xF800
    ctx->pc = 0x49dc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63488);
    // 0x49dc94: 0x43242  srl         $a2, $a0, 9
    ctx->pc = 0x49dc94u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 9));
    // 0x49dc98: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x49dc98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x49dc9c: 0x306400f8  andi        $a0, $v1, 0xF8
    ctx->pc = 0x49dc9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x49dca0: 0xe3182b  sltu        $v1, $a3, $v1
    ctx->pc = 0x49dca0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x49dca4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x49DCA4u;
    {
        const bool branch_taken_0x49dca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DCA4u;
        // 0x49dca8: 0x420c2  srl         $a0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dca4) {
            ctx->pc = 0x49DCB0u;
            goto label_49dcb0;
        }
    }
    ctx->pc = 0x49DCACu;
    // 0x49dcac: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x49dcacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_49dcb0:
    // 0x49dcb0: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x49dcb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x49dcb4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49dcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49dcb8: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x49dcb8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49dcbc: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x49dcbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x49dcc0: 0x254afffe  addiu       $t2, $t2, -0x2
    ctx->pc = 0x49dcc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967294));
    // 0x49dcc4: 0x2d420002  sltiu       $v0, $t2, 0x2
    ctx->pc = 0x49dcc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x49dcc8: 0x1040ffd9  beqz        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x49DCC8u;
    {
        const bool branch_taken_0x49dcc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DCC8u;
        // 0x49dccc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dcc8) {
            ctx->pc = 0x49DC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49dc30;
        }
    }
    ctx->pc = 0x49DCD0u;
label_49dcd0:
    // 0x49dcd0: 0x11400014  beqz        $t2, . + 4 + (0x14 << 2)
    ctx->pc = 0x49DCD0u;
    {
        const bool branch_taken_0x49dcd0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DCD0u;
        // 0x49dcd4: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dcd0) {
            ctx->pc = 0x49DD24u;
            goto label_49dd24;
        }
    }
    ctx->pc = 0x49DCD8u;
    // 0x49dcd8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x49dcd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49dcdc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x49dcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x49dce0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x49dce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x49dce4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x49dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x49dce8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x49dce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49dcec: 0x6e2024  and         $a0, $v1, $t6
    ctx->pc = 0x49dcecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 14));
    // 0x49dcf0: 0x3062f800  andi        $v0, $v1, 0xF800
    ctx->pc = 0x49dcf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63488);
    // 0x49dcf4: 0x43242  srl         $a2, $a0, 9
    ctx->pc = 0x49dcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 9));
    // 0x49dcf8: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x49dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x49dcfc: 0x306400f8  andi        $a0, $v1, 0xF8
    ctx->pc = 0x49dcfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x49dd00: 0x183182b  sltu        $v1, $t4, $v1
    ctx->pc = 0x49dd00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x49dd04: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x49DD04u;
    {
        const bool branch_taken_0x49dd04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DD04u;
        // 0x49dd08: 0x420c2  srl         $a0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dd04) {
            ctx->pc = 0x49DD10u;
            goto label_49dd10;
        }
    }
    ctx->pc = 0x49DD0Cu;
    // 0x49dd0c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x49dd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_49dd10:
    // 0x49dd10: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x49dd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x49dd14: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49dd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49dd18: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x49dd18u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49dd1c: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x49dd1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x49dd20: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x49dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_49dd24:
    // 0x49dd24: 0x10d4021  addu        $t0, $t0, $t5
    ctx->pc = 0x49dd24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x49dd28: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x49dd28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x49dd2c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x49dd2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49dd30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49dd34: 0x1460ffa0  bnez        $v1, . + 4 + (-0x60 << 2)
    ctx->pc = 0x49DD34u;
    {
        const bool branch_taken_0x49dd34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DD34u;
        // 0x49dd38: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dd34) {
            ctx->pc = 0x49DBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49dbb8;
        }
    }
    ctx->pc = 0x49DD3Cu;
label_49dd3c:
    // 0x49dd3c: 0x16a00004  bnez        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x49DD3Cu;
    {
        const bool branch_taken_0x49dd3c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x49DD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DD3Cu;
        // 0x49dd40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dd3c) {
            ctx->pc = 0x49DD50u;
            goto label_49dd50;
        }
    }
    ctx->pc = 0x49DD44u;
    // 0x49dd44: 0xc121912  jal         func_486448
    ctx->pc = 0x49DD44u;
    SET_GPR_U32(ctx, 31, 0x49DD4Cu);
    ctx->pc = 0x49DD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DD44u;
    // 0x49dd48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486448u, 0x49DD44u, 0x49DD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DD4Cu;
label_49dd4c:
    // 0x49dd4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49dd50:
    // 0x49dd50: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x49dd50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_49dd54:
    // 0x49dd54: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x49dd54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x49dd58: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x49dd58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x49dd5c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x49dd5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x49dd60: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x49dd60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x49dd64: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x49dd64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x49dd68: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x49dd68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x49dd6c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x49dd6cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x49dd70: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x49dd70u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49dd74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x49dd74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49dd78: 0x3e00008  jr          $ra
    ctx->pc = 0x49DD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DD78u;
        // 0x49dd7c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49DD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49DD80u;
}
