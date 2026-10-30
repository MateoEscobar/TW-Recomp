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

// Function: sub_003B3250
// Address: 0x3b3250 - 0x3b33e8
void sub_003B3250_0x3b3250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B3250_0x3b3250");
#endif

    switch (ctx->pc) {
        case 0x3b3250u: goto label_3b3250;
        case 0x3b3254u: goto label_3b3254;
        case 0x3b3258u: goto label_3b3258;
        case 0x3b325cu: goto label_3b325c;
        case 0x3b3260u: goto label_3b3260;
        case 0x3b3264u: goto label_3b3264;
        case 0x3b3268u: goto label_3b3268;
        case 0x3b326cu: goto label_3b326c;
        case 0x3b3270u: goto label_3b3270;
        case 0x3b3274u: goto label_3b3274;
        case 0x3b3278u: goto label_3b3278;
        case 0x3b327cu: goto label_3b327c;
        case 0x3b3280u: goto label_3b3280;
        case 0x3b3284u: goto label_3b3284;
        case 0x3b3288u: goto label_3b3288;
        case 0x3b328cu: goto label_3b328c;
        case 0x3b3290u: goto label_3b3290;
        case 0x3b3294u: goto label_3b3294;
        case 0x3b3298u: goto label_3b3298;
        case 0x3b329cu: goto label_3b329c;
        case 0x3b32a0u: goto label_3b32a0;
        case 0x3b32a4u: goto label_3b32a4;
        case 0x3b32a8u: goto label_3b32a8;
        case 0x3b32acu: goto label_3b32ac;
        case 0x3b32b0u: goto label_3b32b0;
        case 0x3b32b4u: goto label_3b32b4;
        case 0x3b32b8u: goto label_3b32b8;
        case 0x3b32bcu: goto label_3b32bc;
        case 0x3b32c0u: goto label_3b32c0;
        case 0x3b32c4u: goto label_3b32c4;
        case 0x3b32c8u: goto label_3b32c8;
        case 0x3b32ccu: goto label_3b32cc;
        case 0x3b32d0u: goto label_3b32d0;
        case 0x3b32d4u: goto label_3b32d4;
        case 0x3b32d8u: goto label_3b32d8;
        case 0x3b32dcu: goto label_3b32dc;
        case 0x3b32e0u: goto label_3b32e0;
        case 0x3b32e4u: goto label_3b32e4;
        case 0x3b32e8u: goto label_3b32e8;
        case 0x3b32ecu: goto label_3b32ec;
        case 0x3b32f0u: goto label_3b32f0;
        case 0x3b32f4u: goto label_3b32f4;
        case 0x3b32f8u: goto label_3b32f8;
        case 0x3b32fcu: goto label_3b32fc;
        case 0x3b3300u: goto label_3b3300;
        case 0x3b3304u: goto label_3b3304;
        case 0x3b3308u: goto label_3b3308;
        case 0x3b330cu: goto label_3b330c;
        case 0x3b3310u: goto label_3b3310;
        case 0x3b3314u: goto label_3b3314;
        case 0x3b3318u: goto label_3b3318;
        case 0x3b331cu: goto label_3b331c;
        case 0x3b3320u: goto label_3b3320;
        case 0x3b3324u: goto label_3b3324;
        case 0x3b3328u: goto label_3b3328;
        case 0x3b332cu: goto label_3b332c;
        case 0x3b3330u: goto label_3b3330;
        case 0x3b3334u: goto label_3b3334;
        case 0x3b3338u: goto label_3b3338;
        case 0x3b333cu: goto label_3b333c;
        case 0x3b3340u: goto label_3b3340;
        case 0x3b3344u: goto label_3b3344;
        case 0x3b3348u: goto label_3b3348;
        case 0x3b334cu: goto label_3b334c;
        case 0x3b3350u: goto label_3b3350;
        case 0x3b3354u: goto label_3b3354;
        case 0x3b3358u: goto label_3b3358;
        case 0x3b335cu: goto label_3b335c;
        case 0x3b3360u: goto label_3b3360;
        case 0x3b3364u: goto label_3b3364;
        case 0x3b3368u: goto label_3b3368;
        case 0x3b336cu: goto label_3b336c;
        case 0x3b3370u: goto label_3b3370;
        case 0x3b3374u: goto label_3b3374;
        case 0x3b3378u: goto label_3b3378;
        case 0x3b337cu: goto label_3b337c;
        case 0x3b3380u: goto label_3b3380;
        case 0x3b3384u: goto label_3b3384;
        case 0x3b3388u: goto label_3b3388;
        case 0x3b338cu: goto label_3b338c;
        case 0x3b3390u: goto label_3b3390;
        case 0x3b3394u: goto label_3b3394;
        case 0x3b3398u: goto label_3b3398;
        case 0x3b339cu: goto label_3b339c;
        case 0x3b33a0u: goto label_3b33a0;
        case 0x3b33a4u: goto label_3b33a4;
        case 0x3b33a8u: goto label_3b33a8;
        case 0x3b33acu: goto label_3b33ac;
        case 0x3b33b0u: goto label_3b33b0;
        case 0x3b33b4u: goto label_3b33b4;
        case 0x3b33b8u: goto label_3b33b8;
        case 0x3b33bcu: goto label_3b33bc;
        case 0x3b33c0u: goto label_3b33c0;
        case 0x3b33c4u: goto label_3b33c4;
        case 0x3b33c8u: goto label_3b33c8;
        case 0x3b33ccu: goto label_3b33cc;
        case 0x3b33d0u: goto label_3b33d0;
        case 0x3b33d4u: goto label_3b33d4;
        case 0x3b33d8u: goto label_3b33d8;
        case 0x3b33dcu: goto label_3b33dc;
        case 0x3b33e0u: goto label_3b33e0;
        case 0x3b33e4u: goto label_3b33e4;
        default: break;
    }

    ctx->pc = 0x3b3250u;

