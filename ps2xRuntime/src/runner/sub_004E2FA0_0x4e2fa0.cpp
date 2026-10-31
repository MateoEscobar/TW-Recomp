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

// Function: sub_004E2FA0
// Address: 0x4e2fa0 - 0x4e31c0
void sub_004E2FA0_0x4e2fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2FA0_0x4e2fa0");
#endif

    switch (ctx->pc) {
        case 0x4e2fa0u: goto label_4e2fa0;
        case 0x4e2fa4u: goto label_4e2fa4;
        case 0x4e2fa8u: goto label_4e2fa8;
        case 0x4e2facu: goto label_4e2fac;
        case 0x4e2fb0u: goto label_4e2fb0;
        case 0x4e2fb4u: goto label_4e2fb4;
        case 0x4e2fb8u: goto label_4e2fb8;
        case 0x4e2fbcu: goto label_4e2fbc;
        case 0x4e2fc0u: goto label_4e2fc0;
        case 0x4e2fc4u: goto label_4e2fc4;
        case 0x4e2fc8u: goto label_4e2fc8;
        case 0x4e2fccu: goto label_4e2fcc;
        case 0x4e2fd0u: goto label_4e2fd0;
        case 0x4e2fd4u: goto label_4e2fd4;
        case 0x4e2fd8u: goto label_4e2fd8;
        case 0x4e2fdcu: goto label_4e2fdc;
        case 0x4e2fe0u: goto label_4e2fe0;
        case 0x4e2fe4u: goto label_4e2fe4;
        case 0x4e2fe8u: goto label_4e2fe8;
        case 0x4e2fecu: goto label_4e2fec;
        case 0x4e2ff0u: goto label_4e2ff0;
        case 0x4e2ff4u: goto label_4e2ff4;
        case 0x4e2ff8u: goto label_4e2ff8;
        case 0x4e2ffcu: goto label_4e2ffc;
        case 0x4e3000u: goto label_4e3000;
        case 0x4e3004u: goto label_4e3004;
        case 0x4e3008u: goto label_4e3008;
        case 0x4e300cu: goto label_4e300c;
        case 0x4e3010u: goto label_4e3010;
        case 0x4e3014u: goto label_4e3014;
        case 0x4e3018u: goto label_4e3018;
        case 0x4e301cu: goto label_4e301c;
        case 0x4e3020u: goto label_4e3020;
        case 0x4e3024u: goto label_4e3024;
        case 0x4e3028u: goto label_4e3028;
        case 0x4e302cu: goto label_4e302c;
        case 0x4e3030u: goto label_4e3030;
        case 0x4e3034u: goto label_4e3034;
        case 0x4e3038u: goto label_4e3038;
        case 0x4e303cu: goto label_4e303c;
        case 0x4e3040u: goto label_4e3040;
        case 0x4e3044u: goto label_4e3044;
        case 0x4e3048u: goto label_4e3048;
        case 0x4e304cu: goto label_4e304c;
        case 0x4e3050u: goto label_4e3050;
        case 0x4e3054u: goto label_4e3054;
        case 0x4e3058u: goto label_4e3058;
        case 0x4e305cu: goto label_4e305c;
        case 0x4e3060u: goto label_4e3060;
        case 0x4e3064u: goto label_4e3064;
        case 0x4e3068u: goto label_4e3068;
        case 0x4e306cu: goto label_4e306c;
        case 0x4e3070u: goto label_4e3070;
        case 0x4e3074u: goto label_4e3074;
        case 0x4e3078u: goto label_4e3078;
        case 0x4e307cu: goto label_4e307c;
        case 0x4e3080u: goto label_4e3080;
        case 0x4e3084u: goto label_4e3084;
        case 0x4e3088u: goto label_4e3088;
        case 0x4e308cu: goto label_4e308c;
        case 0x4e3090u: goto label_4e3090;
        case 0x4e3094u: goto label_4e3094;
        case 0x4e3098u: goto label_4e3098;
        case 0x4e309cu: goto label_4e309c;
        case 0x4e30a0u: goto label_4e30a0;
        case 0x4e30a4u: goto label_4e30a4;
        case 0x4e30a8u: goto label_4e30a8;
        case 0x4e30acu: goto label_4e30ac;
        case 0x4e30b0u: goto label_4e30b0;
        case 0x4e30b4u: goto label_4e30b4;
        case 0x4e30b8u: goto label_4e30b8;
        case 0x4e30bcu: goto label_4e30bc;
        case 0x4e30c0u: goto label_4e30c0;
        case 0x4e30c4u: goto label_4e30c4;
        case 0x4e30c8u: goto label_4e30c8;
        case 0x4e30ccu: goto label_4e30cc;
        case 0x4e30d0u: goto label_4e30d0;
        case 0x4e30d4u: goto label_4e30d4;
        case 0x4e30d8u: goto label_4e30d8;
        case 0x4e30dcu: goto label_4e30dc;
        case 0x4e30e0u: goto label_4e30e0;
        case 0x4e30e4u: goto label_4e30e4;
        case 0x4e30e8u: goto label_4e30e8;
        case 0x4e30ecu: goto label_4e30ec;
        case 0x4e30f0u: goto label_4e30f0;
        case 0x4e30f4u: goto label_4e30f4;
        case 0x4e30f8u: goto label_4e30f8;
        case 0x4e30fcu: goto label_4e30fc;
        case 0x4e3100u: goto label_4e3100;
        case 0x4e3104u: goto label_4e3104;
        case 0x4e3108u: goto label_4e3108;
        case 0x4e310cu: goto label_4e310c;
        case 0x4e3110u: goto label_4e3110;
        case 0x4e3114u: goto label_4e3114;
        case 0x4e3118u: goto label_4e3118;
        case 0x4e311cu: goto label_4e311c;
        case 0x4e3120u: goto label_4e3120;
        case 0x4e3124u: goto label_4e3124;
        case 0x4e3128u: goto label_4e3128;
        case 0x4e312cu: goto label_4e312c;
        case 0x4e3130u: goto label_4e3130;
        case 0x4e3134u: goto label_4e3134;
        case 0x4e3138u: goto label_4e3138;
        case 0x4e313cu: goto label_4e313c;
        case 0x4e3140u: goto label_4e3140;
        case 0x4e3144u: goto label_4e3144;
        case 0x4e3148u: goto label_4e3148;
        case 0x4e314cu: goto label_4e314c;
        case 0x4e3150u: goto label_4e3150;
        case 0x4e3154u: goto label_4e3154;
        case 0x4e3158u: goto label_4e3158;
        case 0x4e315cu: goto label_4e315c;
        case 0x4e3160u: goto label_4e3160;
        case 0x4e3164u: goto label_4e3164;
        case 0x4e3168u: goto label_4e3168;
        case 0x4e316cu: goto label_4e316c;
        case 0x4e3170u: goto label_4e3170;
        case 0x4e3174u: goto label_4e3174;
        case 0x4e3178u: goto label_4e3178;
        case 0x4e317cu: goto label_4e317c;
        case 0x4e3180u: goto label_4e3180;
        case 0x4e3184u: goto label_4e3184;
        case 0x4e3188u: goto label_4e3188;
        case 0x4e318cu: goto label_4e318c;
        case 0x4e3190u: goto label_4e3190;
        case 0x4e3194u: goto label_4e3194;
        case 0x4e3198u: goto label_4e3198;
        case 0x4e319cu: goto label_4e319c;
        case 0x4e31a0u: goto label_4e31a0;
        case 0x4e31a4u: goto label_4e31a4;
        case 0x4e31a8u: goto label_4e31a8;
        case 0x4e31acu: goto label_4e31ac;
        case 0x4e31b0u: goto label_4e31b0;
        case 0x4e31b4u: goto label_4e31b4;
        case 0x4e31b8u: goto label_4e31b8;
        case 0x4e31bcu: goto label_4e31bc;
        default: break;
    }

    ctx->pc = 0x4e2fa0u;

