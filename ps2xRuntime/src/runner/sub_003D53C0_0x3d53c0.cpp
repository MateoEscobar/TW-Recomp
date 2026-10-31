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

// Function: sub_003D53C0
// Address: 0x3d53c0 - 0x3d54e0
void sub_003D53C0_0x3d53c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D53C0_0x3d53c0");
#endif

    switch (ctx->pc) {
        case 0x3d53c0u: goto label_3d53c0;
        case 0x3d53c4u: goto label_3d53c4;
        case 0x3d53c8u: goto label_3d53c8;
        case 0x3d53ccu: goto label_3d53cc;
        case 0x3d53d0u: goto label_3d53d0;
        case 0x3d53d4u: goto label_3d53d4;
        case 0x3d53d8u: goto label_3d53d8;
        case 0x3d53dcu: goto label_3d53dc;
        case 0x3d53e0u: goto label_3d53e0;
        case 0x3d53e4u: goto label_3d53e4;
        case 0x3d53e8u: goto label_3d53e8;
        case 0x3d53ecu: goto label_3d53ec;
        case 0x3d53f0u: goto label_3d53f0;
        case 0x3d53f4u: goto label_3d53f4;
        case 0x3d53f8u: goto label_3d53f8;
        case 0x3d53fcu: goto label_3d53fc;
        case 0x3d5400u: goto label_3d5400;
        case 0x3d5404u: goto label_3d5404;
        case 0x3d5408u: goto label_3d5408;
        case 0x3d540cu: goto label_3d540c;
        case 0x3d5410u: goto label_3d5410;
        case 0x3d5414u: goto label_3d5414;
        case 0x3d5418u: goto label_3d5418;
        case 0x3d541cu: goto label_3d541c;
        case 0x3d5420u: goto label_3d5420;
        case 0x3d5424u: goto label_3d5424;
        case 0x3d5428u: goto label_3d5428;
        case 0x3d542cu: goto label_3d542c;
        case 0x3d5430u: goto label_3d5430;
        case 0x3d5434u: goto label_3d5434;
        case 0x3d5438u: goto label_3d5438;
        case 0x3d543cu: goto label_3d543c;
        case 0x3d5440u: goto label_3d5440;
        case 0x3d5444u: goto label_3d5444;
        case 0x3d5448u: goto label_3d5448;
        case 0x3d544cu: goto label_3d544c;
        case 0x3d5450u: goto label_3d5450;
        case 0x3d5454u: goto label_3d5454;
        case 0x3d5458u: goto label_3d5458;
        case 0x3d545cu: goto label_3d545c;
        case 0x3d5460u: goto label_3d5460;
        case 0x3d5464u: goto label_3d5464;
        case 0x3d5468u: goto label_3d5468;
        case 0x3d546cu: goto label_3d546c;
        case 0x3d5470u: goto label_3d5470;
        case 0x3d5474u: goto label_3d5474;
        case 0x3d5478u: goto label_3d5478;
        case 0x3d547cu: goto label_3d547c;
        case 0x3d5480u: goto label_3d5480;
        case 0x3d5484u: goto label_3d5484;
        case 0x3d5488u: goto label_3d5488;
        case 0x3d548cu: goto label_3d548c;
        case 0x3d5490u: goto label_3d5490;
        case 0x3d5494u: goto label_3d5494;
        case 0x3d5498u: goto label_3d5498;
        case 0x3d549cu: goto label_3d549c;
        case 0x3d54a0u: goto label_3d54a0;
        case 0x3d54a4u: goto label_3d54a4;
        case 0x3d54a8u: goto label_3d54a8;
        case 0x3d54acu: goto label_3d54ac;
        case 0x3d54b0u: goto label_3d54b0;
        case 0x3d54b4u: goto label_3d54b4;
        case 0x3d54b8u: goto label_3d54b8;
        case 0x3d54bcu: goto label_3d54bc;
        case 0x3d54c0u: goto label_3d54c0;
        case 0x3d54c4u: goto label_3d54c4;
        case 0x3d54c8u: goto label_3d54c8;
        case 0x3d54ccu: goto label_3d54cc;
        case 0x3d54d0u: goto label_3d54d0;
        case 0x3d54d4u: goto label_3d54d4;
        case 0x3d54d8u: goto label_3d54d8;
        case 0x3d54dcu: goto label_3d54dc;
        default: break;
    }

    ctx->pc = 0x3d53c0u;

