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

// Function: sub_001DD2E0
// Address: 0x1dd2e0 - 0x1dd3d8
void sub_001DD2E0_0x1dd2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD2E0_0x1dd2e0");
#endif

    switch (ctx->pc) {
        case 0x1dd2e0u: goto label_1dd2e0;
        case 0x1dd2e4u: goto label_1dd2e4;
        case 0x1dd2e8u: goto label_1dd2e8;
        case 0x1dd2ecu: goto label_1dd2ec;
        case 0x1dd2f0u: goto label_1dd2f0;
        case 0x1dd2f4u: goto label_1dd2f4;
        case 0x1dd2f8u: goto label_1dd2f8;
        case 0x1dd2fcu: goto label_1dd2fc;
        case 0x1dd300u: goto label_1dd300;
        case 0x1dd304u: goto label_1dd304;
        case 0x1dd308u: goto label_1dd308;
        case 0x1dd30cu: goto label_1dd30c;
        case 0x1dd310u: goto label_1dd310;
        case 0x1dd314u: goto label_1dd314;
        case 0x1dd318u: goto label_1dd318;
        case 0x1dd31cu: goto label_1dd31c;
        case 0x1dd320u: goto label_1dd320;
        case 0x1dd324u: goto label_1dd324;
        case 0x1dd328u: goto label_1dd328;
        case 0x1dd32cu: goto label_1dd32c;
        case 0x1dd330u: goto label_1dd330;
        case 0x1dd334u: goto label_1dd334;
        case 0x1dd338u: goto label_1dd338;
        case 0x1dd33cu: goto label_1dd33c;
        case 0x1dd340u: goto label_1dd340;
        case 0x1dd344u: goto label_1dd344;
        case 0x1dd348u: goto label_1dd348;
        case 0x1dd34cu: goto label_1dd34c;
        case 0x1dd350u: goto label_1dd350;
        case 0x1dd354u: goto label_1dd354;
        case 0x1dd358u: goto label_1dd358;
        case 0x1dd35cu: goto label_1dd35c;
        case 0x1dd360u: goto label_1dd360;
        case 0x1dd364u: goto label_1dd364;
        case 0x1dd368u: goto label_1dd368;
        case 0x1dd36cu: goto label_1dd36c;
        case 0x1dd370u: goto label_1dd370;
        case 0x1dd374u: goto label_1dd374;
        case 0x1dd378u: goto label_1dd378;
        case 0x1dd37cu: goto label_1dd37c;
        case 0x1dd380u: goto label_1dd380;
        case 0x1dd384u: goto label_1dd384;
        case 0x1dd388u: goto label_1dd388;
        case 0x1dd38cu: goto label_1dd38c;
        case 0x1dd390u: goto label_1dd390;
        case 0x1dd394u: goto label_1dd394;
        case 0x1dd398u: goto label_1dd398;
        case 0x1dd39cu: goto label_1dd39c;
        case 0x1dd3a0u: goto label_1dd3a0;
        case 0x1dd3a4u: goto label_1dd3a4;
        case 0x1dd3a8u: goto label_1dd3a8;
        case 0x1dd3acu: goto label_1dd3ac;
        case 0x1dd3b0u: goto label_1dd3b0;
        case 0x1dd3b4u: goto label_1dd3b4;
        case 0x1dd3b8u: goto label_1dd3b8;
        case 0x1dd3bcu: goto label_1dd3bc;
        case 0x1dd3c0u: goto label_1dd3c0;
        case 0x1dd3c4u: goto label_1dd3c4;
        case 0x1dd3c8u: goto label_1dd3c8;
        case 0x1dd3ccu: goto label_1dd3cc;
        case 0x1dd3d0u: goto label_1dd3d0;
        case 0x1dd3d4u: goto label_1dd3d4;
        default: break;
    }

    ctx->pc = 0x1dd2e0u;

label_1dd2e0:
    // 0x1dd2e0: 0x24020360  addiu       $v0, $zero, 0x360
    ctx->pc = 0x1dd2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 864));
