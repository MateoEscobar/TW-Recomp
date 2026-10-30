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

// Function: sub_00397230
// Address: 0x397230 - 0x397330
void sub_00397230_0x397230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397230_0x397230");
#endif

    switch (ctx->pc) {
        case 0x397230u: goto label_397230;
        case 0x397234u: goto label_397234;
        case 0x397238u: goto label_397238;
        case 0x39723cu: goto label_39723c;
        case 0x397240u: goto label_397240;
        case 0x397244u: goto label_397244;
        case 0x397248u: goto label_397248;
        case 0x39724cu: goto label_39724c;
        case 0x397250u: goto label_397250;
        case 0x397254u: goto label_397254;
        case 0x397258u: goto label_397258;
        case 0x39725cu: goto label_39725c;
        case 0x397260u: goto label_397260;
        case 0x397264u: goto label_397264;
        case 0x397268u: goto label_397268;
        case 0x39726cu: goto label_39726c;
        case 0x397270u: goto label_397270;
        case 0x397274u: goto label_397274;
        case 0x397278u: goto label_397278;
        case 0x39727cu: goto label_39727c;
        case 0x397280u: goto label_397280;
        case 0x397284u: goto label_397284;
        case 0x397288u: goto label_397288;
        case 0x39728cu: goto label_39728c;
        case 0x397290u: goto label_397290;
        case 0x397294u: goto label_397294;
        case 0x397298u: goto label_397298;
        case 0x39729cu: goto label_39729c;
        case 0x3972a0u: goto label_3972a0;
        case 0x3972a4u: goto label_3972a4;
        case 0x3972a8u: goto label_3972a8;
        case 0x3972acu: goto label_3972ac;
        case 0x3972b0u: goto label_3972b0;
        case 0x3972b4u: goto label_3972b4;
        case 0x3972b8u: goto label_3972b8;
        case 0x3972bcu: goto label_3972bc;
        case 0x3972c0u: goto label_3972c0;
        case 0x3972c4u: goto label_3972c4;
        case 0x3972c8u: goto label_3972c8;
        case 0x3972ccu: goto label_3972cc;
        case 0x3972d0u: goto label_3972d0;
        case 0x3972d4u: goto label_3972d4;
        case 0x3972d8u: goto label_3972d8;
        case 0x3972dcu: goto label_3972dc;
        case 0x3972e0u: goto label_3972e0;
        case 0x3972e4u: goto label_3972e4;
        case 0x3972e8u: goto label_3972e8;
        case 0x3972ecu: goto label_3972ec;
        case 0x3972f0u: goto label_3972f0;
        case 0x3972f4u: goto label_3972f4;
        case 0x3972f8u: goto label_3972f8;
        case 0x3972fcu: goto label_3972fc;
        case 0x397300u: goto label_397300;
        case 0x397304u: goto label_397304;
        case 0x397308u: goto label_397308;
        case 0x39730cu: goto label_39730c;
        case 0x397310u: goto label_397310;
        case 0x397314u: goto label_397314;
        case 0x397318u: goto label_397318;
        case 0x39731cu: goto label_39731c;
        case 0x397320u: goto label_397320;
        case 0x397324u: goto label_397324;
        case 0x397328u: goto label_397328;
        case 0x39732cu: goto label_39732c;
        default: break;
    }

    ctx->pc = 0x397230u;

label_397230:
    // 0x397230: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x397230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_397234:
    // 0x397234: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x397234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_397238:
    // 0x397238: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x397238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39723c:
    // 0x39723c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x39723cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_397240:
    // 0x397240: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x397240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_397244:
    // 0x397244: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x397244u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_397248:
    // 0x397248: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x397248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_39724c:
    // 0x39724c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x39724cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_397250:
    // 0x397250: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x397250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_397254:
    // 0x397254: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x397254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_397258:
    // 0x397258: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x397258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_39725c:
    // 0x39725c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x39725cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_397260:
    // 0x397260: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x397260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_397264:
    // 0x397264: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x397264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_397268:
    // 0x397268: 0xc4c7000c  lwc1        $f7, 0xC($a2)
    ctx->pc = 0x397268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_39726c:
    // 0x39726c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x39726cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_397270:
    // 0x397270: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x397270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_397274:
    // 0x397274: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x397274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_397278:
    // 0x397278: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x397278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_39727c:
    // 0x39727c: 0xc4c50008  lwc1        $f5, 0x8($a2)
    ctx->pc = 0x39727cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_397280:
    // 0x397280: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x397280u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_397284:
    // 0x397284: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x397284u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_397288:
    // 0x397288: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x397288u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_39728c:
    // 0x39728c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x39728cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_397290:
    // 0x397290: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x397290u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_397294:
    // 0x397294: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x397294u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_397298:
    // 0x397298: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x397298u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_39729c:
    // 0x39729c: 0xc0e8b48  jal         func_3A2D20
label_3972a0:
    if (ctx->pc == 0x3972A0u) {
        ctx->pc = 0x3972A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39729Cu;
        // 0x3972a0: 0xe7a7001c  swc1        $f7, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3972A4u;
        goto label_3972a4;
    }
    ctx->pc = 0x39729Cu;
    SET_GPR_U32(ctx, 31, 0x3972A4u);
    ctx->pc = 0x3972A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39729Cu;
    // 0x3972a0: 0xe7a7001c  swc1        $f7, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x39729Cu, 0x3972A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3972A4u;