label_3b3250:
    // 0x3b3250: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3b3250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3b3254:
    // 0x3b3254: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3b3254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3b3258:
    // 0x3b3258: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3b3258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3b325c:
    // 0x3b325c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b325cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b3260:
    // 0x3b3260: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3b3260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3b3264:
    // 0x3b3264: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b3264u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b3268:
    // 0x3b3268: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3b3268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3b326c:
    // 0x3b326c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3b326cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3b3270:
    // 0x3b3270: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3b3270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_3b3274:
    // 0x3b3274: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b3274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3b3278:
    // 0x3b3278: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b3278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b327c:
    // 0x3b327c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b327cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b3280:
    // 0x3b3280: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b3280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b3284:
    // 0x3b3284: 0x40f809  jalr        $v0
label_3b3288:
    if (ctx->pc == 0x3B3288u) {
        ctx->pc = 0x3B3288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3284u;
        // 0x3b3288: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B328Cu;
        goto label_3b328c;
    }
    ctx->pc = 0x3B3284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B328Cu);
        ctx->pc = 0x3B3288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3284u;
        // 0x3b3288: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3284u, 0x3B328Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B328Cu;
label_3b328c:
    // 0x3b328c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3b328cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b3290:
    // 0x3b3290: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x3b3290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3b3294:
    // 0x3b3294: 0xc0e858c  jal         func_3A1630
label_3b3298:
    if (ctx->pc == 0x3B3298u) {
        ctx->pc = 0x3B3298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3294u;
        // 0x3b3298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B329Cu;
        goto label_3b329c;
    }
    ctx->pc = 0x3B3294u;
    SET_GPR_U32(ctx, 31, 0x3B329Cu);
    ctx->pc = 0x3B3298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3294u;
    // 0x3b3298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3B3294u, 0x3B329Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B329Cu;
label_3b329c:
    // 0x3b329c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3b329cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3b32a0:
    // 0x3b32a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b32a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b32a4:
    // 0x3b32a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b32a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b32a8:
    // 0x3b32a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b32a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b32ac:
    // 0x3b32ac: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3b32acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3b32b0:
    // 0x3b32b0: 0xc0ea146  jal         func_3A8518
