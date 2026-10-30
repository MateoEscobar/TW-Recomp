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

// Function: sub_003A3000
// Address: 0x3a3000 - 0x3a3148
void sub_003A3000_0x3a3000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3000_0x3a3000");
#endif

    switch (ctx->pc) {
        case 0x3a3000u: goto label_3a3000;
        case 0x3a3004u: goto label_3a3004;
        case 0x3a3008u: goto label_3a3008;
        case 0x3a300cu: goto label_3a300c;
        case 0x3a3010u: goto label_3a3010;
        case 0x3a3014u: goto label_3a3014;
        case 0x3a3018u: goto label_3a3018;
        case 0x3a301cu: goto label_3a301c;
        case 0x3a3020u: goto label_3a3020;
        case 0x3a3024u: goto label_3a3024;
        case 0x3a3028u: goto label_3a3028;
        case 0x3a302cu: goto label_3a302c;
        case 0x3a3030u: goto label_3a3030;
        case 0x3a3034u: goto label_3a3034;
        case 0x3a3038u: goto label_3a3038;
        case 0x3a303cu: goto label_3a303c;
        case 0x3a3040u: goto label_3a3040;
        case 0x3a3044u: goto label_3a3044;
        case 0x3a3048u: goto label_3a3048;
        case 0x3a304cu: goto label_3a304c;
        case 0x3a3050u: goto label_3a3050;
        case 0x3a3054u: goto label_3a3054;
        case 0x3a3058u: goto label_3a3058;
        case 0x3a305cu: goto label_3a305c;
        case 0x3a3060u: goto label_3a3060;
        case 0x3a3064u: goto label_3a3064;
        case 0x3a3068u: goto label_3a3068;
        case 0x3a306cu: goto label_3a306c;
        case 0x3a3070u: goto label_3a3070;
        case 0x3a3074u: goto label_3a3074;
        case 0x3a3078u: goto label_3a3078;
        case 0x3a307cu: goto label_3a307c;
        case 0x3a3080u: goto label_3a3080;
        case 0x3a3084u: goto label_3a3084;
        case 0x3a3088u: goto label_3a3088;
        case 0x3a308cu: goto label_3a308c;
        case 0x3a3090u: goto label_3a3090;
        case 0x3a3094u: goto label_3a3094;
        case 0x3a3098u: goto label_3a3098;
        case 0x3a309cu: goto label_3a309c;
        case 0x3a30a0u: goto label_3a30a0;
        case 0x3a30a4u: goto label_3a30a4;
        case 0x3a30a8u: goto label_3a30a8;
        case 0x3a30acu: goto label_3a30ac;
        case 0x3a30b0u: goto label_3a30b0;
        case 0x3a30b4u: goto label_3a30b4;
        case 0x3a30b8u: goto label_3a30b8;
        case 0x3a30bcu: goto label_3a30bc;
        case 0x3a30c0u: goto label_3a30c0;
        case 0x3a30c4u: goto label_3a30c4;
        case 0x3a30c8u: goto label_3a30c8;
        case 0x3a30ccu: goto label_3a30cc;
        case 0x3a30d0u: goto label_3a30d0;
        case 0x3a30d4u: goto label_3a30d4;
        case 0x3a30d8u: goto label_3a30d8;
        case 0x3a30dcu: goto label_3a30dc;
        case 0x3a30e0u: goto label_3a30e0;
        case 0x3a30e4u: goto label_3a30e4;
        case 0x3a30e8u: goto label_3a30e8;
        case 0x3a30ecu: goto label_3a30ec;
        case 0x3a30f0u: goto label_3a30f0;
        case 0x3a30f4u: goto label_3a30f4;
        case 0x3a30f8u: goto label_3a30f8;
        case 0x3a30fcu: goto label_3a30fc;
        case 0x3a3100u: goto label_3a3100;
        case 0x3a3104u: goto label_3a3104;
        case 0x3a3108u: goto label_3a3108;
        case 0x3a310cu: goto label_3a310c;
        case 0x3a3110u: goto label_3a3110;
        case 0x3a3114u: goto label_3a3114;
        case 0x3a3118u: goto label_3a3118;
        case 0x3a311cu: goto label_3a311c;
        case 0x3a3120u: goto label_3a3120;
        case 0x3a3124u: goto label_3a3124;
        case 0x3a3128u: goto label_3a3128;
        case 0x3a312cu: goto label_3a312c;
        case 0x3a3130u: goto label_3a3130;
        case 0x3a3134u: goto label_3a3134;
        case 0x3a3138u: goto label_3a3138;
        case 0x3a313cu: goto label_3a313c;
        case 0x3a3140u: goto label_3a3140;
        case 0x3a3144u: goto label_3a3144;
        default: break;
    }

    ctx->pc = 0x3a3000u;

