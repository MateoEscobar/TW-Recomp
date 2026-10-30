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

// Function: sub_003D92D8
// Address: 0x3d92d8 - 0x3d9380
void sub_003D92D8_0x3d92d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D92D8_0x3d92d8");
#endif

    switch (ctx->pc) {
        case 0x3d92d8u: goto label_3d92d8;
        case 0x3d92dcu: goto label_3d92dc;
        case 0x3d92e0u: goto label_3d92e0;
        case 0x3d92e4u: goto label_3d92e4;
        case 0x3d92e8u: goto label_3d92e8;
        case 0x3d92ecu: goto label_3d92ec;
        case 0x3d92f0u: goto label_3d92f0;
        case 0x3d92f4u: goto label_3d92f4;
        case 0x3d92f8u: goto label_3d92f8;
        case 0x3d92fcu: goto label_3d92fc;
        case 0x3d9300u: goto label_3d9300;
        case 0x3d9304u: goto label_3d9304;
        case 0x3d9308u: goto label_3d9308;
        case 0x3d930cu: goto label_3d930c;
        case 0x3d9310u: goto label_3d9310;
        case 0x3d9314u: goto label_3d9314;
        case 0x3d9318u: goto label_3d9318;
        case 0x3d931cu: goto label_3d931c;
        case 0x3d9320u: goto label_3d9320;
        case 0x3d9324u: goto label_3d9324;
        case 0x3d9328u: goto label_3d9328;
        case 0x3d932cu: goto label_3d932c;
        case 0x3d9330u: goto label_3d9330;
        case 0x3d9334u: goto label_3d9334;
        case 0x3d9338u: goto label_3d9338;
        case 0x3d933cu: goto label_3d933c;
        case 0x3d9340u: goto label_3d9340;
        case 0x3d9344u: goto label_3d9344;
        case 0x3d9348u: goto label_3d9348;
        case 0x3d934cu: goto label_3d934c;
        case 0x3d9350u: goto label_3d9350;
        case 0x3d9354u: goto label_3d9354;
        case 0x3d9358u: goto label_3d9358;
        case 0x3d935cu: goto label_3d935c;
        case 0x3d9360u: goto label_3d9360;
        case 0x3d9364u: goto label_3d9364;
        case 0x3d9368u: goto label_3d9368;
        case 0x3d936cu: goto label_3d936c;
        case 0x3d9370u: goto label_3d9370;
        case 0x3d9374u: goto label_3d9374;
        case 0x3d9378u: goto label_3d9378;
        case 0x3d937cu: goto label_3d937c;
        default: break;
    }

    ctx->pc = 0x3d92d8u;

label_3d92d8:
    // 0x3d92d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d92d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3d92dc:
    // 0x3d92dc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3d92dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3d92e0:
    // 0x3d92e0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3d92e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3d92e4:
    // 0x3d92e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d92e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d92e8:
    // 0x3d92e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3d92e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3d92ec:
    // 0x3d92ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d92ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d92f0:
    // 0x3d92f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d92f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d92f4:
    // 0x3d92f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d92f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d92f8:
    // 0x3d92f8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d92f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d92fc:
    // 0x3d92fc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d92fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d9300:
    // 0x3d9300: 0x40f809  jalr        $v0
label_3d9304:
    if (ctx->pc == 0x3D9304u) {
        ctx->pc = 0x3D9304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9300u;
        // 0x3d9304: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9308u;
        goto label_3d9308;
    }
    ctx->pc = 0x3D9300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D9308u);
        ctx->pc = 0x3D9304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9300u;
        // 0x3d9304: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9300u, 0x3D9308u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D9308u;
label_3d9308:
    // 0x3d9308: 0x24030480  addiu       $v1, $zero, 0x480
    ctx->pc = 0x3d9308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
label_3d930c:
    // 0x3d930c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d930cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d9310:
    // 0x3d9310: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3d9310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3d9314:
    // 0x3d9314: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d9314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d9318:
    // 0x3d9318: 0xc0ea12a  jal         func_3A84A8
label_3d931c:
    if (ctx->pc == 0x3D931Cu) {
        ctx->pc = 0x3D931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9318u;
        // 0x3d931c: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9320u;
        goto label_3d9320;
    }
    ctx->pc = 0x3D9318u;
    SET_GPR_U32(ctx, 31, 0x3D9320u);
    ctx->pc = 0x3D931Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9318u;
    // 0x3d931c: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D9318u, 0x3D9320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9320u;
label_3d9320:
    // 0x3d9320: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3d9320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3d9324:
    // 0x3d9324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d9324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d9328:
    // 0x3d9328: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3d9328u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d932c:
    // 0x3d932c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3d932cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3d9330:
    // 0x3d9330: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x3d9330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_3d9334:
    // 0x3d9334: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3d9334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3d9338:
    // 0x3d9338: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3d9338u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3d933c:
    // 0x3d933c: 0xc0e858c  jal         func_3A1630
label_3d9340:
    if (ctx->pc == 0x3D9340u) {
        ctx->pc = 0x3D9340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D933Cu;
        // 0x3d9340: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9344u;
        goto label_3d9344;
    }
    ctx->pc = 0x3D933Cu;
    SET_GPR_U32(ctx, 31, 0x3D9344u);
    ctx->pc = 0x3D9340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D933Cu;
    // 0x3d9340: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D933Cu, 0x3D9344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9344u;
label_3d9344:
    // 0x3d9344: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x3d9344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_3d9348:
    // 0x3d9348: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3d9348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_3d934c:
    // 0x3d934c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d934cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d9350:
    // 0x3d9350: 0x344200e4  ori         $v0, $v0, 0xE4
    ctx->pc = 0x3d9350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)228);
label_3d9354:
    // 0x3d9354: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3d9354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d9358:
    // 0x3d9358: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x3d9358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_3d935c:
    // 0x3d935c: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x3d935cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_3d9360:
    // 0x3d9360: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3d9360u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3d9364:
    // 0x3d9364: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x3d9364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_3d9368:
    // 0x3d9368: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x3d9368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
label_3d936c:
    // 0x3d936c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3d936cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d9370:
    // 0x3d9370: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3d9370u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d9374:
    // 0x3d9374: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d9374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d9378:
    // 0x3d9378: 0x3e00008  jr          $ra
label_3d937c:
    if (ctx->pc == 0x3D937Cu) {
        ctx->pc = 0x3D937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9378u;
        // 0x3d937c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9380u;
        goto label_fallthrough_0x3d9378;
    }
    ctx->pc = 0x3D9378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9378u;
        // 0x3d937c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d9378:
    ctx->pc = 0x3D9380u;
}