label_4e2fa0:
    // 0x4e2fa0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4e2fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_4e2fa4:
    // 0x4e2fa4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x4e2fa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e2fa8:
    // 0x4e2fa8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x4e2fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_4e2fac:
    // 0x4e2fac: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x4e2facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_4e2fb0:
    // 0x4e2fb0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x4e2fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_4e2fb4:
    // 0x4e2fb4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x4e2fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_4e2fb8:
    // 0x4e2fb8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4e2fb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e2fbc:
    // 0x4e2fbc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x4e2fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_4e2fc0:
    // 0x4e2fc0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x4e2fc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e2fc4:
    // 0x4e2fc4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4e2fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4e2fc8:
    // 0x4e2fc8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x4e2fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_4e2fcc:
    // 0x4e2fcc: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x4e2fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_4e2fd0:
    // 0x4e2fd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e2fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4e2fd4:
    // 0x4e2fd4: 0x8e4a0028  lw          $t2, 0x28($s2)
    ctx->pc = 0x4e2fd4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_4e2fd8:
    // 0x4e2fd8: 0x8e470018  lw          $a3, 0x18($s2)
    ctx->pc = 0x4e2fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_4e2fdc:
    // 0x4e2fdc: 0x8e490008  lw          $t1, 0x8($s2)
    ctx->pc = 0x4e2fdcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4e2fe0:
    // 0x4e2fe0: 0x1471023  subu        $v0, $t2, $a3
    ctx->pc = 0x4e2fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_4e2fe4:
    // 0x4e2fe4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4e2fe4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4e2fe8:
    // 0x4e2fe8: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x4e2fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4e2fec:
    // 0x4e2fec: 0x2088821  addu        $s1, $s0, $t0
    ctx->pc = 0x4e2fecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_4e2ff0:
    // 0x4e2ff0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x4e2ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_4e2ff4:
    // 0x4e2ff4: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x4e2ff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_4e2ff8:
    // 0x4e2ff8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4e2ffc:
    if (ctx->pc == 0x4E2FFCu) {
        ctx->pc = 0x4E2FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2FF8u;
        // 0x4e2ffc: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3000u;
        goto label_4e3000;
    }
    ctx->pc = 0x4E2FF8u;
    {
        const bool branch_taken_0x4e2ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E2FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2FF8u;
        // 0x4e2ffc: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e2ff8) {
            ctx->pc = 0x4E3074u;
            goto label_4e3074;
        }
    }
    ctx->pc = 0x4E3000u;