label_3a3000:
    // 0x3a3000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a3000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3a3004:
    // 0x3a3004: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3a3004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3a3008:
    // 0x3a3008: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a3008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a300c:
    // 0x3a300c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3a300cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3a3010:
    // 0x3a3010: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a3010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a3014:
    // 0x3a3014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a3014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a3018:
    // 0x3a3018: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x3a3018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_3a301c:
    // 0x3a301c: 0x8e22082c  lw          $v0, 0x82C($s1)
    ctx->pc = 0x3a301cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2092)));
label_3a3020:
    // 0x3a3020: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3a3020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3a3024:
    // 0x3a3024: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3a3024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3a3028:
    // 0x3a3028: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3a3028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3a302c:
    // 0x3a302c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x3a302cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_3a3030:
    // 0x3a3030: 0xdc500008  ld          $s0, 0x8($v0)
    ctx->pc = 0x3a3030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_3a3034:
    // 0x3a3034: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x3a3034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_3a3038:
    // 0x3a3038: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3a3038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3a303c:
    // 0x3a303c: 0x40f809  jalr        $v0
label_3a3040:
    if (ctx->pc == 0x3A3040u) {
        ctx->pc = 0x3A3040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A303Cu;
        // 0x3a3040: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3044u;
        goto label_3a3044;
    }
    ctx->pc = 0x3A303Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A3044u);
        ctx->pc = 0x3A3040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A303Cu;
        // 0x3a3040: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A303Cu, 0x3A3044u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A3044u;
label_3a3044:
    // 0x3a3044: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x3a3044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_3a3048:
    // 0x3a3048: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x3a3048u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3a304c:
    // 0x3a304c: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_3a3050:
    if (ctx->pc == 0x3A3050u) {
        ctx->pc = 0x3A3050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A304Cu;
        // 0x3a3050: 0x203802d  daddu       $s0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3054u;
        goto label_3a3054;
    }
    ctx->pc = 0x3A304Cu;
    {
        const bool branch_taken_0x3a304c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A304Cu;
        // 0x3a3050: 0x203802d  daddu       $s0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a304c) {
            ctx->pc = 0x3A3134u;
            goto label_3a3134;
        }
    }
    ctx->pc = 0x3A3054u;
label_3a3054:
    // 0x3a3054: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
label_3a3058:
    if (ctx->pc == 0x3A3058u) {
        ctx->pc = 0x3A3058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3054u;
        // 0x3a3058: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A305Cu;
        goto label_3a305c;
    }
    ctx->pc = 0x3A3054u;
    {
        const bool branch_taken_0x3a3054 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3A3058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3054u;
        // 0x3a3058: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3054) {
            ctx->pc = 0x3A306Cu;
            goto label_3a306c;
        }
    }
    ctx->pc = 0x3A305Cu;
label_3a305c:
    // 0x3a305c: 0xc10ac74  jal         func_42B1D0
label_3a3060:
    if (ctx->pc == 0x3A3060u) {
        ctx->pc = 0x3A3060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A305Cu;
        // 0x3a3060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3064u;
        goto label_3a3064;
    }
    ctx->pc = 0x3A305Cu;
    SET_GPR_U32(ctx, 31, 0x3A3064u);
    ctx->pc = 0x3A3060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A305Cu;
    // 0x3a3060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B1D0u, 0x3A305Cu, 0x3A3064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3064u;
label_3a3064:
    // 0x3a3064: 0x10000005  b           . + 4 + (0x5 << 2)
label_3a3068:
    if (ctx->pc == 0x3A3068u) {
        ctx->pc = 0x3A306Cu;
        goto label_3a306c;
    }
    ctx->pc = 0x3A3064u;
    {
        const bool branch_taken_0x3a3064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3064) {
            ctx->pc = 0x3A307Cu;
            goto label_3a307c;
        }
    }
    ctx->pc = 0x3A306Cu;
label_3a306c:
    // 0x3a306c: 0x10207a  dsrl        $a0, $s0, 1
    ctx->pc = 0x3a306cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> 1);
label_3a3070:
    // 0x3a3070: 0xc10ac74  jal         func_42B1D0
label_3a3074:
    if (ctx->pc == 0x3A3074u) {
        ctx->pc = 0x3A3074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3070u;
        // 0x3a3074: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3078u;
        goto label_3a3078;
    }
    ctx->pc = 0x3A3070u;
    SET_GPR_U32(ctx, 31, 0x3A3078u);
    ctx->pc = 0x3A3074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3070u;
    // 0x3a3074: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B1D0u, 0x3A3070u, 0x3A3078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3078u;
