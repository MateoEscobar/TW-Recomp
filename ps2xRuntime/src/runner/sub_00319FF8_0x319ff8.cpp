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

// Function: sub_00319FF8
// Address: 0x319ff8 - 0x31a244
void sub_00319FF8_0x319ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319FF8_0x319ff8");
#endif

    switch (ctx->pc) {
        case 0x319ff8u: goto label_319ff8;
        case 0x319ffcu: goto label_319ffc;
        case 0x31a000u: goto label_31a000;
        case 0x31a004u: goto label_31a004;
        case 0x31a008u: goto label_31a008;
        case 0x31a00cu: goto label_31a00c;
        case 0x31a010u: goto label_31a010;
        case 0x31a014u: goto label_31a014;
        case 0x31a018u: goto label_31a018;
        case 0x31a01cu: goto label_31a01c;
        case 0x31a020u: goto label_31a020;
        case 0x31a024u: goto label_31a024;
        case 0x31a028u: goto label_31a028;
        case 0x31a02cu: goto label_31a02c;
        case 0x31a030u: goto label_31a030;
        case 0x31a034u: goto label_31a034;
        case 0x31a038u: goto label_31a038;
        case 0x31a03cu: goto label_31a03c;
        case 0x31a040u: goto label_31a040;
        case 0x31a044u: goto label_31a044;
        case 0x31a048u: goto label_31a048;
        case 0x31a04cu: goto label_31a04c;
        case 0x31a050u: goto label_31a050;
        case 0x31a054u: goto label_31a054;
        case 0x31a058u: goto label_31a058;
        case 0x31a05cu: goto label_31a05c;
        case 0x31a060u: goto label_31a060;
        case 0x31a064u: goto label_31a064;
        case 0x31a068u: goto label_31a068;
        case 0x31a06cu: goto label_31a06c;
        case 0x31a070u: goto label_31a070;
        case 0x31a074u: goto label_31a074;
        case 0x31a078u: goto label_31a078;
        case 0x31a07cu: goto label_31a07c;
        case 0x31a080u: goto label_31a080;
        case 0x31a084u: goto label_31a084;
        case 0x31a088u: goto label_31a088;
        case 0x31a08cu: goto label_31a08c;
        case 0x31a090u: goto label_31a090;
        case 0x31a094u: goto label_31a094;
        case 0x31a098u: goto label_31a098;
        case 0x31a09cu: goto label_31a09c;
        case 0x31a0a0u: goto label_31a0a0;
        case 0x31a0a4u: goto label_31a0a4;
        case 0x31a0a8u: goto label_31a0a8;
        case 0x31a0acu: goto label_31a0ac;
        case 0x31a0b0u: goto label_31a0b0;
        case 0x31a0b4u: goto label_31a0b4;
        case 0x31a0b8u: goto label_31a0b8;
        case 0x31a0bcu: goto label_31a0bc;
        case 0x31a0c0u: goto label_31a0c0;
        case 0x31a0c4u: goto label_31a0c4;
        case 0x31a0c8u: goto label_31a0c8;
        case 0x31a0ccu: goto label_31a0cc;
        case 0x31a0d0u: goto label_31a0d0;
        case 0x31a0d4u: goto label_31a0d4;
        case 0x31a0d8u: goto label_31a0d8;
        case 0x31a0dcu: goto label_31a0dc;
        case 0x31a0e0u: goto label_31a0e0;
        case 0x31a0e4u: goto label_31a0e4;
        case 0x31a0e8u: goto label_31a0e8;
        case 0x31a0ecu: goto label_31a0ec;
        case 0x31a0f0u: goto label_31a0f0;
        case 0x31a0f4u: goto label_31a0f4;
        case 0x31a0f8u: goto label_31a0f8;
        case 0x31a0fcu: goto label_31a0fc;
        case 0x31a100u: goto label_31a100;
        case 0x31a104u: goto label_31a104;
        case 0x31a108u: goto label_31a108;
        case 0x31a10cu: goto label_31a10c;
        case 0x31a110u: goto label_31a110;
        case 0x31a114u: goto label_31a114;
        case 0x31a118u: goto label_31a118;
        case 0x31a11cu: goto label_31a11c;
        case 0x31a120u: goto label_31a120;
        case 0x31a124u: goto label_31a124;
        case 0x31a128u: goto label_31a128;
        case 0x31a12cu: goto label_31a12c;
        case 0x31a130u: goto label_31a130;
        case 0x31a134u: goto label_31a134;
        case 0x31a138u: goto label_31a138;
        case 0x31a13cu: goto label_31a13c;
        case 0x31a140u: goto label_31a140;
        case 0x31a144u: goto label_31a144;
        case 0x31a148u: goto label_31a148;
        case 0x31a14cu: goto label_31a14c;
        case 0x31a150u: goto label_31a150;
        case 0x31a154u: goto label_31a154;
        case 0x31a158u: goto label_31a158;
        case 0x31a15cu: goto label_31a15c;
        case 0x31a160u: goto label_31a160;
        case 0x31a164u: goto label_31a164;
        case 0x31a168u: goto label_31a168;
        case 0x31a16cu: goto label_31a16c;
        case 0x31a170u: goto label_31a170;
        case 0x31a174u: goto label_31a174;
        case 0x31a178u: goto label_31a178;
        case 0x31a17cu: goto label_31a17c;
        case 0x31a180u: goto label_31a180;
        case 0x31a184u: goto label_31a184;
        case 0x31a188u: goto label_31a188;
        case 0x31a18cu: goto label_31a18c;
        case 0x31a190u: goto label_31a190;
        case 0x31a194u: goto label_31a194;
        case 0x31a198u: goto label_31a198;
        case 0x31a19cu: goto label_31a19c;
        case 0x31a1a0u: goto label_31a1a0;
        case 0x31a1a4u: goto label_31a1a4;
        case 0x31a1a8u: goto label_31a1a8;
        case 0x31a1acu: goto label_31a1ac;
        case 0x31a1b0u: goto label_31a1b0;
        case 0x31a1b4u: goto label_31a1b4;
        case 0x31a1b8u: goto label_31a1b8;
        case 0x31a1bcu: goto label_31a1bc;
        case 0x31a1c0u: goto label_31a1c0;
        case 0x31a1c4u: goto label_31a1c4;
        case 0x31a1c8u: goto label_31a1c8;
        case 0x31a1ccu: goto label_31a1cc;
        case 0x31a1d0u: goto label_31a1d0;
        case 0x31a1d4u: goto label_31a1d4;
        case 0x31a1d8u: goto label_31a1d8;
        case 0x31a1dcu: goto label_31a1dc;
        case 0x31a1e0u: goto label_31a1e0;
        case 0x31a1e4u: goto label_31a1e4;
        case 0x31a1e8u: goto label_31a1e8;
        case 0x31a1ecu: goto label_31a1ec;
        case 0x31a1f0u: goto label_31a1f0;
        case 0x31a1f4u: goto label_31a1f4;
        case 0x31a1f8u: goto label_31a1f8;
        case 0x31a1fcu: goto label_31a1fc;
        case 0x31a200u: goto label_31a200;
        case 0x31a204u: goto label_31a204;
        case 0x31a208u: goto label_31a208;
        case 0x31a20cu: goto label_31a20c;
        case 0x31a210u: goto label_31a210;
        case 0x31a214u: goto label_31a214;
        case 0x31a218u: goto label_31a218;
        case 0x31a21cu: goto label_31a21c;
        case 0x31a220u: goto label_31a220;
        case 0x31a224u: goto label_31a224;
        case 0x31a228u: goto label_31a228;
        case 0x31a22cu: goto label_31a22c;
        case 0x31a230u: goto label_31a230;
        case 0x31a234u: goto label_31a234;
        case 0x31a238u: goto label_31a238;
        case 0x31a23cu: goto label_31a23c;
        case 0x31a240u: goto label_31a240;
        default: break;
    }

    ctx->pc = 0x319ff8u;