label_4e3000:
    // 0x4e3000: 0x1311023  subu        $v0, $t1, $s1
    ctx->pc = 0x4e3000u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
label_4e3004:
    // 0x4e3004: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4e3004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e3008:
    // 0x4e3008: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x4e3008u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_4e300c:
    // 0x4e300c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4e300cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4e3010:
    // 0x4e3010: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_4e3014:
    if (ctx->pc == 0x4E3014u) {
        ctx->pc = 0x4E3014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3010u;
        // 0x4e3014: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3018u;
        goto label_4e3018;
    }
    ctx->pc = 0x4E3010u;
    {
        const bool branch_taken_0x4e3010 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3010u;
        // 0x4e3014: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3010) {
            ctx->pc = 0x4E3020u;
            goto label_4e3020;
        }
    }
    ctx->pc = 0x4E3018u;
label_4e3018:
    // 0x4e3018: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x4e3018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_4e301c:
    // 0x4e301c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4e301cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4e3020:
    // 0x4e3020: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e3020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e3024:
    // 0x4e3024: 0x227102b  sltu        $v0, $s1, $a3
    ctx->pc = 0x4e3024u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_4e3028:
    // 0x4e3028: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4e302c:
    if (ctx->pc == 0x4E302Cu) {
        ctx->pc = 0x4E302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3028u;
        // 0x4e302c: 0x25460004  addiu       $a2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3030u;
        goto label_4e3030;
    }
    ctx->pc = 0x4E3028u;
    {
        const bool branch_taken_0x4e3028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3028u;
        // 0x4e302c: 0x25460004  addiu       $a2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3028) {
            ctx->pc = 0x4E304Cu;
            goto label_4e304c;
        }
    }
    ctx->pc = 0x4E3030u;