label_3d53c0:
    // 0x3d53c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3d53c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3d53c4:
    // 0x3d53c4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3d53c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3d53c8:
    // 0x3d53c8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3d53c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3d53cc:
    // 0x3d53cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d53ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d53d0:
    // 0x3d53d0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3d53d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3d53d4:
    // 0x3d53d4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3d53d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3d53d8:
    // 0x3d53d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3d53d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d53dc:
    // 0x3d53dc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3d53dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3d53e0:
    // 0x3d53e0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3d53e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_3d53e4:
    // 0x3d53e4: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3d53e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_3d53e8:
    // 0x3d53e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d53e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d53ec:
    // 0x3d53ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d53ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d53f0:
    // 0x3d53f0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d53f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d53f4:
    // 0x3d53f4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d53f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d53f8:
    // 0x3d53f8: 0x40f809  jalr        $v0
label_3d53fc:
    if (ctx->pc == 0x3D53FCu) {
        ctx->pc = 0x3D53FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D53F8u;
        // 0x3d53fc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5400u;
        goto label_3d5400;
    }
    ctx->pc = 0x3D53F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D5400u);
        ctx->pc = 0x3D53FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D53F8u;
        // 0x3d53fc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D53F8u, 0x3D5400u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D5400u;
label_3d5400:
    // 0x3d5400: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3d5400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3d5404:
    // 0x3d5404: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d5404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d5408:
    // 0x3d5408: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x3d5408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_3d540c:
    // 0x3d540c: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3d540cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3d5410:
    // 0x3d5410: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3d5410u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5414:
    // 0x3d5414: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x3d5414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_3d5418:
    // 0x3d5418: 0xc0ea146  jal         func_3A8518
label_3d541c:
    if (ctx->pc == 0x3D541Cu) {
        ctx->pc = 0x3D541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5418u;
        // 0x3d541c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5420u;
        goto label_3d5420;
    }
    ctx->pc = 0x3D5418u;
    SET_GPR_U32(ctx, 31, 0x3D5420u);
    ctx->pc = 0x3D541Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5418u;
    // 0x3d541c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D5418u, 0x3D5420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5420u;
label_3d5420:
    // 0x3d5420: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3d5420u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5424:
    // 0x3d5424: 0xc0ea146  jal         func_3A8518
label_3d5428:
    if (ctx->pc == 0x3D5428u) {
        ctx->pc = 0x3D5428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5424u;
        // 0x3d5428: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D542Cu;
        goto label_3d542c;
    }
    ctx->pc = 0x3D5424u;
    SET_GPR_U32(ctx, 31, 0x3D542Cu);
    ctx->pc = 0x3D5428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5424u;
    // 0x3d5428: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D5424u, 0x3D542Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D542Cu;
label_3d542c:
    // 0x3d542c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3d542cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5430:
    // 0x3d5430: 0xc0ea146  jal         func_3A8518
label_3d5434:
    if (ctx->pc == 0x3D5434u) {
        ctx->pc = 0x3D5434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5430u;
        // 0x3d5434: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5438u;
        goto label_3d5438;
    }
    ctx->pc = 0x3D5430u;
    SET_GPR_U32(ctx, 31, 0x3D5438u);
    ctx->pc = 0x3D5434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5430u;
    // 0x3d5434: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D5430u, 0x3D5438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5438u;
label_3d5438:
    // 0x3d5438: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d5438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d543c:
    // 0x3d543c: 0xc0ea14c  jal         func_3A8530
label_3d5440:
    if (ctx->pc == 0x3D5440u) {
        ctx->pc = 0x3D5440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D543Cu;
        // 0x3d5440: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5444u;
        goto label_3d5444;
    }
    ctx->pc = 0x3D543Cu;
    SET_GPR_U32(ctx, 31, 0x3D5444u);
    ctx->pc = 0x3D5440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D543Cu;
    // 0x3d5440: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D543Cu, 0x3D5444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5444u;
label_3d5444:
    // 0x3d5444: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3d5444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3d5448:
    // 0x3d5448: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d5448u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d544c:
    // 0x3d544c: 0xc0ea12a  jal         func_3A84A8
label_3d5450:
    if (ctx->pc == 0x3D5450u) {
        ctx->pc = 0x3D5450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D544Cu;
        // 0x3d5450: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5454u;
        goto label_3d5454;
    }
    ctx->pc = 0x3D544Cu;
    SET_GPR_U32(ctx, 31, 0x3D5454u);
    ctx->pc = 0x3D5450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D544Cu;
    // 0x3d5450: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D544Cu, 0x3D5454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5454u;
