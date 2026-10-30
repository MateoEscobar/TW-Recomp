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

// Function: sub_0018A2B0
// Address: 0x18a2b0 - 0x18a430
void sub_0018A2B0_0x18a2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A2B0_0x18a2b0");
#endif

    switch (ctx->pc) {
        case 0x18a2b0u: goto label_18a2b0;
        case 0x18a2b4u: goto label_18a2b4;
        case 0x18a2b8u: goto label_18a2b8;
        case 0x18a2bcu: goto label_18a2bc;
        case 0x18a2c0u: goto label_18a2c0;
        case 0x18a2c4u: goto label_18a2c4;
        case 0x18a2c8u: goto label_18a2c8;
        case 0x18a2ccu: goto label_18a2cc;
        case 0x18a2d0u: goto label_18a2d0;
        case 0x18a2d4u: goto label_18a2d4;
        case 0x18a2d8u: goto label_18a2d8;
        case 0x18a2dcu: goto label_18a2dc;
        case 0x18a2e0u: goto label_18a2e0;
        case 0x18a2e4u: goto label_18a2e4;
        case 0x18a2e8u: goto label_18a2e8;
        case 0x18a2ecu: goto label_18a2ec;
        case 0x18a2f0u: goto label_18a2f0;
        case 0x18a2f4u: goto label_18a2f4;
        case 0x18a2f8u: goto label_18a2f8;
        case 0x18a2fcu: goto label_18a2fc;
        case 0x18a300u: goto label_18a300;
        case 0x18a304u: goto label_18a304;
        case 0x18a308u: goto label_18a308;
        case 0x18a30cu: goto label_18a30c;
        case 0x18a310u: goto label_18a310;
        case 0x18a314u: goto label_18a314;
        case 0x18a318u: goto label_18a318;
        case 0x18a31cu: goto label_18a31c;
        case 0x18a320u: goto label_18a320;
        case 0x18a324u: goto label_18a324;
        case 0x18a328u: goto label_18a328;
        case 0x18a32cu: goto label_18a32c;
        case 0x18a330u: goto label_18a330;
        case 0x18a334u: goto label_18a334;
        case 0x18a338u: goto label_18a338;
        case 0x18a33cu: goto label_18a33c;
        case 0x18a340u: goto label_18a340;
        case 0x18a344u: goto label_18a344;
        case 0x18a348u: goto label_18a348;
        case 0x18a34cu: goto label_18a34c;
        case 0x18a350u: goto label_18a350;
        case 0x18a354u: goto label_18a354;
        case 0x18a358u: goto label_18a358;
        case 0x18a35cu: goto label_18a35c;
        case 0x18a360u: goto label_18a360;
        case 0x18a364u: goto label_18a364;
        case 0x18a368u: goto label_18a368;
        case 0x18a36cu: goto label_18a36c;
        case 0x18a370u: goto label_18a370;
        case 0x18a374u: goto label_18a374;
        case 0x18a378u: goto label_18a378;
        case 0x18a37cu: goto label_18a37c;
        case 0x18a380u: goto label_18a380;
        case 0x18a384u: goto label_18a384;
        case 0x18a388u: goto label_18a388;
        case 0x18a38cu: goto label_18a38c;
        case 0x18a390u: goto label_18a390;
        case 0x18a394u: goto label_18a394;
        case 0x18a398u: goto label_18a398;
        case 0x18a39cu: goto label_18a39c;
        case 0x18a3a0u: goto label_18a3a0;
        case 0x18a3a4u: goto label_18a3a4;
        case 0x18a3a8u: goto label_18a3a8;
        case 0x18a3acu: goto label_18a3ac;
        case 0x18a3b0u: goto label_18a3b0;
        case 0x18a3b4u: goto label_18a3b4;
        case 0x18a3b8u: goto label_18a3b8;
        case 0x18a3bcu: goto label_18a3bc;
        case 0x18a3c0u: goto label_18a3c0;
        case 0x18a3c4u: goto label_18a3c4;
        case 0x18a3c8u: goto label_18a3c8;
        case 0x18a3ccu: goto label_18a3cc;
        case 0x18a3d0u: goto label_18a3d0;
        case 0x18a3d4u: goto label_18a3d4;
        case 0x18a3d8u: goto label_18a3d8;
        case 0x18a3dcu: goto label_18a3dc;
        case 0x18a3e0u: goto label_18a3e0;
        case 0x18a3e4u: goto label_18a3e4;
        case 0x18a3e8u: goto label_18a3e8;
        case 0x18a3ecu: goto label_18a3ec;
        case 0x18a3f0u: goto label_18a3f0;
        case 0x18a3f4u: goto label_18a3f4;
        case 0x18a3f8u: goto label_18a3f8;
        case 0x18a3fcu: goto label_18a3fc;
        case 0x18a400u: goto label_18a400;
        case 0x18a404u: goto label_18a404;
        case 0x18a408u: goto label_18a408;
        case 0x18a40cu: goto label_18a40c;
        case 0x18a410u: goto label_18a410;
        case 0x18a414u: goto label_18a414;
        case 0x18a418u: goto label_18a418;
        case 0x18a41cu: goto label_18a41c;
        case 0x18a420u: goto label_18a420;
        case 0x18a424u: goto label_18a424;
        case 0x18a428u: goto label_18a428;
        case 0x18a42cu: goto label_18a42c;
        default: break;
    }

    ctx->pc = 0x18a2b0u;