label_4e3030:
    // 0x4e3030: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x4e3030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4e3034:
    // 0x4e3034: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x4e3034u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_4e3038:
    // 0x4e3038: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4e3038u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4e303c:
    // 0x4e303c: 0xc10c1bb  jal         func_4306EC
label_4e3040:
    if (ctx->pc == 0x4E3040u) {
        ctx->pc = 0x4E3040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E303Cu;
        // 0x4e3040: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3044u;
        goto label_4e3044;
    }
    ctx->pc = 0x4E303Cu;
    SET_GPR_U32(ctx, 31, 0x4E3044u);
    ctx->pc = 0x4E3040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E303Cu;
    // 0x4e3040: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E303Cu, 0x4E3044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3044u;
label_4e3044:
    // 0x4e3044: 0x10000041  b           . + 4 + (0x41 << 2)
label_4e3048:
    if (ctx->pc == 0x4E3048u) {
        ctx->pc = 0x4E3048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3044u;
        // 0x4e3048: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E304Cu;
        goto label_4e304c;
    }
    ctx->pc = 0x4E3044u;
    {
        const bool branch_taken_0x4e3044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3044u;
        // 0x4e3048: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3044) {
            ctx->pc = 0x4E314Cu;
            goto label_4e314c;
        }
    }
    ctx->pc = 0x4E304Cu;
label_4e304c:
    // 0x4e304c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x4e304cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4e3050:
    // 0x4e3050: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x4e3050u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_4e3054:
    // 0x4e3054: 0x2112021  addu        $a0, $s0, $s1
    ctx->pc = 0x4e3054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_4e3058:
    // 0x4e3058: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4e3058u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4e305c:
    // 0x4e305c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x4e305cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4e3060:
    // 0x4e3060: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4e3060u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4e3064:
    // 0x4e3064: 0xc10c1bb  jal         func_4306EC
label_4e3068:
    if (ctx->pc == 0x4E3068u) {
        ctx->pc = 0x4E3068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3064u;
        // 0x4e3068: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E306Cu;
        goto label_4e306c;
    }
    ctx->pc = 0x4E3064u;
    SET_GPR_U32(ctx, 31, 0x4E306Cu);
    ctx->pc = 0x4E3068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3064u;
    // 0x4e3068: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E3064u, 0x4E306Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E306Cu;
label_4e306c:
    // 0x4e306c: 0x10000038  b           . + 4 + (0x38 << 2)
label_4e3070:
    if (ctx->pc == 0x4E3070u) {
        ctx->pc = 0x4E3070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E306Cu;
        // 0x4e3070: 0x2644000c  addiu       $a0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3074u;
        goto label_4e3074;
    }
    ctx->pc = 0x4E306Cu;
    {
        const bool branch_taken_0x4e306c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E306Cu;
        // 0x4e3070: 0x2644000c  addiu       $a0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e306c) {
            ctx->pc = 0x4E3150u;
            goto label_4e3150;
        }
    }
    ctx->pc = 0x4E3074u;
label_4e3074:
    // 0x4e3074: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x4e3074u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_4e3078:
    // 0x4e3078: 0x128182b  sltu        $v1, $t1, $t0
    ctx->pc = 0x4e3078u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_4e307c:
    // 0x4e307c: 0x8ee7b9c0  lw          $a3, -0x4640($s7)
    ctx->pc = 0x4e307cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
label_4e3080:
    // 0x4e3080: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x4e3080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_4e3084:
    // 0x4e3084: 0x3a3100b  movn        $v0, $sp, $v1
    ctx->pc = 0x4e3084u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 29));
label_4e3088:
    // 0x4e3088: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x4e3088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_4e308c:
    // 0x4e308c: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4e308cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4e3090:
    // 0x4e3090: 0x24962c10  addiu       $s6, $a0, 0x2C10
    ctx->pc = 0x4e3090u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 11280));
label_4e3094:
    // 0x4e3094: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4e3094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e3098:
    // 0x4e3098: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e3098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e309c:
    // 0x4e309c: 0x84c40050  lh          $a0, 0x50($a2)
    ctx->pc = 0x4e309cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 80)));
