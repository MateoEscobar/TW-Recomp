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

// Function: sub_002AC000
// Address: 0x2ac000 - 0x2ac130
void sub_002AC000_0x2ac000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC000_0x2ac000");
#endif

    switch (ctx->pc) {
        case 0x2ac038u: goto label_2ac038;
        case 0x2ac048u: goto label_2ac048;
        case 0x2ac058u: goto label_2ac058;
        case 0x2ac068u: goto label_2ac068;
        case 0x2ac078u: goto label_2ac078;
        case 0x2ac088u: goto label_2ac088;
        case 0x2ac098u: goto label_2ac098;
        case 0x2ac0c0u: goto label_2ac0c0;
        case 0x2ac0d0u: goto label_2ac0d0;
        case 0x2ac0e0u: goto label_2ac0e0;
        case 0x2ac0fcu: goto label_2ac0fc;
        case 0x2ac10cu: goto label_2ac10c;
        case 0x2ac11cu: goto label_2ac11c;
        default: break;
    }

    ctx->pc = 0x2ac000u;

    // 0x2ac000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ac000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ac004: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ac004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ac008: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ac008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ac00c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac010: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ac010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ac014: 0x90830031  lbu         $v1, 0x31($a0)
    ctx->pc = 0x2ac014u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x2ac018: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2AC018u;
    {
        const bool branch_taken_0x2ac018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC018u;
        // 0x2ac01c: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac018) {
            ctx->pc = 0x2AC0A0u;
            goto label_2ac0a0;
        }
    }
    ctx->pc = 0x2AC020u;
    // 0x2ac020: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2ac020u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x2ac024: 0x262403c8  addiu       $a0, $s1, 0x3C8
    ctx->pc = 0x2ac024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 968));
    // 0x2ac028: 0x8e050ff8  lw          $a1, 0xFF8($s0)
    ctx->pc = 0x2ac028u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x510FF8u));
    // 0x2ac02c: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2ac02cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x2ac030: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2AC030u;
    SET_GPR_U32(ctx, 31, 0x2AC038u);
    ctx->pc = 0x2AC034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC030u;
    // 0x2ac034: 0x26100ff8  addiu       $s0, $s0, 0xFF8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2AC030u, 0x2AC038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC038u;
label_2ac038:
    // 0x2ac038: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2ac038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ac03c: 0x262403f0  addiu       $a0, $s1, 0x3F0
    ctx->pc = 0x2ac03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1008));
    // 0x2ac040: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2AC040u;
    SET_GPR_U32(ctx, 31, 0x2AC048u);
    ctx->pc = 0x2AC044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC040u;
    // 0x2ac044: 0x24060140  addiu       $a2, $zero, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2AC040u, 0x2AC048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC048u;
label_2ac048:
    // 0x2ac048: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2ac048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ac04c: 0x26240418  addiu       $a0, $s1, 0x418
    ctx->pc = 0x2ac04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1048));
    // 0x2ac050: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2AC050u;
    SET_GPR_U32(ctx, 31, 0x2AC058u);
    ctx->pc = 0x2AC054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC050u;
    // 0x2ac054: 0x24060141  addiu       $a2, $zero, 0x141 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2AC050u, 0x2AC058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC058u;
label_2ac058:
    // 0x2ac058: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2ac058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ac05c: 0x26240440  addiu       $a0, $s1, 0x440
    ctx->pc = 0x2ac05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
    // 0x2ac060: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2AC060u;
    SET_GPR_U32(ctx, 31, 0x2AC068u);
    ctx->pc = 0x2AC064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC060u;
    // 0x2ac064: 0x24060142  addiu       $a2, $zero, 0x142 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 322));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2AC060u, 0x2AC068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC068u;
label_2ac068:
    // 0x2ac068: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2ac068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ac06c: 0x26240468  addiu       $a0, $s1, 0x468
    ctx->pc = 0x2ac06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1128));
    // 0x2ac070: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2AC070u;
    SET_GPR_U32(ctx, 31, 0x2AC078u);
    ctx->pc = 0x2AC074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC070u;
    // 0x2ac074: 0x24060143  addiu       $a2, $zero, 0x143 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 323));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2AC070u, 0x2AC078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC078u;
label_2ac078:
    // 0x2ac078: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x2ac078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2ac07c: 0x26240490  addiu       $a0, $s1, 0x490
    ctx->pc = 0x2ac07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
    // 0x2ac080: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2AC080u;
    SET_GPR_U32(ctx, 31, 0x2AC088u);
    ctx->pc = 0x2AC084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC080u;
    // 0x2ac084: 0x2406029d  addiu       $a2, $zero, 0x29D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 669));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2AC080u, 0x2AC088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC088u;
