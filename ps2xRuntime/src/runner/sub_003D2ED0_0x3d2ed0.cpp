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

// Function: sub_003D2ED0
// Address: 0x3d2ed0 - 0x3d31a0
void sub_003D2ED0_0x3d2ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2ED0_0x3d2ed0");
#endif

    switch (ctx->pc) {
        case 0x3d2ed0u: goto label_3d2ed0;
        case 0x3d2ed4u: goto label_3d2ed4;
        case 0x3d2ed8u: goto label_3d2ed8;
        case 0x3d2edcu: goto label_3d2edc;
        case 0x3d2ee0u: goto label_3d2ee0;
        case 0x3d2ee4u: goto label_3d2ee4;
        case 0x3d2ee8u: goto label_3d2ee8;
        case 0x3d2eecu: goto label_3d2eec;
        case 0x3d2ef0u: goto label_3d2ef0;
        case 0x3d2ef4u: goto label_3d2ef4;
        case 0x3d2ef8u: goto label_3d2ef8;
        case 0x3d2efcu: goto label_3d2efc;
        case 0x3d2f00u: goto label_3d2f00;
        case 0x3d2f04u: goto label_3d2f04;
        case 0x3d2f08u: goto label_3d2f08;
        case 0x3d2f0cu: goto label_3d2f0c;
        case 0x3d2f10u: goto label_3d2f10;
        case 0x3d2f14u: goto label_3d2f14;
        case 0x3d2f18u: goto label_3d2f18;
        case 0x3d2f1cu: goto label_3d2f1c;
        case 0x3d2f20u: goto label_3d2f20;
        case 0x3d2f24u: goto label_3d2f24;
        case 0x3d2f28u: goto label_3d2f28;
        case 0x3d2f2cu: goto label_3d2f2c;
        case 0x3d2f30u: goto label_3d2f30;
        case 0x3d2f34u: goto label_3d2f34;
        case 0x3d2f38u: goto label_3d2f38;
        case 0x3d2f3cu: goto label_3d2f3c;
        case 0x3d2f40u: goto label_3d2f40;
        case 0x3d2f44u: goto label_3d2f44;
        case 0x3d2f48u: goto label_3d2f48;
        case 0x3d2f4cu: goto label_3d2f4c;
        case 0x3d2f50u: goto label_3d2f50;
        case 0x3d2f54u: goto label_3d2f54;
        case 0x3d2f58u: goto label_3d2f58;
        case 0x3d2f5cu: goto label_3d2f5c;
        case 0x3d2f60u: goto label_3d2f60;
        case 0x3d2f64u: goto label_3d2f64;
        case 0x3d2f68u: goto label_3d2f68;
        case 0x3d2f6cu: goto label_3d2f6c;
        case 0x3d2f70u: goto label_3d2f70;
        case 0x3d2f74u: goto label_3d2f74;
        case 0x3d2f78u: goto label_3d2f78;
        case 0x3d2f7cu: goto label_3d2f7c;
        case 0x3d2f80u: goto label_3d2f80;
        case 0x3d2f84u: goto label_3d2f84;
        case 0x3d2f88u: goto label_3d2f88;
        case 0x3d2f8cu: goto label_3d2f8c;
        case 0x3d2f90u: goto label_3d2f90;
        case 0x3d2f94u: goto label_3d2f94;
        case 0x3d2f98u: goto label_3d2f98;
        case 0x3d2f9cu: goto label_3d2f9c;
        case 0x3d2fa0u: goto label_3d2fa0;
        case 0x3d2fa4u: goto label_3d2fa4;
        case 0x3d2fa8u: goto label_3d2fa8;
        case 0x3d2facu: goto label_3d2fac;
        case 0x3d2fb0u: goto label_3d2fb0;
        case 0x3d2fb4u: goto label_3d2fb4;
        case 0x3d2fb8u: goto label_3d2fb8;
        case 0x3d2fbcu: goto label_3d2fbc;
        case 0x3d2fc0u: goto label_3d2fc0;
        case 0x3d2fc4u: goto label_3d2fc4;
        case 0x3d2fc8u: goto label_3d2fc8;
        case 0x3d2fccu: goto label_3d2fcc;
        case 0x3d2fd0u: goto label_3d2fd0;
        case 0x3d2fd4u: goto label_3d2fd4;
        case 0x3d2fd8u: goto label_3d2fd8;
        case 0x3d2fdcu: goto label_3d2fdc;
        case 0x3d2fe0u: goto label_3d2fe0;
        case 0x3d2fe4u: goto label_3d2fe4;
        case 0x3d2fe8u: goto label_3d2fe8;
        case 0x3d2fecu: goto label_3d2fec;
        case 0x3d2ff0u: goto label_3d2ff0;
        case 0x3d2ff4u: goto label_3d2ff4;
        case 0x3d2ff8u: goto label_3d2ff8;
        case 0x3d2ffcu: goto label_3d2ffc;
        case 0x3d3000u: goto label_3d3000;
        case 0x3d3004u: goto label_3d3004;
        case 0x3d3008u: goto label_3d3008;
        case 0x3d300cu: goto label_3d300c;
        case 0x3d3010u: goto label_3d3010;
        case 0x3d3014u: goto label_3d3014;
        case 0x3d3018u: goto label_3d3018;
        case 0x3d301cu: goto label_3d301c;
        case 0x3d3020u: goto label_3d3020;
        case 0x3d3024u: goto label_3d3024;
        case 0x3d3028u: goto label_3d3028;
        case 0x3d302cu: goto label_3d302c;
        case 0x3d3030u: goto label_3d3030;
        case 0x3d3034u: goto label_3d3034;
        case 0x3d3038u: goto label_3d3038;
        case 0x3d303cu: goto label_3d303c;
        case 0x3d3040u: goto label_3d3040;
        case 0x3d3044u: goto label_3d3044;
        case 0x3d3048u: goto label_3d3048;
        case 0x3d304cu: goto label_3d304c;
        case 0x3d3050u: goto label_3d3050;
        case 0x3d3054u: goto label_3d3054;
        case 0x3d3058u: goto label_3d3058;
        case 0x3d305cu: goto label_3d305c;
        case 0x3d3060u: goto label_3d3060;
        case 0x3d3064u: goto label_3d3064;
        case 0x3d3068u: goto label_3d3068;
        case 0x3d306cu: goto label_3d306c;
        case 0x3d3070u: goto label_3d3070;
        case 0x3d3074u: goto label_3d3074;
        case 0x3d3078u: goto label_3d3078;
        case 0x3d307cu: goto label_3d307c;
        case 0x3d3080u: goto label_3d3080;
        case 0x3d3084u: goto label_3d3084;
        case 0x3d3088u: goto label_3d3088;
        case 0x3d308cu: goto label_3d308c;
        case 0x3d3090u: goto label_3d3090;
        case 0x3d3094u: goto label_3d3094;
        case 0x3d3098u: goto label_3d3098;
        case 0x3d309cu: goto label_3d309c;
        case 0x3d30a0u: goto label_3d30a0;
        case 0x3d30a4u: goto label_3d30a4;
        case 0x3d30a8u: goto label_3d30a8;
        case 0x3d30acu: goto label_3d30ac;
        case 0x3d30b0u: goto label_3d30b0;
        case 0x3d30b4u: goto label_3d30b4;
        case 0x3d30b8u: goto label_3d30b8;
        case 0x3d30bcu: goto label_3d30bc;
        case 0x3d30c0u: goto label_3d30c0;
        case 0x3d30c4u: goto label_3d30c4;
        case 0x3d30c8u: goto label_3d30c8;
        case 0x3d30ccu: goto label_3d30cc;
        case 0x3d30d0u: goto label_3d30d0;
        case 0x3d30d4u: goto label_3d30d4;
        case 0x3d30d8u: goto label_3d30d8;
        case 0x3d30dcu: goto label_3d30dc;
        case 0x3d30e0u: goto label_3d30e0;
        case 0x3d30e4u: goto label_3d30e4;
        case 0x3d30e8u: goto label_3d30e8;
        case 0x3d30ecu: goto label_3d30ec;
        case 0x3d30f0u: goto label_3d30f0;
        case 0x3d30f4u: goto label_3d30f4;
        case 0x3d30f8u: goto label_3d30f8;
        case 0x3d30fcu: goto label_3d30fc;
        case 0x3d3100u: goto label_3d3100;
        case 0x3d3104u: goto label_3d3104;
        case 0x3d3108u: goto label_3d3108;
        case 0x3d310cu: goto label_3d310c;
        case 0x3d3110u: goto label_3d3110;
        case 0x3d3114u: goto label_3d3114;
        case 0x3d3118u: goto label_3d3118;
        case 0x3d311cu: goto label_3d311c;
        case 0x3d3120u: goto label_3d3120;
        case 0x3d3124u: goto label_3d3124;
        case 0x3d3128u: goto label_3d3128;
        case 0x3d312cu: goto label_3d312c;
        case 0x3d3130u: goto label_3d3130;
        case 0x3d3134u: goto label_3d3134;
        case 0x3d3138u: goto label_3d3138;
        case 0x3d313cu: goto label_3d313c;
        case 0x3d3140u: goto label_3d3140;
        case 0x3d3144u: goto label_3d3144;
        case 0x3d3148u: goto label_3d3148;
        case 0x3d314cu: goto label_3d314c;
        case 0x3d3150u: goto label_3d3150;
        case 0x3d3154u: goto label_3d3154;
        case 0x3d3158u: goto label_3d3158;
        case 0x3d315cu: goto label_3d315c;
        case 0x3d3160u: goto label_3d3160;
        case 0x3d3164u: goto label_3d3164;
        case 0x3d3168u: goto label_3d3168;
        case 0x3d316cu: goto label_3d316c;
        case 0x3d3170u: goto label_3d3170;
        case 0x3d3174u: goto label_3d3174;
        case 0x3d3178u: goto label_3d3178;
        case 0x3d317cu: goto label_3d317c;
        case 0x3d3180u: goto label_3d3180;
        case 0x3d3184u: goto label_3d3184;
        case 0x3d3188u: goto label_3d3188;
        case 0x3d318cu: goto label_3d318c;
        case 0x3d3190u: goto label_3d3190;
        case 0x3d3194u: goto label_3d3194;
        case 0x3d3198u: goto label_3d3198;
        case 0x3d319cu: goto label_3d319c;
        default: break;
    }

    ctx->pc = 0x3d2ed0u;

