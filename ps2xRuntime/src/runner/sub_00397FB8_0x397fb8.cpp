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

// Function: sub_00397FB8
// Address: 0x397fb8 - 0x3980c8
void sub_00397FB8_0x397fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397FB8_0x397fb8");
#endif

    switch (ctx->pc) {
        case 0x397fb8u: goto label_397fb8;
        case 0x397fbcu: goto label_397fbc;
        case 0x397fc0u: goto label_397fc0;
        case 0x397fc4u: goto label_397fc4;
        case 0x397fc8u: goto label_397fc8;
        case 0x397fccu: goto label_397fcc;
        case 0x397fd0u: goto label_397fd0;
        case 0x397fd4u: goto label_397fd4;
        case 0x397fd8u: goto label_397fd8;
        case 0x397fdcu: goto label_397fdc;
        case 0x397fe0u: goto label_397fe0;
        case 0x397fe4u: goto label_397fe4;
        case 0x397fe8u: goto label_397fe8;
        case 0x397fecu: goto label_397fec;
        case 0x397ff0u: goto label_397ff0;
        case 0x397ff4u: goto label_397ff4;
        case 0x397ff8u: goto label_397ff8;
        case 0x397ffcu: goto label_397ffc;
        case 0x398000u: goto label_398000;
        case 0x398004u: goto label_398004;
        case 0x398008u: goto label_398008;
        case 0x39800cu: goto label_39800c;
        case 0x398010u: goto label_398010;
        case 0x398014u: goto label_398014;
        case 0x398018u: goto label_398018;
        case 0x39801cu: goto label_39801c;
        case 0x398020u: goto label_398020;
        case 0x398024u: goto label_398024;
        case 0x398028u: goto label_398028;
        case 0x39802cu: goto label_39802c;
        case 0x398030u: goto label_398030;
        case 0x398034u: goto label_398034;
        case 0x398038u: goto label_398038;
        case 0x39803cu: goto label_39803c;
        case 0x398040u: goto label_398040;
        case 0x398044u: goto label_398044;
        case 0x398048u: goto label_398048;
        case 0x39804cu: goto label_39804c;
        case 0x398050u: goto label_398050;
        case 0x398054u: goto label_398054;
        case 0x398058u: goto label_398058;
        case 0x39805cu: goto label_39805c;
        case 0x398060u: goto label_398060;
        case 0x398064u: goto label_398064;
        case 0x398068u: goto label_398068;
        case 0x39806cu: goto label_39806c;
        case 0x398070u: goto label_398070;
        case 0x398074u: goto label_398074;
        case 0x398078u: goto label_398078;
        case 0x39807cu: goto label_39807c;
        case 0x398080u: goto label_398080;
        case 0x398084u: goto label_398084;
        case 0x398088u: goto label_398088;
        case 0x39808cu: goto label_39808c;
        case 0x398090u: goto label_398090;
        case 0x398094u: goto label_398094;
        case 0x398098u: goto label_398098;
        case 0x39809cu: goto label_39809c;
        case 0x3980a0u: goto label_3980a0;
        case 0x3980a4u: goto label_3980a4;
        case 0x3980a8u: goto label_3980a8;
        case 0x3980acu: goto label_3980ac;
        case 0x3980b0u: goto label_3980b0;
        case 0x3980b4u: goto label_3980b4;
        case 0x3980b8u: goto label_3980b8;
        case 0x3980bcu: goto label_3980bc;
        case 0x3980c0u: goto label_3980c0;
        case 0x3980c4u: goto label_3980c4;
        default: break;
    }

    ctx->pc = 0x397fb8u;

label_397fb8:
    // 0x397fb8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x397fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_397fbc:
    // 0x397fbc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x397fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_397fc0:
    // 0x397fc0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x397fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_397fc4:
    // 0x397fc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x397fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_397fc8:
    // 0x397fc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x397fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_397fcc:
    // 0x397fcc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x397fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_397fd0:
    // 0x397fd0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x397fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_397fd4:
    // 0x397fd4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x397fd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_397fd8:
    // 0x397fd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x397fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_397fdc:
    // 0x397fdc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x397fdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_397fe0:
    // 0x397fe0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x397fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_397fe4:
    // 0x397fe4: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x397fe4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_397fe8:
    // 0x397fe8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x397fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_397fec:
    // 0x397fec: 0x40f809  jalr        $v0