label_18a2b0:
    // 0x18a2b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18a2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_18a2b4:
    // 0x18a2b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18a2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_18a2b8:
    // 0x18a2b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18a2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18a2bc:
    // 0x18a2bc: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x18a2bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_18a2c0:
    // 0x18a2c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18a2c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18a2c4:
    // 0x18a2c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18a2c8:
    // 0x18a2c8: 0x26300bc0  addiu       $s0, $s1, 0xBC0
    ctx->pc = 0x18a2c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3008));
label_18a2cc:
    // 0x18a2cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18a2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18a2d0:
    // 0x18a2d0: 0xc6210bd8  lwc1        $f1, 0xBD8($s1)
    ctx->pc = 0x18a2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18a2d4:
    // 0x18a2d4: 0xc6230bc8  lwc1        $f3, 0xBC8($s1)
    ctx->pc = 0x18a2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_18a2d8:
    // 0x18a2d8: 0xc6200be8  lwc1        $f0, 0xBE8($s1)
    ctx->pc = 0x18a2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18a2dc:
    // 0x18a2dc: 0x46030868  max.s       $f1, $f1, $f3
    ctx->pc = 0x18a2dcu;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[3]);
label_18a2e0:
    // 0x18a2e0: 0xc6220bf8  lwc1        $f2, 0xBF8($s1)
    ctx->pc = 0x18a2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18a2e4:
    // 0x18a2e4: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x18a2e4u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
label_18a2e8:
    // 0x18a2e8: 0xc0e4060  jal         func_390180