label_319ff8:
    // 0x319ff8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x319ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_319ffc:
    // 0x319ffc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x319ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_31a000:
    // 0x31a000: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x31a000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_31a004:
    // 0x31a004: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x31a004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31a008:
    // 0x31a008: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x31a008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_31a00c:
    // 0x31a00c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31a00cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31a010:
    // 0x31a010: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x31a010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_31a014:
    // 0x31a014: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31a014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_31a018:
    // 0x31a018: 0xc08a61a  jal         func_229868
label_31a01c:
    if (ctx->pc == 0x31A01Cu) {
        ctx->pc = 0x31A01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A018u;
        // 0x31a01c: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A020u;
        goto label_31a020;
    }
    ctx->pc = 0x31A018u;
    SET_GPR_U32(ctx, 31, 0x31A020u);
    ctx->pc = 0x31A01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A018u;
    // 0x31a01c: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x31A018u, 0x31A020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A020u;
label_31a020:
    // 0x31a020: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31a020u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31a024:
    // 0x31a024: 0x12400088  beqz        $s2, . + 4 + (0x88 << 2)
label_31a028:
    if (ctx->pc == 0x31A028u) {
        ctx->pc = 0x31A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A024u;
        // 0x31a028: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A02Cu;
        goto label_31a02c;
    }
    ctx->pc = 0x31A024u;
    {
        const bool branch_taken_0x31a024 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A024u;
        // 0x31a028: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a024) {
            ctx->pc = 0x31A248u;
            return;
        }
    }
    ctx->pc = 0x31A02Cu;
