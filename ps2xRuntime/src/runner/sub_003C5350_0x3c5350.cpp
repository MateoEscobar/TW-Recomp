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

// Function: sub_003C5350
// Address: 0x3c5350 - 0x3c5490
void sub_003C5350_0x3c5350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5350_0x3c5350");
#endif

    switch (ctx->pc) {
        case 0x3c5350u: goto label_3c5350;
        case 0x3c5354u: goto label_3c5354;
        case 0x3c5358u: goto label_3c5358;
        case 0x3c535cu: goto label_3c535c;
        case 0x3c5360u: goto label_3c5360;
        case 0x3c5364u: goto label_3c5364;
        case 0x3c5368u: goto label_3c5368;
        case 0x3c536cu: goto label_3c536c;
        case 0x3c5370u: goto label_3c5370;
        case 0x3c5374u: goto label_3c5374;
        case 0x3c5378u: goto label_3c5378;
        case 0x3c537cu: goto label_3c537c;
        case 0x3c5380u: goto label_3c5380;
        case 0x3c5384u: goto label_3c5384;
        case 0x3c5388u: goto label_3c5388;
        case 0x3c538cu: goto label_3c538c;
        case 0x3c5390u: goto label_3c5390;
        case 0x3c5394u: goto label_3c5394;
        case 0x3c5398u: goto label_3c5398;
        case 0x3c539cu: goto label_3c539c;
        case 0x3c53a0u: goto label_3c53a0;
        case 0x3c53a4u: goto label_3c53a4;
        case 0x3c53a8u: goto label_3c53a8;
        case 0x3c53acu: goto label_3c53ac;
        case 0x3c53b0u: goto label_3c53b0;
        case 0x3c53b4u: goto label_3c53b4;
        case 0x3c53b8u: goto label_3c53b8;
        case 0x3c53bcu: goto label_3c53bc;
        case 0x3c53c0u: goto label_3c53c0;
        case 0x3c53c4u: goto label_3c53c4;
        case 0x3c53c8u: goto label_3c53c8;
        case 0x3c53ccu: goto label_3c53cc;
        case 0x3c53d0u: goto label_3c53d0;
        case 0x3c53d4u: goto label_3c53d4;
        case 0x3c53d8u: goto label_3c53d8;
        case 0x3c53dcu: goto label_3c53dc;
        case 0x3c53e0u: goto label_3c53e0;
        case 0x3c53e4u: goto label_3c53e4;
        case 0x3c53e8u: goto label_3c53e8;
        case 0x3c53ecu: goto label_3c53ec;
        case 0x3c53f0u: goto label_3c53f0;
        case 0x3c53f4u: goto label_3c53f4;
        case 0x3c53f8u: goto label_3c53f8;
        case 0x3c53fcu: goto label_3c53fc;
        case 0x3c5400u: goto label_3c5400;
        case 0x3c5404u: goto label_3c5404;
        case 0x3c5408u: goto label_3c5408;
        case 0x3c540cu: goto label_3c540c;
        case 0x3c5410u: goto label_3c5410;
        case 0x3c5414u: goto label_3c5414;
        case 0x3c5418u: goto label_3c5418;
        case 0x3c541cu: goto label_3c541c;
        case 0x3c5420u: goto label_3c5420;
        case 0x3c5424u: goto label_3c5424;
        case 0x3c5428u: goto label_3c5428;
        case 0x3c542cu: goto label_3c542c;
        case 0x3c5430u: goto label_3c5430;
        case 0x3c5434u: goto label_3c5434;
        case 0x3c5438u: goto label_3c5438;
        case 0x3c543cu: goto label_3c543c;
        case 0x3c5440u: goto label_3c5440;
        case 0x3c5444u: goto label_3c5444;
        case 0x3c5448u: goto label_3c5448;
        case 0x3c544cu: goto label_3c544c;
        case 0x3c5450u: goto label_3c5450;
        case 0x3c5454u: goto label_3c5454;
        case 0x3c5458u: goto label_3c5458;
        case 0x3c545cu: goto label_3c545c;
        case 0x3c5460u: goto label_3c5460;
        case 0x3c5464u: goto label_3c5464;
        case 0x3c5468u: goto label_3c5468;
        case 0x3c546cu: goto label_3c546c;
        case 0x3c5470u: goto label_3c5470;
        case 0x3c5474u: goto label_3c5474;
        case 0x3c5478u: goto label_3c5478;
        case 0x3c547cu: goto label_3c547c;
        case 0x3c5480u: goto label_3c5480;
        case 0x3c5484u: goto label_3c5484;
        case 0x3c5488u: goto label_3c5488;
        case 0x3c548cu: goto label_3c548c;
        default: break;
    }

    ctx->pc = 0x3c5350u;