label_18a2ec:
    if (ctx->pc == 0x18A2ECu) {
        ctx->pc = 0x18A2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A2E8u;
        // 0x18a2ec: 0x46001528  max.s       $f20, $f2, $f0 (Delay Slot)
        ctx->f[20] = std::max(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A2F0u;
        goto label_18a2f0;
    }
    ctx->pc = 0x18A2E8u;
    SET_GPR_U32(ctx, 31, 0x18A2F0u);
    ctx->pc = 0x18A2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A2E8u;
    // 0x18a2ec: 0x46001528  max.s       $f20, $f2, $f0 (Delay Slot)
    ctx->f[20] = std::max(ctx->f[2], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x18A2E8u, 0x18A2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A2F0u;
label_18a2f0:
    // 0x18a2f0: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_18a2f4:
    if (ctx->pc == 0x18A2F4u) {
        ctx->pc = 0x18A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A2F0u;
        // 0x18a2f4: 0x26300bd0  addiu       $s0, $s1, 0xBD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A2F8u;
        goto label_18a2f8;
    }
    ctx->pc = 0x18A2F0u;
    {
        const bool branch_taken_0x18a2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a2f0) {
            ctx->pc = 0x18A2F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A2F0u;
            // 0x18a2f4: 0x26300bd0  addiu       $s0, $s1, 0xBD0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3024));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A338u;
            goto label_18a338;
        }
    }
    ctx->pc = 0x18A2F8u;
label_18a2f8:
    // 0x18a2f8: 0xc6200bc8  lwc1        $f0, 0xBC8($s1)
    ctx->pc = 0x18a2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18a2fc:
    // 0x18a2fc: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x18a2fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18a300:
    // 0x18a300: 0x0  nop
    ctx->pc = 0x18a300u;
    // NOP
label_18a304:
    // 0x18a304: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
label_18a308:
    if (ctx->pc == 0x18A308u) {
        ctx->pc = 0x18A308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A304u;
        // 0x18a308: 0x26300bd0  addiu       $s0, $s1, 0xBD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A30Cu;
        goto label_18a30c;
    }
    ctx->pc = 0x18A304u;
    {
        const bool branch_taken_0x18a304 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18a304) {
            ctx->pc = 0x18A308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A304u;
            // 0x18a308: 0x26300bd0  addiu       $s0, $s1, 0xBD0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3024));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A338u;
            goto label_18a338;
        }
    }
    ctx->pc = 0x18A30Cu;
label_18a30c:
    // 0x18a30c: 0xc0e409a  jal         func_390268
label_18a310:
    if (ctx->pc == 0x18A310u) {
        ctx->pc = 0x18A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A30Cu;
        // 0x18a310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A314u;
        goto label_18a314;
    }
    ctx->pc = 0x18A30Cu;
    SET_GPR_U32(ctx, 31, 0x18A314u);
    ctx->pc = 0x18A310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A30Cu;
    // 0x18a310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x18A30Cu, 0x18A314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A314u;
label_18a314:
    // 0x18a314: 0x8c4400d8  lw          $a0, 0xD8($v0)
    ctx->pc = 0x18a314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
label_18a318:
    // 0x18a318: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x18a318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_18a31c:
    // 0x18a31c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18a31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_18a320:
    // 0x18a320: 0x84650010  lh          $a1, 0x10($v1)
    ctx->pc = 0x18a320u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_18a324:
    // 0x18a324: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x18a324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_18a328:
    // 0x18a328: 0x40f809  jalr        $v0
label_18a32c:
    if (ctx->pc == 0x18A32Cu) {
        ctx->pc = 0x18A32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A328u;
        // 0x18a32c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A330u;
        goto label_18a330;
    }
    ctx->pc = 0x18A328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18A330u);
        ctx->pc = 0x18A32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A328u;
        // 0x18a32c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A328u, 0x18A330u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18A330u;
label_18a330:
    // 0x18a330: 0x10000034  b           . + 4 + (0x34 << 2)
label_18a334:
    if (ctx->pc == 0x18A334u) {
        ctx->pc = 0x18A338u;
        goto label_18a338;
    }
    ctx->pc = 0x18A330u;
    {
        const bool branch_taken_0x18a330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a330) {
            ctx->pc = 0x18A404u;
            goto label_18a404;
        }
    }
    ctx->pc = 0x18A338u;
label_18a338:
    // 0x18a338: 0xc0e4060  jal         func_390180
label_18a33c:
    if (ctx->pc == 0x18A33Cu) {
        ctx->pc = 0x18A33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A338u;
        // 0x18a33c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A340u;
        goto label_18a340;
    }
    ctx->pc = 0x18A338u;
    SET_GPR_U32(ctx, 31, 0x18A340u);
    ctx->pc = 0x18A33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A338u;
    // 0x18a33c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x18A338u, 0x18A340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A340u;
label_18a340:
    // 0x18a340: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_18a344:
    if (ctx->pc == 0x18A344u) {
        ctx->pc = 0x18A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A340u;
        // 0x18a344: 0x26300bf0  addiu       $s0, $s1, 0xBF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A348u;
        goto label_18a348;
    }
    ctx->pc = 0x18A340u;
    {
        const bool branch_taken_0x18a340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a340) {
            ctx->pc = 0x18A344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A340u;
            // 0x18a344: 0x26300bf0  addiu       $s0, $s1, 0xBF0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3056));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A384u;
            goto label_18a384;
        }
    }
    ctx->pc = 0x18A348u;
