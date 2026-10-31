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

// Function: sub_003E92E0
// Address: 0x3e92e0 - 0x3e93d0
void sub_003E92E0_0x3e92e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E92E0_0x3e92e0");
#endif

    switch (ctx->pc) {
        case 0x3e92e0u: goto label_3e92e0;
        case 0x3e92e4u: goto label_3e92e4;
        case 0x3e92e8u: goto label_3e92e8;
        case 0x3e92ecu: goto label_3e92ec;
        case 0x3e92f0u: goto label_3e92f0;
        case 0x3e92f4u: goto label_3e92f4;
        case 0x3e92f8u: goto label_3e92f8;
        case 0x3e92fcu: goto label_3e92fc;
        case 0x3e9300u: goto label_3e9300;
        case 0x3e9304u: goto label_3e9304;
        case 0x3e9308u: goto label_3e9308;
        case 0x3e930cu: goto label_3e930c;
        case 0x3e9310u: goto label_3e9310;
        case 0x3e9314u: goto label_3e9314;
        case 0x3e9318u: goto label_3e9318;
        case 0x3e931cu: goto label_3e931c;
        case 0x3e9320u: goto label_3e9320;
        case 0x3e9324u: goto label_3e9324;
        case 0x3e9328u: goto label_3e9328;
        case 0x3e932cu: goto label_3e932c;
        case 0x3e9330u: goto label_3e9330;
        case 0x3e9334u: goto label_3e9334;
        case 0x3e9338u: goto label_3e9338;
        case 0x3e933cu: goto label_3e933c;
        case 0x3e9340u: goto label_3e9340;
        case 0x3e9344u: goto label_3e9344;
        case 0x3e9348u: goto label_3e9348;
        case 0x3e934cu: goto label_3e934c;
        case 0x3e9350u: goto label_3e9350;
        case 0x3e9354u: goto label_3e9354;
        case 0x3e9358u: goto label_3e9358;
        case 0x3e935cu: goto label_3e935c;
        case 0x3e9360u: goto label_3e9360;
        case 0x3e9364u: goto label_3e9364;
        case 0x3e9368u: goto label_3e9368;
        case 0x3e936cu: goto label_3e936c;
        case 0x3e9370u: goto label_3e9370;
        case 0x3e9374u: goto label_3e9374;
        case 0x3e9378u: goto label_3e9378;
        case 0x3e937cu: goto label_3e937c;
        case 0x3e9380u: goto label_3e9380;
        case 0x3e9384u: goto label_3e9384;
        case 0x3e9388u: goto label_3e9388;
        case 0x3e938cu: goto label_3e938c;
        case 0x3e9390u: goto label_3e9390;
        case 0x3e9394u: goto label_3e9394;
        case 0x3e9398u: goto label_3e9398;
        case 0x3e939cu: goto label_3e939c;
        case 0x3e93a0u: goto label_3e93a0;
        case 0x3e93a4u: goto label_3e93a4;
        case 0x3e93a8u: goto label_3e93a8;
        case 0x3e93acu: goto label_3e93ac;
        case 0x3e93b0u: goto label_3e93b0;
        case 0x3e93b4u: goto label_3e93b4;
        case 0x3e93b8u: goto label_3e93b8;
        case 0x3e93bcu: goto label_3e93bc;
        case 0x3e93c0u: goto label_3e93c0;
        case 0x3e93c4u: goto label_3e93c4;
        case 0x3e93c8u: goto label_3e93c8;
        case 0x3e93ccu: goto label_3e93cc;
        default: break;
    }

    ctx->pc = 0x3e92e0u;

label_3e92e0:
    // 0x3e92e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e92e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3e92e4:
    // 0x3e92e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e92e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3e92e8:
    // 0x3e92e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e92e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e92ec:
    // 0x3e92ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e92ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e92f0:
    // 0x3e92f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e92f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e92f4:
    // 0x3e92f4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e92f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e92f8:
    // 0x3e92f8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e92f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e92fc:
    // 0x3e92fc: 0x40f809  jalr        $v0
