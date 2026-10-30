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

// Function: sub_001F2FF8
// Address: 0x1f2ff8 - 0x1f30c0
void sub_001F2FF8_0x1f2ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2FF8_0x1f2ff8");
#endif

    switch (ctx->pc) {
        case 0x1f2ff8u: goto label_1f2ff8;
        case 0x1f2ffcu: goto label_1f2ffc;
        case 0x1f3000u: goto label_1f3000;
        case 0x1f3004u: goto label_1f3004;
        case 0x1f3008u: goto label_1f3008;
        case 0x1f300cu: goto label_1f300c;
        case 0x1f3010u: goto label_1f3010;
        case 0x1f3014u: goto label_1f3014;
        case 0x1f3018u: goto label_1f3018;
        case 0x1f301cu: goto label_1f301c;
        case 0x1f3020u: goto label_1f3020;
        case 0x1f3024u: goto label_1f3024;
        case 0x1f3028u: goto label_1f3028;
        case 0x1f302cu: goto label_1f302c;
        case 0x1f3030u: goto label_1f3030;
        case 0x1f3034u: goto label_1f3034;
        case 0x1f3038u: goto label_1f3038;
        case 0x1f303cu: goto label_1f303c;
        case 0x1f3040u: goto label_1f3040;
        case 0x1f3044u: goto label_1f3044;
        case 0x1f3048u: goto label_1f3048;
        case 0x1f304cu: goto label_1f304c;
        case 0x1f3050u: goto label_1f3050;
        case 0x1f3054u: goto label_1f3054;
        case 0x1f3058u: goto label_1f3058;
        case 0x1f305cu: goto label_1f305c;
        case 0x1f3060u: goto label_1f3060;
        case 0x1f3064u: goto label_1f3064;
        case 0x1f3068u: goto label_1f3068;
        case 0x1f306cu: goto label_1f306c;
        case 0x1f3070u: goto label_1f3070;
        case 0x1f3074u: goto label_1f3074;
        case 0x1f3078u: goto label_1f3078;
        case 0x1f307cu: goto label_1f307c;
        case 0x1f3080u: goto label_1f3080;
        case 0x1f3084u: goto label_1f3084;
        case 0x1f3088u: goto label_1f3088;
        case 0x1f308cu: goto label_1f308c;
        case 0x1f3090u: goto label_1f3090;
        case 0x1f3094u: goto label_1f3094;
        case 0x1f3098u: goto label_1f3098;
        case 0x1f309cu: goto label_1f309c;
        case 0x1f30a0u: goto label_1f30a0;
        case 0x1f30a4u: goto label_1f30a4;
        case 0x1f30a8u: goto label_1f30a8;
        case 0x1f30acu: goto label_1f30ac;
        case 0x1f30b0u: goto label_1f30b0;
        case 0x1f30b4u: goto label_1f30b4;
        case 0x1f30b8u: goto label_1f30b8;
        case 0x1f30bcu: goto label_1f30bc;
        default: break;
    }

    ctx->pc = 0x1f2ff8u;

label_1f2ff8:
    // 0x1f2ff8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f2ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f2ffc:
    // 0x1f2ffc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f2ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f3000:
    // 0x1f3000: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f3000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1f3004:
    // 0x1f3004: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f3004u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f3008:
    // 0x1f3008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f3008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f300c:
    // 0x1f300c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1f300cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1f3010:
    // 0x1f3010: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_1f3014:
    if (ctx->pc == 0x1F3014u) {
        ctx->pc = 0x1F3014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3010u;
        // 0x1f3014: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3018u;
        goto label_1f3018;
    }
    ctx->pc = 0x1F3010u;
    {
        const bool branch_taken_0x1f3010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3010u;
        // 0x1f3014: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3010) {
            ctx->pc = 0x1F30ACu;
            goto label_1f30ac;
        }
    }
    ctx->pc = 0x1F3018u;
label_1f3018:
    // 0x1f3018: 0xc073462  jal         func_1CD188
label_1f301c:
    if (ctx->pc == 0x1F301Cu) {
        ctx->pc = 0x1F301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3018u;
        // 0x1f301c: 0x8e240090  lw          $a0, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3020u;
        goto label_1f3020;
    }
    ctx->pc = 0x1F3018u;
    SET_GPR_U32(ctx, 31, 0x1F3020u);
    ctx->pc = 0x1F301Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3018u;
    // 0x1f301c: 0x8e240090  lw          $a0, 0x90($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x1F3018u, 0x1F3020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3020u;
label_1f3020:
    // 0x1f3020: 0x3c100055  lui         $s0, 0x55
    ctx->pc = 0x1f3020u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
label_1f3024:
    // 0x1f3024: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x1f3024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_1f3028:
    // 0x1f3028: 0x261073a8  addiu       $s0, $s0, 0x73A8
    ctx->pc = 0x1f3028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29608));
label_1f302c:
    // 0x1f302c: 0x240600c2  addiu       $a2, $zero, 0xC2
    ctx->pc = 0x1f302cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
label_1f3030:
    // 0x1f3030: 0xc139138  jal         func_4E44E0
label_1f3034:
    if (ctx->pc == 0x1F3034u) {
        ctx->pc = 0x1F3034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3030u;
        // 0x1f3034: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3038u;
        goto label_1f3038;
    }
    ctx->pc = 0x1F3030u;
    SET_GPR_U32(ctx, 31, 0x1F3038u);
    ctx->pc = 0x1F3034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3030u;
    // 0x1f3034: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E44E0u, 0x1F3030u, 0x1F3038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3038u;