label_18a348:
    // 0x18a348: 0xc6200bd8  lwc1        $f0, 0xBD8($s1)
    ctx->pc = 0x18a348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18a34c:
    // 0x18a34c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x18a34cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18a350:
    // 0x18a350: 0x0  nop
    ctx->pc = 0x18a350u;
    // NOP
label_18a354:
    // 0x18a354: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_18a358:
    if (ctx->pc == 0x18A358u) {
        ctx->pc = 0x18A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A354u;
        // 0x18a358: 0x26300bf0  addiu       $s0, $s1, 0xBF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A35Cu;
        goto label_18a35c;
    }
    ctx->pc = 0x18A354u;
    {
        const bool branch_taken_0x18a354 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18a354) {
            ctx->pc = 0x18A358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A354u;
            // 0x18a358: 0x26300bf0  addiu       $s0, $s1, 0xBF0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3056));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A384u;
            goto label_18a384;
        }
    }
    ctx->pc = 0x18A35Cu;
label_18a35c:
    // 0x18a35c: 0xc0e4060  jal         func_390180
label_18a360:
    if (ctx->pc == 0x18A360u) {
        ctx->pc = 0x18A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A35Cu;
        // 0x18a360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A364u;
        goto label_18a364;
    }
    ctx->pc = 0x18A35Cu;
    SET_GPR_U32(ctx, 31, 0x18A364u);
    ctx->pc = 0x18A360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A35Cu;
    // 0x18a360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x18A35Cu, 0x18A364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A364u;
label_18a364:
    // 0x18a364: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18a364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18a368:
    // 0x18a368: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x18a368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_18a36c:
    // 0x18a36c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_18a370:
    if (ctx->pc == 0x18A370u) {
        ctx->pc = 0x18A374u;
        goto label_18a374;
    }
    ctx->pc = 0x18A36Cu;
    {
        const bool branch_taken_0x18a36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a36c) {
            ctx->pc = 0x18A404u;
            goto label_18a404;
        }
    }
    ctx->pc = 0x18A374u;
label_18a374:
    // 0x18a374: 0xc0e5532  jal         func_3954C8
label_18a378:
    if (ctx->pc == 0x18A378u) {
        ctx->pc = 0x18A37Cu;
        goto label_18a37c;
    }
    ctx->pc = 0x18A374u;
    SET_GPR_U32(ctx, 31, 0x18A37Cu);
    ctx->pc = 0x3954C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3954C8u, 0x18A374u, 0x18A37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A37Cu;
label_18a37c:
    // 0x18a37c: 0x10000021  b           . + 4 + (0x21 << 2)
label_18a380:
    if (ctx->pc == 0x18A380u) {
        ctx->pc = 0x18A384u;
        goto label_18a384;
    }
    ctx->pc = 0x18A37Cu;
    {
        const bool branch_taken_0x18a37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a37c) {
            ctx->pc = 0x18A404u;
            goto label_18a404;
        }
    }
    ctx->pc = 0x18A384u;
label_18a384:
    // 0x18a384: 0xc0e4060  jal         func_390180
label_18a388:
    if (ctx->pc == 0x18A388u) {
        ctx->pc = 0x18A388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A384u;
        // 0x18a388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A38Cu;
        goto label_18a38c;
    }
    ctx->pc = 0x18A384u;
    SET_GPR_U32(ctx, 31, 0x18A38Cu);
    ctx->pc = 0x18A388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A384u;
    // 0x18a388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x18A384u, 0x18A38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A38Cu;