label_31a02c:
    // 0x31a02c: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x31a02cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_31a030:
    // 0x31a030: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x31a030u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_31a034:
    // 0x31a034: 0x14400084  bnez        $v0, . + 4 + (0x84 << 2)
label_31a038:
    if (ctx->pc == 0x31A038u) {
        ctx->pc = 0x31A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A034u;
        // 0x31a038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A03Cu;
        goto label_31a03c;
    }
    ctx->pc = 0x31A034u;
    {
        const bool branch_taken_0x31a034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A034u;
        // 0x31a038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a034) {
            ctx->pc = 0x31A248u;
            return;
        }
    }
    ctx->pc = 0x31A03Cu;
label_31a03c:
    // 0x31a03c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x31a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_31a040:
    // 0x31a040: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x31a040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_31a044:
    // 0x31a044: 0x2c830016  sltiu       $v1, $a0, 0x16
    ctx->pc = 0x31a044u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
label_31a048:
    // 0x31a048: 0x1060007e  beqz        $v1, . + 4 + (0x7E << 2)
label_31a04c:
    if (ctx->pc == 0x31A04Cu) {
        ctx->pc = 0x31A04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A048u;
        // 0x31a04c: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A050u;
        goto label_31a050;
    }
    ctx->pc = 0x31A048u;
    {
        const bool branch_taken_0x31a048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A048u;
        // 0x31a04c: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a048) {
            ctx->pc = 0x31A244u;
            return;
        }
    }
    ctx->pc = 0x31A050u;
label_31a050:
    // 0x31a050: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x31a050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_31a054:
    // 0x31a054: 0x24420e40  addiu       $v0, $v0, 0xE40
    ctx->pc = 0x31a054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3648));
label_31a058:
    // 0x31a058: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31a058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31a05c:
    // 0x31a05c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x31a05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_31a060:
    // 0x31a060: 0x800008  jr          $a0
label_31a064:
    if (ctx->pc == 0x31A064u) {
        ctx->pc = 0x31A068u;
        goto label_31a068;
    }
    ctx->pc = 0x31A060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x31A068u: goto label_31a068;
            case 0x31A07Cu: goto label_31a07c;
            case 0x31A08Cu: goto label_31a08c;
            case 0x31A0A4u: goto label_31a0a4;
            case 0x31A23Cu: goto label_31a23c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A060u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x31A068u;
label_31a068:
    // 0x31a068: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x31a068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31a06c:
    // 0x31a06c: 0x14400076  bnez        $v0, . + 4 + (0x76 << 2)
label_31a070:
    if (ctx->pc == 0x31A070u) {
        ctx->pc = 0x31A070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A06Cu;
        // 0x31a070: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A074u;
        goto label_31a074;
    }
    ctx->pc = 0x31A06Cu;
    {
        const bool branch_taken_0x31a06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A06Cu;
        // 0x31a070: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a06c) {
            ctx->pc = 0x31A248u;
            return;
        }
    }
    ctx->pc = 0x31A074u;