label_3a3078:
    // 0x3a3078: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3a3078u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3a307c:
    // 0x3a307c: 0x3c013169  lui         $at, 0x3169
    ctx->pc = 0x3a307cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12649 << 16));
label_3a3080:
    // 0x3a3080: 0x34210453  ori         $at, $at, 0x453
    ctx->pc = 0x3a3080u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1107);
label_3a3084:
    // 0x3a3084: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a3084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3a3088:
    // 0x3a3088: 0xc0e8560  jal         func_3A1580
label_3a308c:
    if (ctx->pc == 0x3A308Cu) {
        ctx->pc = 0x3A308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3088u;
        // 0x3a308c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3090u;
        goto label_3a3090;
    }
    ctx->pc = 0x3A3088u;
    SET_GPR_U32(ctx, 31, 0x3A3090u);
    ctx->pc = 0x3A308Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3088u;
    // 0x3a308c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1580u, 0x3A3088u, 0x3A3090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3090u;
label_3a3090:
    // 0x3a3090: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3a3090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3a3094:
    // 0x3a3094: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a3094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a3098:
    // 0x3a3098: 0x8c6204f4  lw          $v0, 0x4F4($v1)
    ctx->pc = 0x3a3098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1268)));
label_3a309c:
    // 0x3a309c: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
label_3a30a0:
    if (ctx->pc == 0x3A30A0u) {
        ctx->pc = 0x3A30A4u;
        goto label_3a30a4;
    }
    ctx->pc = 0x3A309Cu;
    {
        const bool branch_taken_0x3a309c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x3a309c) {
            ctx->pc = 0x3A30B4u;
            goto label_3a30b4;
        }
    }
    ctx->pc = 0x3A30A4u;
label_3a30a4:
    // 0x3a30a4: 0xc092442  jal         func_249108
label_3a30a8:
    if (ctx->pc == 0x3A30A8u) {
        ctx->pc = 0x3A30ACu;
        goto label_3a30ac;
    }
    ctx->pc = 0x3A30A4u;
    SET_GPR_U32(ctx, 31, 0x3A30ACu);
    ctx->pc = 0x249108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249108u, 0x3A30A4u, 0x3A30ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A30ACu;
label_3a30ac:
    // 0x3a30ac: 0x1000001b  b           . + 4 + (0x1B << 2)
label_3a30b0:
    if (ctx->pc == 0x3A30B0u) {
        ctx->pc = 0x3A30B4u;
        goto label_3a30b4;
    }
    ctx->pc = 0x3A30ACu;
    {
        const bool branch_taken_0x3a30ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a30ac) {
            ctx->pc = 0x3A311Cu;
            goto label_3a311c;
        }
    }
    ctx->pc = 0x3A30B4u;
label_3a30b4:
    // 0x3a30b4: 0xc05152a  jal         func_1454A8
label_3a30b8:
    if (ctx->pc == 0x3A30B8u) {
        ctx->pc = 0x3A30BCu;
        goto label_3a30bc;
    }
    ctx->pc = 0x3A30B4u;
    SET_GPR_U32(ctx, 31, 0x3A30BCu);
    ctx->pc = 0x1454A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1454A8u, 0x3A30B4u, 0x3A30BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A30BCu;
label_3a30bc:
    // 0x3a30bc: 0xc0579d2  jal         func_15E748
label_3a30c0:
    if (ctx->pc == 0x3A30C0u) {
        ctx->pc = 0x3A30C4u;
        goto label_3a30c4;
    }
    ctx->pc = 0x3A30BCu;
    SET_GPR_U32(ctx, 31, 0x3A30C4u);
    ctx->pc = 0x15E748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E748u, 0x3A30BCu, 0x3A30C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A30C4u;
label_3a30c4:
    // 0x3a30c4: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x3a30c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_3a30c8:
    // 0x3a30c8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_3a30cc:
    if (ctx->pc == 0x3A30CCu) {
        ctx->pc = 0x3A30D0u;
        goto label_3a30d0;
    }
    ctx->pc = 0x3A30C8u;
    {
        const bool branch_taken_0x3a30c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a30c8) {
            ctx->pc = 0x3A311Cu;
            goto label_3a311c;
        }
    }
    ctx->pc = 0x3A30D0u;
label_3a30d0:
    // 0x3a30d0: 0xc047e6c  jal         func_11F9B0
label_3a30d4:
    if (ctx->pc == 0x3A30D4u) {
        ctx->pc = 0x3A30D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A30D0u;
        // 0x3a30d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A30D8u;
        goto label_3a30d8;
    }
    ctx->pc = 0x3A30D0u;
    SET_GPR_U32(ctx, 31, 0x3A30D8u);
    ctx->pc = 0x3A30D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A30D0u;
    // 0x3a30d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3A30D0u, 0x3A30D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A30D8u;
