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

// Function: sub_003C72D8
// Address: 0x3c72d8 - 0x3c73c8
void sub_003C72D8_0x3c72d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C72D8_0x3c72d8");
#endif

    switch (ctx->pc) {
        case 0x3c72d8u: goto label_3c72d8;
        case 0x3c72dcu: goto label_3c72dc;
        case 0x3c72e0u: goto label_3c72e0;
        case 0x3c72e4u: goto label_3c72e4;
        case 0x3c72e8u: goto label_3c72e8;
        case 0x3c72ecu: goto label_3c72ec;
        case 0x3c72f0u: goto label_3c72f0;
        case 0x3c72f4u: goto label_3c72f4;
        case 0x3c72f8u: goto label_3c72f8;
        case 0x3c72fcu: goto label_3c72fc;
        case 0x3c7300u: goto label_3c7300;
        case 0x3c7304u: goto label_3c7304;
        case 0x3c7308u: goto label_3c7308;
        case 0x3c730cu: goto label_3c730c;
        case 0x3c7310u: goto label_3c7310;
        case 0x3c7314u: goto label_3c7314;
        case 0x3c7318u: goto label_3c7318;
        case 0x3c731cu: goto label_3c731c;
        case 0x3c7320u: goto label_3c7320;
        case 0x3c7324u: goto label_3c7324;
        case 0x3c7328u: goto label_3c7328;
        case 0x3c732cu: goto label_3c732c;
        case 0x3c7330u: goto label_3c7330;
        case 0x3c7334u: goto label_3c7334;
        case 0x3c7338u: goto label_3c7338;
        case 0x3c733cu: goto label_3c733c;
        case 0x3c7340u: goto label_3c7340;
        case 0x3c7344u: goto label_3c7344;
        case 0x3c7348u: goto label_3c7348;
        case 0x3c734cu: goto label_3c734c;
        case 0x3c7350u: goto label_3c7350;
        case 0x3c7354u: goto label_3c7354;
        case 0x3c7358u: goto label_3c7358;
        case 0x3c735cu: goto label_3c735c;
        case 0x3c7360u: goto label_3c7360;
        case 0x3c7364u: goto label_3c7364;
        case 0x3c7368u: goto label_3c7368;
        case 0x3c736cu: goto label_3c736c;
        case 0x3c7370u: goto label_3c7370;
        case 0x3c7374u: goto label_3c7374;
        case 0x3c7378u: goto label_3c7378;
        case 0x3c737cu: goto label_3c737c;
        case 0x3c7380u: goto label_3c7380;
        case 0x3c7384u: goto label_3c7384;
        case 0x3c7388u: goto label_3c7388;
        case 0x3c738cu: goto label_3c738c;
        case 0x3c7390u: goto label_3c7390;
        case 0x3c7394u: goto label_3c7394;
        case 0x3c7398u: goto label_3c7398;
        case 0x3c739cu: goto label_3c739c;
        case 0x3c73a0u: goto label_3c73a0;
        case 0x3c73a4u: goto label_3c73a4;
        case 0x3c73a8u: goto label_3c73a8;
        case 0x3c73acu: goto label_3c73ac;
        case 0x3c73b0u: goto label_3c73b0;
        case 0x3c73b4u: goto label_3c73b4;
        case 0x3c73b8u: goto label_3c73b8;
        case 0x3c73bcu: goto label_3c73bc;
        case 0x3c73c0u: goto label_3c73c0;
        case 0x3c73c4u: goto label_3c73c4;
        default: break;
    }

    ctx->pc = 0x3c72d8u;

label_3c72d8:
    // 0x3c72d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c72d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3c72dc:
    // 0x3c72dc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3c72dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3c72e0:
    // 0x3c72e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3c72e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3c72e4:
    // 0x3c72e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c72e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c72e8:
    // 0x3c72e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c72e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c72ec:
    // 0x3c72ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c72ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3c72f0:
    // 0x3c72f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3c72f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c72f4:
    // 0x3c72f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3c72f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c72f8:
    // 0x3c72f8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c72f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c72fc:
    // 0x3c72fc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c72fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c7300:
    // 0x3c7300: 0x40f809  jalr        $v0
label_3c7304:
    if (ctx->pc == 0x3C7304u) {
        ctx->pc = 0x3C7304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7300u;
        // 0x3c7304: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7308u;
        goto label_3c7308;
    }
    ctx->pc = 0x3C7300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C7308u);
        ctx->pc = 0x3C7304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7300u;
        // 0x3c7304: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7300u, 0x3C7308u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C7308u;
label_3c7308:
    // 0x3c7308: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c7308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c730c:
    // 0x3c730c: 0xc0ea13a  jal         func_3A84E8