label_3d2ed0:
    // 0x3d2ed0: 0x27bdfb80  addiu       $sp, $sp, -0x480
    ctx->pc = 0x3d2ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966144));
label_3d2ed4:
    // 0x3d2ed4: 0x7fb00470  sq          $s0, 0x470($sp)
    ctx->pc = 0x3d2ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 16));
label_3d2ed8:
    // 0x3d2ed8: 0x7fb20450  sq          $s2, 0x450($sp)
    ctx->pc = 0x3d2ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 18));
label_3d2edc:
    // 0x3d2edc: 0x7fb10460  sq          $s1, 0x460($sp)
    ctx->pc = 0x3d2edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 17));
label_3d2ee0:
    // 0x3d2ee0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3d2ee0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d2ee4:
    // 0x3d2ee4: 0x7fb30440  sq          $s3, 0x440($sp)
    ctx->pc = 0x3d2ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 19));
label_3d2ee8:
    // 0x3d2ee8: 0x7fb40430  sq          $s4, 0x430($sp)
    ctx->pc = 0x3d2ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 20));
label_3d2eec:
    // 0x3d2eec: 0xffbf0420  sd          $ra, 0x420($sp)
    ctx->pc = 0x3d2eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 31));
label_3d2ef0:
    // 0x3d2ef0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3d2ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d2ef4:
    // 0x3d2ef4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d2ef4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d2ef8:
    // 0x3d2ef8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d2ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d2efc:
    // 0x3d2efc: 0x40f809  jalr        $v0
