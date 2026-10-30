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

// Function: sub_001AC000
// Address: 0x1ac000 - 0x1ac0e8
void sub_001AC000_0x1ac000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC000_0x1ac000");
#endif

    switch (ctx->pc) {
        case 0x1ac000u: goto label_1ac000;
        case 0x1ac004u: goto label_1ac004;
        case 0x1ac008u: goto label_1ac008;
        case 0x1ac00cu: goto label_1ac00c;
        case 0x1ac010u: goto label_1ac010;
        case 0x1ac014u: goto label_1ac014;
        case 0x1ac018u: goto label_1ac018;
        case 0x1ac01cu: goto label_1ac01c;
        case 0x1ac020u: goto label_1ac020;
        case 0x1ac024u: goto label_1ac024;
        case 0x1ac028u: goto label_1ac028;
        case 0x1ac02cu: goto label_1ac02c;
        case 0x1ac030u: goto label_1ac030;
        case 0x1ac034u: goto label_1ac034;
        case 0x1ac038u: goto label_1ac038;
        case 0x1ac03cu: goto label_1ac03c;
        case 0x1ac040u: goto label_1ac040;
        case 0x1ac044u: goto label_1ac044;
        case 0x1ac048u: goto label_1ac048;
        case 0x1ac04cu: goto label_1ac04c;
        case 0x1ac050u: goto label_1ac050;
        case 0x1ac054u: goto label_1ac054;
        case 0x1ac058u: goto label_1ac058;
        case 0x1ac05cu: goto label_1ac05c;
        case 0x1ac060u: goto label_1ac060;
        case 0x1ac064u: goto label_1ac064;
        case 0x1ac068u: goto label_1ac068;
        case 0x1ac06cu: goto label_1ac06c;
        case 0x1ac070u: goto label_1ac070;
        case 0x1ac074u: goto label_1ac074;
        case 0x1ac078u: goto label_1ac078;
        case 0x1ac07cu: goto label_1ac07c;
        case 0x1ac080u: goto label_1ac080;
        case 0x1ac084u: goto label_1ac084;
        case 0x1ac088u: goto label_1ac088;
        case 0x1ac08cu: goto label_1ac08c;
        case 0x1ac090u: goto label_1ac090;
        case 0x1ac094u: goto label_1ac094;
        case 0x1ac098u: goto label_1ac098;
        case 0x1ac09cu: goto label_1ac09c;
        case 0x1ac0a0u: goto label_1ac0a0;
        case 0x1ac0a4u: goto label_1ac0a4;
        case 0x1ac0a8u: goto label_1ac0a8;
        case 0x1ac0acu: goto label_1ac0ac;
        case 0x1ac0b0u: goto label_1ac0b0;
        case 0x1ac0b4u: goto label_1ac0b4;
        case 0x1ac0b8u: goto label_1ac0b8;
        case 0x1ac0bcu: goto label_1ac0bc;
        case 0x1ac0c0u: goto label_1ac0c0;
        case 0x1ac0c4u: goto label_1ac0c4;
        case 0x1ac0c8u: goto label_1ac0c8;
        case 0x1ac0ccu: goto label_1ac0cc;
        case 0x1ac0d0u: goto label_1ac0d0;
        case 0x1ac0d4u: goto label_1ac0d4;
        case 0x1ac0d8u: goto label_1ac0d8;
        case 0x1ac0dcu: goto label_1ac0dc;
        case 0x1ac0e0u: goto label_1ac0e0;
        case 0x1ac0e4u: goto label_1ac0e4;
        default: break;
    }

    ctx->pc = 0x1ac000u;

