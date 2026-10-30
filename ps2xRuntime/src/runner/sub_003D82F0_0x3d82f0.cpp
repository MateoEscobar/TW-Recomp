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

// Function: sub_003D82F0
// Address: 0x3d82f0 - 0x3d83d0
void sub_003D82F0_0x3d82f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D82F0_0x3d82f0");
#endif

    switch (ctx->pc) {
        case 0x3d82f0u: goto label_3d82f0;
        case 0x3d82f4u: goto label_3d82f4;
        case 0x3d82f8u: goto label_3d82f8;
        case 0x3d82fcu: goto label_3d82fc;
        case 0x3d8300u: goto label_3d8300;
        case 0x3d8304u: goto label_3d8304;
        case 0x3d8308u: goto label_3d8308;
        case 0x3d830cu: goto label_3d830c;
        case 0x3d8310u: goto label_3d8310;
        case 0x3d8314u: goto label_3d8314;
        case 0x3d8318u: goto label_3d8318;
        case 0x3d831cu: goto label_3d831c;
        case 0x3d8320u: goto label_3d8320;
        case 0x3d8324u: goto label_3d8324;
        case 0x3d8328u: goto label_3d8328;
        case 0x3d832cu: goto label_3d832c;
        case 0x3d8330u: goto label_3d8330;
        case 0x3d8334u: goto label_3d8334;
        case 0x3d8338u: goto label_3d8338;
        case 0x3d833cu: goto label_3d833c;
        case 0x3d8340u: goto label_3d8340;
        case 0x3d8344u: goto label_3d8344;
        case 0x3d8348u: goto label_3d8348;
        case 0x3d834cu: goto label_3d834c;
        case 0x3d8350u: goto label_3d8350;
        case 0x3d8354u: goto label_3d8354;
        case 0x3d8358u: goto label_3d8358;
        case 0x3d835cu: goto label_3d835c;
        case 0x3d8360u: goto label_3d8360;
        case 0x3d8364u: goto label_3d8364;
        case 0x3d8368u: goto label_3d8368;
        case 0x3d836cu: goto label_3d836c;
        case 0x3d8370u: goto label_3d8370;
        case 0x3d8374u: goto label_3d8374;
        case 0x3d8378u: goto label_3d8378;
        case 0x3d837cu: goto label_3d837c;
        case 0x3d8380u: goto label_3d8380;
        case 0x3d8384u: goto label_3d8384;
        case 0x3d8388u: goto label_3d8388;
        case 0x3d838cu: goto label_3d838c;
        case 0x3d8390u: goto label_3d8390;
        case 0x3d8394u: goto label_3d8394;
        case 0x3d8398u: goto label_3d8398;
        case 0x3d839cu: goto label_3d839c;
        case 0x3d83a0u: goto label_3d83a0;
        case 0x3d83a4u: goto label_3d83a4;
        case 0x3d83a8u: goto label_3d83a8;
        case 0x3d83acu: goto label_3d83ac;
        case 0x3d83b0u: goto label_3d83b0;
        case 0x3d83b4u: goto label_3d83b4;
        case 0x3d83b8u: goto label_3d83b8;
        case 0x3d83bcu: goto label_3d83bc;
        case 0x3d83c0u: goto label_3d83c0;
        case 0x3d83c4u: goto label_3d83c4;
        case 0x3d83c8u: goto label_3d83c8;
        case 0x3d83ccu: goto label_3d83cc;
        default: break;
    }

    ctx->pc = 0x3d82f0u;

label_3d82f0:
    // 0x3d82f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3d82f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3d82f4:
    // 0x3d82f4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3d82f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3d82f8:
    // 0x3d82f8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3d82f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3d82fc:
    // 0x3d82fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d82fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d8300:
    // 0x3d8300: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3d8300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3d8304:
    // 0x3d8304: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d8304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d8308:
    // 0x3d8308: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d8308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3d830c:
    // 0x3d830c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d830cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d8310:
    // 0x3d8310: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d8310u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d8314:
    // 0x3d8314: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d8314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d8318:
    // 0x3d8318: 0x40f809  jalr        $v0
label_3d831c:
    if (ctx->pc == 0x3D831Cu) {
        ctx->pc = 0x3D831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8318u;
        // 0x3d831c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8320u;
        goto label_3d8320;
    }
    ctx->pc = 0x3D8318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D8320u);
        ctx->pc = 0x3D831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8318u;
        // 0x3d831c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8318u, 0x3D8320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D8320u;
label_3d8320:
    // 0x3d8320: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3d8320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d8324:
    // 0x3d8324: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d8324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d8328:
    // 0x3d8328: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3d8328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3d832c:
    // 0x3d832c: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x3d832cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_3d8330:
    // 0x3d8330: 0xc0e858c  jal         func_3A1630