label_3d2f00:
    if (ctx->pc == 0x3D2F00u) {
        ctx->pc = 0x3D2F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2EFCu;
        // 0x3d2f00: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2F04u;
        goto label_3d2f04;
    }
    ctx->pc = 0x3D2EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D2F04u);
        ctx->pc = 0x3D2F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2EFCu;
        // 0x3d2f00: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2EFCu, 0x3D2F04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D2F04u;
label_3d2f04:
    // 0x3d2f04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d2f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d2f08:
    // 0x3d2f08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d2f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d2f0c:
    // 0x3d2f0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d2f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d2f10:
    // 0x3d2f10: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3d2f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3d2f14:
    // 0x3d2f14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d2f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3d2f18:
    // 0x3d2f18: 0x0  nop
    ctx->pc = 0x3d2f18u;
    // NOP
label_3d2f1c:
    // 0x3d2f1c: 0x0  nop
    ctx->pc = 0x3d2f1cu;
    // NOP
label_3d2f20:
    // 0x3d2f20: 0x0  nop
    ctx->pc = 0x3d2f20u;
    // NOP
label_3d2f24:
    // 0x3d2f24: 0x0  nop
    ctx->pc = 0x3d2f24u;
    // NOP
label_3d2f28:
    // 0x3d2f28: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3d2f2c:
    if (ctx->pc == 0x3D2F2Cu) {
        ctx->pc = 0x3D2F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2F28u;
        // 0x3d2f2c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2F30u;
        goto label_3d2f30;
    }
    ctx->pc = 0x3D2F28u;
    {
        const bool branch_taken_0x3d2f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D2F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2F28u;
        // 0x3d2f2c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2f28) {
            ctx->pc = 0x3D2F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d2f18;
        }
    }
    ctx->pc = 0x3D2F30u;
label_3d2f30:
    // 0x3d2f30: 0xc138ddc  jal         func_4E3770
label_3d2f34:
    if (ctx->pc == 0x3D2F34u) {
        ctx->pc = 0x3D2F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2F30u;
        // 0x3d2f34: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2F38u;
        goto label_3d2f38;
    }
    ctx->pc = 0x3D2F30u;
    SET_GPR_U32(ctx, 31, 0x3D2F38u);
    ctx->pc = 0x3D2F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2F30u;
    // 0x3d2f34: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3D2F30u, 0x3D2F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2F38u;
