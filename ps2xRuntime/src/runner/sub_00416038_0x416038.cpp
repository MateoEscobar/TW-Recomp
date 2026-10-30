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

// Function: sub_00416038
// Address: 0x416038 - 0x4161a8
void sub_00416038_0x416038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00416038_0x416038");
#endif

    switch (ctx->pc) {
        case 0x416038u: goto label_416038;
        case 0x41603cu: goto label_41603c;
        case 0x416040u: goto label_416040;
        case 0x416044u: goto label_416044;
        case 0x416048u: goto label_416048;
        case 0x41604cu: goto label_41604c;
        case 0x416050u: goto label_416050;
        case 0x416054u: goto label_416054;
        case 0x416058u: goto label_416058;
        case 0x41605cu: goto label_41605c;
        case 0x416060u: goto label_416060;
        case 0x416064u: goto label_416064;
        case 0x416068u: goto label_416068;
        case 0x41606cu: goto label_41606c;
        case 0x416070u: goto label_416070;
        case 0x416074u: goto label_416074;
        case 0x416078u: goto label_416078;
        case 0x41607cu: goto label_41607c;
        case 0x416080u: goto label_416080;
        case 0x416084u: goto label_416084;
        case 0x416088u: goto label_416088;
        case 0x41608cu: goto label_41608c;
        case 0x416090u: goto label_416090;
        case 0x416094u: goto label_416094;
        case 0x416098u: goto label_416098;
        case 0x41609cu: goto label_41609c;
        case 0x4160a0u: goto label_4160a0;
        case 0x4160a4u: goto label_4160a4;
        case 0x4160a8u: goto label_4160a8;
        case 0x4160acu: goto label_4160ac;
        case 0x4160b0u: goto label_4160b0;
        case 0x4160b4u: goto label_4160b4;
        case 0x4160b8u: goto label_4160b8;
        case 0x4160bcu: goto label_4160bc;
        case 0x4160c0u: goto label_4160c0;
        case 0x4160c4u: goto label_4160c4;
        case 0x4160c8u: goto label_4160c8;
        case 0x4160ccu: goto label_4160cc;
        case 0x4160d0u: goto label_4160d0;
        case 0x4160d4u: goto label_4160d4;
        case 0x4160d8u: goto label_4160d8;
        case 0x4160dcu: goto label_4160dc;
        case 0x4160e0u: goto label_4160e0;
        case 0x4160e4u: goto label_4160e4;
        case 0x4160e8u: goto label_4160e8;
        case 0x4160ecu: goto label_4160ec;
        case 0x4160f0u: goto label_4160f0;
        case 0x4160f4u: goto label_4160f4;
        case 0x4160f8u: goto label_4160f8;
        case 0x4160fcu: goto label_4160fc;
        case 0x416100u: goto label_416100;
        case 0x416104u: goto label_416104;
        case 0x416108u: goto label_416108;
        case 0x41610cu: goto label_41610c;
        case 0x416110u: goto label_416110;
        case 0x416114u: goto label_416114;
        case 0x416118u: goto label_416118;
        case 0x41611cu: goto label_41611c;
        case 0x416120u: goto label_416120;
        case 0x416124u: goto label_416124;
        case 0x416128u: goto label_416128;
        case 0x41612cu: goto label_41612c;
        case 0x416130u: goto label_416130;
        case 0x416134u: goto label_416134;
        case 0x416138u: goto label_416138;
        case 0x41613cu: goto label_41613c;
        case 0x416140u: goto label_416140;
        case 0x416144u: goto label_416144;
        case 0x416148u: goto label_416148;
        case 0x41614cu: goto label_41614c;
        case 0x416150u: goto label_416150;
        case 0x416154u: goto label_416154;
        case 0x416158u: goto label_416158;
        case 0x41615cu: goto label_41615c;
        case 0x416160u: goto label_416160;
        case 0x416164u: goto label_416164;
        case 0x416168u: goto label_416168;
        case 0x41616cu: goto label_41616c;
        case 0x416170u: goto label_416170;
        case 0x416174u: goto label_416174;
        case 0x416178u: goto label_416178;
        case 0x41617cu: goto label_41617c;
        case 0x416180u: goto label_416180;
        case 0x416184u: goto label_416184;
        case 0x416188u: goto label_416188;
        case 0x41618cu: goto label_41618c;
        case 0x416190u: goto label_416190;
        case 0x416194u: goto label_416194;
        case 0x416198u: goto label_416198;
        case 0x41619cu: goto label_41619c;
        case 0x4161a0u: goto label_4161a0;
        case 0x4161a4u: goto label_4161a4;
        default: break;
    }

    ctx->pc = 0x416038u;