label_3d8334:
    if (ctx->pc == 0x3D8334u) {
        ctx->pc = 0x3D8334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8330u;
        // 0x3d8334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8338u;
        goto label_3d8338;
    }
    ctx->pc = 0x3D8330u;
    SET_GPR_U32(ctx, 31, 0x3D8338u);
    ctx->pc = 0x3D8334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8330u;
    // 0x3d8334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D8330u, 0x3D8338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8338u;
label_3d8338:
    // 0x3d8338: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x3d8338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_3d833c:
    // 0x3d833c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d833cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d8340:
    // 0x3d8340: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d8340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d8344:
    // 0x3d8344: 0xc0ea14c  jal         func_3A8530
label_3d8348:
    if (ctx->pc == 0x3D8348u) {
        ctx->pc = 0x3D8348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8344u;
        // 0x3d8348: 0xe60000bc  swc1        $f0, 0xBC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D834Cu;
        goto label_3d834c;
    }
    ctx->pc = 0x3D8344u;
    SET_GPR_U32(ctx, 31, 0x3D834Cu);
    ctx->pc = 0x3D8348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8344u;
    // 0x3d8348: 0xe60000bc  swc1        $f0, 0xBC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D8344u, 0x3D834Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D834Cu;
label_3d834c:
    // 0x3d834c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d834cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d8350:
    // 0x3d8350: 0xc0ea12a  jal         func_3A84A8
label_3d8354:
    if (ctx->pc == 0x3D8354u) {
        ctx->pc = 0x3D8354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8350u;
        // 0x3d8354: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8358u;
        goto label_3d8358;
    }
    ctx->pc = 0x3D8350u;
    SET_GPR_U32(ctx, 31, 0x3D8358u);
    ctx->pc = 0x3D8354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8350u;
    // 0x3d8354: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D8350u, 0x3D8358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8358u;
label_3d8358:
    // 0x3d8358: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d8358u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d835c:
    // 0x3d835c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d835cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d8360:
    // 0x3d8360: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d8360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d8364:
    // 0x3d8364: 0xc0ea12a  jal         func_3A84A8
label_3d8368:
    if (ctx->pc == 0x3D8368u) {
        ctx->pc = 0x3D8368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8364u;
        // 0x3d8368: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D836Cu;
        goto label_3d836c;
    }
    ctx->pc = 0x3D8364u;
    SET_GPR_U32(ctx, 31, 0x3D836Cu);
    ctx->pc = 0x3D8368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8364u;
    // 0x3d8368: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D8364u, 0x3D836Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D836Cu;
label_3d836c:
    // 0x3d836c: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3d836cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3d8370:
    // 0x3d8370: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d8370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d8374:
    // 0x3d8374: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3d8374u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d8378:
    // 0x3d8378: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3d8378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3d837c:
    // 0x3d837c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x3d837cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_3d8380:
    // 0x3d8380: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3d8380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3d8384:
    // 0x3d8384: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3d8384u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3d8388:
    // 0x3d8388: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3d8388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3d838c:
    // 0x3d838c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3d838cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3d8390:
    // 0x3d8390: 0xc0cd4ee  jal         func_3353B8
label_3d8394:
    if (ctx->pc == 0x3D8394u) {
        ctx->pc = 0x3D8394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8390u;
        // 0x3d8394: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8398u;
        goto label_3d8398;
    }
    ctx->pc = 0x3D8390u;
    SET_GPR_U32(ctx, 31, 0x3D8398u);
    ctx->pc = 0x3D8394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8390u;
    // 0x3d8394: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D8390u, 0x3D8398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8398u;
label_3d8398:
    // 0x3d8398: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x3d8398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_3d839c:
    // 0x3d839c: 0x3c03caca  lui         $v1, 0xCACA
    ctx->pc = 0x3d839cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51914 << 16));
label_3d83a0:
    // 0x3d83a0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3d83a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3d83a4:
    // 0x3d83a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3d83a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3d83a8:
    // 0x3d83a8: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x3d83a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_3d83ac:
    // 0x3d83ac: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x3d83acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_3d83b0:
    // 0x3d83b0: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x3d83b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_3d83b4:
    // 0x3d83b4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3d83b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d83b8:
    // 0x3d83b8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3d83b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d83bc:
    // 0x3d83bc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3d83bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d83c0:
    // 0x3d83c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d83c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3d83c4:
    // 0x3d83c4: 0x3e00008  jr          $ra
label_3d83c8:
    if (ctx->pc == 0x3D83C8u) {
        ctx->pc = 0x3D83C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D83C4u;
        // 0x3d83c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D83CCu;
        goto label_3d83cc;
    }
    ctx->pc = 0x3D83C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D83C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D83C4u;
        // 0x3d83c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D83C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D83CCu;
label_3d83cc:
    // 0x3d83cc: 0x0  nop
    ctx->pc = 0x3d83ccu;
    // NOP
    ctx->pc = 0x3d83d0u;
}