label_3c7310:
    if (ctx->pc == 0x3C7310u) {
        ctx->pc = 0x3C7310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C730Cu;
        // 0x3c7310: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7314u;
        goto label_3c7314;
    }
    ctx->pc = 0x3C730Cu;
    SET_GPR_U32(ctx, 31, 0x3C7314u);
    ctx->pc = 0x3C7310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C730Cu;
    // 0x3c7310: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3C730Cu, 0x3C7314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7314u;
label_3c7314:
    // 0x3c7314: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c7314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c7318:
    // 0x3c7318: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x3c7318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3c731c:
    // 0x3c731c: 0xc0ea12a  jal         func_3A84A8
label_3c7320:
    if (ctx->pc == 0x3C7320u) {
        ctx->pc = 0x3C7320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C731Cu;
        // 0x3c7320: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7324u;
        goto label_3c7324;
    }
    ctx->pc = 0x3C731Cu;
    SET_GPR_U32(ctx, 31, 0x3C7324u);
    ctx->pc = 0x3C7320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C731Cu;
    // 0x3c7320: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C731Cu, 0x3C7324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7324u;
label_3c7324:
    // 0x3c7324: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3c7324u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c7328:
    // 0x3c7328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c7328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c732c:
    // 0x3c732c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3c732cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3c7330:
    // 0x3c7330: 0xc0e858c  jal         func_3A1630
label_3c7334:
    if (ctx->pc == 0x3C7334u) {
        ctx->pc = 0x3C7334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7330u;
        // 0x3c7334: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7338u;
        goto label_3c7338;
    }
    ctx->pc = 0x3C7330u;
    SET_GPR_U32(ctx, 31, 0x3C7338u);
    ctx->pc = 0x3C7334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7330u;
    // 0x3c7334: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C7330u, 0x3C7338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7338u;
label_3c7338:
    // 0x3c7338: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3c7338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_3c733c:
    // 0x3c733c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3c733cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3c7340:
    // 0x3c7340: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x3c7340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_3c7344:
    // 0x3c7344: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3c7344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3c7348:
    // 0x3c7348: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3c7348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3c734c:
    // 0x3c734c: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x3c734cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_3c7350:
    // 0x3c7350: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c7350u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c7354:
    // 0x3c7354: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c7354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c7358:
    // 0x3c7358: 0x3c014026  lui         $at, 0x4026
    ctx->pc = 0x3c7358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16422 << 16));
label_3c735c:
    // 0x3c735c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3c735cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3c7360:
    // 0x3c7360: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c7360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c7364:
    // 0x3c7364: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3c7364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3c7368:
    // 0x3c7368: 0xc0cd508  jal         func_335420
label_3c736c:
    if (ctx->pc == 0x3C736Cu) {
        ctx->pc = 0x3C736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7368u;
        // 0x3c736c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7370u;
        goto label_3c7370;
    }
    ctx->pc = 0x3C7368u;
    SET_GPR_U32(ctx, 31, 0x3C7370u);
    ctx->pc = 0x3C736Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7368u;
    // 0x3c736c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3C7368u, 0x3C7370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7370u;
label_3c7370:
    // 0x3c7370: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x3c7370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c7374:
    // 0x3c7374: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c7374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c7378:
    // 0x3c7378: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c7378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c737c:
    // 0x3c737c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3c737cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3c7380:
    // 0x3c7380: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3c7380u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3c7384:
    // 0x3c7384: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3c7384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c7388:
    // 0x3c7388: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x3c7388u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3c738c:
    // 0x3c738c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x3c738cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3c7390:
    // 0x3c7390: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3c7390u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3c7394:
    // 0x3c7394: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3c7394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3c7398:
    // 0x3c7398: 0x60f809  jalr        $v1
label_3c739c:
    if (ctx->pc == 0x3C739Cu) {
        ctx->pc = 0x3C739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7398u;
        // 0x3c739c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C73A0u;
        goto label_3c73a0;
    }
    ctx->pc = 0x3C7398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C73A0u);
        ctx->pc = 0x3C739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7398u;
        // 0x3c739c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7398u, 0x3C73A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C73A0u;
label_3c73a0:
    // 0x3c73a0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3c73a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3c73a4:
    // 0x3c73a4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3c73a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c73a8:
    // 0x3c73a8: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x3c73a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
label_3c73ac:
    // 0x3c73ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c73acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c73b0:
    // 0x3c73b0: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3c73b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3c73b4:
    // 0x3c73b4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3c73b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c73b8:
    // 0x3c73b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c73b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3c73bc:
    // 0x3c73bc: 0x3e00008  jr          $ra
label_3c73c0:
    if (ctx->pc == 0x3C73C0u) {
        ctx->pc = 0x3C73C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C73BCu;
        // 0x3c73c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C73C4u;
        goto label_3c73c4;
    }
    ctx->pc = 0x3C73BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C73C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C73BCu;
        // 0x3c73c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C73BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C73C4u;
label_3c73c4:
    // 0x3c73c4: 0x0  nop
    ctx->pc = 0x3c73c4u;
    // NOP
    ctx->pc = 0x3c73c8u;
}