label_31a074:
    // 0x31a074: 0x10000006  b           . + 4 + (0x6 << 2)
label_31a078:
    if (ctx->pc == 0x31A078u) {
        ctx->pc = 0x31A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A074u;
        // 0x31a078: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A07Cu;
        goto label_31a07c;
    }
    ctx->pc = 0x31A074u;
    {
        const bool branch_taken_0x31a074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A074u;
        // 0x31a078: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a074) {
            ctx->pc = 0x31A090u;
            goto label_31a090;
        }
    }
    ctx->pc = 0x31A07Cu;
label_31a07c:
    // 0x31a07c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x31a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_31a080:
    // 0x31a080: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31a080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31a084:
    // 0x31a084: 0x14620070  bne         $v1, $v0, . + 4 + (0x70 << 2)
label_31a088:
    if (ctx->pc == 0x31A088u) {
        ctx->pc = 0x31A088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A084u;
        // 0x31a088: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A08Cu;
        goto label_31a08c;
    }
    ctx->pc = 0x31A084u;
    {
        const bool branch_taken_0x31a084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31A088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A084u;
        // 0x31a088: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a084) {
            ctx->pc = 0x31A248u;
            return;
        }
    }
    ctx->pc = 0x31A08Cu;
label_31a08c:
    // 0x31a08c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31a08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31a090:
    // 0x31a090: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31a090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31a094:
    // 0x31a094: 0xc0c6660  jal         func_319980
label_31a098:
    if (ctx->pc == 0x31A098u) {
        ctx->pc = 0x31A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A094u;
        // 0x31a098: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A09Cu;
        goto label_31a09c;
    }
    ctx->pc = 0x31A094u;
    SET_GPR_U32(ctx, 31, 0x31A09Cu);
    ctx->pc = 0x31A098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A094u;
    // 0x31a098: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319980u, 0x31A094u, 0x31A09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A09Cu;
label_31a09c:
    // 0x31a09c: 0x1000006a  b           . + 4 + (0x6A << 2)
label_31a0a0:
    if (ctx->pc == 0x31A0A0u) {
        ctx->pc = 0x31A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A09Cu;
        // 0x31a0a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A0A4u;
        goto label_31a0a4;
    }
    ctx->pc = 0x31A09Cu;
    {
        const bool branch_taken_0x31a09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A09Cu;
        // 0x31a0a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a09c) {
            ctx->pc = 0x31A248u;
            return;
        }
    }
    ctx->pc = 0x31A0A4u;
label_31a0a4:
    // 0x31a0a4: 0xc087502  jal         func_21D408
label_31a0a8:
    if (ctx->pc == 0x31A0A8u) {
        ctx->pc = 0x31A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A0A4u;
        // 0x31a0a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A0ACu;
        goto label_31a0ac;
    }
    ctx->pc = 0x31A0A4u;
    SET_GPR_U32(ctx, 31, 0x31A0ACu);
    ctx->pc = 0x31A0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A0A4u;
    // 0x31a0a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31A0A4u, 0x31A0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A0ACu;
label_31a0ac:
    // 0x31a0ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31a0acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31a0b0:
    // 0x31a0b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31a0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31a0b4:
    // 0x31a0b4: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x31a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_31a0b8:
    // 0x31a0b8: 0x14430063  bne         $v0, $v1, . + 4 + (0x63 << 2)
label_31a0bc:
    if (ctx->pc == 0x31A0BCu) {
        ctx->pc = 0x31A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A0B8u;
        // 0x31a0bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A0C0u;
        goto label_31a0c0;
    }
    ctx->pc = 0x31A0B8u;
    {
        const bool branch_taken_0x31a0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x31A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A0B8u;
        // 0x31a0bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a0b8) {
            ctx->pc = 0x31A248u;
            return;
        }
    }
    ctx->pc = 0x31A0C0u;
label_31a0c0:
    // 0x31a0c0: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x31a0c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_31a0c4:
    // 0x31a0c4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x31a0c4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_31a0c8:
    // 0x31a0c8: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