label_397ff0:
    if (ctx->pc == 0x397FF0u) {
        ctx->pc = 0x397FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397FECu;
        // 0x397ff0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397FF4u;
        goto label_397ff4;
    }
    ctx->pc = 0x397FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x397FF4u);
        ctx->pc = 0x397FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397FECu;
        // 0x397ff0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397FECu, 0x397FF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x397FF4u;
label_397ff4:
    // 0x397ff4: 0x5c400008  bgtzl       $v0, . + 4 + (0x8 << 2)
label_397ff8:
    if (ctx->pc == 0x397FF8u) {
        ctx->pc = 0x397FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397FF4u;
        // 0x397ff8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397FFCu;
        goto label_397ffc;
    }
    ctx->pc = 0x397FF4u;
    {
        const bool branch_taken_0x397ff4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x397ff4) {
            ctx->pc = 0x397FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397FF4u;
            // 0x397ff8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398018u;
            goto label_398018;
        }
    }
    ctx->pc = 0x397FFCu;
label_397ffc:
    // 0x397ffc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x397ffcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_398000:
    // 0x398000: 0xc0e663c  jal         func_3998F0
label_398004:
    if (ctx->pc == 0x398004u) {
        ctx->pc = 0x398004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398000u;
        // 0x398004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398008u;
        goto label_398008;
    }
    ctx->pc = 0x398000u;
    SET_GPR_U32(ctx, 31, 0x398008u);
    ctx->pc = 0x398004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398000u;
    // 0x398004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3998F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3998F0u, 0x398000u, 0x398008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398008u;
label_398008:
    // 0x398008: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_39800c:
    if (ctx->pc == 0x39800Cu) {
        ctx->pc = 0x39800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398008u;
        // 0x39800c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398010u;
        goto label_398010;
    }
    ctx->pc = 0x398008u;
    {
        const bool branch_taken_0x398008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x398008) {
            ctx->pc = 0x39800Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398008u;
            // 0x39800c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398018u;
            goto label_398018;
        }
    }
    ctx->pc = 0x398010u;
label_398010:
    // 0x398010: 0x10000025  b           . + 4 + (0x25 << 2)
label_398014:
    if (ctx->pc == 0x398014u) {
        ctx->pc = 0x398014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398010u;
        // 0x398014: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398018u;
        goto label_398018;
    }
    ctx->pc = 0x398010u;
    {
        const bool branch_taken_0x398010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398010u;
        // 0x398014: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398010) {
            ctx->pc = 0x3980A8u;
            goto label_3980a8;
        }
    }
    ctx->pc = 0x398018u;
label_398018:
    // 0x398018: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x398018u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_39801c:
    // 0x39801c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x39801cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_398020:
    // 0x398020: 0x40f809  jalr        $v0
label_398024:
    if (ctx->pc == 0x398024u) {
        ctx->pc = 0x398024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398020u;
        // 0x398024: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398028u;
        goto label_398028;
    }
    ctx->pc = 0x398020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398028u);
        ctx->pc = 0x398024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398020u;
        // 0x398024: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398020u, 0x398028u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398028u;
label_398028:
    // 0x398028: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x398028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39802c:
    // 0x39802c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39802cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_398030:
    // 0x398030: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x398030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_398034:
    // 0x398034: 0x84440130  lh          $a0, 0x130($v0)
    ctx->pc = 0x398034u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 304)));
label_398038:
    // 0x398038: 0x8c460134  lw          $a2, 0x134($v0)
    ctx->pc = 0x398038u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_39803c:
    // 0x39803c: 0xc0f809  jalr        $a2
label_398040:
    if (ctx->pc == 0x398040u) {
        ctx->pc = 0x398040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39803Cu;
        // 0x398040: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398044u;
        goto label_398044;
    }
    ctx->pc = 0x39803Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x398044u);
        ctx->pc = 0x398040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39803Cu;
        // 0x398040: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39803Cu, 0x398044u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398044u;
label_398044:
    // 0x398044: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x398044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_398048:
    // 0x398048: 0x84640198  lh          $a0, 0x198($v1)
    ctx->pc = 0x398048u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 408)));
