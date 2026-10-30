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

// Function: sub_004F3000
// Address: 0x4f3000 - 0x4f30c8
void sub_004F3000_0x4f3000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F3000_0x4f3000");
#endif

    switch (ctx->pc) {
        case 0x4f3000u: goto label_4f3000;
        case 0x4f3004u: goto label_4f3004;
        case 0x4f3008u: goto label_4f3008;
        case 0x4f300cu: goto label_4f300c;
        case 0x4f3010u: goto label_4f3010;
        case 0x4f3014u: goto label_4f3014;
        case 0x4f3018u: goto label_4f3018;
        case 0x4f301cu: goto label_4f301c;
        case 0x4f3020u: goto label_4f3020;
        case 0x4f3024u: goto label_4f3024;
        case 0x4f3028u: goto label_4f3028;
        case 0x4f302cu: goto label_4f302c;
        case 0x4f3030u: goto label_4f3030;
        case 0x4f3034u: goto label_4f3034;
        case 0x4f3038u: goto label_4f3038;
        case 0x4f303cu: goto label_4f303c;
        case 0x4f3040u: goto label_4f3040;
        case 0x4f3044u: goto label_4f3044;
        case 0x4f3048u: goto label_4f3048;
        case 0x4f304cu: goto label_4f304c;
        case 0x4f3050u: goto label_4f3050;
        case 0x4f3054u: goto label_4f3054;
        case 0x4f3058u: goto label_4f3058;
        case 0x4f305cu: goto label_4f305c;
        case 0x4f3060u: goto label_4f3060;
        case 0x4f3064u: goto label_4f3064;
        case 0x4f3068u: goto label_4f3068;
        case 0x4f306cu: goto label_4f306c;
        case 0x4f3070u: goto label_4f3070;
        case 0x4f3074u: goto label_4f3074;
        case 0x4f3078u: goto label_4f3078;
        case 0x4f307cu: goto label_4f307c;
        case 0x4f3080u: goto label_4f3080;
        case 0x4f3084u: goto label_4f3084;
        case 0x4f3088u: goto label_4f3088;
        case 0x4f308cu: goto label_4f308c;
        case 0x4f3090u: goto label_4f3090;
        case 0x4f3094u: goto label_4f3094;
        case 0x4f3098u: goto label_4f3098;
        case 0x4f309cu: goto label_4f309c;
        case 0x4f30a0u: goto label_4f30a0;
        case 0x4f30a4u: goto label_4f30a4;
        case 0x4f30a8u: goto label_4f30a8;
        case 0x4f30acu: goto label_4f30ac;
        case 0x4f30b0u: goto label_4f30b0;
        case 0x4f30b4u: goto label_4f30b4;
        case 0x4f30b8u: goto label_4f30b8;
        case 0x4f30bcu: goto label_4f30bc;
        case 0x4f30c0u: goto label_4f30c0;
        case 0x4f30c4u: goto label_4f30c4;
        default: break;
    }

    ctx->pc = 0x4f3000u;

label_4f3000:
    // 0x4f3000: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4f3000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4f3004:
    // 0x4f3004: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4f3004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_4f3008:
    // 0x4f3008: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f3008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4f300c:
    // 0x4f300c: 0x24425340  addiu       $v0, $v0, 0x5340
    ctx->pc = 0x4f300cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21312));
label_4f3010:
    // 0x4f3010: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4f3010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4f3014:
    // 0x4f3014: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x4f3014u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_4f3018:
    // 0x4f3018: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4f3018u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f301c:
    // 0x4f301c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4f301cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4f3020:
    // 0x4f3020: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4f3020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4f3024:
    // 0x4f3024: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x4f3024u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_4f3028:
    // 0x4f3028: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f3028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f302c:
    // 0x4f302c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4f302cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f3030:
    // 0x4f3030: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4f3030u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4f3034:
    // 0x4f3034: 0x26100c70  addiu       $s0, $s0, 0xC70
    ctx->pc = 0x4f3034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3184));
label_4f3038:
    // 0x4f3038: 0x8e4827e4  lw          $t0, 0x27E4($s2)
    ctx->pc = 0x4f3038u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_4f303c:
    // 0x4f303c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4f303cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f3040:
    // 0x4f3040: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x4f3040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4f3044:
    // 0x4f3044: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x4f3044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_4f3048:
    // 0x4f3048: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4f3048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f304c:
    // 0x4f304c: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x4f304cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_4f3050:
    // 0x4f3050: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x4f3050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_4f3054:
    // 0x4f3054: 0x40f809  jalr        $v0