label_1dd2e4:
    // 0x1dd2e4: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1dd2e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1dd2e8:
    // 0x1dd2e8: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x1dd2e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1dd2ec:
    // 0x1dd2ec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1dd2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1dd2f0:
    // 0x1dd2f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1dd2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1dd2f4:
    // 0x1dd2f4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1dd2f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dd2f8:
    // 0x1dd2f8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1dd2f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1dd2fc:
    // 0x1dd2fc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1dd2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1dd300:
    // 0x1dd300: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dd300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1dd304:
    // 0x1dd304: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1dd304u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1dd308:
    // 0x1dd308: 0xa38021  addu        $s0, $a1, $v1
    ctx->pc = 0x1dd308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1dd30c:
    // 0x1dd30c: 0x8e0220d0  lw          $v0, 0x20D0($s0)
    ctx->pc = 0x1dd30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8400)));
label_1dd310:
    // 0x1dd310: 0x24a520d0  addiu       $a1, $a1, 0x20D0
    ctx->pc = 0x1dd310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8400));
label_1dd314:
    // 0x1dd314: 0x658821  addu        $s1, $v1, $a1
    ctx->pc = 0x1dd314u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1dd318:
    // 0x1dd318: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x1dd318u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1dd31c:
    // 0x1dd31c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1dd31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1dd320:
    // 0x1dd320: 0x60f809  jalr        $v1
label_1dd324:
    if (ctx->pc == 0x1DD324u) {
        ctx->pc = 0x1DD324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD320u;
        // 0x1dd324: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD328u;
        goto label_1dd328;
    }
    ctx->pc = 0x1DD320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DD328u);
        ctx->pc = 0x1DD324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD320u;
        // 0x1dd324: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD320u, 0x1DD328u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD328u;
label_1dd328:
    // 0x1dd328: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1dd328u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dd32c:
    // 0x1dd32c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1dd32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1dd330:
    // 0x1dd330: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1dd330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dd334:
    // 0x1dd334: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1dd334u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd338:
    // 0x1dd338: 0x0  nop
    ctx->pc = 0x1dd338u;
    // NOP
label_1dd33c:
    // 0x1dd33c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_1dd340:
    if (ctx->pc == 0x1DD340u) {
        ctx->pc = 0x1DD340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD33Cu;
        // 0x1dd340: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD344u;
        goto label_1dd344;
    }
    ctx->pc = 0x1DD33Cu;
    {
        const bool branch_taken_0x1dd33c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD33Cu;
        // 0x1dd340: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd33c) {
            ctx->pc = 0x1DD380u;
            goto label_1dd380;
        }
    }
    ctx->pc = 0x1DD344u;
label_1dd344:
    // 0x1dd344: 0xc440ee20  lwc1        $f0, -0x11E0($v0)
    ctx->pc = 0x1dd344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd348:
    // 0x1dd348: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1dd348u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1dd34c:
    // 0x1dd34c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1dd34cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd350:
    // 0x1dd350: 0x0  nop
    ctx->pc = 0x1dd350u;
    // NOP
label_1dd354:
    // 0x1dd354: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1dd358:
    if (ctx->pc == 0x1DD358u) {
        ctx->pc = 0x1DD358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD354u;
        // 0x1dd358: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD35Cu;
        goto label_1dd35c;
    }
    ctx->pc = 0x1DD354u;
    {
        const bool branch_taken_0x1dd354 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD354u;
        // 0x1dd358: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd354) {
            ctx->pc = 0x1DD360u;
            goto label_1dd360;
        }
    }
    ctx->pc = 0x1DD35Cu;
label_1dd35c:
    // 0x1dd35c: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x1dd35cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1dd360:
    // 0x1dd360: 0x8e0220d0  lw          $v0, 0x20D0($s0)
    ctx->pc = 0x1dd360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8400)));
label_1dd364:
    // 0x1dd364: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dd364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1dd368:
    // 0x1dd368: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1dd368u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_1dd36c:
    // 0x1dd36c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1dd36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1dd370:
    // 0x1dd370: 0x60f809  jalr        $v1
label_1dd374:
    if (ctx->pc == 0x1DD374u) {
        ctx->pc = 0x1DD374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD370u;
        // 0x1dd374: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD378u;
        goto label_1dd378;
    }
    ctx->pc = 0x1DD370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DD378u);
        ctx->pc = 0x1DD374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD370u;
        // 0x1dd374: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD370u, 0x1DD378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD378u;