label_1ac000:
    // 0x1ac000: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ac000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1ac004:
    // 0x1ac004: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1ac004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1ac008:
    // 0x1ac008: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ac008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1ac00c:
    // 0x1ac00c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ac00cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac010:
    // 0x1ac010: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1ac010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1ac014:
    // 0x1ac014: 0x26220080  addiu       $v0, $s1, 0x80
    ctx->pc = 0x1ac014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_1ac018:
    // 0x1ac018: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1ac018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1ac01c:
    // 0x1ac01c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ac01cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac020:
    // 0x1ac020: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1ac020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1ac024:
    // 0x1ac024: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ac024u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac028:
    // 0x1ac028: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ac02c:
    // 0x1ac02c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1ac02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ac030:
    // 0x1ac030: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1ac030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1ac034:
    // 0x1ac034: 0x8e3000c0  lw          $s0, 0xC0($s1)
    ctx->pc = 0x1ac034u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_1ac038:
    // 0x1ac038: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1ac038u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ac03c:
    // 0x1ac03c: 0x3a083  sra         $s4, $v1, 2
    ctx->pc = 0x1ac03cu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 3), 2));
label_1ac040:
    // 0x1ac040: 0x254102b  sltu        $v0, $s2, $s4
    ctx->pc = 0x1ac040u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_1ac044:
    // 0x1ac044: 0x0  nop
    ctx->pc = 0x1ac044u;
    // NOP
label_1ac048:
    // 0x1ac048: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1ac04c:
    if (ctx->pc == 0x1AC04Cu) {
        ctx->pc = 0x1AC050u;
        goto label_1ac050;
    }
    ctx->pc = 0x1AC048u;
    {
        const bool branch_taken_0x1ac048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac048) {
            ctx->pc = 0x1AC09Cu;
            goto label_1ac09c;
        }
    }
    ctx->pc = 0x1AC050u;
label_1ac050:
    // 0x1ac050: 0x922200b9  lbu         $v0, 0xB9($s1)
    ctx->pc = 0x1ac050u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 185)));
label_1ac054:
    // 0x1ac054: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x1ac054u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1ac058:
    // 0x1ac058: 0x6030007  bgezl       $s0, . + 4 + (0x7 << 2)
label_1ac05c:
    if (ctx->pc == 0x1AC05Cu) {
        ctx->pc = 0x1AC05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC058u;
        // 0x1ac05c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC060u;
        goto label_1ac060;
    }
    ctx->pc = 0x1AC058u;
    {
        const bool branch_taken_0x1ac058 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1ac058) {
            ctx->pc = 0x1AC05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC058u;
            // 0x1ac05c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC078u;
            goto label_1ac078;
        }
    }
    ctx->pc = 0x1AC060u;
label_1ac060:
    // 0x1ac060: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x1ac060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_1ac064:
    // 0x1ac064: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_1ac068:
    if (ctx->pc == 0x1AC068u) {
        ctx->pc = 0x1AC068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC064u;
        // 0x1ac068: 0x8e3000c0  lw          $s0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC06Cu;
        goto label_1ac06c;
    }
    ctx->pc = 0x1AC064u;
    {
        const bool branch_taken_0x1ac064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac064) {
            ctx->pc = 0x1AC068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC064u;
            // 0x1ac068: 0x8e3000c0  lw          $s0, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC074u;
            goto label_1ac074;
        }
    }
    ctx->pc = 0x1AC06Cu;
label_1ac06c:
    // 0x1ac06c: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x1ac06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_1ac070:
    // 0x1ac070: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1ac070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1ac074:
    // 0x1ac074: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ac074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ac078:
    // 0x1ac078: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ac078u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ac07c:
    // 0x1ac07c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ac07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac080:
    // 0x1ac080: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x1ac080u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_1ac084:
    // 0x1ac084: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x1ac084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_1ac088:
    // 0x1ac088: 0x40f809  jalr        $v0
label_1ac08c:
    if (ctx->pc == 0x1AC08Cu) {
        ctx->pc = 0x1AC08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC088u;
        // 0x1ac08c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC090u;
        goto label_1ac090;
    }
    ctx->pc = 0x1AC088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC090u);
        ctx->pc = 0x1AC08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC088u;
        // 0x1ac08c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC088u, 0x1AC090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC090u;
