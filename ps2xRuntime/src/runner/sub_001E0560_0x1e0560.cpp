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

// Function: sub_001E0560
// Address: 0x1e0560 - 0x1e0778
void sub_001E0560_0x1e0560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0560_0x1e0560");
#endif

    switch (ctx->pc) {
        case 0x1e0590u: goto label_1e0590;
        case 0x1e05a0u: goto label_1e05a0;
        case 0x1e05b0u: goto label_1e05b0;
        case 0x1e05c0u: goto label_1e05c0;
        case 0x1e061cu: goto label_1e061c;
        case 0x1e062cu: goto label_1e062c;
        case 0x1e0634u: goto label_1e0634;
        case 0x1e0664u: goto label_1e0664;
        case 0x1e0674u: goto label_1e0674;
        case 0x1e067cu: goto label_1e067c;
        case 0x1e06c0u: goto label_1e06c0;
        case 0x1e06e4u: goto label_1e06e4;
        case 0x1e072cu: goto label_1e072c;
        case 0x1e0734u: goto label_1e0734;
        case 0x1e0748u: goto label_1e0748;
        case 0x1e0758u: goto label_1e0758;
        default: break;
    }

    ctx->pc = 0x1e0560u;

    // 0x1e0560: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e0560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e0564: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e0564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e0568: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1e0568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1e056c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e056cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0570: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1e0570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1e0574: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e0574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e0578: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1e0578u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1e057c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1e057cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1e0580: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E0580u;
    {
        const bool branch_taken_0x1e0580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0580) {
            ctx->pc = 0x1E0584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0580u;
            // 0x1e0584: 0x8e420060  lw          $v0, 0x60($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E05D8u;
            goto label_1e05d8;
        }
    }
    ctx->pc = 0x1E0588u;
    // 0x1e0588: 0xc074736  jal         func_1D1CD8
    ctx->pc = 0x1E0588u;
    SET_GPR_U32(ctx, 31, 0x1E0590u);
    ctx->pc = 0x1D1CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1CD8u, 0x1E0588u, 0x1E0590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0590u;
label_1e0590:
    // 0x1e0590: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1E0590u;
    {
        const bool branch_taken_0x1e0590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0590) {
            ctx->pc = 0x1E0594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0590u;
            // 0x1e0594: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E05D0u;
            goto label_1e05d0;
        }
    }
    ctx->pc = 0x1E0598u;
    // 0x1e0598: 0xc073b4e  jal         func_1CED38
    ctx->pc = 0x1E0598u;
    SET_GPR_U32(ctx, 31, 0x1E05A0u);
    ctx->pc = 0x1E059Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0598u;
    // 0x1e059c: 0x26440430  addiu       $a0, $s2, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CED38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CED38u, 0x1E0598u, 0x1E05A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E05A0u;
label_1e05a0:
    // 0x1e05a0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1E05A0u;
    {
        const bool branch_taken_0x1e05a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e05a0) {
            ctx->pc = 0x1E05A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E05A0u;
            // 0x1e05a4: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E05D0u;
            goto label_1e05d0;
        }
    }
    ctx->pc = 0x1E05A8u;
    // 0x1e05a8: 0xc075106  jal         func_1D4418
    ctx->pc = 0x1E05A8u;
    SET_GPR_U32(ctx, 31, 0x1E05B0u);
    ctx->pc = 0x1E05ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E05A8u;
    // 0x1e05ac: 0x26440360  addiu       $a0, $s2, 0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4418u, 0x1E05A8u, 0x1E05B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E05B0u;
label_1e05b0:
    // 0x1e05b0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E05B0u;
    {
        const bool branch_taken_0x1e05b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e05b0) {
            ctx->pc = 0x1E05B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E05B0u;
            // 0x1e05b4: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E05D0u;
            goto label_1e05d0;
        }
    }
    ctx->pc = 0x1E05B8u;
    // 0x1e05b8: 0xc075106  jal         func_1D4418
    ctx->pc = 0x1E05B8u;
    SET_GPR_U32(ctx, 31, 0x1E05C0u);
    ctx->pc = 0x1E05BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E05B8u;
    // 0x1e05bc: 0x264407b0  addiu       $a0, $s2, 0x7B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4418u, 0x1E05B8u, 0x1E05C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E05C0u;
label_1e05c0:
    // 0x1e05c0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E05C0u;
    {
        const bool branch_taken_0x1e05c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E05C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E05C0u;
        // 0x1e05c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e05c0) {
            ctx->pc = 0x1E05CCu;
            goto label_1e05cc;
        }
    }
    ctx->pc = 0x1E05C8u;
    // 0x1e05c8: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1e05c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_1e05cc:
    // 0x1e05cc: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1e05ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1e05d0:
    // 0x1e05d0: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x1E05D0u;
    {
        const bool branch_taken_0x1e05d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E05D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E05D0u;
        // 0x1e05d4: 0x8e420060  lw          $v0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e05d0) {
            ctx->pc = 0x1E0738u;
            goto label_1e0738;
        }
    }
    ctx->pc = 0x1E05D8u;
