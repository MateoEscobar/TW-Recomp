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

// Function: sub_001E32A0
// Address: 0x1e32a0 - 0x1e33c8
void sub_001E32A0_0x1e32a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E32A0_0x1e32a0");
#endif

    switch (ctx->pc) {
        case 0x1e32a0u: goto label_1e32a0;
        case 0x1e32a4u: goto label_1e32a4;
        case 0x1e32a8u: goto label_1e32a8;
        case 0x1e32acu: goto label_1e32ac;
        case 0x1e32b0u: goto label_1e32b0;
        case 0x1e32b4u: goto label_1e32b4;
        case 0x1e32b8u: goto label_1e32b8;
        case 0x1e32bcu: goto label_1e32bc;
        case 0x1e32c0u: goto label_1e32c0;
        case 0x1e32c4u: goto label_1e32c4;
        case 0x1e32c8u: goto label_1e32c8;
        case 0x1e32ccu: goto label_1e32cc;
        case 0x1e32d0u: goto label_1e32d0;
        case 0x1e32d4u: goto label_1e32d4;
        case 0x1e32d8u: goto label_1e32d8;
        case 0x1e32dcu: goto label_1e32dc;
        case 0x1e32e0u: goto label_1e32e0;
        case 0x1e32e4u: goto label_1e32e4;
        case 0x1e32e8u: goto label_1e32e8;
        case 0x1e32ecu: goto label_1e32ec;
        case 0x1e32f0u: goto label_1e32f0;
        case 0x1e32f4u: goto label_1e32f4;
        case 0x1e32f8u: goto label_1e32f8;
        case 0x1e32fcu: goto label_1e32fc;
        case 0x1e3300u: goto label_1e3300;
        case 0x1e3304u: goto label_1e3304;
        case 0x1e3308u: goto label_1e3308;
        case 0x1e330cu: goto label_1e330c;
        case 0x1e3310u: goto label_1e3310;
        case 0x1e3314u: goto label_1e3314;
        case 0x1e3318u: goto label_1e3318;
        case 0x1e331cu: goto label_1e331c;
        case 0x1e3320u: goto label_1e3320;
        case 0x1e3324u: goto label_1e3324;
        case 0x1e3328u: goto label_1e3328;
        case 0x1e332cu: goto label_1e332c;
        case 0x1e3330u: goto label_1e3330;
        case 0x1e3334u: goto label_1e3334;
        case 0x1e3338u: goto label_1e3338;
        case 0x1e333cu: goto label_1e333c;
        case 0x1e3340u: goto label_1e3340;
        case 0x1e3344u: goto label_1e3344;
        case 0x1e3348u: goto label_1e3348;
        case 0x1e334cu: goto label_1e334c;
        case 0x1e3350u: goto label_1e3350;
        case 0x1e3354u: goto label_1e3354;
        case 0x1e3358u: goto label_1e3358;
        case 0x1e335cu: goto label_1e335c;
        case 0x1e3360u: goto label_1e3360;
        case 0x1e3364u: goto label_1e3364;
        case 0x1e3368u: goto label_1e3368;
        case 0x1e336cu: goto label_1e336c;
        case 0x1e3370u: goto label_1e3370;
        case 0x1e3374u: goto label_1e3374;
        case 0x1e3378u: goto label_1e3378;
        case 0x1e337cu: goto label_1e337c;
        case 0x1e3380u: goto label_1e3380;
        case 0x1e3384u: goto label_1e3384;
        case 0x1e3388u: goto label_1e3388;
        case 0x1e338cu: goto label_1e338c;
        case 0x1e3390u: goto label_1e3390;
        case 0x1e3394u: goto label_1e3394;
        case 0x1e3398u: goto label_1e3398;
        case 0x1e339cu: goto label_1e339c;
        case 0x1e33a0u: goto label_1e33a0;
        case 0x1e33a4u: goto label_1e33a4;
        case 0x1e33a8u: goto label_1e33a8;
        case 0x1e33acu: goto label_1e33ac;
        case 0x1e33b0u: goto label_1e33b0;
        case 0x1e33b4u: goto label_1e33b4;
        case 0x1e33b8u: goto label_1e33b8;
        case 0x1e33bcu: goto label_1e33bc;
        case 0x1e33c0u: goto label_1e33c0;
        case 0x1e33c4u: goto label_1e33c4;
        default: break;
    }

    ctx->pc = 0x1e32a0u;