label_31a0cc:
    if (ctx->pc == 0x31A0CCu) {
        ctx->pc = 0x31A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A0C8u;
        // 0x31a0cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A0D0u;
        goto label_31a0d0;
    }
    ctx->pc = 0x31A0C8u;
    {
        const bool branch_taken_0x31a0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A0C8u;
        // 0x31a0cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a0c8) {
            ctx->pc = 0x31A248u;
            return;
        }
    }
    ctx->pc = 0x31A0D0u;
label_31a0d0:
    // 0x31a0d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31a0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31a0d4:
    // 0x31a0d4: 0xc0a3658  jal         func_28D960
label_31a0d8:
    if (ctx->pc == 0x31A0D8u) {
        ctx->pc = 0x31A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A0D4u;
        // 0x31a0d8: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A0DCu;
        goto label_31a0dc;
    }
    ctx->pc = 0x31A0D4u;
    SET_GPR_U32(ctx, 31, 0x31A0DCu);
    ctx->pc = 0x31A0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A0D4u;
    // 0x31a0d8: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x31A0D4u, 0x31A0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A0DCu;
label_31a0dc:
    // 0x31a0dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31a0dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31a0e0:
    // 0x31a0e0: 0x4600059  bltz        $v1, . + 4 + (0x59 << 2)
label_31a0e4:
    if (ctx->pc == 0x31A0E4u) {
        ctx->pc = 0x31A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A0E0u;
        // 0x31a0e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A0E8u;
        goto label_31a0e8;
    }
    ctx->pc = 0x31A0E0u;
    {
        const bool branch_taken_0x31a0e0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x31A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A0E0u;
        // 0x31a0e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a0e0) {
            ctx->pc = 0x31A248u;
            return;
        }
    }
    ctx->pc = 0x31A0E8u;
label_31a0e8:
    // 0x31a0e8: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x31a0e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_31a0ec:
    // 0x31a0ec: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x31a0ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_31a0f0:
    // 0x31a0f0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_31a0f4:
    if (ctx->pc == 0x31A0F4u) {
        ctx->pc = 0x31A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A0F0u;
        // 0x31a0f4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A0F8u;
        goto label_31a0f8;
    }
    ctx->pc = 0x31A0F0u;
    {
        const bool branch_taken_0x31a0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A0F0u;
        // 0x31a0f4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a0f0) {
            ctx->pc = 0x31A104u;
            goto label_31a104;
        }
    }
    ctx->pc = 0x31A0F8u;
label_31a0f8:
    // 0x31a0f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x31a0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_31a0fc:
    // 0x31a0fc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x31a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_31a100:
    // 0x31a100: 0x8c530040  lw          $s3, 0x40($v0)
    ctx->pc = 0x31a100u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_31a104:
    // 0x31a104: 0xc0b4d58  jal         func_2D3560
label_31a108:
    if (ctx->pc == 0x31A108u) {
        ctx->pc = 0x31A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A104u;
        // 0x31a108: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A10Cu;
        goto label_31a10c;
    }
    ctx->pc = 0x31A104u;
    SET_GPR_U32(ctx, 31, 0x31A10Cu);
    ctx->pc = 0x31A108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A104u;
    // 0x31a108: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3560u, 0x31A104u, 0x31A10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A10Cu;
label_31a10c:
    // 0x31a10c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31a110:
    // 0x31a110: 0x1443004d  bne         $v0, $v1, . + 4 + (0x4D << 2)
label_31a114:
    if (ctx->pc == 0x31A114u) {
        ctx->pc = 0x31A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A110u;
        // 0x31a114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A118u;
        goto label_31a118;
    }
    ctx->pc = 0x31A110u;
    {
        const bool branch_taken_0x31a110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x31A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A110u;
        // 0x31a114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a110) {
            ctx->pc = 0x31A248u;
            return;
        }
    }
    ctx->pc = 0x31A118u;
label_31a118:
    // 0x31a118: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x31a118u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_31a11c:
    // 0x31a11c: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x31a11cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_31a120:
    // 0x31a120: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x31a120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_31a124:
    // 0x31a124: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31a124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31a128:
    // 0x31a128: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x31a128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_31a12c:
    // 0x31a12c: 0xc0c6768  jal         func_319DA0
