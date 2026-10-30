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

// Function: sub_002E3318
// Address: 0x2e3318 - 0x2e33d0
void sub_002E3318_0x2e3318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3318_0x2e3318");
#endif

    switch (ctx->pc) {
        case 0x2e3380u: goto label_2e3380;
        case 0x2e33acu: goto label_2e33ac;
        case 0x2e33b8u: goto label_2e33b8;
        default: break;
    }

    ctx->pc = 0x2e3318u;

    // 0x2e3318: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e3318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e331c: 0x3c013ff5  lui         $at, 0x3FF5
    ctx->pc = 0x2e331cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16373 << 16));
    // 0x2e3320: 0x3421be0c  ori         $at, $at, 0xBE0C
    ctx->pc = 0x2e3320u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48652);
    // 0x2e3324: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e3324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3328: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2e3328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2e332c: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x2e332cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e3330: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e3330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e3334: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e3334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3338: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e333c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e333cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e3340: 0xe440012c  swc1        $f0, 0x12C($v0)
    ctx->pc = 0x2e3340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
    // 0x2e3344: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2e3344u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3348: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e3348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e334c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2e334cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2e3350: 0xac62021c  sw          $v0, 0x21C($v1)
    ctx->pc = 0x2e3350u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 2));
    // 0x2e3354: 0x92040040  lbu         $a0, 0x40($s0)
    ctx->pc = 0x2e3354u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2e3358: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e3358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e335c: 0xa0440265  sb          $a0, 0x265($v0)
    ctx->pc = 0x2e335cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e3360: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e3360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e3364: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x2e3364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x2e3368: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e3368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2e336c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2e336cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2e3370: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x2e3370u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x2e3374: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2e3374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e3378: 0xc05959e  jal         func_165678
    ctx->pc = 0x2E3378u;
    SET_GPR_U32(ctx, 31, 0x2E3380u);
    ctx->pc = 0x2E337Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3378u;
    // 0x2e337c: 0x8ca4020c  lw          $a0, 0x20C($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2E3378u, 0x2E3380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3380u;
label_2e3380:
    // 0x2e3380: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2E3380u;
    {
        const bool branch_taken_0x2e3380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3380) {
            ctx->pc = 0x2E3384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3380u;
            // 0x2e3384: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E33BCu;
            goto label_2e33bc;
        }
    }
    ctx->pc = 0x2E3388u;
    // 0x2e3388: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x2e3388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e338c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e338cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3390: 0x0  nop
    ctx->pc = 0x2e3390u;
    // NOP
    // 0x2e3394: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e3394u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e3398: 0x0  nop
    ctx->pc = 0x2e3398u;
    // NOP
    // 0x2e339c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2E339Cu;
    {
        const bool branch_taken_0x2e339c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E33A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E339Cu;
        // 0x2e33a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e339c) {
            ctx->pc = 0x2E33B8u;
            goto label_2e33b8;
        }
    }
    ctx->pc = 0x2E33A4u;
    // 0x2e33a4: 0xc08750a  jal         func_21D428
    ctx->pc = 0x2E33A4u;
    SET_GPR_U32(ctx, 31, 0x2E33ACu);
    ctx->pc = 0x2E33A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E33A4u;
    // 0x2e33a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x2E33A4u, 0x2E33ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E33ACu;
label_2e33ac:
    // 0x2e33ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e33acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e33b0: 0xc0a580a  jal         func_296028
    ctx->pc = 0x2E33B0u;
    SET_GPR_U32(ctx, 31, 0x2E33B8u);
    ctx->pc = 0x2E33B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E33B0u;
    // 0x2e33b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296028u, 0x2E33B0u, 0x2E33B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E33B8u;
label_2e33b8:
    // 0x2e33b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2e33b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e33bc:
    // 0x2e33bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e33bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e33c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e33c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e33c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E33C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E33C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E33C4u;
        // 0x2e33c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E33C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E33CCu;
    // 0x2e33cc: 0x0  nop
    ctx->pc = 0x2e33ccu;
    // NOP
    ctx->pc = 0x2e33d0u;
}