label_1e32a0:
    // 0x1e32a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e32a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1e32a4:
    // 0x1e32a4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1e32a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1e32a8:
    // 0x1e32a8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1e32a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1e32ac:
    // 0x1e32ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e32acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e32b0:
    // 0x1e32b0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1e32b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1e32b4:
    // 0x1e32b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e32b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e32b8:
    // 0x1e32b8: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1e32b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1e32bc:
    // 0x1e32bc: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1e32bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1e32c0:
    // 0x1e32c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e32c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e32c4:
    // 0x1e32c4: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1e32c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1e32c8:
    // 0x1e32c8: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1e32c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1e32cc:
    // 0x1e32cc: 0x40f809  jalr        $v0
label_1e32d0:
    if (ctx->pc == 0x1E32D0u) {
        ctx->pc = 0x1E32D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32CCu;
        // 0x1e32d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E32D4u;
        goto label_1e32d4;
    }
    ctx->pc = 0x1E32CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E32D4u);
        ctx->pc = 0x1E32D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32CCu;
        // 0x1e32d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E32CCu, 0x1E32D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E32D4u;
label_1e32d4:
    // 0x1e32d4: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_1e32d8:
    if (ctx->pc == 0x1E32D8u) {
        ctx->pc = 0x1E32D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32D4u;
        // 0x1e32d8: 0x26110070  addiu       $s1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E32DCu;
        goto label_1e32dc;
    }
    ctx->pc = 0x1E32D4u;
    {
        const bool branch_taken_0x1e32d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E32D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32D4u;
        // 0x1e32d8: 0x26110070  addiu       $s1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e32d4) {
            ctx->pc = 0x1E33A8u;
            goto label_1e33a8;
        }
    }
    ctx->pc = 0x1E32DCu;
label_1e32dc:
    // 0x1e32dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e32dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e32e0:
    // 0x1e32e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e32e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e32e4:
    // 0x1e32e4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1e32e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1e32e8:
    // 0x1e32e8: 0x84650070  lh          $a1, 0x70($v1)
    ctx->pc = 0x1e32e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_1e32ec:
    // 0x1e32ec: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1e32ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1e32f0:
    // 0x1e32f0: 0x40f809  jalr        $v0
label_1e32f4:
    if (ctx->pc == 0x1E32F4u) {
        ctx->pc = 0x1E32F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32F0u;
        // 0x1e32f4: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E32F8u;
        goto label_1e32f8;
    }
    ctx->pc = 0x1E32F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E32F8u);
        ctx->pc = 0x1E32F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32F0u;
        // 0x1e32f4: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E32F0u, 0x1E32F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E32F8u;
label_1e32f8:
    // 0x1e32f8: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x1e32f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_1e32fc:
    // 0x1e32fc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1e32fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1e3300:
    // 0x1e3300: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1e3300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3304:
    // 0x1e3304: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e3304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3308:
    // 0x1e3308: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e3308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1e330c:
    // 0x1e330c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e330cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3310:
    // 0x1e3310: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e3310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e3314:
    // 0x1e3314: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1e3314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1e3318:
    // 0x1e3318: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1e3318u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1e331c:
    // 0x1e331c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1e331cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e3320:
    // 0x1e3320: 0xc6020060  lwc1        $f2, 0x60($s0)
    ctx->pc = 0x1e3320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e3324:
    // 0x1e3324: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e3324u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1e3328:
    // 0x1e3328: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e3328u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1e332c:
    // 0x1e332c: 0xc06e4dc  jal         func_1B9370
label_1e3330:
    if (ctx->pc == 0x1E3330u) {
        ctx->pc = 0x1E3330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E332Cu;
        // 0x1e3330: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3334u;
        goto label_1e3334;
    }
    ctx->pc = 0x1E332Cu;
    SET_GPR_U32(ctx, 31, 0x1E3334u);
    ctx->pc = 0x1E3330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E332Cu;
    // 0x1e3330: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x1E332Cu, 0x1E3334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3334u;
label_1e3334:
    // 0x1e3334: 0xc6140038  lwc1        $f20, 0x38($s0)
    ctx->pc = 0x1e3334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e3338:
    // 0x1e3338: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e3338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e333c:
    // 0x1e333c: 0xc06e538  jal         func_1B94E0
label_1e3340:
    if (ctx->pc == 0x1E3340u) {
        ctx->pc = 0x1E3340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E333Cu;
        // 0x1e3340: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3344u;
        goto label_1e3344;
    }
    ctx->pc = 0x1E333Cu;
    SET_GPR_U32(ctx, 31, 0x1E3344u);
    ctx->pc = 0x1E3340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E333Cu;
    // 0x1e3340: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B94E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B94E0u, 0x1E333Cu, 0x1E3344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3344u;
label_1e3344:
    // 0x1e3344: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1e3344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e3348:
    // 0x1e3348: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1e3348u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1e334c:
    // 0x1e334c: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x1e334cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e3350:
    // 0x1e3350: 0x0  nop
    ctx->pc = 0x1e3350u;
    // NOP