label_39804c:
    // 0x39804c: 0x8c62019c  lw          $v0, 0x19C($v1)
    ctx->pc = 0x39804cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 412)));
label_398050:
    // 0x398050: 0x40f809  jalr        $v0
label_398054:
    if (ctx->pc == 0x398054u) {
        ctx->pc = 0x398054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398050u;
        // 0x398054: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398058u;
        goto label_398058;
    }
    ctx->pc = 0x398050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398058u);
        ctx->pc = 0x398054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398050u;
        // 0x398054: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398050u, 0x398058u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398058u;
label_398058:
    // 0x398058: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_39805c:
    if (ctx->pc == 0x39805Cu) {
        ctx->pc = 0x39805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398058u;
        // 0x39805c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398060u;
        goto label_398060;
    }
    ctx->pc = 0x398058u;
    {
        const bool branch_taken_0x398058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398058u;
        // 0x39805c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398058) {
            ctx->pc = 0x39806Cu;
            goto label_39806c;
        }
    }
    ctx->pc = 0x398060u;
label_398060:
    // 0x398060: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x398060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_398064:
    // 0x398064: 0x40f809  jalr        $v0
label_398068:
    if (ctx->pc == 0x398068u) {
        ctx->pc = 0x398068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398064u;
        // 0x398068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39806Cu;
        goto label_39806c;
    }
    ctx->pc = 0x398064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39806Cu);
        ctx->pc = 0x398068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398064u;
        // 0x398068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398064u, 0x39806Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39806Cu;
label_39806c:
    // 0x39806c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39806cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_398070:
    // 0x398070: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x398070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_398074:
    // 0x398074: 0xa2020108  sb          $v0, 0x108($s0)
    ctx->pc = 0x398074u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 264), (uint8_t)GPR_U32(ctx, 2));
label_398078:
    // 0x398078: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x398078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39807c:
    // 0x39807c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x39807cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_398080:
    // 0x398080: 0xc0e8cbc  jal         func_3A32F0
label_398084:
    if (ctx->pc == 0x398084u) {
        ctx->pc = 0x398084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398080u;
        // 0x398084: 0x8c642c7c  lw          $a0, 0x2C7C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398088u;
        goto label_398088;
    }
    ctx->pc = 0x398080u;
    SET_GPR_U32(ctx, 31, 0x398088u);
    ctx->pc = 0x398084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398080u;
    // 0x398084: 0x8c642c7c  lw          $a0, 0x2C7C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x398080u, 0x398088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398088u;
label_398088:
    // 0x398088: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x398088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_39808c:
    // 0x39808c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x39808cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_398090:
    // 0x398090: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x398090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_398094:
    // 0x398094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x398094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_398098:
    // 0x398098: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x398098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_39809c:
    // 0x39809c: 0xc0e4944  jal         func_392510
label_3980a0:
    if (ctx->pc == 0x3980A0u) {
        ctx->pc = 0x3980A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39809Cu;
        // 0x3980a0: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3980A4u;
        goto label_3980a4;
    }
    ctx->pc = 0x39809Cu;
    SET_GPR_U32(ctx, 31, 0x3980A4u);
    ctx->pc = 0x3980A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39809Cu;
    // 0x3980a0: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392510u, 0x39809Cu, 0x3980A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3980A4u;
label_3980a4:
    // 0x3980a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3980a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3980a8:
    // 0x3980a8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3980a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3980ac:
    // 0x3980ac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3980acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3980b0:
    // 0x3980b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3980b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3980b4:
    // 0x3980b4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3980b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3980b8:
    // 0x3980b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3980b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3980bc:
    // 0x3980bc: 0x3e00008  jr          $ra
label_3980c0:
    if (ctx->pc == 0x3980C0u) {
        ctx->pc = 0x3980C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3980BCu;
        // 0x3980c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3980C4u;
        goto label_3980c4;
    }
    ctx->pc = 0x3980BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3980C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3980BCu;
        // 0x3980c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3980BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3980C4u;
label_3980c4:
    // 0x3980c4: 0x0  nop
    ctx->pc = 0x3980c4u;
    // NOP
    ctx->pc = 0x3980c8u;
}