label_1e05d8:
    // 0x1e05d8: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x1E05D8u;
    {
        const bool branch_taken_0x1e05d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E05DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E05D8u;
        // 0x1e05dc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e05d8) {
            ctx->pc = 0x1E0740u;
            goto label_1e0740;
        }
    }
    ctx->pc = 0x1E05E0u;
    // 0x1e05e0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1e05e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1e05e4: 0xc440ee98  lwc1        $f0, -0x1168($v0)
    ctx->pc = 0x1e05e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e05e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e05e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e05ec: 0xc461ee9c  lwc1        $f1, -0x1164($v1)
    ctx->pc = 0x1e05ecu;
    { uint32_t bits = FAST_READ32(0x50EE9Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e05f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e05f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e05f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e05f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e05f8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1e05f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1e05fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e05fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0600: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1e0600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e0604: 0x26500880  addiu       $s0, $s2, 0x880
    ctx->pc = 0x1e0604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 2176));
    // 0x1e0608: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1e0608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e060c: 0x26510170  addiu       $s1, $s2, 0x170
    ctx->pc = 0x1e060cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
    // 0x1e0610: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e0610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1e0614: 0xc048b52  jal         func_122D48
    ctx->pc = 0x1E0614u;
    SET_GPR_U32(ctx, 31, 0x1E061Cu);
    ctx->pc = 0x1E0618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0614u;
    // 0x1e0618: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1E0614u, 0x1E061Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E061Cu;
label_1e061c:
    // 0x1e061c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e061cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0620: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e0620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0624: 0xc06e4dc  jal         func_1B9370
    ctx->pc = 0x1E0624u;
    SET_GPR_U32(ctx, 31, 0x1E062Cu);
    ctx->pc = 0x1E0628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0624u;
    // 0x1e0628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x1E0624u, 0x1E062Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E062Cu;
label_1e062c:
    // 0x1e062c: 0xc06e552  jal         func_1B9548
    ctx->pc = 0x1E062Cu;
    SET_GPR_U32(ctx, 31, 0x1E0634u);
    ctx->pc = 0x1E0630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E062Cu;
    // 0x1e0630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9548u, 0x1E062Cu, 0x1E0634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0634u;
label_1e0634:
    // 0x1e0634: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e0634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1e0638: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1e0638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1e063c: 0xc440eea4  lwc1        $f0, -0x115C($v0)
    ctx->pc = 0x1e063cu;
    { uint32_t bits = FAST_READ32(0x50EEA4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0640: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e0640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0644: 0xc461eea8  lwc1        $f1, -0x1158($v1)
    ctx->pc = 0x1e0644u;
    { uint32_t bits = FAST_READ32(0x50EEA8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0648: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e0648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e064c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1e064cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e0650: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e0650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0654: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1e0654u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e0658: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e0658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1e065c: 0xc048b52  jal         func_122D48
    ctx->pc = 0x1E065Cu;
    SET_GPR_U32(ctx, 31, 0x1E0664u);
    ctx->pc = 0x1E0660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E065Cu;
    // 0x1e0660: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1E065Cu, 0x1E0664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0664u;
label_1e0664:
    // 0x1e0664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0668: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e0668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e066c: 0xc06e4dc  jal         func_1B9370
    ctx->pc = 0x1E066Cu;
    SET_GPR_U32(ctx, 31, 0x1E0674u);
    ctx->pc = 0x1E0670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E066Cu;
    // 0x1e0670: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x1E066Cu, 0x1E0674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0674u;
label_1e0674:
    // 0x1e0674: 0xc06e552  jal         func_1B9548
    ctx->pc = 0x1E0674u;
    SET_GPR_U32(ctx, 31, 0x1E067Cu);
    ctx->pc = 0x1E0678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0674u;
    // 0x1e0678: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9548u, 0x1E0674u, 0x1E067Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E067Cu;
label_1e067c:
    // 0x1e067c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e067cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1e0680: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e0680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1e0684: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e0684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0688: 0xc441eeb0  lwc1        $f1, -0x1150($v0)
    ctx->pc = 0x1e0688u;
    { uint32_t bits = FAST_READ32(0x50EEB0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e068c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1e068cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e0690: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1e0690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1e0694: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1e0694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0698: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1e0698u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1e069c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1e069cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1e06a0: 0x8e4207a0  lw          $v0, 0x7A0($s2)
    ctx->pc = 0x1e06a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1952)));
    // 0x1e06a4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E06A4u;
    {
        const bool branch_taken_0x1e06a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E06A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E06A4u;
        // 0x1e06a8: 0xe474000c  swc1        $f20, 0xC($v1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e06a4) {
            ctx->pc = 0x1E06D0u;
            goto label_1e06d0;
        }
    }
    ctx->pc = 0x1E06ACu;
    // 0x1e06ac: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1e06acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e06b0: 0x26500360  addiu       $s0, $s2, 0x360
    ctx->pc = 0x1e06b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 864));
    // 0x1e06b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e06b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e06b8: 0xc0753c8  jal         func_1D4F20
    ctx->pc = 0x1E06B8u;
    SET_GPR_U32(ctx, 31, 0x1E06C0u);
    ctx->pc = 0x1E06BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E06B8u;
    // 0x1e06bc: 0x7e020020  sq          $v0, 0x20($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4F20u, 0x1E06B8u, 0x1E06C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E06C0u;