label_4e30a0:
    // 0x4e30a0: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e30a0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e30a4:
    // 0x4e30a4: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x4e30a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_4e30a8:
    // 0x4e30a8: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x4e30a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_4e30ac:
    // 0x4e30ac: 0x24730002  addiu       $s3, $v1, 0x2
    ctx->pc = 0x4e30acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_4e30b0:
    // 0x4e30b0: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x4e30b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_4e30b4:
    // 0x4e30b4: 0x24a52c08  addiu       $a1, $a1, 0x2C08
    ctx->pc = 0x4e30b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11272));
label_4e30b8:
    // 0x4e30b8: 0x254a2c38  addiu       $t2, $t2, 0x2C38
    ctx->pc = 0x4e30b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 11320));
label_4e30bc:
    // 0x4e30bc: 0x133080  sll         $a2, $s3, 2
    ctx->pc = 0x4e30bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_4e30c0:
    // 0x4e30c0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e30c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e30c4:
    // 0x4e30c4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4e30c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4e30c8:
    // 0x4e30c8: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e30c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e30cc:
    // 0x4e30cc: 0x40f809  jalr        $v0
label_4e30d0:
    if (ctx->pc == 0x4E30D0u) {
        ctx->pc = 0x4E30D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E30CCu;
        // 0x4e30d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E30D4u;
        goto label_4e30d4;
    }
    ctx->pc = 0x4E30CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E30D4u);
        ctx->pc = 0x4E30D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E30CCu;
        // 0x4e30d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E30CCu, 0x4E30D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E30D4u;
label_4e30d4:
    // 0x4e30d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4e30d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e30d8:
    // 0x4e30d8: 0x2711023  subu        $v0, $s3, $s1
    ctx->pc = 0x4e30d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_4e30dc:
    // 0x4e30dc: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x4e30dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_4e30e0:
    // 0x4e30e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4e30e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4e30e4:
    // 0x4e30e4: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_4e30e8:
    if (ctx->pc == 0x4E30E8u) {
        ctx->pc = 0x4E30E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E30E4u;
        // 0x4e30e8: 0x2822021  addu        $a0, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E30ECu;
        goto label_4e30ec;
    }
    ctx->pc = 0x4E30E4u;
    {
        const bool branch_taken_0x4e30e4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E30E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E30E4u;
        // 0x4e30e8: 0x2822021  addu        $a0, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e30e4) {
            ctx->pc = 0x4E30F8u;
            goto label_4e30f8;
        }
    }
    ctx->pc = 0x4E30ECu;
label_4e30ec:
    // 0x4e30ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4e30ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4e30f0:
    // 0x4e30f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4e30f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4e30f4:
    // 0x4e30f4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4e30f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4e30f8:
    // 0x4e30f8: 0x8e460028  lw          $a2, 0x28($s2)
    ctx->pc = 0x4e30f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_4e30fc:
    // 0x4e30fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e30fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e3100:
    // 0x4e3100: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x4e3100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_4e3104:
    // 0x4e3104: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x4e3104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_4e3108:
    // 0x4e3108: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x4e3108u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_4e310c:
    // 0x4e310c: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4e310cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4e3110:
    // 0x4e3110: 0xc10c1bb  jal         func_4306EC
label_4e3114:
    if (ctx->pc == 0x4E3114u) {
        ctx->pc = 0x4E3114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3110u;
        // 0x4e3114: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3118u;
        goto label_4e3118;
    }
    ctx->pc = 0x4E3110u;
    SET_GPR_U32(ctx, 31, 0x4E3118u);
    ctx->pc = 0x4E3114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3110u;
    // 0x4e3114: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E3110u, 0x4E3118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3118u;
label_4e3118:
    // 0x4e3118: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x4e3118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4e311c:
    // 0x4e311c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4e3120:
    if (ctx->pc == 0x4E3120u) {
        ctx->pc = 0x4E3120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E311Cu;
        // 0x4e3120: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3124u;
        goto label_4e3124;
    }
    ctx->pc = 0x4E311Cu;
    {
        const bool branch_taken_0x4e311c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E311Cu;
        // 0x4e3120: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e311c) {
            ctx->pc = 0x4E3140u;
            goto label_4e3140;
        }
    }
    ctx->pc = 0x4E3124u;