label_3d2f38:
    // 0x3d2f38: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3d2f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3d2f3c:
    // 0x3d2f3c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_3d2f40:
    if (ctx->pc == 0x3D2F40u) {
        ctx->pc = 0x3D2F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2F3Cu;
        // 0x3d2f40: 0x3a0982d  daddu       $s3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2F44u;
        goto label_3d2f44;
    }
    ctx->pc = 0x3D2F3Cu;
    {
        const bool branch_taken_0x3d2f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2F3Cu;
        // 0x3d2f40: 0x3a0982d  daddu       $s3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2f3c) {
            ctx->pc = 0x3D2F8Cu;
            goto label_3d2f8c;
        }
    }
    ctx->pc = 0x3D2F44u;
label_3d2f44:
    // 0x3d2f44: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x3d2f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3d2f48:
    // 0x3d2f48: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3d2f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3d2f4c:
    // 0x3d2f4c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x3d2f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3d2f50:
    // 0x3d2f50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d2f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3d2f54:
    // 0x3d2f54: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x3d2f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_3d2f58:
    // 0x3d2f58: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x3d2f58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3d2f5c:
    // 0x3d2f5c: 0x8e4200cc  lw          $v0, 0xCC($s2)
    ctx->pc = 0x3d2f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_3d2f60:
    // 0x3d2f60: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3d2f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3d2f64:
    // 0x3d2f64: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x3d2f64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
label_3d2f68:
    // 0x3d2f68: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x3d2f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3d2f6c:
    // 0x3d2f6c: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x3d2f6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3d2f70:
    // 0x3d2f70: 0x5460001f  bnel        $v1, $zero, . + 4 + (0x1F << 2)
label_3d2f74:
    if (ctx->pc == 0x3D2F74u) {
        ctx->pc = 0x3D2F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2F70u;
        // 0x3d2f74: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2F78u;
        goto label_3d2f78;
    }
    ctx->pc = 0x3D2F70u;
    {
        const bool branch_taken_0x3d2f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d2f70) {
            ctx->pc = 0x3D2F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2F70u;
            // 0x3d2f74: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2FF0u;
            goto label_3d2ff0;
        }
    }
    ctx->pc = 0x3D2F78u;
label_3d2f78:
    // 0x3d2f78: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3d2f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3d2f7c:
    // 0x3d2f7c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3d2f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_3d2f80:
    // 0x3d2f80: 0x21023  negu        $v0, $v0
    ctx->pc = 0x3d2f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_3d2f84:
    // 0x3d2f84: 0x10000019  b           . + 4 + (0x19 << 2)
label_3d2f88:
    if (ctx->pc == 0x3D2F88u) {
        ctx->pc = 0x3D2F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2F84u;
        // 0x3d2f88: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2F8Cu;
        goto label_3d2f8c;
    }
    ctx->pc = 0x3D2F84u;
    {
        const bool branch_taken_0x3d2f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2F84u;
        // 0x3d2f88: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2f84) {
            ctx->pc = 0x3D2FECu;
            goto label_3d2fec;
        }
    }
    ctx->pc = 0x3D2F8Cu;
label_3d2f8c:
    // 0x3d2f8c: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x3d2f8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3d2f90:
    // 0x3d2f90: 0x16340008  bne         $s1, $s4, . + 4 + (0x8 << 2)
label_3d2f94:
    if (ctx->pc == 0x3D2F94u) {
        ctx->pc = 0x3D2F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2F90u;
        // 0x3d2f94: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2F98u;
        goto label_3d2f98;
    }
    ctx->pc = 0x3D2F90u;
    {
        const bool branch_taken_0x3d2f90 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x3D2F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2F90u;
        // 0x3d2f94: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2f90) {
            ctx->pc = 0x3D2FB4u;
            goto label_3d2fb4;
        }
    }
    ctx->pc = 0x3D2F98u;
label_3d2f98:
    // 0x3d2f98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d2f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d2f9c:
    // 0x3d2f9c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3d2f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3d2fa0:
    // 0x3d2fa0: 0xc0e858c  jal         func_3A1630
label_3d2fa4:
    if (ctx->pc == 0x3D2FA4u) {
        ctx->pc = 0x3D2FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2FA0u;
        // 0x3d2fa4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2FA8u;
        goto label_3d2fa8;
    }
    ctx->pc = 0x3D2FA0u;
    SET_GPR_U32(ctx, 31, 0x3D2FA8u);
    ctx->pc = 0x3D2FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2FA0u;
    // 0x3d2fa4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D2FA0u, 0x3D2FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2FA8u;
label_3d2fa8:
    // 0x3d2fa8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3d2fa8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d2fac:
    // 0x3d2fac: 0x10000008  b           . + 4 + (0x8 << 2)
label_3d2fb0:
    if (ctx->pc == 0x3D2FB0u) {
        ctx->pc = 0x3D2FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2FACu;
        // 0x3d2fb0: 0xae110020  sw          $s1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2FB4u;
        goto label_3d2fb4;
    }
    ctx->pc = 0x3D2FACu;
    {
        const bool branch_taken_0x3d2fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2FACu;
        // 0x3d2fb0: 0xae110020  sw          $s1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2fac) {
            ctx->pc = 0x3D2FD0u;
            goto label_3d2fd0;
        }
    }
    ctx->pc = 0x3D2FB4u;