label_3b32b4:
    if (ctx->pc == 0x3B32B4u) {
        ctx->pc = 0x3B32B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B32B0u;
        // 0x3b32b4: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B32B8u;
        goto label_3b32b8;
    }
    ctx->pc = 0x3B32B0u;
    SET_GPR_U32(ctx, 31, 0x3B32B8u);
    ctx->pc = 0x3B32B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B32B0u;
    // 0x3b32b4: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B32B0u, 0x3B32B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B32B8u;
label_3b32b8:
    // 0x3b32b8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3b32b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b32bc:
    // 0x3b32bc: 0xc0ea146  jal         func_3A8518
label_3b32c0:
    if (ctx->pc == 0x3B32C0u) {
        ctx->pc = 0x3B32C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B32BCu;
        // 0x3b32c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B32C4u;
        goto label_3b32c4;
    }
    ctx->pc = 0x3B32BCu;
    SET_GPR_U32(ctx, 31, 0x3B32C4u);
    ctx->pc = 0x3B32C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B32BCu;
    // 0x3b32c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B32BCu, 0x3B32C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B32C4u;
label_3b32c4:
    // 0x3b32c4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3b32c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b32c8:
    // 0x3b32c8: 0xc0ea146  jal         func_3A8518
label_3b32cc:
    if (ctx->pc == 0x3B32CCu) {
        ctx->pc = 0x3B32CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B32C8u;
        // 0x3b32cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B32D0u;
        goto label_3b32d0;
    }
    ctx->pc = 0x3B32C8u;
    SET_GPR_U32(ctx, 31, 0x3B32D0u);
    ctx->pc = 0x3B32CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B32C8u;
    // 0x3b32cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B32C8u, 0x3B32D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B32D0u;
label_3b32d0:
    // 0x3b32d0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b32d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b32d4:
    // 0x3b32d4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3b32d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b32d8:
    // 0x3b32d8: 0xc0ea12a  jal         func_3A84A8
label_3b32dc:
    if (ctx->pc == 0x3B32DCu) {
        ctx->pc = 0x3B32DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B32D8u;
        // 0x3b32dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B32E0u;
        goto label_3b32e0;
    }
    ctx->pc = 0x3B32D8u;
    SET_GPR_U32(ctx, 31, 0x3B32E0u);
    ctx->pc = 0x3B32DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B32D8u;
    // 0x3b32dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B32D8u, 0x3B32E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B32E0u;
label_3b32e0:
    // 0x3b32e0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b32e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b32e4:
    // 0x3b32e4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b32e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b32e8:
    // 0x3b32e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b32e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b32ec:
    // 0x3b32ec: 0xc0ea12a  jal         func_3A84A8
label_3b32f0:
    if (ctx->pc == 0x3B32F0u) {
        ctx->pc = 0x3B32F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B32ECu;
        // 0x3b32f0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B32F4u;
        goto label_3b32f4;
    }
    ctx->pc = 0x3B32ECu;
    SET_GPR_U32(ctx, 31, 0x3B32F4u);
    ctx->pc = 0x3B32F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B32ECu;
    // 0x3b32f0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B32ECu, 0x3B32F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B32F4u;
label_3b32f4:
    // 0x3b32f4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b32f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b32f8:
    // 0x3b32f8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x3b32f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3b32fc:
    // 0x3b32fc: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3b32fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3b3300:
    // 0x3b3300: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3b3300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3b3304:
    // 0x3b3304: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3b3304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_3b3308:
    // 0x3b3308: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x3b3308u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_3b330c:
    // 0x3b330c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3b330cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b3310:
    // 0x3b3310: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3b3310u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b3314:
    // 0x3b3314: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3b3314u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3b3318:
    // 0x3b3318: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3b3318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b331c:
    // 0x3b331c: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x3b331cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_3b3320:
    // 0x3b3320: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3b3320u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3b3324:
    // 0x3b3324: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3b3324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3b3328:
    // 0x3b3328: 0x60f809  jalr        $v1
label_3b332c:
    if (ctx->pc == 0x3B332Cu) {
        ctx->pc = 0x3B332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3328u;
        // 0x3b332c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3330u;
        goto label_3b3330;
    }
    ctx->pc = 0x3B3328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B3330u);
        ctx->pc = 0x3B332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3328u;
        // 0x3b332c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3328u, 0x3B3330u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B3330u;