label_1ac090:
    // 0x1ac090: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
label_1ac094:
    if (ctx->pc == 0x1AC094u) {
        ctx->pc = 0x1AC094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC090u;
        // 0x1ac094: 0x254102b  sltu        $v0, $s2, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC098u;
        goto label_1ac098;
    }
    ctx->pc = 0x1AC090u;
    {
        const bool branch_taken_0x1ac090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC090u;
        // 0x1ac094: 0x254102b  sltu        $v0, $s2, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac090) {
            ctx->pc = 0x1AC048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac048;
        }
    }
    ctx->pc = 0x1AC098u;
label_1ac098:
    // 0x1ac098: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1ac098u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac09c:
    // 0x1ac09c: 0x5260000b  beql        $s3, $zero, . + 4 + (0xB << 2)
label_1ac0a0:
    if (ctx->pc == 0x1AC0A0u) {
        ctx->pc = 0x1AC0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC09Cu;
        // 0x1ac0a0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC0A4u;
        goto label_1ac0a4;
    }
    ctx->pc = 0x1AC09Cu;
    {
        const bool branch_taken_0x1ac09c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac09c) {
            ctx->pc = 0x1AC0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC09Cu;
            // 0x1ac0a0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC0CCu;
            goto label_1ac0cc;
        }
    }
    ctx->pc = 0x1AC0A4u;
label_1ac0a4:
    // 0x1ac0a4: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x1ac0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_1ac0a8:
    // 0x1ac0a8: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
label_1ac0ac:
    if (ctx->pc == 0x1AC0ACu) {
        ctx->pc = 0x1AC0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC0A8u;
        // 0x1ac0ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC0B0u;
        goto label_1ac0b0;
    }
    ctx->pc = 0x1AC0A8u;
    {
        const bool branch_taken_0x1ac0a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC0A8u;
        // 0x1ac0ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac0a8) {
            ctx->pc = 0x1AC0C8u;
            goto label_1ac0c8;
        }
    }
    ctx->pc = 0x1AC0B0u;
label_1ac0b0:
    // 0x1ac0b0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ac0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ac0b4:
    // 0x1ac0b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ac0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac0b8:
    // 0x1ac0b8: 0x84440108  lh          $a0, 0x108($v0)
    ctx->pc = 0x1ac0b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 264)));
label_1ac0bc:
    // 0x1ac0bc: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x1ac0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_1ac0c0:
    // 0x1ac0c0: 0x60f809  jalr        $v1
label_1ac0c4:
    if (ctx->pc == 0x1AC0C4u) {
        ctx->pc = 0x1AC0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC0C0u;
        // 0x1ac0c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC0C8u;
        goto label_1ac0c8;
    }
    ctx->pc = 0x1AC0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AC0C8u);
        ctx->pc = 0x1AC0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC0C0u;
        // 0x1ac0c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC0C0u, 0x1AC0C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC0C8u;
label_1ac0c8:
    // 0x1ac0c8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1ac0c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ac0cc:
    // 0x1ac0cc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1ac0ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ac0d0:
    // 0x1ac0d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ac0d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ac0d4:
    // 0x1ac0d4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1ac0d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ac0d8:
    // 0x1ac0d8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1ac0d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac0dc:
    // 0x1ac0dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ac0e0:
    // 0x1ac0e0: 0x3e00008  jr          $ra
label_1ac0e4:
    if (ctx->pc == 0x1AC0E4u) {
        ctx->pc = 0x1AC0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC0E0u;
        // 0x1ac0e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC0E8u;
        goto label_fallthrough_0x1ac0e0;
    }
    ctx->pc = 0x1AC0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC0E0u;
        // 0x1ac0e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ac0e0:
    ctx->pc = 0x1AC0E8u;
}