label_3d5454:
    // 0x3d5454: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3d5454u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d5458:
    // 0x3d5458: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d5458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d545c:
    // 0x3d545c: 0xc0e896e  jal         func_3A25B8
label_3d5460:
    if (ctx->pc == 0x3D5460u) {
        ctx->pc = 0x3D5460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D545Cu;
        // 0x3d5460: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5464u;
        goto label_3d5464;
    }
    ctx->pc = 0x3D545Cu;
    SET_GPR_U32(ctx, 31, 0x3D5464u);
    ctx->pc = 0x3D5460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D545Cu;
    // 0x3d5460: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x3D545Cu, 0x3D5464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5464u;
label_3d5464:
    // 0x3d5464: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x3d5464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_3d5468:
    // 0x3d5468: 0x363100ff  ori         $s1, $s1, 0xFF
    ctx->pc = 0x3d5468u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)255);
label_3d546c:
    // 0x3d546c: 0xae1100b0  sw          $s1, 0xB0($s0)
    ctx->pc = 0x3d546cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 17));
label_3d5470:
    // 0x3d5470: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3d5470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3d5474:
    // 0x3d5474: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x3d5474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_3d5478:
    // 0x3d5478: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3d5478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d547c:
    // 0x3d547c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3d547cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3d5480:
    // 0x3d5480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d5480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d5484:
    // 0x3d5484: 0xc0e858c  jal         func_3A1630
label_3d5488:
    if (ctx->pc == 0x3D5488u) {
        ctx->pc = 0x3D5488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5484u;
        // 0x3d5488: 0x7e030030  sq          $v1, 0x30($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D548Cu;
        goto label_3d548c;
    }
    ctx->pc = 0x3D5484u;
    SET_GPR_U32(ctx, 31, 0x3D548Cu);
    ctx->pc = 0x3D5488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5484u;
    // 0x3d5488: 0x7e030030  sq          $v1, 0x30($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D5484u, 0x3D548Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D548Cu;
label_3d548c:
    // 0x3d548c: 0xae1500c4  sw          $s5, 0xC4($s0)
    ctx->pc = 0x3d548cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 21));
label_3d5490:
    // 0x3d5490: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x3d5490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_3d5494:
    // 0x3d5494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d5494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d5498:
    // 0x3d5498: 0xc0e9404  jal         func_3A5010
label_3d549c:
    if (ctx->pc == 0x3D549Cu) {
        ctx->pc = 0x3D549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5498u;
        // 0x3d549c: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D54A0u;
        goto label_3d54a0;
    }
    ctx->pc = 0x3D5498u;
    SET_GPR_U32(ctx, 31, 0x3D54A0u);
    ctx->pc = 0x3D549Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5498u;
    // 0x3d549c: 0x34a50002  ori         $a1, $a1, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5010u, 0x3D5498u, 0x3D54A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D54A0u;
label_3d54a0:
    // 0x3d54a0: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3d54a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d54a4:
    // 0x3d54a4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3d54a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3d54a8:
    // 0x3d54a8: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3d54a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3d54ac:
    // 0x3d54ac: 0x7ec30000  sq          $v1, 0x0($s6)
    ctx->pc = 0x3d54acu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 3));
label_3d54b0:
    // 0x3d54b0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3d54b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3d54b4:
    // 0x3d54b4: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3d54b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3d54b8:
    // 0x3d54b8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3d54b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d54bc:
    // 0x3d54bc: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x3d54bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_3d54c0:
    // 0x3d54c0: 0xaec00010  sw          $zero, 0x10($s6)
    ctx->pc = 0x3d54c0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 0));
label_3d54c4:
    // 0x3d54c4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3d54c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3d54c8:
    // 0x3d54c8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3d54c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d54cc:
    // 0x3d54cc: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3d54ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d54d0:
    // 0x3d54d0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3d54d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d54d4:
    // 0x3d54d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d54d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d54d8:
    // 0x3d54d8: 0x3e00008  jr          $ra
label_3d54dc:
    if (ctx->pc == 0x3D54DCu) {
        ctx->pc = 0x3D54DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D54D8u;
        // 0x3d54dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D54E0u;
        goto label_fallthrough_0x3d54d8;
    }
    ctx->pc = 0x3D54D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D54DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D54D8u;
        // 0x3d54dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D54D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d54d8:
    ctx->pc = 0x3D54E0u;
}