label_3d2fb4:
    // 0x3d2fb4: 0x56220007  bnel        $s1, $v0, . + 4 + (0x7 << 2)
label_3d2fb8:
    if (ctx->pc == 0x3D2FB8u) {
        ctx->pc = 0x3D2FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2FB4u;
        // 0x3d2fb8: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2FBCu;
        goto label_3d2fbc;
    }
    ctx->pc = 0x3D2FB4u;
    {
        const bool branch_taken_0x3d2fb4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d2fb4) {
            ctx->pc = 0x3D2FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2FB4u;
            // 0x3d2fb8: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2FD4u;
            goto label_3d2fd4;
        }
    }
    ctx->pc = 0x3D2FBCu;
label_3d2fbc:
    // 0x3d2fbc: 0xae140008  sw          $s4, 0x8($s0)
    ctx->pc = 0x3d2fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
label_3d2fc0:
    // 0x3d2fc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d2fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d2fc4:
    // 0x3d2fc4: 0xc0e858c  jal         func_3A1630
label_3d2fc8:
    if (ctx->pc == 0x3D2FC8u) {
        ctx->pc = 0x3D2FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2FC4u;
        // 0x3d2fc8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2FCCu;
        goto label_3d2fcc;
    }
    ctx->pc = 0x3D2FC4u;
    SET_GPR_U32(ctx, 31, 0x3D2FCCu);
    ctx->pc = 0x3D2FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2FC4u;
    // 0x3d2fc8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D2FC4u, 0x3D2FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2FCCu;
label_3d2fcc:
    // 0x3d2fcc: 0xae140020  sw          $s4, 0x20($s0)
    ctx->pc = 0x3d2fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
label_3d2fd0:
    // 0x3d2fd0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d2fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d2fd4:
    // 0x3d2fd4: 0x9645006e  lhu         $a1, 0x6E($s2)
    ctx->pc = 0x3d2fd4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 110)));
label_3d2fd8:
    // 0x3d2fd8: 0xc0cd4ee  jal         func_3353B8
label_3d2fdc:
    if (ctx->pc == 0x3D2FDCu) {
        ctx->pc = 0x3D2FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2FD8u;
        // 0x3d2fdc: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D2FE0u;
        goto label_3d2fe0;
    }
    ctx->pc = 0x3D2FD8u;
    SET_GPR_U32(ctx, 31, 0x3D2FE0u);
    ctx->pc = 0x3D2FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2FD8u;
    // 0x3d2fdc: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D2FD8u, 0x3D2FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2FE0u;
label_3d2fe0:
    // 0x3d2fe0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3d2fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d2fe4:
    // 0x3d2fe4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3d2fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d2fe8:
    // 0x3d2fe8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3d2fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_3d2fec:
    // 0x3d2fec: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3d2fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d2ff0:
    // 0x3d2ff0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3d2ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d2ff4:
    // 0x3d2ff4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3d2ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3d2ff8:
    // 0x3d2ff8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3d2ffc:
    if (ctx->pc == 0x3D2FFCu) {
        ctx->pc = 0x3D2FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2FF8u;
        // 0x3d2ffc: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3000u;
        goto label_3d3000;
    }
    ctx->pc = 0x3D2FF8u;
    {
        const bool branch_taken_0x3d2ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2FF8u;
        // 0x3d2ffc: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2ff8) {
            ctx->pc = 0x3D3078u;
            goto label_3d3078;
        }
    }
    ctx->pc = 0x3D3000u;
label_3d3000:
    // 0x3d3000: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3d3000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3d3004:
    // 0x3d3004: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_3d3008:
    if (ctx->pc == 0x3D3008u) {
        ctx->pc = 0x3D3008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3004u;
        // 0x3d3008: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D300Cu;
        goto label_3d300c;
    }
    ctx->pc = 0x3D3004u;
    {
        const bool branch_taken_0x3d3004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d3004) {
            ctx->pc = 0x3D3008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3004u;
            // 0x3d3008: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3028u;
            goto label_3d3028;
        }
    }
    ctx->pc = 0x3D300Cu;
label_3d300c:
    // 0x3d300c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d300cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d3010:
    // 0x3d3010: 0xc0e858c  jal         func_3A1630
label_3d3014:
    if (ctx->pc == 0x3D3014u) {
        ctx->pc = 0x3D3014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3010u;
        // 0x3d3014: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3018u;
        goto label_3d3018;
    }
    ctx->pc = 0x3D3010u;
    SET_GPR_U32(ctx, 31, 0x3D3018u);
    ctx->pc = 0x3D3014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3010u;
    // 0x3d3014: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D3010u, 0x3D3018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3018u;