label_3c5350:
    // 0x3c5350: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3c5350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3c5354:
    // 0x3c5354: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3c5354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3c5358:
    // 0x3c5358: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3c5358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3c535c:
    // 0x3c535c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c535cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c5360:
    // 0x3c5360: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3c5360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3c5364:
    // 0x3c5364: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c5364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c5368:
    // 0x3c5368: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3c5368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3c536c:
    // 0x3c536c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3c536cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3c5370:
    // 0x3c5370: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x3c5370u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3c5374:
    // 0x3c5374: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x3c5374u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3c5378:
    // 0x3c5378: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x3c5378u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3c537c:
    // 0x3c537c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x3c537cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3c5380:
    // 0x3c5380: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3c5380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c5384:
    // 0x3c5384: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c5384u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c5388:
    // 0x3c5388: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c5388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c538c:
    // 0x3c538c: 0x40f809  jalr        $v0
label_3c5390:
    if (ctx->pc == 0x3C5390u) {
        ctx->pc = 0x3C5390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C538Cu;
        // 0x3c5390: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C5394u;
        goto label_3c5394;
    }
    ctx->pc = 0x3C538Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C5394u);
        ctx->pc = 0x3C5390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C538Cu;
        // 0x3c5390: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C538Cu, 0x3C5394u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C5394u;
label_3c5394:
    // 0x3c5394: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c5394u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c5398:
    // 0x3c5398: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c5398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c539c:
    // 0x3c539c: 0xc0ea12a  jal         func_3A84A8
label_3c53a0:
    if (ctx->pc == 0x3C53A0u) {
        ctx->pc = 0x3C53A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C539Cu;
        // 0x3c53a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C53A4u;
        goto label_3c53a4;
    }
    ctx->pc = 0x3C539Cu;
    SET_GPR_U32(ctx, 31, 0x3C53A4u);
    ctx->pc = 0x3C53A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C539Cu;
    // 0x3c53a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C539Cu, 0x3C53A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C53A4u;
label_3c53a4:
    // 0x3c53a4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c53a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c53a8:
    // 0x3c53a8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c53a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c53ac:
    // 0x3c53ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c53acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c53b0:
    // 0x3c53b0: 0xc0ea12a  jal         func_3A84A8
label_3c53b4:
    if (ctx->pc == 0x3C53B4u) {
        ctx->pc = 0x3C53B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C53B0u;
        // 0x3c53b4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C53B8u;
        goto label_3c53b8;
    }
    ctx->pc = 0x3C53B0u;
    SET_GPR_U32(ctx, 31, 0x3C53B8u);
    ctx->pc = 0x3C53B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C53B0u;
    // 0x3c53b4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C53B0u, 0x3C53B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C53B8u;
label_3c53b8:
    // 0x3c53b8: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3c53b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c53bc:
    // 0x3c53bc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3c53bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3c53c0:
    // 0x3c53c0: 0x8c452e58  lw          $a1, 0x2E58($v0)
    ctx->pc = 0x3c53c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11864)));
label_3c53c4:
    // 0x3c53c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c53c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c53c8:
    // 0x3c53c8: 0xc0e858c  jal         func_3A1630
label_3c53cc:
    if (ctx->pc == 0x3C53CCu) {
        ctx->pc = 0x3C53CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C53C8u;
        // 0x3c53cc: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C53D0u;
        goto label_3c53d0;
    }
    ctx->pc = 0x3C53C8u;
    SET_GPR_U32(ctx, 31, 0x3C53D0u);
    ctx->pc = 0x3C53CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C53C8u;
    // 0x3c53cc: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C53C8u, 0x3C53D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C53D0u;
label_3c53d0:
    // 0x3c53d0: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3c53d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_3c53d4:
    // 0x3c53d4: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x3c53d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
label_3c53d8:
    // 0x3c53d8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x3c53d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_3c53dc:
    // 0x3c53dc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3c53dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3c53e0:
    // 0x3c53e0: 0x7ba70000  lq          $a3, 0x0($sp)
    ctx->pc = 0x3c53e0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c53e4:
    // 0x3c53e4: 0x34c60011  ori         $a2, $a2, 0x11
    ctx->pc = 0x3c53e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)17);
label_3c53e8:
    // 0x3c53e8: 0xc61600bc  lwc1        $f22, 0xBC($s0)
    ctx->pc = 0x3c53e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3c53ec:
    // 0x3c53ec: 0x34a5fff0  ori         $a1, $a1, 0xFFF0
    ctx->pc = 0x3c53ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65520);