label_1e3354:
    // 0x1e3354: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1e3358:
    if (ctx->pc == 0x1E3358u) {
        ctx->pc = 0x1E3358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3354u;
        // 0x1e3358: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E335Cu;
        goto label_1e335c;
    }
    ctx->pc = 0x1E3354u;
    {
        const bool branch_taken_0x1e3354 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e3354) {
            ctx->pc = 0x1E3358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E3354u;
            // 0x1e3358: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E335Cu;
            goto label_1e335c;
        }
    }
    ctx->pc = 0x1E335Cu;
label_1e335c:
    // 0x1e335c: 0xe6340184  swc1        $f20, 0x184($s1)
    ctx->pc = 0x1e335cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 388), bits); }
label_1e3360:
    // 0x1e3360: 0xc06e552  jal         func_1B9548
label_1e3364:
    if (ctx->pc == 0x1E3364u) {
        ctx->pc = 0x1E3364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3360u;
        // 0x1e3364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3368u;
        goto label_1e3368;
    }
    ctx->pc = 0x1E3360u;
    SET_GPR_U32(ctx, 31, 0x1E3368u);
    ctx->pc = 0x1E3364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3360u;
    // 0x1e3364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9548u, 0x1E3360u, 0x1E3368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3368u;
label_1e3368:
    // 0x1e3368: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e3368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e336c:
    // 0x1e336c: 0x84430040  lh          $v1, 0x40($v0)
    ctx->pc = 0x1e336cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1e3370:
    // 0x1e3370: 0x24520040  addiu       $s2, $v0, 0x40
    ctx->pc = 0x1e3370u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1e3374:
    // 0x1e3374: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1e3374u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1e3378:
    // 0x1e3378: 0x8c4500b4  lw          $a1, 0xB4($v0)
    ctx->pc = 0x1e3378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1e337c:
    // 0x1e337c: 0x2038821  addu        $s1, $s0, $v1
    ctx->pc = 0x1e337cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1e3380:
    // 0x1e3380: 0xa0f809  jalr        $a1
label_1e3384:
    if (ctx->pc == 0x1E3384u) {
        ctx->pc = 0x1E3384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3380u;
        // 0x1e3384: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3388u;
        goto label_1e3388;
    }
    ctx->pc = 0x1E3380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1E3388u);
        ctx->pc = 0x1E3384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3380u;
        // 0x1e3384: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3380u, 0x1E3388u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3388u;
label_1e3388:
    // 0x1e3388: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1e3388u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e338c:
    // 0x1e338c: 0x0  nop
    ctx->pc = 0x1e338cu;
    // NOP
label_1e3390:
    // 0x1e3390: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1e3394:
    if (ctx->pc == 0x1E3394u) {
        ctx->pc = 0x1E3394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3390u;
        // 0x1e3394: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3398u;
        goto label_1e3398;
    }
    ctx->pc = 0x1E3390u;
    {
        const bool branch_taken_0x1e3390 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E3394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3390u;
        // 0x1e3394: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3390) {
            ctx->pc = 0x1E339Cu;
            goto label_1e339c;
        }
    }
    ctx->pc = 0x1E3398u;
label_1e3398:
    // 0x1e3398: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e3398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e339c:
    // 0x1e339c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1e339cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1e33a0:
    // 0x1e33a0: 0x40f809  jalr        $v0
label_1e33a4:
    if (ctx->pc == 0x1E33A4u) {
        ctx->pc = 0x1E33A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33A0u;
        // 0x1e33a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E33A8u;
        goto label_1e33a8;
    }
    ctx->pc = 0x1E33A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E33A8u);
        ctx->pc = 0x1E33A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33A0u;
        // 0x1e33a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E33A0u, 0x1E33A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E33A8u;
label_1e33a8:
    // 0x1e33a8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1e33a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e33ac:
    // 0x1e33ac: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1e33acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e33b0:
    // 0x1e33b0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1e33b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e33b4:
    // 0x1e33b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e33b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e33b8:
    // 0x1e33b8: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1e33b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1e33bc:
    // 0x1e33bc: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1e33bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e33c0:
    // 0x1e33c0: 0x3e00008  jr          $ra
label_1e33c4:
    if (ctx->pc == 0x1E33C4u) {
        ctx->pc = 0x1E33C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33C0u;
        // 0x1e33c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E33C8u;
        goto label_fallthrough_0x1e33c0;
    }
    ctx->pc = 0x1E33C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E33C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33C0u;
        // 0x1e33c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E33C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e33c0:
    ctx->pc = 0x1E33C8u;
}