label_3d3018:
    // 0x3d3018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d3018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d301c:
    // 0x3d301c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3d301cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3d3020:
    // 0x3d3020: 0x10000013  b           . + 4 + (0x13 << 2)
label_3d3024:
    if (ctx->pc == 0x3D3024u) {
        ctx->pc = 0x3D3024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3020u;
        // 0x3d3024: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3028u;
        goto label_3d3028;
    }
    ctx->pc = 0x3D3020u;
    {
        const bool branch_taken_0x3d3020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3020u;
        // 0x3d3024: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3020) {
            ctx->pc = 0x3D3070u;
            goto label_3d3070;
        }
    }
    ctx->pc = 0x3D3028u;
label_3d3028:
    // 0x3d3028: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d3028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d302c:
    // 0x3d302c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3d302cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_3d3030:
    // 0x3d3030: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3d3030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3d3034:
    // 0x3d3034: 0xc0e858c  jal         func_3A1630
label_3d3038:
    if (ctx->pc == 0x3D3038u) {
        ctx->pc = 0x3D3038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3034u;
        // 0x3d3038: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D303Cu;
        goto label_3d303c;
    }
    ctx->pc = 0x3D3034u;
    SET_GPR_U32(ctx, 31, 0x3D303Cu);
    ctx->pc = 0x3D3038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3034u;
    // 0x3d3038: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D3034u, 0x3D303Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D303Cu;
label_3d303c:
    // 0x3d303c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d303cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d3040:
    // 0x3d3040: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3d3040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3d3044:
    // 0x3d3044: 0xc0cd4ee  jal         func_3353B8
label_3d3048:
    if (ctx->pc == 0x3D3048u) {
        ctx->pc = 0x3D3048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3044u;
        // 0x3d3048: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D304Cu;
        goto label_3d304c;
    }
    ctx->pc = 0x3D3044u;
    SET_GPR_U32(ctx, 31, 0x3D304Cu);
    ctx->pc = 0x3D3048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3044u;
    // 0x3d3048: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D3044u, 0x3D304Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D304Cu;
label_3d304c:
    // 0x3d304c: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x3d304cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_3d3050:
    // 0x3d3050: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3d3050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d3054:
    // 0x3d3054: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3d3054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3d3058:
    // 0x3d3058: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3d3058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3d305c:
    // 0x3d305c: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x3d305cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_3d3060:
    // 0x3d3060: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3d3060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3d3064:
    // 0x3d3064: 0xae140020  sw          $s4, 0x20($s0)
    ctx->pc = 0x3d3064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
label_3d3068:
    // 0x3d3068: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3d3068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_3d306c:
    // 0x3d306c: 0xae4300cc  sw          $v1, 0xCC($s2)
    ctx->pc = 0x3d306cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 3));
label_3d3070:
    // 0x3d3070: 0x10000002  b           . + 4 + (0x2 << 2)
label_3d3074:
    if (ctx->pc == 0x3D3074u) {
        ctx->pc = 0x3D3074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3070u;
        // 0x3d3074: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3078u;
        goto label_3d3078;
    }
    ctx->pc = 0x3D3070u;
    {
        const bool branch_taken_0x3d3070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3070u;
        // 0x3d3074: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3070) {
            ctx->pc = 0x3D307Cu;
            goto label_3d307c;
        }
    }
    ctx->pc = 0x3D3078u;
label_3d3078:
    // 0x3d3078: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3d3078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3d307c:
    // 0x3d307c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x3d307cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3d3080:
    // 0x3d3080: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d3080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d3084:
    // 0x3d3084: 0x5462003e  bnel        $v1, $v0, . + 4 + (0x3E << 2)
label_3d3088:
    if (ctx->pc == 0x3D3088u) {
        ctx->pc = 0x3D3088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3084u;
        // 0x3d3088: 0x7bb00470  lq          $s0, 0x470($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D308Cu;
        goto label_3d308c;
    }
    ctx->pc = 0x3D3084u;
    {
        const bool branch_taken_0x3d3084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d3084) {
            ctx->pc = 0x3D3088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3084u;
            // 0x3d3088: 0x7bb00470  lq          $s0, 0x470($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3180u;
            goto label_3d3180;
        }
    }
    ctx->pc = 0x3D308Cu;
label_3d308c:
    // 0x3d308c: 0x1683001a  bne         $s4, $v1, . + 4 + (0x1A << 2)
label_3d3090:
    if (ctx->pc == 0x3D3090u) {
        ctx->pc = 0x3D3090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D308Cu;
        // 0x3d3090: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3094u;
        goto label_3d3094;
    }
    ctx->pc = 0x3D308Cu;
    {
        const bool branch_taken_0x3d308c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D3090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D308Cu;
        // 0x3d3090: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d308c) {
            ctx->pc = 0x3D30F8u;
            goto label_3d30f8;
        }
    }
    ctx->pc = 0x3D3094u;