label_1e06c0:
    // 0x1e06c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e06c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e06c4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1e06c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1e06c8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E06C8u;
    {
        const bool branch_taken_0x1e06c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E06CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E06C8u;
        // 0x1e06cc: 0xae4007b8  sw          $zero, 0x7B8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1976), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e06c8) {
            ctx->pc = 0x1E06F0u;
            goto label_1e06f0;
        }
    }
    ctx->pc = 0x1E06D0u;
label_1e06d0:
    // 0x1e06d0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1e06d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e06d4: 0x265007b0  addiu       $s0, $s2, 0x7B0
    ctx->pc = 0x1e06d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1968));
    // 0x1e06d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e06d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e06dc: 0xc0753c8  jal         func_1D4F20
    ctx->pc = 0x1E06DCu;
    SET_GPR_U32(ctx, 31, 0x1E06E4u);
    ctx->pc = 0x1E06E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E06DCu;
    // 0x1e06e0: 0x7e020020  sq          $v0, 0x20($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4F20u, 0x1E06DCu, 0x1E06E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E06E4u;
label_1e06e4:
    // 0x1e06e4: 0xae400368  sw          $zero, 0x368($s2)
    ctx->pc = 0x1e06e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 872), GPR_U32(ctx, 0));
    // 0x1e06e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e06e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e06ec: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1e06ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1e06f0:
    // 0x1e06f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e06f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1e06f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e06f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1e06f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e06f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e06fc: 0xc441eeac  lwc1        $f1, -0x1154($v0)
    ctx->pc = 0x1e06fcu;
    { uint32_t bits = FAST_READ32(0x50EEACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0700: 0x26500430  addiu       $s0, $s2, 0x430
    ctx->pc = 0x1e0700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1072));
    // 0x1e0704: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e0704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e0708: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e0708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e070c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e070cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0710: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1e0710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1e0714: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e0714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0718: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1e0718u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1e071c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e071cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0720: 0xe622000c  swc1        $f2, 0xC($s1)
    ctx->pc = 0x1e0720u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1e0724: 0xc073b2c  jal         func_1CECB0
    ctx->pc = 0x1E0724u;
    SET_GPR_U32(ctx, 31, 0x1E072Cu);
    ctx->pc = 0x1E0728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0724u;
    // 0x1e0728: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CECB0u, 0x1E0724u, 0x1E072Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E072Cu;
label_1e072c:
    // 0x1e072c: 0xc073b50  jal         func_1CED40
    ctx->pc = 0x1E072Cu;
    SET_GPR_U32(ctx, 31, 0x1E0734u);
    ctx->pc = 0x1E0730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E072Cu;
    // 0x1e0730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CED40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CED40u, 0x1E072Cu, 0x1E0734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0734u;
label_1e0734:
    // 0x1e0734: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x1e0734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_1e0738:
    // 0x1e0738: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E0738u;
    {
        const bool branch_taken_0x1e0738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0738u;
        // 0x1e073c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0738) {
            ctx->pc = 0x1E0760u;
            goto label_1e0760;
        }
    }
    ctx->pc = 0x1E0740u;
label_1e0740:
    // 0x1e0740: 0xc074742  jal         func_1D1D08
    ctx->pc = 0x1E0740u;
    SET_GPR_U32(ctx, 31, 0x1E0748u);
    ctx->pc = 0x1E0744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0740u;
    // 0x1e0744: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1D08u, 0x1E0740u, 0x1E0748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0748u;
label_1e0748:
    // 0x1e0748: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0748u;
    {
        const bool branch_taken_0x1e0748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0748u;
        // 0x1e074c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0748) {
            ctx->pc = 0x1E0760u;
            goto label_1e0760;
        }
    }
    ctx->pc = 0x1E0750u;
    // 0x1e0750: 0xc055592  jal         func_155648
    ctx->pc = 0x1E0750u;
    SET_GPR_U32(ctx, 31, 0x1E0758u);
    ctx->pc = 0x155648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155648u, 0x1E0750u, 0x1E0758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0758u;
label_1e0758:
    // 0x1e0758: 0xae400060  sw          $zero, 0x60($s2)
    ctx->pc = 0x1e0758u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
    // 0x1e075c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1e075cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e0760:
    // 0x1e0760: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1e0760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e0764: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e0764u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e0768: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e0768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e076c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1e076cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e0770: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0770u;
        // 0x1e0774: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0778u;
}