label_416038:
    // 0x416038: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x416038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_41603c:
    // 0x41603c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41603cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_416040:
    // 0x416040: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x416040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_416044:
    // 0x416044: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x416044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_416048:
    // 0x416048: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x416048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41604c:
    // 0x41604c: 0x8c432b28  lw          $v1, 0x2B28($v0)
    ctx->pc = 0x41604cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11048)));
label_416050:
    // 0x416050: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x416050u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_416054:
    // 0x416054: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x416054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_416058:
    // 0x416058: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x416058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_41605c:
    // 0x41605c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x41605cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_416060:
    // 0x416060: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
label_416064:
    if (ctx->pc == 0x416064u) {
        ctx->pc = 0x416064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416060u;
        // 0x416064: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416068u;
        goto label_416068;
    }
    ctx->pc = 0x416060u;
    {
        const bool branch_taken_0x416060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x416064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416060u;
        // 0x416064: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416060) {
            ctx->pc = 0x416178u;
            goto label_416178;
        }
    }
    ctx->pc = 0x416068u;
label_416068:
    // 0x416068: 0x2650004c  addiu       $s0, $s2, 0x4C
    ctx->pc = 0x416068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
label_41606c:
    // 0x41606c: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x41606cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_416070:
    // 0x416070: 0xc0e12f0  jal         func_384BC0
label_416074:
    if (ctx->pc == 0x416074u) {
        ctx->pc = 0x416074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416070u;
        // 0x416074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416078u;
        goto label_416078;
    }
    ctx->pc = 0x416070u;
    SET_GPR_U32(ctx, 31, 0x416078u);
    ctx->pc = 0x416074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416070u;
    // 0x416074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384BC0u, 0x416070u, 0x416078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416078u;
label_416078:
    // 0x416078: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x416078u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41607c:
    // 0x41607c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41607cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_416080:
    // 0x416080: 0xc0e130e  jal         func_384C38
label_416084:
    if (ctx->pc == 0x416084u) {
        ctx->pc = 0x416084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416080u;
        // 0x416084: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416088u;
        goto label_416088;
    }
    ctx->pc = 0x416080u;
    SET_GPR_U32(ctx, 31, 0x416088u);
    ctx->pc = 0x416084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416080u;
    // 0x416084: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384C38u, 0x416080u, 0x416088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x416088u;
label_416088:
    // 0x416088: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x416088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41608c:
    // 0x41608c: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_416090:
    if (ctx->pc == 0x416090u) {
        ctx->pc = 0x416090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41608Cu;
        // 0x416090: 0x8e230020  lw          $v1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416094u;
        goto label_416094;
    }
    ctx->pc = 0x41608Cu;
    {
        const bool branch_taken_0x41608c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x41608c) {
            ctx->pc = 0x416090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41608Cu;
            // 0x416090: 0x8e230020  lw          $v1, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41609Cu;
            goto label_41609c;
        }
    }
    ctx->pc = 0x416094u;
label_416094:
    // 0x416094: 0x10000039  b           . + 4 + (0x39 << 2)
label_416098:
    if (ctx->pc == 0x416098u) {
        ctx->pc = 0x416098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416094u;
        // 0x416098: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41609Cu;
        goto label_41609c;
    }
    ctx->pc = 0x416094u;
    {
        const bool branch_taken_0x416094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416094u;
        // 0x416098: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416094) {
            ctx->pc = 0x41617Cu;
            goto label_41617c;
        }
    }
    ctx->pc = 0x41609Cu;
label_41609c:
    // 0x41609c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x41609cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4160a0:
    // 0x4160a0: 0x14620036  bne         $v1, $v0, . + 4 + (0x36 << 2)