label_3d3094:
    // 0x3d3094: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3d3094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3d3098:
    // 0x3d3098: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d3098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d309c:
    // 0x3d309c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3d309cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3d30a0:
    // 0x3d30a0: 0xae4200c8  sw          $v0, 0xC8($s2)
    ctx->pc = 0x3d30a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 2));
label_3d30a4:
    // 0x3d30a4: 0xc0ea16a  jal         func_3A85A8
label_3d30a8:
    if (ctx->pc == 0x3D30A8u) {
        ctx->pc = 0x3D30A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D30A4u;
        // 0x3d30a8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D30ACu;
        goto label_3d30ac;
    }
    ctx->pc = 0x3D30A4u;
    SET_GPR_U32(ctx, 31, 0x3D30ACu);
    ctx->pc = 0x3D30A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D30A4u;
    // 0x3d30a8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D30A4u, 0x3D30ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D30ACu;
label_3d30ac:
    // 0x3d30ac: 0x8e070024  lw          $a3, 0x24($s0)
    ctx->pc = 0x3d30acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3d30b0:
    // 0x3d30b0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3d30b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d30b4:
    // 0x3d30b4: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3d30b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3d30b8:
    // 0x3d30b8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d30b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d30bc:
    // 0x3d30bc: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d30bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d30c0:
    // 0x3d30c0: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d30c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d30c4:
    // 0x3d30c4: 0x60f809  jalr        $v1
label_3d30c8:
    if (ctx->pc == 0x3D30C8u) {
        ctx->pc = 0x3D30C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D30C4u;
        // 0x3d30c8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D30CCu;
        goto label_3d30cc;
    }
    ctx->pc = 0x3D30C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D30CCu);
        ctx->pc = 0x3D30C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D30C4u;
        // 0x3d30c8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D30C4u, 0x3D30CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D30CCu;
label_3d30cc:
    // 0x3d30cc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x3d30ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3d30d0:
    // 0x3d30d0: 0xc0ea16a  jal         func_3A85A8
label_3d30d4:
    if (ctx->pc == 0x3D30D4u) {
        ctx->pc = 0x3D30D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D30D0u;
        // 0x3d30d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D30D8u;
        goto label_3d30d8;
    }
    ctx->pc = 0x3D30D0u;
    SET_GPR_U32(ctx, 31, 0x3D30D8u);
    ctx->pc = 0x3D30D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D30D0u;
    // 0x3d30d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D30D0u, 0x3D30D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D30D8u;
label_3d30d8:
    // 0x3d30d8: 0x8e070028  lw          $a3, 0x28($s0)
    ctx->pc = 0x3d30d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3d30dc:
    // 0x3d30dc: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3d30dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3d30e0:
    // 0x3d30e0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3d30e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d30e4:
    // 0x3d30e4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d30e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d30e8:
    // 0x3d30e8: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d30e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d30ec:
    // 0x3d30ec: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d30ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d30f0:
    // 0x3d30f0: 0x60f809  jalr        $v1
label_3d30f4:
    if (ctx->pc == 0x3D30F4u) {
        ctx->pc = 0x3D30F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D30F0u;
        // 0x3d30f4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D30F8u;
        goto label_3d30f8;
    }
    ctx->pc = 0x3D30F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D30F8u);
        ctx->pc = 0x3D30F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D30F0u;
        // 0x3d30f4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D30F0u, 0x3D30F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D30F8u;
label_3d30f8:
    // 0x3d30f8: 0x56800021  bnel        $s4, $zero, . + 4 + (0x21 << 2)
label_3d30fc:
    if (ctx->pc == 0x3D30FCu) {
        ctx->pc = 0x3D30FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D30F8u;
        // 0x3d30fc: 0x7bb00470  lq          $s0, 0x470($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3100u;
        goto label_3d3100;
    }
    ctx->pc = 0x3D30F8u;
    {
        const bool branch_taken_0x3d30f8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d30f8) {
            ctx->pc = 0x3D30FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D30F8u;
            // 0x3d30fc: 0x7bb00470  lq          $s0, 0x470($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3180u;
            goto label_3d3180;
        }
    }
    ctx->pc = 0x3D3100u;
label_3d3100:
    // 0x3d3100: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3d3100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3d3104:
    // 0x3d3104: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d3104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d3108:
    // 0x3d3108: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3d3108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3d310c:
    // 0x3d310c: 0xae4200c8  sw          $v0, 0xC8($s2)
    ctx->pc = 0x3d310cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 2));
label_3d3110:
    // 0x3d3110: 0xc0ea16a  jal         func_3A85A8
label_3d3114:
    if (ctx->pc == 0x3D3114u) {
        ctx->pc = 0x3D3114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3110u;
        // 0x3d3114: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3118u;
        goto label_3d3118;
    }
    ctx->pc = 0x3D3110u;
    SET_GPR_U32(ctx, 31, 0x3D3118u);
    ctx->pc = 0x3D3114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3110u;
    // 0x3d3114: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D3110u, 0x3D3118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3118u;