label_3972a4:
    // 0x3972a4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3972a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3972a8:
    // 0x3972a8: 0xc0e8b58  jal         func_3A2D60
label_3972ac:
    if (ctx->pc == 0x3972ACu) {
        ctx->pc = 0x3972ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3972A8u;
        // 0x3972ac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3972B0u;
        goto label_3972b0;
    }
    ctx->pc = 0x3972A8u;
    SET_GPR_U32(ctx, 31, 0x3972B0u);
    ctx->pc = 0x3972ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3972A8u;
    // 0x3972ac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3972A8u, 0x3972B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3972B0u;
label_3972b0:
    // 0x3972b0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3972b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3972b4:
    // 0x3972b4: 0xc0e8b58  jal         func_3A2D60
label_3972b8:
    if (ctx->pc == 0x3972B8u) {
        ctx->pc = 0x3972B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3972B4u;
        // 0x3972b8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3972BCu;
        goto label_3972bc;
    }
    ctx->pc = 0x3972B4u;
    SET_GPR_U32(ctx, 31, 0x3972BCu);
    ctx->pc = 0x3972B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3972B4u;
    // 0x3972b8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3972B4u, 0x3972BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3972BCu;
label_3972bc:
    // 0x3972bc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3972bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3972c0:
    // 0x3972c0: 0xc0e8b68  jal         func_3A2DA0
label_3972c4:
    if (ctx->pc == 0x3972C4u) {
        ctx->pc = 0x3972C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3972C0u;
        // 0x3972c4: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3972C8u;
        goto label_3972c8;
    }
    ctx->pc = 0x3972C0u;
    SET_GPR_U32(ctx, 31, 0x3972C8u);
    ctx->pc = 0x3972C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3972C0u;
    // 0x3972c4: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3972C0u, 0x3972C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3972C8u;
label_3972c8:
    // 0x3972c8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3972c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3972cc:
    // 0x3972cc: 0xc0e8b68  jal         func_3A2DA0
label_3972d0:
    if (ctx->pc == 0x3972D0u) {
        ctx->pc = 0x3972D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3972CCu;
        // 0x3972d0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3972D4u;
        goto label_3972d4;
    }
    ctx->pc = 0x3972CCu;
    SET_GPR_U32(ctx, 31, 0x3972D4u);
    ctx->pc = 0x3972D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3972CCu;
    // 0x3972d0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3972CCu, 0x3972D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3972D4u;
label_3972d4:
    // 0x3972d4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3972d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3972d8:
    // 0x3972d8: 0xc0e8b68  jal         func_3A2DA0
label_3972dc:
    if (ctx->pc == 0x3972DCu) {
        ctx->pc = 0x3972DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3972D8u;
        // 0x3972dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3972E0u;
        goto label_3972e0;
    }
    ctx->pc = 0x3972D8u;
    SET_GPR_U32(ctx, 31, 0x3972E0u);
    ctx->pc = 0x3972DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3972D8u;
    // 0x3972dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3972D8u, 0x3972E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3972E0u;
label_3972e0:
    // 0x3972e0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3972e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3972e4:
    // 0x3972e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3972e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3972e8:
    // 0x3972e8: 0xc0e8b98  jal         func_3A2E60
label_3972ec:
    if (ctx->pc == 0x3972ECu) {
        ctx->pc = 0x3972ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3972E8u;
        // 0x3972ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3972F0u;
        goto label_3972f0;
    }
    ctx->pc = 0x3972E8u;
    SET_GPR_U32(ctx, 31, 0x3972F0u);
    ctx->pc = 0x3972ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3972E8u;
    // 0x3972ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E60u, 0x3972E8u, 0x3972F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3972F0u;
label_3972f0:
    // 0x3972f0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3972f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3972f4:
    // 0x3972f4: 0xc0e8b50  jal         func_3A2D40
label_3972f8:
    if (ctx->pc == 0x3972F8u) {
        ctx->pc = 0x3972F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3972F4u;
        // 0x3972f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3972FCu;
        goto label_3972fc;
    }
    ctx->pc = 0x3972F4u;
    SET_GPR_U32(ctx, 31, 0x3972FCu);
    ctx->pc = 0x3972F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3972F4u;
    // 0x3972f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3972F4u, 0x3972FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3972FCu;
label_3972fc:
    // 0x3972fc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3972fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_397300:
    // 0x397300: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x397300u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_397304:
    // 0x397304: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x397304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_397308:
    // 0x397308: 0x40f809  jalr        $v0
label_39730c:
    if (ctx->pc == 0x39730Cu) {
        ctx->pc = 0x39730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397308u;
        // 0x39730c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397310u;
        goto label_397310;
    }
    ctx->pc = 0x397308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x397310u);
        ctx->pc = 0x39730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397308u;
        // 0x39730c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397308u, 0x397310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x397310u;
label_397310:
    // 0x397310: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x397310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_397314:
    // 0x397314: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x397314u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_397318:
    // 0x397318: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x397318u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39731c:
    // 0x39731c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39731cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_397320:
    // 0x397320: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x397320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_397324:
    // 0x397324: 0x3e00008  jr          $ra
label_397328:
    if (ctx->pc == 0x397328u) {
        ctx->pc = 0x397328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397324u;
        // 0x397328: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39732Cu;
        goto label_39732c;
    }
    ctx->pc = 0x397324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397324u;
        // 0x397328: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39732Cu;
label_39732c:
    // 0x39732c: 0x0  nop
    ctx->pc = 0x39732cu;
    // NOP
    ctx->pc = 0x397330u;
}
