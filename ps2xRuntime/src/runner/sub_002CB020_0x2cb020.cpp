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

// Function: sub_002CB020
// Address: 0x2cb020 - 0x2cb0e8
void sub_002CB020_0x2cb020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB020_0x2cb020");
#endif

    switch (ctx->pc) {
        case 0x2cb020u: goto label_2cb020;
        case 0x2cb024u: goto label_2cb024;
        case 0x2cb028u: goto label_2cb028;
        case 0x2cb02cu: goto label_2cb02c;
        case 0x2cb030u: goto label_2cb030;
        case 0x2cb034u: goto label_2cb034;
        case 0x2cb038u: goto label_2cb038;
        case 0x2cb03cu: goto label_2cb03c;
        case 0x2cb040u: goto label_2cb040;
        case 0x2cb044u: goto label_2cb044;
        case 0x2cb048u: goto label_2cb048;
        case 0x2cb04cu: goto label_2cb04c;
        case 0x2cb050u: goto label_2cb050;
        case 0x2cb054u: goto label_2cb054;
        case 0x2cb058u: goto label_2cb058;
        case 0x2cb05cu: goto label_2cb05c;
        case 0x2cb060u: goto label_2cb060;
        case 0x2cb064u: goto label_2cb064;
        case 0x2cb068u: goto label_2cb068;
        case 0x2cb06cu: goto label_2cb06c;
        case 0x2cb070u: goto label_2cb070;
        case 0x2cb074u: goto label_2cb074;
        case 0x2cb078u: goto label_2cb078;
        case 0x2cb07cu: goto label_2cb07c;
        case 0x2cb080u: goto label_2cb080;
        case 0x2cb084u: goto label_2cb084;
        case 0x2cb088u: goto label_2cb088;
        case 0x2cb08cu: goto label_2cb08c;
        case 0x2cb090u: goto label_2cb090;
        case 0x2cb094u: goto label_2cb094;
        case 0x2cb098u: goto label_2cb098;
        case 0x2cb09cu: goto label_2cb09c;
        case 0x2cb0a0u: goto label_2cb0a0;
        case 0x2cb0a4u: goto label_2cb0a4;
        case 0x2cb0a8u: goto label_2cb0a8;
        case 0x2cb0acu: goto label_2cb0ac;
        case 0x2cb0b0u: goto label_2cb0b0;
        case 0x2cb0b4u: goto label_2cb0b4;
        case 0x2cb0b8u: goto label_2cb0b8;
        case 0x2cb0bcu: goto label_2cb0bc;
        case 0x2cb0c0u: goto label_2cb0c0;
        case 0x2cb0c4u: goto label_2cb0c4;
        case 0x2cb0c8u: goto label_2cb0c8;
        case 0x2cb0ccu: goto label_2cb0cc;
        case 0x2cb0d0u: goto label_2cb0d0;
        case 0x2cb0d4u: goto label_2cb0d4;
        case 0x2cb0d8u: goto label_2cb0d8;
        case 0x2cb0dcu: goto label_2cb0dc;
        case 0x2cb0e0u: goto label_2cb0e0;
        case 0x2cb0e4u: goto label_2cb0e4;
        default: break;
    }

    ctx->pc = 0x2cb020u;

label_2cb020:
    // 0x2cb020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2cb024:
    // 0x2cb024: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cb024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cb028:
    // 0x2cb028: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cb028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cb02c:
    // 0x2cb02c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2cb02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2cb030:
    // 0x2cb030: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cb030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cb034:
    // 0x2cb034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2cb038:
    // 0x2cb038: 0x92220029  lbu         $v0, 0x29($s1)
    ctx->pc = 0x2cb038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
label_2cb03c:
    // 0x2cb03c: 0x14430025  bne         $v0, $v1, . + 4 + (0x25 << 2)
label_2cb040:
    if (ctx->pc == 0x2CB040u) {
        ctx->pc = 0x2CB040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB03Cu;
        // 0x2cb040: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB044u;
        goto label_2cb044;
    }
    ctx->pc = 0x2CB03Cu;
    {
        const bool branch_taken_0x2cb03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CB040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB03Cu;
        // 0x2cb040: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb03c) {
            ctx->pc = 0x2CB0D4u;
            goto label_2cb0d4;
        }
    }
    ctx->pc = 0x2CB044u;
label_2cb044:
    // 0x2cb044: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2cb044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cb048:
    // 0x2cb048: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cb048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cb04c:
    // 0x2cb04c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cb04cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cb050:
    // 0x2cb050: 0x24040184  addiu       $a0, $zero, 0x184
    ctx->pc = 0x2cb050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
label_2cb054:
    // 0x2cb054: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2cb054u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cb058:
    // 0x2cb058: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2cb058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2cb05c:
    // 0x2cb05c: 0x260503c8  addiu       $a1, $s0, 0x3C8
    ctx->pc = 0x2cb05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 968));
label_2cb060:
    // 0x2cb060: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x2cb060u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2cb064:
    // 0x2cb064: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2cb064u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2cb068:
    // 0x2cb068: 0x1447000c  bne         $v0, $a3, . + 4 + (0xC << 2)
label_2cb06c:
    if (ctx->pc == 0x2CB06Cu) {
        ctx->pc = 0x2CB06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB068u;
        // 0x2cb06c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB070u;
        goto label_2cb070;
    }
    ctx->pc = 0x2CB068u;
    {
        const bool branch_taken_0x2cb068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x2CB06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB068u;
        // 0x2cb06c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb068) {
            ctx->pc = 0x2CB09Cu;
            goto label_2cb09c;
        }
    }
    ctx->pc = 0x2CB070u;