label_3e9300:
    if (ctx->pc == 0x3E9300u) {
        ctx->pc = 0x3E9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E92FCu;
        // 0x3e9300: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9304u;
        goto label_3e9304;
    }
    ctx->pc = 0x3E92FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E9304u);
        ctx->pc = 0x3E9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E92FCu;
        // 0x3e9300: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E92FCu, 0x3E9304u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E9304u;
label_3e9304:
    // 0x3e9304: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e9304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e9308:
    // 0x3e9308: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e9308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e930c:
    // 0x3e930c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3e930cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e9310:
    // 0x3e9310: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
label_3e9314:
    if (ctx->pc == 0x3E9314u) {
        ctx->pc = 0x3E9318u;
        goto label_3e9318;
    }
    ctx->pc = 0x3E9310u;
    {
        const bool branch_taken_0x3e9310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e9310) {
            ctx->pc = 0x3E934Cu;
            goto label_3e934c;
        }
    }
    ctx->pc = 0x3E9318u;
label_3e9318:
    // 0x3e9318: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3e9318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_3e931c:
    // 0x3e931c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x3e931cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3e9320:
    // 0x3e9320: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e9320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e9324:
    // 0x3e9324: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_3e9328:
    if (ctx->pc == 0x3E9328u) {
        ctx->pc = 0x3E9328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9324u;
        // 0x3e9328: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E932Cu;
        goto label_3e932c;
    }
    ctx->pc = 0x3E9324u;
    {
        const bool branch_taken_0x3e9324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E9328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9324u;
        // 0x3e9328: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9324) {
            ctx->pc = 0x3E9338u;
            goto label_3e9338;
        }
    }
    ctx->pc = 0x3E932Cu;
label_3e932c:
    // 0x3e932c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3e932cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3e9330:
    // 0x3e9330: 0x10000004  b           . + 4 + (0x4 << 2)
label_3e9334:
    if (ctx->pc == 0x3E9334u) {
        ctx->pc = 0x3E9334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9330u;
        // 0x3e9334: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9338u;
        goto label_3e9338;
    }
    ctx->pc = 0x3E9330u;
    {
        const bool branch_taken_0x3e9330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9330u;
        // 0x3e9334: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9330) {
            ctx->pc = 0x3E9344u;
            goto label_3e9344;
        }
    }
    ctx->pc = 0x3E9338u;
label_3e9338:
    // 0x3e9338: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3e9338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3e933c:
    // 0x3e933c: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x3e933cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_3e9340:
    // 0x3e9340: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3e9340u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e9344:
    // 0x3e9344: 0xae0200cc  sw          $v0, 0xCC($s0)
    ctx->pc = 0x3e9344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
label_3e9348:
    // 0x3e9348: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3e9348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e934c:
    // 0x3e934c: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_3e9350:
    if (ctx->pc == 0x3E9350u) {
        ctx->pc = 0x3E9350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E934Cu;
        // 0x3e9350: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9354u;
        goto label_3e9354;
    }
    ctx->pc = 0x3E934Cu;
    {
        const bool branch_taken_0x3e934c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e934c) {
            ctx->pc = 0x3E9350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E934Cu;
            // 0x3e9350: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E93C0u;
            goto label_3e93c0;
        }
    }
    ctx->pc = 0x3E9354u;
label_3e9354:
    // 0x3e9354: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3e9354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3e9358:
    // 0x3e9358: 0x8c42deb8  lw          $v0, -0x2148($v0)
    ctx->pc = 0x3e9358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958776)));
label_3e935c:
    // 0x3e935c: 0x8c4301e8  lw          $v1, 0x1E8($v0)
    ctx->pc = 0x3e935cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 488)));
label_3e9360:
    // 0x3e9360: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_3e9364:
    if (ctx->pc == 0x3E9364u) {
        ctx->pc = 0x3E9368u;
        goto label_3e9368;
    }
    ctx->pc = 0x3E9360u;
    {
        const bool branch_taken_0x3e9360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e9360) {
            ctx->pc = 0x3E9384u;
            goto label_3e9384;
        }
    }
    ctx->pc = 0x3E9368u;