label_4e3124:
    // 0x4e3124: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4e3124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4e3128:
    // 0x4e3128: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4e3128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4e312c:
    // 0x4e312c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e312cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e3130:
    // 0x4e3130: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e3130u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e3134:
    // 0x4e3134: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e3134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e3138:
    // 0x4e3138: 0x60f809  jalr        $v1
label_4e313c:
    if (ctx->pc == 0x4E313Cu) {
        ctx->pc = 0x4E313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3138u;
        // 0x4e313c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3140u;
        goto label_4e3140;
    }
    ctx->pc = 0x4E3138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E3140u);
        ctx->pc = 0x4E313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3138u;
        // 0x4e313c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3138u, 0x4E3140u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E3140u;
label_4e3140:
    // 0x4e3140: 0xae540004  sw          $s4, 0x4($s2)
    ctx->pc = 0x4e3140u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 20));
label_4e3144:
    // 0x4e3144: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x4e3144u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4e3148:
    // 0x4e3148: 0xae530008  sw          $s3, 0x8($s2)
    ctx->pc = 0x4e3148u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 19));
label_4e314c:
    // 0x4e314c: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x4e314cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_4e3150:
    // 0x4e3150: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x4e3150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4e3154:
    // 0x4e3154: 0xac91000c  sw          $s1, 0xC($a0)
    ctx->pc = 0x4e3154u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 17));
label_4e3158:
    // 0x4e3158: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x4e3158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_4e315c:
    // 0x4e315c: 0x2645001c  addiu       $a1, $s2, 0x1C
    ctx->pc = 0x4e315cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_4e3160:
    // 0x4e3160: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x4e3160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_4e3164:
    // 0x4e3164: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4e3164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4e3168:
    // 0x4e3168: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x4e3168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4e316c:
    // 0x4e316c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4e316cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4e3170:
    // 0x4e3170: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_4e3174:
    if (ctx->pc == 0x4E3174u) {
        ctx->pc = 0x4E3174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3170u;
        // 0x4e3174: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3178u;
        goto label_4e3178;
    }
    ctx->pc = 0x4E3170u;
    {
        const bool branch_taken_0x4e3170 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3170) {
            ctx->pc = 0x4E3174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3170u;
            // 0x4e3174: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E3178u;
            goto label_4e3178;
        }
    }
    ctx->pc = 0x4E3178u;
label_4e3178:
    // 0x4e3178: 0x244201f8  addiu       $v0, $v0, 0x1F8
    ctx->pc = 0x4e3178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 504));
label_4e317c:
    // 0x4e317c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x4e317cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_4e3180:
    // 0x4e3180: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x4e3180u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_4e3184:
    // 0x4e3184: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4e3184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4e3188:
    // 0x4e3188: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x4e3188u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_4e318c:
    // 0x4e318c: 0x244201f8  addiu       $v0, $v0, 0x1F8
    ctx->pc = 0x4e318cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 504));
label_4e3190:
    // 0x4e3190: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x4e3190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4e3194:
    // 0x4e3194: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x4e3194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4e3198:
    // 0x4e3198: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x4e3198u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4e319c:
    // 0x4e319c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x4e319cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4e31a0:
    // 0x4e31a0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4e31a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4e31a4:
    // 0x4e31a4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x4e31a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e31a8:
    // 0x4e31a8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x4e31a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e31ac:
    // 0x4e31ac: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x4e31acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e31b0:
    // 0x4e31b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e31b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e31b4:
    // 0x4e31b4: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x4e31b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_4e31b8:
    // 0x4e31b8: 0x3e00008  jr          $ra
label_4e31bc:
    if (ctx->pc == 0x4E31BCu) {
        ctx->pc = 0x4E31BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E31B8u;
        // 0x4e31bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E31C0u;
        goto label_fallthrough_0x4e31b8;
    }
    ctx->pc = 0x4E31B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E31BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E31B8u;
        // 0x4e31bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E31B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e31b8:
    ctx->pc = 0x4E31C0u;
}