label_18a38c:
    // 0x18a38c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_18a390:
    if (ctx->pc == 0x18A390u) {
        ctx->pc = 0x18A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A38Cu;
        // 0x18a390: 0xc6200be8  lwc1        $f0, 0xBE8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A394u;
        goto label_18a394;
    }
    ctx->pc = 0x18A38Cu;
    {
        const bool branch_taken_0x18a38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a38c) {
            ctx->pc = 0x18A390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A38Cu;
            // 0x18a390: 0xc6200be8  lwc1        $f0, 0xBE8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A3D0u;
            goto label_18a3d0;
        }
    }
    ctx->pc = 0x18A394u;
label_18a394:
    // 0x18a394: 0xc6200bf8  lwc1        $f0, 0xBF8($s1)
    ctx->pc = 0x18a394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18a398:
    // 0x18a398: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x18a398u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18a39c:
    // 0x18a39c: 0x0  nop
    ctx->pc = 0x18a39cu;
    // NOP
label_18a3a0:
    // 0x18a3a0: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_18a3a4:
    if (ctx->pc == 0x18A3A4u) {
        ctx->pc = 0x18A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A3A0u;
        // 0x18a3a4: 0xc6200be8  lwc1        $f0, 0xBE8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A3A8u;
        goto label_18a3a8;
    }
    ctx->pc = 0x18A3A0u;
    {
        const bool branch_taken_0x18a3a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18a3a0) {
            ctx->pc = 0x18A3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A3A0u;
            // 0x18a3a4: 0xc6200be8  lwc1        $f0, 0xBE8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A3D0u;
            goto label_18a3d0;
        }
    }
    ctx->pc = 0x18A3A8u;
label_18a3a8:
    // 0x18a3a8: 0xc0e4088  jal         func_390220
label_18a3ac:
    if (ctx->pc == 0x18A3ACu) {
        ctx->pc = 0x18A3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A3A8u;
        // 0x18a3ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A3B0u;
        goto label_18a3b0;
    }
    ctx->pc = 0x18A3A8u;
    SET_GPR_U32(ctx, 31, 0x18A3B0u);
    ctx->pc = 0x18A3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A3A8u;
    // 0x18a3ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390220u, 0x18A3A8u, 0x18A3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A3B0u;
label_18a3b0:
    // 0x18a3b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18a3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18a3b4:
    // 0x18a3b4: 0x8c821300  lw          $v0, 0x1300($a0)
    ctx->pc = 0x18a3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4864)));
label_18a3b8:
    // 0x18a3b8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_18a3bc:
    if (ctx->pc == 0x18A3BCu) {
        ctx->pc = 0x18A3C0u;
        goto label_18a3c0;
    }
    ctx->pc = 0x18A3B8u;
    {
        const bool branch_taken_0x18a3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a3b8) {
            ctx->pc = 0x18A404u;
            goto label_18a404;
        }
    }
    ctx->pc = 0x18A3C0u;
label_18a3c0:
    // 0x18a3c0: 0xc0e1ea4  jal         func_387A90
label_18a3c4:
    if (ctx->pc == 0x18A3C4u) {
        ctx->pc = 0x18A3C8u;
        goto label_18a3c8;
    }
    ctx->pc = 0x18A3C0u;
    SET_GPR_U32(ctx, 31, 0x18A3C8u);
    ctx->pc = 0x387A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387A90u, 0x18A3C0u, 0x18A3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A3C8u;
label_18a3c8:
    // 0x18a3c8: 0x1000000e  b           . + 4 + (0xE << 2)
label_18a3cc:
    if (ctx->pc == 0x18A3CCu) {
        ctx->pc = 0x18A3D0u;
        goto label_18a3d0;
    }
    ctx->pc = 0x18A3C8u;
    {
        const bool branch_taken_0x18a3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a3c8) {
            ctx->pc = 0x18A404u;
            goto label_18a404;
        }
    }
    ctx->pc = 0x18A3D0u;
label_18a3d0:
    // 0x18a3d0: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x18a3d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18a3d4:
    // 0x18a3d4: 0x0  nop
    ctx->pc = 0x18a3d4u;
    // NOP