label_31a130:
    if (ctx->pc == 0x31A130u) {
        ctx->pc = 0x31A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A12Cu;
        // 0x31a130: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A134u;
        goto label_31a134;
    }
    ctx->pc = 0x31A12Cu;
    SET_GPR_U32(ctx, 31, 0x31A134u);
    ctx->pc = 0x31A130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A12Cu;
    // 0x31a130: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319DA0u, 0x31A12Cu, 0x31A134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A134u;
label_31a134:
    // 0x31a134: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31a134u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31a138:
    // 0x31a138: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
label_31a13c:
    if (ctx->pc == 0x31A13Cu) {
        ctx->pc = 0x31A140u;
        goto label_31a140;
    }
    ctx->pc = 0x31A138u;
    {
        const bool branch_taken_0x31a138 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a138) {
            ctx->pc = 0x31A1ACu;
            goto label_31a1ac;
        }
    }
    ctx->pc = 0x31A140u;
label_31a140:
    // 0x31a140: 0xc10587a  jal         func_4161E8
label_31a144:
    if (ctx->pc == 0x31A144u) {
        ctx->pc = 0x31A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A140u;
        // 0x31a144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A148u;
        goto label_31a148;
    }
    ctx->pc = 0x31A140u;
    SET_GPR_U32(ctx, 31, 0x31A148u);
    ctx->pc = 0x31A144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A140u;
    // 0x31a144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x31A140u, 0x31A148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A148u;
label_31a148:
    // 0x31a148: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31a148u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_31a14c:
    // 0x31a14c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31a14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31a150:
    // 0x31a150: 0xc10587a  jal         func_4161E8
label_31a154:
    if (ctx->pc == 0x31A154u) {
        ctx->pc = 0x31A154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A150u;
        // 0x31a154: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A158u;
        goto label_31a158;
    }
    ctx->pc = 0x31A150u;
    SET_GPR_U32(ctx, 31, 0x31A158u);
    ctx->pc = 0x31A154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A150u;
    // 0x31a154: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x31A150u, 0x31A158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A158u;
label_31a158:
    // 0x31a158: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31a158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_31a15c:
    // 0x31a15c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x31a15cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_31a160:
    // 0x31a160: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x31a160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_31a164:
    // 0x31a164: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x31a164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_31a168:
    // 0x31a168: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x31a168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_31a16c:
    // 0x31a16c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31a16cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31a170:
    // 0x31a170: 0xc0cd508  jal         func_335420
label_31a174:
    if (ctx->pc == 0x31A174u) {
        ctx->pc = 0x31A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A170u;
        // 0x31a174: 0x2484b8a0  addiu       $a0, $a0, -0x4760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A178u;
        goto label_31a178;
    }
    ctx->pc = 0x31A170u;
    SET_GPR_U32(ctx, 31, 0x31A178u);
    ctx->pc = 0x31A174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A170u;
    // 0x31a174: 0x2484b8a0  addiu       $a0, $a0, -0x4760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x31A170u, 0x31A178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A178u;
label_31a178:
    // 0x31a178: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x31a178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_31a17c:
    // 0x31a17c: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x31a17cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_31a180:
    // 0x31a180: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x31a180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_31a184:
    // 0x31a184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31a184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31a188:
    // 0x31a188: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x31a188u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_31a18c:
    // 0x31a18c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x31a18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31a190:
    // 0x31a190: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31a190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31a194:
    // 0x31a194: 0xc0a7cf2  jal         func_29F3C8
label_31a198:
    if (ctx->pc == 0x31A198u) {
        ctx->pc = 0x31A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A194u;
        // 0x31a198: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A19Cu;
        goto label_31a19c;
    }
    ctx->pc = 0x31A194u;
    SET_GPR_U32(ctx, 31, 0x31A19Cu);
    ctx->pc = 0x31A198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A194u;
    // 0x31a198: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F3C8u, 0x31A194u, 0x31A19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A19Cu;
label_31a19c:
    // 0x31a19c: 0xae710020  sw          $s1, 0x20($s3)
    ctx->pc = 0x31a19cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 17));
label_31a1a0:
    // 0x31a1a0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x31a1a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_31a1a4:
    // 0x31a1a4: 0x10000027  b           . + 4 + (0x27 << 2)