label_3d3118:
    // 0x3d3118: 0x8e070024  lw          $a3, 0x24($s0)
    ctx->pc = 0x3d3118u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3d311c:
    // 0x3d311c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3d311cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d3120:
    // 0x3d3120: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3d3120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3d3124:
    // 0x3d3124: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d3124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d3128:
    // 0x3d3128: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d3128u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d312c:
    // 0x3d312c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d312cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d3130:
    // 0x3d3130: 0x60f809  jalr        $v1
label_3d3134:
    if (ctx->pc == 0x3D3134u) {
        ctx->pc = 0x3D3134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3130u;
        // 0x3d3134: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3138u;
        goto label_3d3138;
    }
    ctx->pc = 0x3D3130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D3138u);
        ctx->pc = 0x3D3134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3130u;
        // 0x3d3134: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3130u, 0x3D3138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D3138u;
label_3d3138:
    // 0x3d3138: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x3d3138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3d313c:
    // 0x3d313c: 0xc0ea16a  jal         func_3A85A8
label_3d3140:
    if (ctx->pc == 0x3D3140u) {
        ctx->pc = 0x3D3140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D313Cu;
        // 0x3d3140: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3144u;
        goto label_3d3144;
    }
    ctx->pc = 0x3D313Cu;
    SET_GPR_U32(ctx, 31, 0x3D3144u);
    ctx->pc = 0x3D3140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D313Cu;
    // 0x3d3140: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3D313Cu, 0x3D3144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3144u;
label_3d3144:
    // 0x3d3144: 0x8e070028  lw          $a3, 0x28($s0)
    ctx->pc = 0x3d3144u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3d3148:
    // 0x3d3148: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3d3148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3d314c:
    // 0x3d314c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3d314cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d3150:
    // 0x3d3150: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d3150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d3154:
    // 0x3d3154: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d3154u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d3158:
    // 0x3d3158: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d3158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d315c:
    // 0x3d315c: 0x60f809  jalr        $v1
label_3d3160:
    if (ctx->pc == 0x3D3160u) {
        ctx->pc = 0x3D3160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D315Cu;
        // 0x3d3160: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3164u;
        goto label_3d3164;
    }
    ctx->pc = 0x3D315Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D3164u);
        ctx->pc = 0x3D3160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D315Cu;
        // 0x3d3160: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D315Cu, 0x3D3164u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D3164u;
label_3d3164:
    // 0x3d3164: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3d3164u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3d3168:
    // 0x3d3168: 0x3c04f164  lui         $a0, 0xF164
    ctx->pc = 0x3d3168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61796 << 16));
label_3d316c:
    // 0x3d316c: 0x3484dfe0  ori         $a0, $a0, 0xDFE0
    ctx->pc = 0x3d316cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)57312);
label_3d3170:
    // 0x3d3170: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x3d3170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3d3174:
    // 0x3d3174: 0xc045c8e  jal         func_117238
label_3d3178:
    if (ctx->pc == 0x3D3178u) {
        ctx->pc = 0x3D3178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3174u;
        // 0x3d3178: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D317Cu;
        goto label_3d317c;
    }
    ctx->pc = 0x3D3174u;
    SET_GPR_U32(ctx, 31, 0x3D317Cu);
    ctx->pc = 0x3D3178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3174u;
    // 0x3d3178: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117238u, 0x3D3174u, 0x3D317Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D317Cu;
label_3d317c:
    // 0x3d317c: 0x7bb00470  lq          $s0, 0x470($sp)
    ctx->pc = 0x3d317cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3d3180:
    // 0x3d3180: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d3180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d3184:
    // 0x3d3184: 0x7bb10460  lq          $s1, 0x460($sp)
    ctx->pc = 0x3d3184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3d3188:
    // 0x3d3188: 0x7bb20450  lq          $s2, 0x450($sp)
    ctx->pc = 0x3d3188u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3d318c:
    // 0x3d318c: 0x7bb30440  lq          $s3, 0x440($sp)
    ctx->pc = 0x3d318cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3d3190:
    // 0x3d3190: 0x7bb40430  lq          $s4, 0x430($sp)
    ctx->pc = 0x3d3190u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3d3194:
    // 0x3d3194: 0xdfbf0420  ld          $ra, 0x420($sp)
    ctx->pc = 0x3d3194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
label_3d3198:
    // 0x3d3198: 0x3e00008  jr          $ra
label_3d319c:
    if (ctx->pc == 0x3D319Cu) {
        ctx->pc = 0x3D319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3198u;
        // 0x3d319c: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D31A0u;
        goto label_fallthrough_0x3d3198;
    }
    ctx->pc = 0x3D3198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3198u;
        // 0x3d319c: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d3198:
    ctx->pc = 0x3D31A0u;
}