label_2cb070:
    // 0x2cb070: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x2cb070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_2cb074:
    // 0x2cb074: 0x1444000a  bne         $v0, $a0, . + 4 + (0xA << 2)
label_2cb078:
    if (ctx->pc == 0x2CB078u) {
        ctx->pc = 0x2CB078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB074u;
        // 0x2cb078: 0x2cc20007  sltiu       $v0, $a2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB07Cu;
        goto label_2cb07c;
    }
    ctx->pc = 0x2CB074u;
    {
        const bool branch_taken_0x2cb074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2CB078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB074u;
        // 0x2cb078: 0x2cc20007  sltiu       $v0, $a2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb074) {
            ctx->pc = 0x2CB0A0u;
            goto label_2cb0a0;
        }
    }
    ctx->pc = 0x2CB07Cu;
label_2cb07c:
    // 0x2cb07c: 0x8c662b04  lw          $a2, 0x2B04($v1)
    ctx->pc = 0x2cb07cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11012)));
label_2cb080:
    // 0x2cb080: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2cb080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2cb084:
    // 0x2cb084: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x2cb084u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_2cb088:
    // 0x2cb088: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x2cb088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_2cb08c:
    // 0x2cb08c: 0x40f809  jalr        $v0
label_2cb090:
    if (ctx->pc == 0x2CB090u) {
        ctx->pc = 0x2CB090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB08Cu;
        // 0x2cb090: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB094u;
        goto label_2cb094;
    }
    ctx->pc = 0x2CB08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CB094u);
        ctx->pc = 0x2CB090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB08Cu;
        // 0x2cb090: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB08Cu, 0x2CB094u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CB094u;
label_2cb094:
    // 0x2cb094: 0x10000004  b           . + 4 + (0x4 << 2)
label_2cb098:
    if (ctx->pc == 0x2CB098u) {
        ctx->pc = 0x2CB098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB094u;
        // 0x2cb098: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB09Cu;
        goto label_2cb09c;
    }
    ctx->pc = 0x2CB094u;
    {
        const bool branch_taken_0x2cb094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB094u;
        // 0x2cb098: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb094) {
            ctx->pc = 0x2CB0A8u;
            goto label_2cb0a8;
        }
    }
    ctx->pc = 0x2CB09Cu;
label_2cb09c:
    // 0x2cb09c: 0x2cc20007  sltiu       $v0, $a2, 0x7
    ctx->pc = 0x2cb09cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_2cb0a0:
    // 0x2cb0a0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_2cb0a4:
    if (ctx->pc == 0x2CB0A4u) {
        ctx->pc = 0x2CB0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0A0u;
        // 0x2cb0a4: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB0A8u;
        goto label_2cb0a8;
    }
    ctx->pc = 0x2CB0A0u;
    {
        const bool branch_taken_0x2cb0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0A0u;
        // 0x2cb0a4: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb0a0) {
            ctx->pc = 0x2CB060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb060;
        }
    }
    ctx->pc = 0x2CB0A8u;
label_2cb0a8:
    // 0x2cb0a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2cb0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cb0ac:
    // 0x2cb0ac: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cb0acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cb0b0:
    // 0x2cb0b0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cb0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cb0b4:
    // 0x2cb0b4: 0x40f809  jalr        $v0
label_2cb0b8:
    if (ctx->pc == 0x2CB0B8u) {
        ctx->pc = 0x2CB0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0B4u;
        // 0x2cb0b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB0BCu;
        goto label_2cb0bc;
    }
    ctx->pc = 0x2CB0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CB0BCu);
        ctx->pc = 0x2CB0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0B4u;
        // 0x2cb0b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB0B4u, 0x2CB0BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CB0BCu;
label_2cb0bc:
    // 0x2cb0bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cb0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cb0c0:
    // 0x2cb0c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cb0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cb0c4:
    // 0x2cb0c4: 0xc08e1a4  jal         func_238690
label_2cb0c8:
    if (ctx->pc == 0x2CB0C8u) {
        ctx->pc = 0x2CB0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0C4u;
        // 0x2cb0c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB0CCu;
        goto label_2cb0cc;
    }
    ctx->pc = 0x2CB0C4u;
    SET_GPR_U32(ctx, 31, 0x2CB0CCu);
    ctx->pc = 0x2CB0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB0C4u;
    // 0x2cb0c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x2CB0C4u, 0x2CB0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB0CCu;
label_2cb0cc:
    // 0x2cb0cc: 0xa220002a  sb          $zero, 0x2A($s1)
    ctx->pc = 0x2cb0ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 0));
label_2cb0d0:
    // 0x2cb0d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2cb0d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cb0d4:
    // 0x2cb0d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cb0d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cb0d8:
    // 0x2cb0d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb0d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cb0dc:
    // 0x2cb0dc: 0x3e00008  jr          $ra
label_2cb0e0:
    if (ctx->pc == 0x2CB0E0u) {
        ctx->pc = 0x2CB0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0DCu;
        // 0x2cb0e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB0E4u;
        goto label_2cb0e4;
    }
    ctx->pc = 0x2CB0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0DCu;
        // 0x2cb0e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB0E4u;
label_2cb0e4:
    // 0x2cb0e4: 0x0  nop
    ctx->pc = 0x2cb0e4u;
    // NOP
    ctx->pc = 0x2cb0e8u;
}