label_18a3d8:
    // 0x18a3d8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_18a3dc:
    if (ctx->pc == 0x18A3DCu) {
        ctx->pc = 0x18A3E0u;
        goto label_18a3e0;
    }
    ctx->pc = 0x18A3D8u;
    {
        const bool branch_taken_0x18a3d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18a3d8) {
            ctx->pc = 0x18A404u;
            goto label_18a404;
        }
    }
    ctx->pc = 0x18A3E0u;
label_18a3e0:
    // 0x18a3e0: 0x8e300be0  lw          $s0, 0xBE0($s1)
    ctx->pc = 0x18a3e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3040)));
label_18a3e4:
    // 0x18a3e4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_18a3e8:
    if (ctx->pc == 0x18A3E8u) {
        ctx->pc = 0x18A3ECu;
        goto label_18a3ec;
    }
    ctx->pc = 0x18A3E4u;
    {
        const bool branch_taken_0x18a3e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a3e4) {
            ctx->pc = 0x18A404u;
            goto label_18a404;
        }
    }
    ctx->pc = 0x18A3ECu;
label_18a3ec:
    // 0x18a3ec: 0xc065b58  jal         func_196D60
label_18a3f0:
    if (ctx->pc == 0x18A3F0u) {
        ctx->pc = 0x18A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A3ECu;
        // 0x18a3f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A3F4u;
        goto label_18a3f4;
    }
    ctx->pc = 0x18A3ECu;
    SET_GPR_U32(ctx, 31, 0x18A3F4u);
    ctx->pc = 0x18A3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A3ECu;
    // 0x18a3f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196D60u, 0x18A3ECu, 0x18A3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A3F4u;
label_18a3f4:
    // 0x18a3f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18a3f8:
    if (ctx->pc == 0x18A3F8u) {
        ctx->pc = 0x18A3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A3F4u;
        // 0x18a3f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A3FCu;
        goto label_18a3fc;
    }
    ctx->pc = 0x18A3F4u;
    {
        const bool branch_taken_0x18a3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A3F4u;
        // 0x18a3f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a3f4) {
            ctx->pc = 0x18A404u;
            goto label_18a404;
        }
    }
    ctx->pc = 0x18A3FCu;
label_18a3fc:
    // 0x18a3fc: 0xc065cac  jal         func_1972B0
label_18a400:
    if (ctx->pc == 0x18A400u) {
        ctx->pc = 0x18A400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A3FCu;
        // 0x18a400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A404u;
        goto label_18a404;
    }
    ctx->pc = 0x18A3FCu;
    SET_GPR_U32(ctx, 31, 0x18A404u);
    ctx->pc = 0x18A400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A3FCu;
    // 0x18a400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1972B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1972B0u, 0x18A3FCu, 0x18A404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A404u;
label_18a404:
    // 0x18a404: 0xc06258a  jal         func_189628
label_18a408:
    if (ctx->pc == 0x18A408u) {
        ctx->pc = 0x18A408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A404u;
        // 0x18a408: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A40Cu;
        goto label_18a40c;
    }
    ctx->pc = 0x18A404u;
    SET_GPR_U32(ctx, 31, 0x18A40Cu);
    ctx->pc = 0x18A408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A404u;
    // 0x18a408: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189628u, 0x18A404u, 0x18A40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A40Cu;
label_18a40c:
    // 0x18a40c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18a40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18a410:
    // 0x18a410: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18a410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18a414:
    // 0x18a414: 0xae230bbc  sw          $v1, 0xBBC($s1)
    ctx->pc = 0x18a414u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3004), GPR_U32(ctx, 3));
label_18a418:
    // 0x18a418: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18a41c:
    // 0x18a41c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18a41cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18a420:
    // 0x18a420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a424:
    // 0x18a424: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x18a424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18a428:
    // 0x18a428: 0x3e00008  jr          $ra
label_18a42c:
    if (ctx->pc == 0x18A42Cu) {
        ctx->pc = 0x18A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A428u;
        // 0x18a42c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A430u;
        goto label_fallthrough_0x18a428;
    }
    ctx->pc = 0x18A428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A428u;
        // 0x18a42c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18a428:
    ctx->pc = 0x18A430u;
}
