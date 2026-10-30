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

// Function: sub_002CCFE0
// Address: 0x2ccfe0 - 0x2cd0c0
void sub_002CCFE0_0x2ccfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CCFE0_0x2ccfe0");
#endif

    switch (ctx->pc) {
        case 0x2ccfe0u: goto label_2ccfe0;
        case 0x2ccfe4u: goto label_2ccfe4;
        case 0x2ccfe8u: goto label_2ccfe8;
        case 0x2ccfecu: goto label_2ccfec;
        case 0x2ccff0u: goto label_2ccff0;
        case 0x2ccff4u: goto label_2ccff4;
        case 0x2ccff8u: goto label_2ccff8;
        case 0x2ccffcu: goto label_2ccffc;
        case 0x2cd000u: goto label_2cd000;
        case 0x2cd004u: goto label_2cd004;
        case 0x2cd008u: goto label_2cd008;
        case 0x2cd00cu: goto label_2cd00c;
        case 0x2cd010u: goto label_2cd010;
        case 0x2cd014u: goto label_2cd014;
        case 0x2cd018u: goto label_2cd018;
        case 0x2cd01cu: goto label_2cd01c;
        case 0x2cd020u: goto label_2cd020;
        case 0x2cd024u: goto label_2cd024;
        case 0x2cd028u: goto label_2cd028;
        case 0x2cd02cu: goto label_2cd02c;
        case 0x2cd030u: goto label_2cd030;
        case 0x2cd034u: goto label_2cd034;
        case 0x2cd038u: goto label_2cd038;
        case 0x2cd03cu: goto label_2cd03c;
        case 0x2cd040u: goto label_2cd040;
        case 0x2cd044u: goto label_2cd044;
        case 0x2cd048u: goto label_2cd048;
        case 0x2cd04cu: goto label_2cd04c;
        case 0x2cd050u: goto label_2cd050;
        case 0x2cd054u: goto label_2cd054;
        case 0x2cd058u: goto label_2cd058;
        case 0x2cd05cu: goto label_2cd05c;
        case 0x2cd060u: goto label_2cd060;
        case 0x2cd064u: goto label_2cd064;
        case 0x2cd068u: goto label_2cd068;
        case 0x2cd06cu: goto label_2cd06c;
        case 0x2cd070u: goto label_2cd070;
        case 0x2cd074u: goto label_2cd074;
        case 0x2cd078u: goto label_2cd078;
        case 0x2cd07cu: goto label_2cd07c;
        case 0x2cd080u: goto label_2cd080;
        case 0x2cd084u: goto label_2cd084;
        case 0x2cd088u: goto label_2cd088;
        case 0x2cd08cu: goto label_2cd08c;
        case 0x2cd090u: goto label_2cd090;
        case 0x2cd094u: goto label_2cd094;
        case 0x2cd098u: goto label_2cd098;
        case 0x2cd09cu: goto label_2cd09c;
        case 0x2cd0a0u: goto label_2cd0a0;
        case 0x2cd0a4u: goto label_2cd0a4;
        case 0x2cd0a8u: goto label_2cd0a8;
        case 0x2cd0acu: goto label_2cd0ac;
        case 0x2cd0b0u: goto label_2cd0b0;
        case 0x2cd0b4u: goto label_2cd0b4;
        case 0x2cd0b8u: goto label_2cd0b8;
        case 0x2cd0bcu: goto label_2cd0bc;
        default: break;
    }

    ctx->pc = 0x2ccfe0u;

label_2ccfe0:
    // 0x2ccfe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ccfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ccfe4:
    // 0x2ccfe4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2ccfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2ccfe8:
    // 0x2ccfe8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ccfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2ccfec:
    // 0x2ccfec: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2ccfecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2ccff0:
    // 0x2ccff0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ccff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ccff4:
    // 0x2ccff4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ccff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ccff8:
    // 0x2ccff8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ccff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ccffc:
    // 0x2ccffc: 0x24631770  addiu       $v1, $v1, 0x1770
    ctx->pc = 0x2ccffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6000));
label_2cd000:
    // 0x2cd000: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2cd000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2cd004:
    // 0x2cd004: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2cd004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_2cd008:
    // 0x2cd008: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2cd008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2cd00c:
    // 0x2cd00c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2cd00cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_2cd010:
    // 0x2cd010: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2cd010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_2cd014:
    // 0x2cd014: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x2cd014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_2cd018:
    // 0x2cd018: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x2cd018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
label_2cd01c:
    // 0x2cd01c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cd01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cd020:
    // 0x2cd020: 0xae070014  sw          $a3, 0x14($s0)
    ctx->pc = 0x2cd020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 7));
label_2cd024:
    // 0x2cd024: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2cd024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2cd028:
    // 0x2cd028: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2cd028u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_2cd02c:
    // 0x2cd02c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cd02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cd030:
    // 0x2cd030: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2cd030u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_2cd034:
    // 0x2cd034: 0x0  nop
    ctx->pc = 0x2cd034u;
    // NOP