label_4160a4:
    if (ctx->pc == 0x4160A4u) {
        ctx->pc = 0x4160A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4160A0u;
        // 0x4160a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4160A8u;
        goto label_4160a8;
    }
    ctx->pc = 0x4160A0u;
    {
        const bool branch_taken_0x4160a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4160A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4160A0u;
        // 0x4160a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4160a0) {
            ctx->pc = 0x41617Cu;
            goto label_41617c;
        }
    }
    ctx->pc = 0x4160A8u;
label_4160a8:
    // 0x4160a8: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x4160a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_4160ac:
    // 0x4160ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4160acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4160b0:
    // 0x4160b0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x4160b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_4160b4:
    // 0x4160b4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x4160b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_4160b8:
    // 0x4160b8: 0x40f809  jalr        $v0
label_4160bc:
    if (ctx->pc == 0x4160BCu) {
        ctx->pc = 0x4160BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4160B8u;
        // 0x4160bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4160C0u;
        goto label_4160c0;
    }
    ctx->pc = 0x4160B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4160C0u);
        ctx->pc = 0x4160BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4160B8u;
        // 0x4160bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4160B8u, 0x4160C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4160C0u;
label_4160c0:
    // 0x4160c0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4160c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_4160c4:
    // 0x4160c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4160c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4160c8:
    // 0x4160c8: 0xc105ac6  jal         func_416B18
label_4160cc:
    if (ctx->pc == 0x4160CCu) {
        ctx->pc = 0x4160CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4160C8u;
        // 0x4160cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4160D0u;
        goto label_4160d0;
    }
    ctx->pc = 0x4160C8u;
    SET_GPR_U32(ctx, 31, 0x4160D0u);
    ctx->pc = 0x4160CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4160C8u;
    // 0x4160cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416B18u, 0x4160C8u, 0x4160D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4160D0u;
label_4160d0:
    // 0x4160d0: 0x12800029  beqz        $s4, . + 4 + (0x29 << 2)
label_4160d4:
    if (ctx->pc == 0x4160D4u) {
        ctx->pc = 0x4160D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4160D0u;
        // 0x4160d4: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4160D8u;
        goto label_4160d8;
    }
    ctx->pc = 0x4160D0u;
    {
        const bool branch_taken_0x4160d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4160D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4160D0u;
        // 0x4160d4: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4160d0) {
            ctx->pc = 0x416178u;
            goto label_416178;
        }
    }
    ctx->pc = 0x4160D8u;
label_4160d8:
    // 0x4160d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4160d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4160dc:
    // 0x4160dc: 0x8e662b04  lw          $a2, 0x2B04($s3)
    ctx->pc = 0x4160dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_4160e0:
    // 0x4160e0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4160e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4160e4:
    // 0x4160e4: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x4160e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_4160e8:
    // 0x4160e8: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x4160e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_4160ec:
    // 0x4160ec: 0x40f809  jalr        $v0
label_4160f0:
    if (ctx->pc == 0x4160F0u) {
        ctx->pc = 0x4160F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4160ECu;
        // 0x4160f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4160F4u;
        goto label_4160f4;
    }
    ctx->pc = 0x4160ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4160F4u);
        ctx->pc = 0x4160F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4160ECu;
        // 0x4160f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4160ECu, 0x4160F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4160F4u;
label_4160f4:
    // 0x4160f4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_4160f8:
    if (ctx->pc == 0x4160F8u) {
        ctx->pc = 0x4160F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4160F4u;
        // 0x4160f8: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4160FCu;
        goto label_4160fc;
    }
    ctx->pc = 0x4160F4u;
    {
        const bool branch_taken_0x4160f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4160F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4160F4u;
        // 0x4160f8: 0x8e702b04  lw          $s0, 0x2B04($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4160f4) {
            ctx->pc = 0x416178u;
            goto label_416178;
        }
    }
    ctx->pc = 0x4160FCu;
label_4160fc:
    // 0x4160fc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4160fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_416100:
    // 0x416100: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x416100u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_416104:
    // 0x416104: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x416104u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_416108:
    // 0x416108: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x416108u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_41610c:
    // 0x41610c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x41610cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_416110:
    // 0x416110: 0x26310058  addiu       $s1, $s1, 0x58
    ctx->pc = 0x416110u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_416114:
    // 0x416114: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x416114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_416118:
    // 0x416118: 0x40f809  jalr        $v0