label_4f3058:
    if (ctx->pc == 0x4F3058u) {
        ctx->pc = 0x4F3058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3054u;
        // 0x4f3058: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F305Cu;
        goto label_4f305c;
    }
    ctx->pc = 0x4F3054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F305Cu);
        ctx->pc = 0x4F3058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3054u;
        // 0x4f3058: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3054u, 0x4F305Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F305Cu;
label_4f305c:
    // 0x4f305c: 0x8e4827e4  lw          $t0, 0x27E4($s2)
    ctx->pc = 0x4f305cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_4f3060:
    // 0x4f3060: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4f3060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f3064:
    // 0x4f3064: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x4f3064u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_4f3068:
    // 0x4f3068: 0x24070027  addiu       $a3, $zero, 0x27
    ctx->pc = 0x4f3068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_4f306c:
    // 0x4f306c: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x4f306cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4f3070:
    // 0x4f3070: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f3070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f3074:
    // 0x4f3074: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f3074u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f3078:
    // 0x4f3078: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f3078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f307c:
    // 0x4f307c: 0x60f809  jalr        $v1
label_4f3080:
    if (ctx->pc == 0x4F3080u) {
        ctx->pc = 0x4F3080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F307Cu;
        // 0x4f3080: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3084u;
        goto label_4f3084;
    }
    ctx->pc = 0x4F307Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F3084u);
        ctx->pc = 0x4F3080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F307Cu;
        // 0x4f3080: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F307Cu, 0x4F3084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F3084u;
label_4f3084:
    // 0x4f3084: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4f3084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_4f3088:
    // 0x4f3088: 0x32310001  andi        $s1, $s1, 0x1
    ctx->pc = 0x4f3088u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_4f308c:
    // 0x4f308c: 0x24424e70  addiu       $v0, $v0, 0x4E70
    ctx->pc = 0x4f308cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20080));
label_4f3090:
    // 0x4f3090: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x4f3090u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_4f3094:
    // 0x4f3094: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4f3094u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4f3098:
    // 0x4f3098: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x4f3098u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_4f309c:
    // 0x4f309c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_4f30a0:
    if (ctx->pc == 0x4F30A0u) {
        ctx->pc = 0x4F30A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F309Cu;
        // 0x4f30a0: 0xae600010  sw          $zero, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F30A4u;
        goto label_4f30a4;
    }
    ctx->pc = 0x4F309Cu;
    {
        const bool branch_taken_0x4f309c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F30A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F309Cu;
        // 0x4f30a0: 0xae600010  sw          $zero, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f309c) {
            ctx->pc = 0x4F30ACu;
            goto label_4f30ac;
        }
    }
    ctx->pc = 0x4F30A4u;
label_4f30a4:
    // 0x4f30a4: 0xc10b208  jal         func_42C820
label_4f30a8:
    if (ctx->pc == 0x4F30A8u) {
        ctx->pc = 0x4F30A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F30A4u;
        // 0x4f30a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F30ACu;
        goto label_4f30ac;
    }
    ctx->pc = 0x4F30A4u;
    SET_GPR_U32(ctx, 31, 0x4F30ACu);
    ctx->pc = 0x4F30A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F30A4u;
    // 0x4f30a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4F30A4u, 0x4F30ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F30ACu;
label_4f30ac:
    // 0x4f30ac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4f30acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f30b0:
    // 0x4f30b0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4f30b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f30b4:
    // 0x4f30b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f30b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f30b8:
    // 0x4f30b8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4f30b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f30bc:
    // 0x4f30bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f30bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f30c0:
    // 0x4f30c0: 0x3e00008  jr          $ra
label_4f30c4:
    if (ctx->pc == 0x4F30C4u) {
        ctx->pc = 0x4F30C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F30C0u;
        // 0x4f30c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F30C8u;
        goto label_fallthrough_0x4f30c0;
    }
    ctx->pc = 0x4F30C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F30C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F30C0u;
        // 0x4f30c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F30C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4f30c0:
    ctx->pc = 0x4F30C8u;
}