label_2cd038:
    // 0x2cd038: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2cd038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_2cd03c:
    // 0x2cd03c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2cd03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2cd040:
    // 0x2cd040: 0x0  nop
    ctx->pc = 0x2cd040u;
    // NOP
label_2cd044:
    // 0x2cd044: 0x0  nop
    ctx->pc = 0x2cd044u;
    // NOP
label_2cd048:
    // 0x2cd048: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
label_2cd04c:
    if (ctx->pc == 0x2CD04Cu) {
        ctx->pc = 0x2CD04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD048u;
        // 0x2cd04c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD050u;
        goto label_2cd050;
    }
    ctx->pc = 0x2CD048u;
    {
        const bool branch_taken_0x2cd048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2CD04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD048u;
        // 0x2cd04c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd048) {
            ctx->pc = 0x2CD038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd038;
        }
    }
    ctx->pc = 0x2CD050u;
label_2cd050:
    // 0x2cd050: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cd050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cd054:
    // 0x2cd054: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x2cd054u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
label_2cd058:
    // 0x2cd058: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x2cd058u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
label_2cd05c:
    // 0x2cd05c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2cd05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2cd060:
    // 0x2cd060: 0xa2000028  sb          $zero, 0x28($s0)
    ctx->pc = 0x2cd060u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 0));
label_2cd064:
    // 0x2cd064: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2cd064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_2cd068:
    // 0x2cd068: 0xae080018  sw          $t0, 0x18($s0)
    ctx->pc = 0x2cd068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 8));
label_2cd06c:
    // 0x2cd06c: 0xc0e40a2  jal         func_390288
label_2cd070:
    if (ctx->pc == 0x2CD070u) {
        ctx->pc = 0x2CD070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD06Cu;
        // 0x2cd070: 0xae09001c  sw          $t1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD074u;
        goto label_2cd074;
    }
    ctx->pc = 0x2CD06Cu;
    SET_GPR_U32(ctx, 31, 0x2CD074u);
    ctx->pc = 0x2CD070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD06Cu;
    // 0x2cd070: 0xae09001c  sw          $t1, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2CD06Cu, 0x2CD074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD074u;
label_2cd074:
    // 0x2cd074: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cd074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cd078:
    // 0x2cd078: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_2cd07c:
    if (ctx->pc == 0x2CD07Cu) {
        ctx->pc = 0x2CD07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD078u;
        // 0x2cd07c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD080u;
        goto label_2cd080;
    }
    ctx->pc = 0x2CD078u;
    {
        const bool branch_taken_0x2cd078 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD078u;
        // 0x2cd07c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd078) {
            ctx->pc = 0x2CD0ACu;
            goto label_2cd0ac;
        }
    }
    ctx->pc = 0x2CD080u;
label_2cd080:
    // 0x2cd080: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2cd080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cd084:
    // 0x2cd084: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2cd084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cd088:
    // 0x2cd088: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2cd088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2cd08c:
    // 0x2cd08c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cd08cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cd090:
    // 0x2cd090: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cd090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cd094:
    // 0x2cd094: 0x40f809  jalr        $v0
label_2cd098:
    if (ctx->pc == 0x2CD098u) {
        ctx->pc = 0x2CD098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD094u;
        // 0x2cd098: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD09Cu;
        goto label_2cd09c;
    }
    ctx->pc = 0x2CD094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CD09Cu);
        ctx->pc = 0x2CD098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD094u;
        // 0x2cd098: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD094u, 0x2CD09Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CD09Cu;
label_2cd09c:
    // 0x2cd09c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cd09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cd0a0:
    // 0x2cd0a0: 0xc10586c  jal         func_4161B0
label_2cd0a4:
    if (ctx->pc == 0x2CD0A4u) {
        ctx->pc = 0x2CD0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD0A0u;
        // 0x2cd0a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD0A8u;
        goto label_2cd0a8;
    }
    ctx->pc = 0x2CD0A0u;
    SET_GPR_U32(ctx, 31, 0x2CD0A8u);
    ctx->pc = 0x2CD0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD0A0u;
    // 0x2cd0a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161B0u, 0x2CD0A0u, 0x2CD0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD0A8u;
label_2cd0a8:
    // 0x2cd0a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cd0a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cd0ac:
    // 0x2cd0ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cd0acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cd0b0:
    // 0x2cd0b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2cd0b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cd0b4:
    // 0x2cd0b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cd0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cd0b8:
    // 0x2cd0b8: 0x3e00008  jr          $ra
label_2cd0bc:
    if (ctx->pc == 0x2CD0BCu) {
        ctx->pc = 0x2CD0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD0B8u;
        // 0x2cd0bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD0C0u;
        goto label_fallthrough_0x2cd0b8;
    }
    ctx->pc = 0x2CD0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD0B8u;
        // 0x2cd0bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD0B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2cd0b8:
    ctx->pc = 0x2CD0C0u;
}