label_3c53f0:
    // 0x3c53f0: 0x3463ffbf  ori         $v1, $v1, 0xFFBF
    ctx->pc = 0x3c53f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65471);
label_3c53f4:
    // 0x3c53f4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x3c53f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_3c53f8:
    // 0x3c53f8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3c53f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3c53fc:
    // 0x3c53fc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3c53fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3c5400:
    // 0x3c5400: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c5400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c5404:
    // 0x3c5404: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3c5404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3c5408:
    // 0x3c5408: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3c5408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3c540c:
    // 0x3c540c: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3c540cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3c5410:
    // 0x3c5410: 0x7e070010  sq          $a3, 0x10($s0)
    ctx->pc = 0x3c5410u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 7));
label_3c5414:
    // 0x3c5414: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3c5414u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3c5418:
    // 0x3c5418: 0xae0600c4  sw          $a2, 0xC4($s0)
    ctx->pc = 0x3c5418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 6));
label_3c541c:
    // 0x3c541c: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x3c541cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_3c5420:
    // 0x3c5420: 0xc0cd518  jal         func_335460
label_3c5424:
    if (ctx->pc == 0x3C5424u) {
        ctx->pc = 0x3C5424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5420u;
        // 0x3c5424: 0xae0300b4  sw          $v1, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C5428u;
        goto label_3c5428;
    }
    ctx->pc = 0x3C5420u;
    SET_GPR_U32(ctx, 31, 0x3C5428u);
    ctx->pc = 0x3C5424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5420u;
    // 0x3c5424: 0xae0300b4  sw          $v1, 0xB4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C5420u, 0x3C5428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5428u;
label_3c5428:
    // 0x3c5428: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c5428u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3c542c:
    // 0x3c542c: 0xc12e310  jal         func_4B8C40
label_3c5430:
    if (ctx->pc == 0x3C5430u) {
        ctx->pc = 0x3C5430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C542Cu;
        // 0x3c5430: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C5434u;
        goto label_3c5434;
    }
    ctx->pc = 0x3C542Cu;
    SET_GPR_U32(ctx, 31, 0x3C5434u);
    ctx->pc = 0x3C5430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C542Cu;
    // 0x3c5430: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x3C542Cu, 0x3C5434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5434u;
label_3c5434:
    // 0x3c5434: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3c5434u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3c5438:
    // 0x3c5438: 0xc12e29c  jal         func_4B8A70
label_3c543c:
    if (ctx->pc == 0x3C543Cu) {
        ctx->pc = 0x3C543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5438u;
        // 0x3c543c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C5440u;
        goto label_3c5440;
    }
    ctx->pc = 0x3C5438u;
    SET_GPR_U32(ctx, 31, 0x3C5440u);
    ctx->pc = 0x3C543Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5438u;
    // 0x3c543c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x3C5438u, 0x3C5440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5440u;
label_3c5440:
    // 0x3c5440: 0xe7b50034  swc1        $f21, 0x34($sp)
    ctx->pc = 0x3c5440u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3c5444:
    // 0x3c5444: 0xe7b60038  swc1        $f22, 0x38($sp)
    ctx->pc = 0x3c5444u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3c5448:
    // 0x3c5448: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x3c5448u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3c544c:
    // 0x3c544c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3c544cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_3c5450:
    // 0x3c5450: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3c5450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c5454:
    // 0x3c5454: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3c5454u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c5458:
    // 0x3c5458: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3c5458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c545c:
    // 0x3c545c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3c545cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3c5460:
    // 0x3c5460: 0x7e620010  sq          $v0, 0x10($s3)
    ctx->pc = 0x3c5460u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
label_3c5464:
    // 0x3c5464: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3c5464u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3c5468:
    // 0x3c5468: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3c5468u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c546c:
    // 0x3c546c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3c546cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c5470:
    // 0x3c5470: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3c5470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3c5474:
    // 0x3c5474: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x3c5474u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
label_3c5478:
    // 0x3c5478: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3c5478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c547c:
    // 0x3c547c: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x3c547cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3c5480:
    // 0x3c5480: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x3c5480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3c5484:
    // 0x3c5484: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x3c5484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c5488:
    // 0x3c5488: 0x3e00008  jr          $ra
label_3c548c:
    if (ctx->pc == 0x3C548Cu) {
        ctx->pc = 0x3C548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5488u;
        // 0x3c548c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C5490u;
        goto label_fallthrough_0x3c5488;
    }
    ctx->pc = 0x3C5488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5488u;
        // 0x3c548c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c5488:
    ctx->pc = 0x3C5490u;
}