label_3b3330:
    // 0x3b3330: 0x3c050a84  lui         $a1, 0xA84
    ctx->pc = 0x3b3330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2692 << 16));
label_3b3334:
    // 0x3b3334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b3334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b3338:
    // 0x3b3338: 0xc0e9132  jal         func_3A44C8
label_3b333c:
    if (ctx->pc == 0x3B333Cu) {
        ctx->pc = 0x3B333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3338u;
        // 0x3b333c: 0x34a55744  ori         $a1, $a1, 0x5744 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)22340);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3340u;
        goto label_3b3340;
    }
    ctx->pc = 0x3B3338u;
    SET_GPR_U32(ctx, 31, 0x3B3340u);
    ctx->pc = 0x3B333Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3338u;
    // 0x3b333c: 0x34a55744  ori         $a1, $a1, 0x5744 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)22340);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3B3338u, 0x3B3340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3340u;
label_3b3340:
    // 0x3b3340: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3b3340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3b3344:
    // 0x3b3344: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3b3344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3b3348:
    // 0x3b3348: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3b3348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3b334c:
    // 0x3b334c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3b334cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3b3350:
    // 0x3b3350: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3b3350u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_3b3354:
    // 0x3b3354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b3354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b3358:
    // 0x3b3358: 0xc0e9bb2  jal         func_3A6EC8
label_3b335c:
    if (ctx->pc == 0x3B335Cu) {
        ctx->pc = 0x3B335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3358u;
        // 0x3b335c: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3360u;
        goto label_3b3360;
    }
    ctx->pc = 0x3B3358u;
    SET_GPR_U32(ctx, 31, 0x3B3360u);
    ctx->pc = 0x3B335Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3358u;
    // 0x3b335c: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6EC8u, 0x3B3358u, 0x3B3360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3360u;
label_3b3360:
    // 0x3b3360: 0xae1300d8  sw          $s3, 0xD8($s0)
    ctx->pc = 0x3b3360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 19));
label_3b3364:
    // 0x3b3364: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b3364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b3368:
    // 0x3b3368: 0xc0e91da  jal         func_3A4768
label_3b336c:
    if (ctx->pc == 0x3B336Cu) {
        ctx->pc = 0x3B336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3368u;
        // 0x3b336c: 0xae1400dc  sw          $s4, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3370u;
        goto label_3b3370;
    }
    ctx->pc = 0x3B3368u;
    SET_GPR_U32(ctx, 31, 0x3B3370u);
    ctx->pc = 0x3B336Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3368u;
    // 0x3b336c: 0xae1400dc  sw          $s4, 0xDC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4768u, 0x3B3368u, 0x3B3370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3370u;
label_3b3370:
    // 0x3b3370: 0xc0e91da  jal         func_3A4768
label_3b3374:
    if (ctx->pc == 0x3B3374u) {
        ctx->pc = 0x3B3374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3370u;
        // 0x3b3374: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3378u;
        goto label_3b3378;
    }
    ctx->pc = 0x3B3370u;
    SET_GPR_U32(ctx, 31, 0x3B3378u);
    ctx->pc = 0x3B3374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3370u;
    // 0x3b3374: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4768u, 0x3B3370u, 0x3B3378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3378u;
label_3b3378:
    // 0x3b3378: 0xae1500e0  sw          $s5, 0xE0($s0)
    ctx->pc = 0x3b3378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 21));
label_3b337c:
    // 0x3b337c: 0xc0e92cc  jal         func_3A4B30
label_3b3380:
    if (ctx->pc == 0x3B3380u) {
        ctx->pc = 0x3B3380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B337Cu;
        // 0x3b3380: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3384u;
        goto label_3b3384;
    }
    ctx->pc = 0x3B337Cu;
    SET_GPR_U32(ctx, 31, 0x3B3384u);
    ctx->pc = 0x3B3380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B337Cu;
    // 0x3b3380: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4B30u, 0x3B337Cu, 0x3B3384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3384u;