label_2ac088:
    // 0x2ac088: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x2ac088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2ac08c: 0x262404b8  addiu       $a0, $s1, 0x4B8
    ctx->pc = 0x2ac08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1208));
    // 0x2ac090: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2AC090u;
    SET_GPR_U32(ctx, 31, 0x2AC098u);
    ctx->pc = 0x2AC094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC090u;
    // 0x2ac094: 0x24060144  addiu       $a2, $zero, 0x144 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 324));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2AC090u, 0x2AC098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC098u;
label_2ac098:
    // 0x2ac098: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2AC098u;
    {
        const bool branch_taken_0x2ac098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC098u;
        // 0x2ac09c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac098) {
            ctx->pc = 0x2AC120u;
            goto label_2ac120;
        }
    }
    ctx->pc = 0x2AC0A0u;
label_2ac0a0:
    // 0x2ac0a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ac0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac0a4: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2AC0A4u;
    {
        const bool branch_taken_0x2ac0a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AC0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC0A4u;
        // 0x2ac0a8: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac0a4) {
            ctx->pc = 0x2AC0E8u;
            goto label_2ac0e8;
        }
    }
    ctx->pc = 0x2AC0ACu;
    // 0x2ac0ac: 0x262403c8  addiu       $a0, $s1, 0x3C8
    ctx->pc = 0x2ac0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 968));
    // 0x2ac0b0: 0x26100ff8  addiu       $s0, $s0, 0xFF8
    ctx->pc = 0x2ac0b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4088));
    // 0x2ac0b4: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2ac0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x2ac0b8: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2AC0B8u;
    SET_GPR_U32(ctx, 31, 0x2AC0C0u);
    ctx->pc = 0x2AC0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC0B8u;
    // 0x2ac0bc: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2AC0B8u, 0x2AC0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC0C0u;
label_2ac0c0:
    // 0x2ac0c0: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x2ac0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2ac0c4: 0x262403f0  addiu       $a0, $s1, 0x3F0
    ctx->pc = 0x2ac0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1008));
    // 0x2ac0c8: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2AC0C8u;
    SET_GPR_U32(ctx, 31, 0x2AC0D0u);
    ctx->pc = 0x2AC0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC0C8u;
    // 0x2ac0cc: 0x240600c4  addiu       $a2, $zero, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2AC0C8u, 0x2AC0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC0D0u;
label_2ac0d0:
    // 0x2ac0d0: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x2ac0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2ac0d4: 0x26240418  addiu       $a0, $s1, 0x418
    ctx->pc = 0x2ac0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1048));
    // 0x2ac0d8: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2AC0D8u;
    SET_GPR_U32(ctx, 31, 0x2AC0E0u);
    ctx->pc = 0x2AC0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC0D8u;
    // 0x2ac0dc: 0x240600c3  addiu       $a2, $zero, 0xC3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2AC0D8u, 0x2AC0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC0E0u;
label_2ac0e0:
    // 0x2ac0e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2AC0E0u;
    {
        const bool branch_taken_0x2ac0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC0E0u;
        // 0x2ac0e4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac0e0) {
            ctx->pc = 0x2AC120u;
            goto label_2ac120;
        }
    }
    ctx->pc = 0x2AC0E8u;
label_2ac0e8:
    // 0x2ac0e8: 0x262403c8  addiu       $a0, $s1, 0x3C8
    ctx->pc = 0x2ac0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 968));
    // 0x2ac0ec: 0x26100ff8  addiu       $s0, $s0, 0xFF8
    ctx->pc = 0x2ac0ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4088));
    // 0x2ac0f0: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2ac0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x2ac0f4: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2AC0F4u;
    SET_GPR_U32(ctx, 31, 0x2AC0FCu);
    ctx->pc = 0x2AC0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC0F4u;
    // 0x2ac0f8: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2AC0F4u, 0x2AC0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC0FCu;
label_2ac0fc:
    // 0x2ac0fc: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x2ac0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2ac100: 0x262403f0  addiu       $a0, $s1, 0x3F0
    ctx->pc = 0x2ac100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1008));
    // 0x2ac104: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2AC104u;
    SET_GPR_U32(ctx, 31, 0x2AC10Cu);
    ctx->pc = 0x2AC108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC104u;
    // 0x2ac108: 0x240600c4  addiu       $a2, $zero, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2AC104u, 0x2AC10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC10Cu;
label_2ac10c:
    // 0x2ac10c: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x2ac10cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2ac110: 0x26240418  addiu       $a0, $s1, 0x418
    ctx->pc = 0x2ac110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1048));
    // 0x2ac114: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x2AC114u;
    SET_GPR_U32(ctx, 31, 0x2AC11Cu);
    ctx->pc = 0x2AC118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC114u;
    // 0x2ac118: 0x240600c3  addiu       $a2, $zero, 0xC3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2AC114u, 0x2AC11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC11Cu;
label_2ac11c:
    // 0x2ac11c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ac11cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ac120:
    // 0x2ac120: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ac120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac124: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac128: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC128u;
        // 0x2ac12c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC130u;
}