label_41611c:
    if (ctx->pc == 0x41611Cu) {
        ctx->pc = 0x41611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416118u;
        // 0x41611c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416120u;
        goto label_416120;
    }
    ctx->pc = 0x416118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x416120u);
        ctx->pc = 0x41611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416118u;
        // 0x41611c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x416118u, 0x416120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x416120u;
label_416120:
    // 0x416120: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x416120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_416124:
    // 0x416124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x416124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_416128:
    // 0x416128: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x416128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_41612c:
    // 0x41612c: 0x40f809  jalr        $v0
label_416130:
    if (ctx->pc == 0x416130u) {
        ctx->pc = 0x416130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41612Cu;
        // 0x416130: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416134u;
        goto label_416134;
    }
    ctx->pc = 0x41612Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x416134u);
        ctx->pc = 0x416130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41612Cu;
        // 0x416130: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41612Cu, 0x416134u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x416134u;
label_416134:
    // 0x416134: 0x8e662b04  lw          $a2, 0x2B04($s3)
    ctx->pc = 0x416134u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_416138:
    // 0x416138: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x416138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_41613c:
    // 0x41613c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x41613cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_416140:
    // 0x416140: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x416140u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_416144:
    // 0x416144: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x416144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_416148:
    // 0x416148: 0x60f809  jalr        $v1
label_41614c:
    if (ctx->pc == 0x41614Cu) {
        ctx->pc = 0x41614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416148u;
        // 0x41614c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416150u;
        goto label_416150;
    }
    ctx->pc = 0x416148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x416150u);
        ctx->pc = 0x41614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416148u;
        // 0x41614c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x416148u, 0x416150u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x416150u;
label_416150:
    // 0x416150: 0x8e672b04  lw          $a3, 0x2B04($s3)
    ctx->pc = 0x416150u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11012)));
label_416154:
    // 0x416154: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x416154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_416158:
    // 0x416158: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x416158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41615c:
    // 0x41615c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x41615cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_416160:
    // 0x416160: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x416160u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_416164:
    // 0x416164: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x416164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_416168:
    // 0x416168: 0x60f809  jalr        $v1
label_41616c:
    if (ctx->pc == 0x41616Cu) {
        ctx->pc = 0x41616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416168u;
        // 0x41616c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416170u;
        goto label_416170;
    }
    ctx->pc = 0x416168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x416170u);
        ctx->pc = 0x41616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416168u;
        // 0x41616c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x416168u, 0x416170u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x416170u;
label_416170:
    // 0x416170: 0x10000002  b           . + 4 + (0x2 << 2)
label_416174:
    if (ctx->pc == 0x416174u) {
        ctx->pc = 0x416174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416170u;
        // 0x416174: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416178u;
        goto label_416178;
    }
    ctx->pc = 0x416170u;
    {
        const bool branch_taken_0x416170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x416174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416170u;
        // 0x416174: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416170) {
            ctx->pc = 0x41617Cu;
            goto label_41617c;
        }
    }
    ctx->pc = 0x416178u;
label_416178:
    // 0x416178: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x416178u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41617c:
    // 0x41617c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x41617cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_416180:
    // 0x416180: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x416180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_416184:
    // 0x416184: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x416184u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_416188:
    // 0x416188: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x416188u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41618c:
    // 0x41618c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x41618cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_416190:
    // 0x416190: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x416190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_416194:
    // 0x416194: 0x3e00008  jr          $ra
label_416198:
    if (ctx->pc == 0x416198u) {
        ctx->pc = 0x416198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416194u;
        // 0x416198: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41619Cu;
        goto label_41619c;
    }
    ctx->pc = 0x416194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x416198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416194u;
        // 0x416198: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x416194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41619Cu;
label_41619c:
    // 0x41619c: 0x0  nop
    ctx->pc = 0x41619cu;
    // NOP
label_4161a0:
    // 0x4161a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4161a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4161a4:
    // 0x4161a4: 0x0  nop
    ctx->pc = 0x4161a4u;
    // NOP
    ctx->pc = 0x4161a8u;
}