label_3e9368:
    // 0x3e9368: 0xc44101ec  lwc1        $f1, 0x1EC($v0)
    ctx->pc = 0x3e9368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e936c:
    // 0x3e936c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3e936cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e9370:
    // 0x3e9370: 0x0  nop
    ctx->pc = 0x3e9370u;
    // NOP
label_3e9374:
    // 0x3e9374: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3e9374u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e9378:
    // 0x3e9378: 0x0  nop
    ctx->pc = 0x3e9378u;
    // NOP
label_3e937c:
    // 0x3e937c: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_3e9380:
    if (ctx->pc == 0x3E9380u) {
        ctx->pc = 0x3E9380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E937Cu;
        // 0x3e9380: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9384u;
        goto label_3e9384;
    }
    ctx->pc = 0x3E937Cu;
    {
        const bool branch_taken_0x3e937c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e937c) {
            ctx->pc = 0x3E9380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E937Cu;
            // 0x3e9380: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E939Cu;
            goto label_3e939c;
        }
    }
    ctx->pc = 0x3E9384u;
label_3e9384:
    // 0x3e9384: 0x3c02e3f9  lui         $v0, 0xE3F9
    ctx->pc = 0x3e9384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58361 << 16));
label_3e9388:
    // 0x3e9388: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x3e9388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_3e938c:
    // 0x3e938c: 0x34422003  ori         $v0, $v0, 0x2003
    ctx->pc = 0x3e938cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8195);
label_3e9390:
    // 0x3e9390: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_3e9394:
    if (ctx->pc == 0x3E9394u) {
        ctx->pc = 0x3E9398u;
        goto label_3e9398;
    }
    ctx->pc = 0x3E9390u;
    {
        const bool branch_taken_0x3e9390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e9390) {
            ctx->pc = 0x3E93A4u;
            goto label_3e93a4;
        }
    }
    ctx->pc = 0x3E9398u;
label_3e9398:
    // 0x3e9398: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3e9398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3e939c:
    // 0x3e939c: 0x10000007  b           . + 4 + (0x7 << 2)
label_3e93a0:
    if (ctx->pc == 0x3E93A0u) {
        ctx->pc = 0x3E93A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E939Cu;
        // 0x3e93a0: 0xae0200cc  sw          $v0, 0xCC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E93A4u;
        goto label_3e93a4;
    }
    ctx->pc = 0x3E939Cu;
    {
        const bool branch_taken_0x3e939c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E93A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E939Cu;
        // 0x3e93a0: 0xae0200cc  sw          $v0, 0xCC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e939c) {
            ctx->pc = 0x3E93BCu;
            goto label_3e93bc;
        }
    }
    ctx->pc = 0x3E93A4u;
label_3e93a4:
    // 0x3e93a4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3e93a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3e93a8:
    // 0x3e93a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3e93a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3e93ac:
    // 0x3e93ac: 0x3463ff01  ori         $v1, $v1, 0xFF01
    ctx->pc = 0x3e93acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65281);
label_3e93b0:
    // 0x3e93b0: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3e93b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3e93b4:
    // 0x3e93b4: 0xae0200cc  sw          $v0, 0xCC($s0)
    ctx->pc = 0x3e93b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
label_3e93b8:
    // 0x3e93b8: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x3e93b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_3e93bc:
    // 0x3e93bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3e93bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e93c0:
    // 0x3e93c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e93c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e93c4:
    // 0x3e93c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e93c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e93c8:
    // 0x3e93c8: 0x3e00008  jr          $ra
label_3e93cc:
    if (ctx->pc == 0x3E93CCu) {
        ctx->pc = 0x3E93CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E93C8u;
        // 0x3e93cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E93D0u;
        goto label_fallthrough_0x3e93c8;
    }
    ctx->pc = 0x3E93C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E93CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E93C8u;
        // 0x3e93cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E93C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e93c8:
    ctx->pc = 0x3E93D0u;
}