label_31a1a8:
    if (ctx->pc == 0x31A1A8u) {
        ctx->pc = 0x31A1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A1A4u;
        // 0x31a1a8: 0x7e620010  sq          $v0, 0x10($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A1ACu;
        goto label_31a1ac;
    }
    ctx->pc = 0x31A1A4u;
    {
        const bool branch_taken_0x31a1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A1A4u;
        // 0x31a1a8: 0x7e620010  sq          $v0, 0x10($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a1a4) {
            ctx->pc = 0x31A244u;
            return;
        }
    }
    ctx->pc = 0x31A1ACu;
label_31a1ac:
    // 0x31a1ac: 0xc0a40d2  jal         func_290348
label_31a1b0:
    if (ctx->pc == 0x31A1B0u) {
        ctx->pc = 0x31A1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A1ACu;
        // 0x31a1b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A1B4u;
        goto label_31a1b4;
    }
    ctx->pc = 0x31A1ACu;
    SET_GPR_U32(ctx, 31, 0x31A1B4u);
    ctx->pc = 0x31A1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A1ACu;
    // 0x31a1b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x31A1ACu, 0x31A1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A1B4u;
label_31a1b4:
    // 0x31a1b4: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_31a1b8:
    if (ctx->pc == 0x31A1B8u) {
        ctx->pc = 0x31A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A1B4u;
        // 0x31a1b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A1BCu;
        goto label_31a1bc;
    }
    ctx->pc = 0x31A1B4u;
    {
        const bool branch_taken_0x31a1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A1B4u;
        // 0x31a1b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a1b4) {
            ctx->pc = 0x31A248u;
            return;
        }
    }
    ctx->pc = 0x31A1BCu;
label_31a1bc:
    // 0x31a1bc: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x31a1bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_31a1c0:
    // 0x31a1c0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_31a1c4:
    if (ctx->pc == 0x31A1C4u) {
        ctx->pc = 0x31A1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A1C0u;
        // 0x31a1c4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A1C8u;
        goto label_31a1c8;
    }
    ctx->pc = 0x31A1C0u;
    {
        const bool branch_taken_0x31a1c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x31A1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A1C0u;
        // 0x31a1c4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a1c0) {
            ctx->pc = 0x31A1D4u;
            goto label_31a1d4;
        }
    }
    ctx->pc = 0x31A1C8u;
label_31a1c8:
    // 0x31a1c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x31a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_31a1cc:
    // 0x31a1cc: 0x10000002  b           . + 4 + (0x2 << 2)
label_31a1d0:
    if (ctx->pc == 0x31A1D0u) {
        ctx->pc = 0x31A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A1CCu;
        // 0x31a1d0: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A1D4u;
        goto label_31a1d4;
    }
    ctx->pc = 0x31A1CCu;
    {
        const bool branch_taken_0x31a1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A1CCu;
        // 0x31a1d0: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a1cc) {
            ctx->pc = 0x31A1D8u;
            goto label_31a1d8;
        }
    }
    ctx->pc = 0x31A1D4u;
label_31a1d4:
    // 0x31a1d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31a1d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31a1d8:
    // 0x31a1d8: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
label_31a1dc:
    if (ctx->pc == 0x31A1DCu) {
        ctx->pc = 0x31A1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A1D8u;
        // 0x31a1dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A1E0u;
        goto label_31a1e0;
    }
    ctx->pc = 0x31A1D8u;
    {
        const bool branch_taken_0x31a1d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A1D8u;
        // 0x31a1dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a1d8) {
            ctx->pc = 0x31A248u;
            return;
        }
    }
    ctx->pc = 0x31A1E0u;
label_31a1e0:
    // 0x31a1e0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x31a1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_31a1e4:
    // 0x31a1e4: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x31a1e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_31a1e8:
    // 0x31a1e8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x31a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_31a1ec:
    // 0x31a1ec: 0x40f809  jalr        $v0
label_31a1f0:
    if (ctx->pc == 0x31A1F0u) {
        ctx->pc = 0x31A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A1ECu;
        // 0x31a1f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A1F4u;
        goto label_31a1f4;
    }
    ctx->pc = 0x31A1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31A1F4u);
        ctx->pc = 0x31A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A1ECu;
        // 0x31a1f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A1ECu, 0x31A1F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31A1F4u;