label_1dd378:
    // 0x1dd378: 0x10000012  b           . + 4 + (0x12 << 2)
label_1dd37c:
    if (ctx->pc == 0x1DD37Cu) {
        ctx->pc = 0x1DD37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD378u;
        // 0x1dd37c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD380u;
        goto label_1dd380;
    }
    ctx->pc = 0x1DD378u;
    {
        const bool branch_taken_0x1dd378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD378u;
        // 0x1dd37c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd378) {
            ctx->pc = 0x1DD3C4u;
            goto label_1dd3c4;
        }
    }
    ctx->pc = 0x1DD380u;
label_1dd380:
    // 0x1dd380: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x1dd380u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd384:
    // 0x1dd384: 0x0  nop
    ctx->pc = 0x1dd384u;
    // NOP
label_1dd388:
    // 0x1dd388: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_1dd38c:
    if (ctx->pc == 0x1DD38Cu) {
        ctx->pc = 0x1DD38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD388u;
        // 0x1dd38c: 0xc440ee20  lwc1        $f0, -0x11E0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD390u;
        goto label_1dd390;
    }
    ctx->pc = 0x1DD388u;
    {
        const bool branch_taken_0x1dd388 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD388u;
        // 0x1dd38c: 0xc440ee20  lwc1        $f0, -0x11E0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd388) {
            ctx->pc = 0x1DD3C0u;
            goto label_1dd3c0;
        }
    }
    ctx->pc = 0x1DD390u;
label_1dd390:
    // 0x1dd390: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1dd390u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1dd394:
    // 0x1dd394: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1dd394u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd398:
    // 0x1dd398: 0x0  nop
    ctx->pc = 0x1dd398u;
    // NOP
label_1dd39c:
    // 0x1dd39c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1dd3a0:
    if (ctx->pc == 0x1DD3A0u) {
        ctx->pc = 0x1DD3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD39Cu;
        // 0x1dd3a0: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD3A4u;
        goto label_1dd3a4;
    }
    ctx->pc = 0x1DD39Cu;
    {
        const bool branch_taken_0x1dd39c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD39Cu;
        // 0x1dd3a0: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd39c) {
            ctx->pc = 0x1DD3A8u;
            goto label_1dd3a8;
        }
    }
    ctx->pc = 0x1DD3A4u;
label_1dd3a4:
    // 0x1dd3a4: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x1dd3a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1dd3a8:
    // 0x1dd3a8: 0x8e0220d0  lw          $v0, 0x20D0($s0)
    ctx->pc = 0x1dd3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8400)));
label_1dd3ac:
    // 0x1dd3ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dd3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1dd3b0:
    // 0x1dd3b0: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1dd3b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_1dd3b4:
    // 0x1dd3b4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1dd3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1dd3b8:
    // 0x1dd3b8: 0x60f809  jalr        $v1
label_1dd3bc:
    if (ctx->pc == 0x1DD3BCu) {
        ctx->pc = 0x1DD3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3B8u;
        // 0x1dd3bc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD3C0u;
        goto label_1dd3c0;
    }
    ctx->pc = 0x1DD3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DD3C0u);
        ctx->pc = 0x1DD3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3B8u;
        // 0x1dd3bc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD3B8u, 0x1DD3C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD3C0u;
label_1dd3c0:
    // 0x1dd3c0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1dd3c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1dd3c4:
    // 0x1dd3c4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1dd3c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dd3c8:
    // 0x1dd3c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dd3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1dd3cc:
    // 0x1dd3cc: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1dd3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1dd3d0:
    // 0x1dd3d0: 0x3e00008  jr          $ra
label_1dd3d4:
    if (ctx->pc == 0x1DD3D4u) {
        ctx->pc = 0x1DD3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3D0u;
        // 0x1dd3d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD3D8u;
        goto label_fallthrough_0x1dd3d0;
    }
    ctx->pc = 0x1DD3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3D0u;
        // 0x1dd3d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dd3d0:
    ctx->pc = 0x1DD3D8u;
}