label_3b3384:
    // 0x3b3384: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x3b3384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_3b3388:
    // 0x3b3388: 0xc0e9290  jal         func_3A4A40
label_3b338c:
    if (ctx->pc == 0x3B338Cu) {
        ctx->pc = 0x3B338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3388u;
        // 0x3b338c: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3390u;
        goto label_3b3390;
    }
    ctx->pc = 0x3B3388u;
    SET_GPR_U32(ctx, 31, 0x3B3390u);
    ctx->pc = 0x3B338Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3388u;
    // 0x3b338c: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A40u, 0x3B3388u, 0x3B3390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3390u;
label_3b3390:
    // 0x3b3390: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x3b3390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_3b3394:
    // 0x3b3394: 0xc0e9290  jal         func_3A4A40
label_3b3398:
    if (ctx->pc == 0x3B3398u) {
        ctx->pc = 0x3B3398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3394u;
        // 0x3b3398: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B339Cu;
        goto label_3b339c;
    }
    ctx->pc = 0x3B3394u;
    SET_GPR_U32(ctx, 31, 0x3B339Cu);
    ctx->pc = 0x3B3398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3394u;
    // 0x3b3398: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A40u, 0x3B3394u, 0x3B339Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B339Cu;
label_3b339c:
    // 0x3b339c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b339cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b33a0:
    // 0x3b33a0: 0xc0e8dee  jal         func_3A37B8
label_3b33a4:
    if (ctx->pc == 0x3B33A4u) {
        ctx->pc = 0x3B33A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B33A0u;
        // 0x3b33a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B33A8u;
        goto label_3b33a8;
    }
    ctx->pc = 0x3B33A0u;
    SET_GPR_U32(ctx, 31, 0x3B33A8u);
    ctx->pc = 0x3B33A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B33A0u;
    // 0x3b33a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3B33A0u, 0x3B33A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B33A8u;
label_3b33a8:
    // 0x3b33a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b33a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b33ac:
    // 0x3b33ac: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x3b33acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_3b33b0:
    // 0x3b33b0: 0xc0e92a6  jal         func_3A4A98
label_3b33b4:
    if (ctx->pc == 0x3B33B4u) {
        ctx->pc = 0x3B33B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B33B0u;
        // 0x3b33b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B33B8u;
        goto label_3b33b8;
    }
    ctx->pc = 0x3B33B0u;
    SET_GPR_U32(ctx, 31, 0x3B33B8u);
    ctx->pc = 0x3B33B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B33B0u;
    // 0x3b33b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A98u, 0x3B33B0u, 0x3B33B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B33B8u;
label_3b33b8:
    // 0x3b33b8: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x3b33b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_3b33bc:
    // 0x3b33bc: 0xc0e92a6  jal         func_3A4A98
label_3b33c0:
    if (ctx->pc == 0x3B33C0u) {
        ctx->pc = 0x3B33C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B33BCu;
        // 0x3b33c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B33C4u;
        goto label_3b33c4;
    }
    ctx->pc = 0x3B33BCu;
    SET_GPR_U32(ctx, 31, 0x3B33C4u);
    ctx->pc = 0x3B33C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B33BCu;
    // 0x3b33c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4A98u, 0x3B33BCu, 0x3B33C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B33C4u;
label_3b33c4:
    // 0x3b33c4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3b33c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b33c8:
    // 0x3b33c8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3b33c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b33cc:
    // 0x3b33cc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3b33ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b33d0:
    // 0x3b33d0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3b33d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b33d4:
    // 0x3b33d4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3b33d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b33d8:
    // 0x3b33d8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3b33d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b33dc:
    // 0x3b33dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b33dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b33e0:
    // 0x3b33e0: 0x3e00008  jr          $ra
label_3b33e4:
    if (ctx->pc == 0x3B33E4u) {
        ctx->pc = 0x3B33E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B33E0u;
        // 0x3b33e4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B33E8u;
        goto label_fallthrough_0x3b33e0;
    }
    ctx->pc = 0x3B33E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B33E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B33E0u;
        // 0x3b33e4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B33E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b33e0:
    ctx->pc = 0x3B33E8u;
}