label_31a1f4:
    // 0x31a1f4: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x31a1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_31a1f8:
    // 0x31a1f8: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
label_31a1fc:
    if (ctx->pc == 0x31A1FCu) {
        ctx->pc = 0x31A1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A1F8u;
        // 0x31a1fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A200u;
        goto label_31a200;
    }
    ctx->pc = 0x31A1F8u;
    {
        const bool branch_taken_0x31a1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x31A1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A1F8u;
        // 0x31a1fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a1f8) {
            ctx->pc = 0x31A248u;
            return;
        }
    }
    ctx->pc = 0x31A200u;
label_31a200:
    // 0x31a200: 0xc0b4d58  jal         func_2D3560
label_31a204:
    if (ctx->pc == 0x31A204u) {
        ctx->pc = 0x31A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A200u;
        // 0x31a204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A208u;
        goto label_31a208;
    }
    ctx->pc = 0x31A200u;
    SET_GPR_U32(ctx, 31, 0x31A208u);
    ctx->pc = 0x31A204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A200u;
    // 0x31a204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3560u, 0x31A200u, 0x31A208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A208u;
label_31a208:
    // 0x31a208: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31a208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31a20c:
    // 0x31a20c: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
label_31a210:
    if (ctx->pc == 0x31A210u) {
        ctx->pc = 0x31A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A20Cu;
        // 0x31a210: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A214u;
        goto label_31a214;
    }
    ctx->pc = 0x31A20Cu;
    {
        const bool branch_taken_0x31a20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x31A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A20Cu;
        // 0x31a210: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a20c) {
            ctx->pc = 0x31A248u;
            return;
        }
    }
    ctx->pc = 0x31A214u;
label_31a214:
    // 0x31a214: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x31a214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_31a218:
    // 0x31a218: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x31a218u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_31a21c:
    // 0x31a21c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x31a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_31a220:
    // 0x31a220: 0x40f809  jalr        $v0
label_31a224:
    if (ctx->pc == 0x31A224u) {
        ctx->pc = 0x31A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A220u;
        // 0x31a224: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A228u;
        goto label_31a228;
    }
    ctx->pc = 0x31A220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31A228u);
        ctx->pc = 0x31A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A220u;
        // 0x31a224: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A220u, 0x31A228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31A228u;
label_31a228:
    // 0x31a228: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31a228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31a22c:
    // 0x31a22c: 0xc0ab742  jal         func_2ADD08
label_31a230:
    if (ctx->pc == 0x31A230u) {
        ctx->pc = 0x31A230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A22Cu;
        // 0x31a230: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A234u;
        goto label_31a234;
    }
    ctx->pc = 0x31A22Cu;
    SET_GPR_U32(ctx, 31, 0x31A234u);
    ctx->pc = 0x31A230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A22Cu;
    // 0x31a230: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADD08u, 0x31A22Cu, 0x31A234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A234u;
label_31a234:
    // 0x31a234: 0x10000004  b           . + 4 + (0x4 << 2)
label_31a238:
    if (ctx->pc == 0x31A238u) {
        ctx->pc = 0x31A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A234u;
        // 0x31a238: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A23Cu;
        goto label_31a23c;
    }
    ctx->pc = 0x31A234u;
    {
        const bool branch_taken_0x31a234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A234u;
        // 0x31a238: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a234) {
            ctx->pc = 0x31A248u;
            return;
        }
    }
    ctx->pc = 0x31A23Cu;
label_31a23c:
    // 0x31a23c: 0x10000002  b           . + 4 + (0x2 << 2)
label_31a240:
    if (ctx->pc == 0x31A240u) {
        ctx->pc = 0x31A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A23Cu;
        // 0x31a240: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A244u;
        goto label_fallthrough_0x31a23c;
    }
    ctx->pc = 0x31A23Cu;
    {
        const bool branch_taken_0x31a23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A23Cu;
        // 0x31a240: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a23c) {
            ctx->pc = 0x31A248u;
            return;
        }
    }
label_fallthrough_0x31a23c:
    ctx->pc = 0x31A244u;
}