label_3a30d8:
    // 0x3a30d8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3a30dc:
    if (ctx->pc == 0x3A30DCu) {
        ctx->pc = 0x3A30E0u;
        goto label_3a30e0;
    }
    ctx->pc = 0x3A30D8u;
    {
        const bool branch_taken_0x3a30d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a30d8) {
            ctx->pc = 0x3A311Cu;
            goto label_3a311c;
        }
    }
    ctx->pc = 0x3A30E0u;
label_3a30e0:
    // 0x3a30e0: 0xc047e6c  jal         func_11F9B0
label_3a30e4:
    if (ctx->pc == 0x3A30E4u) {
        ctx->pc = 0x3A30E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A30E0u;
        // 0x3a30e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A30E8u;
        goto label_3a30e8;
    }
    ctx->pc = 0x3A30E0u;
    SET_GPR_U32(ctx, 31, 0x3A30E8u);
    ctx->pc = 0x3A30E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A30E0u;
    // 0x3a30e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3A30E0u, 0x3A30E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A30E8u;
label_3a30e8:
    // 0x3a30e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a30e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a30ec:
    // 0x3a30ec: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x3a30ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_3a30f0:
    // 0x3a30f0: 0x8c6501ec  lw          $a1, 0x1EC($v1)
    ctx->pc = 0x3a30f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_3a30f4:
    // 0x3a30f4: 0xa0f809  jalr        $a1
label_3a30f8:
    if (ctx->pc == 0x3A30F8u) {
        ctx->pc = 0x3A30F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A30F4u;
        // 0x3a30f8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A30FCu;
        goto label_3a30fc;
    }
    ctx->pc = 0x3A30F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3A30FCu);
        ctx->pc = 0x3A30F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A30F4u;
        // 0x3a30f8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A30F4u, 0x3A30FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A30FCu;
label_3a30fc:
    // 0x3a30fc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3a30fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3a3100:
    // 0x3a3100: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_3a3104:
    if (ctx->pc == 0x3A3104u) {
        ctx->pc = 0x3A3108u;
        goto label_3a3108;
    }
    ctx->pc = 0x3A3100u;
    {
        const bool branch_taken_0x3a3100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a3100) {
            ctx->pc = 0x3A311Cu;
            goto label_3a311c;
        }
    }
    ctx->pc = 0x3A3108u;
label_3a3108:
    // 0x3a3108: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x3a3108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_3a310c:
    // 0x3a310c: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x3a310cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_3a3110:
    // 0x3a3110: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a3110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3a3114:
    // 0x3a3114: 0xc047a1e  jal         func_11E878
label_3a3118:
    if (ctx->pc == 0x3A3118u) {
        ctx->pc = 0x3A311Cu;
        goto label_3a311c;
    }
    ctx->pc = 0x3A3114u;
    SET_GPR_U32(ctx, 31, 0x3A311Cu);
    ctx->pc = 0x11E878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E878u, 0x3A3114u, 0x3A311Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A311Cu;
label_3a311c:
    // 0x3a311c: 0xc0e8d62  jal         func_3A3588
label_3a3120:
    if (ctx->pc == 0x3A3120u) {
        ctx->pc = 0x3A3120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A311Cu;
        // 0x3a3120: 0x8e240830  lw          $a0, 0x830($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2096)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3124u;
        goto label_3a3124;
    }
    ctx->pc = 0x3A311Cu;
    SET_GPR_U32(ctx, 31, 0x3A3124u);
    ctx->pc = 0x3A3120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A311Cu;
    // 0x3a3120: 0x8e240830  lw          $a0, 0x830($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2096)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3588u, 0x3A311Cu, 0x3A3124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3124u;
label_3a3124:
    // 0x3a3124: 0x8e22082c  lw          $v0, 0x82C($s1)
    ctx->pc = 0x3a3124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2092)));
label_3a3128:
    // 0x3a3128: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3a3128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3a312c:
    // 0x3a312c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3a312cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3a3130:
    // 0x3a3130: 0xfc500008  sd          $s0, 0x8($v0)
    ctx->pc = 0x3a3130u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 16));
label_3a3134:
    // 0x3a3134: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3a3134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a3138:
    // 0x3a3138: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a3138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a313c:
    // 0x3a313c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a313cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a3140:
    // 0x3a3140: 0x3e00008  jr          $ra
label_3a3144:
    if (ctx->pc == 0x3A3144u) {
        ctx->pc = 0x3A3144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3140u;
        // 0x3a3144: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3148u;
        goto label_fallthrough_0x3a3140;
    }
    ctx->pc = 0x3A3140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3140u;
        // 0x3a3144: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a3140:
    ctx->pc = 0x3A3148u;
}