label_1f3038:
    // 0x1f3038: 0xc073462  jal         func_1CD188
label_1f303c:
    if (ctx->pc == 0x1F303Cu) {
        ctx->pc = 0x1F303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3038u;
        // 0x1f303c: 0x8e240094  lw          $a0, 0x94($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3040u;
        goto label_1f3040;
    }
    ctx->pc = 0x1F3038u;
    SET_GPR_U32(ctx, 31, 0x1F3040u);
    ctx->pc = 0x1F303Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3038u;
    // 0x1f303c: 0x8e240094  lw          $a0, 0x94($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x1F3038u, 0x1F3040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3040u;
label_1f3040:
    // 0x1f3040: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x1f3040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_1f3044:
    // 0x1f3044: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f3044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f3048:
    // 0x1f3048: 0xc139138  jal         func_4E44E0
label_1f304c:
    if (ctx->pc == 0x1F304Cu) {
        ctx->pc = 0x1F304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3048u;
        // 0x1f304c: 0x240600c5  addiu       $a2, $zero, 0xC5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 197));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3050u;
        goto label_1f3050;
    }
    ctx->pc = 0x1F3048u;
    SET_GPR_U32(ctx, 31, 0x1F3050u);
    ctx->pc = 0x1F304Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3048u;
    // 0x1f304c: 0x240600c5  addiu       $a2, $zero, 0xC5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 197));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E44E0u, 0x1F3048u, 0x1F3050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3050u;
label_1f3050:
    // 0x1f3050: 0x8e25009c  lw          $a1, 0x9C($s1)
    ctx->pc = 0x1f3050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1f3054:
    // 0x1f3054: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f3054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f3058:
    // 0x1f3058: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1f3058u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1f305c:
    // 0x1f305c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1f305cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1f3060:
    // 0x1f3060: 0x60f809  jalr        $v1
label_1f3064:
    if (ctx->pc == 0x1F3064u) {
        ctx->pc = 0x1F3064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3060u;
        // 0x1f3064: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3068u;
        goto label_1f3068;
    }
    ctx->pc = 0x1F3060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F3068u);
        ctx->pc = 0x1F3064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3060u;
        // 0x1f3064: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3060u, 0x1F3068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3068u;
label_1f3068:
    // 0x1f3068: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x1f3068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1f306c:
    // 0x1f306c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f306cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f3070:
    // 0x1f3070: 0xc13a560  jal         func_4E9580
label_1f3074:
    if (ctx->pc == 0x1F3074u) {
        ctx->pc = 0x1F3074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3070u;
        // 0x1f3074: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3078u;
        goto label_1f3078;
    }
    ctx->pc = 0x1F3070u;
    SET_GPR_U32(ctx, 31, 0x1F3078u);
    ctx->pc = 0x1F3074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3070u;
    // 0x1f3074: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9580u, 0x1F3070u, 0x1F3078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3078u;
label_1f3078:
    // 0x1f3078: 0x8e250098  lw          $a1, 0x98($s1)
    ctx->pc = 0x1f3078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_1f307c:
    // 0x1f307c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f307cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f3080:
    // 0x1f3080: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1f3080u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1f3084:
    // 0x1f3084: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1f3084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1f3088:
    // 0x1f3088: 0x60f809  jalr        $v1
label_1f308c:
    if (ctx->pc == 0x1F308Cu) {
        ctx->pc = 0x1F308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3088u;
        // 0x1f308c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3090u;
        goto label_1f3090;
    }
    ctx->pc = 0x1F3088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F3090u);
        ctx->pc = 0x1F308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3088u;
        // 0x1f308c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3088u, 0x1F3090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3090u;
label_1f3090:
    // 0x1f3090: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x1f3090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_1f3094:
    // 0x1f3094: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f3094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f3098:
    // 0x1f3098: 0xc13ab26  jal         func_4EAC98
label_1f309c:
    if (ctx->pc == 0x1F309Cu) {
        ctx->pc = 0x1F309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3098u;
        // 0x1f309c: 0x240600cb  addiu       $a2, $zero, 0xCB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F30A0u;
        goto label_1f30a0;
    }
    ctx->pc = 0x1F3098u;
    SET_GPR_U32(ctx, 31, 0x1F30A0u);
    ctx->pc = 0x1F309Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3098u;
    // 0x1f309c: 0x240600cb  addiu       $a2, $zero, 0xCB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EAC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EAC98u, 0x1F3098u, 0x1F30A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F30A0u;
label_1f30a0:
    // 0x1f30a0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1f30a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_1f30a4:
    // 0x1f30a4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1f30a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1f30a8:
    // 0x1f30a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f30a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f30ac:
    // 0x1f30ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f30acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f30b0:
    // 0x1f30b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f30b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f30b4:
    // 0x1f30b4: 0x3e00008  jr          $ra
label_1f30b8:
    if (ctx->pc == 0x1F30B8u) {
        ctx->pc = 0x1F30B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F30B4u;
        // 0x1f30b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F30BCu;
        goto label_1f30bc;
    }
    ctx->pc = 0x1F30B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F30B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F30B4u;
        // 0x1f30b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F30B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F30BCu;
label_1f30bc:
    // 0x1f30bc: 0x0  nop
    ctx->pc = 0x1f30bcu;
    // NOP
    ctx->pc = 0x1f30c0u;
}
