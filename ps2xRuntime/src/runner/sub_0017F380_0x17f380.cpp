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

// Function: sub_0017F380
// Address: 0x17f380 - 0x17f4a0
void sub_0017F380_0x17f380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F380_0x17f380");
#endif

    switch (ctx->pc) {
        case 0x17f380u: goto label_17f380;
        case 0x17f384u: goto label_17f384;
        case 0x17f388u: goto label_17f388;
        case 0x17f38cu: goto label_17f38c;
        case 0x17f390u: goto label_17f390;
        case 0x17f394u: goto label_17f394;
        case 0x17f398u: goto label_17f398;
        case 0x17f39cu: goto label_17f39c;
        case 0x17f3a0u: goto label_17f3a0;
        case 0x17f3a4u: goto label_17f3a4;
        case 0x17f3a8u: goto label_17f3a8;
        case 0x17f3acu: goto label_17f3ac;
        case 0x17f3b0u: goto label_17f3b0;
        case 0x17f3b4u: goto label_17f3b4;
        case 0x17f3b8u: goto label_17f3b8;
        case 0x17f3bcu: goto label_17f3bc;
        case 0x17f3c0u: goto label_17f3c0;
        case 0x17f3c4u: goto label_17f3c4;
        case 0x17f3c8u: goto label_17f3c8;
        case 0x17f3ccu: goto label_17f3cc;
        case 0x17f3d0u: goto label_17f3d0;
        case 0x17f3d4u: goto label_17f3d4;
        case 0x17f3d8u: goto label_17f3d8;
        case 0x17f3dcu: goto label_17f3dc;
        case 0x17f3e0u: goto label_17f3e0;
        case 0x17f3e4u: goto label_17f3e4;
        case 0x17f3e8u: goto label_17f3e8;
        case 0x17f3ecu: goto label_17f3ec;
        case 0x17f3f0u: goto label_17f3f0;
        case 0x17f3f4u: goto label_17f3f4;
        case 0x17f3f8u: goto label_17f3f8;
        case 0x17f3fcu: goto label_17f3fc;
        case 0x17f400u: goto label_17f400;
        case 0x17f404u: goto label_17f404;
        case 0x17f408u: goto label_17f408;
        case 0x17f40cu: goto label_17f40c;
        case 0x17f410u: goto label_17f410;
        case 0x17f414u: goto label_17f414;
        case 0x17f418u: goto label_17f418;
        case 0x17f41cu: goto label_17f41c;
        case 0x17f420u: goto label_17f420;
        case 0x17f424u: goto label_17f424;
        case 0x17f428u: goto label_17f428;
        case 0x17f42cu: goto label_17f42c;
        case 0x17f430u: goto label_17f430;
        case 0x17f434u: goto label_17f434;
        case 0x17f438u: goto label_17f438;
        case 0x17f43cu: goto label_17f43c;
        case 0x17f440u: goto label_17f440;
        case 0x17f444u: goto label_17f444;
        case 0x17f448u: goto label_17f448;
        case 0x17f44cu: goto label_17f44c;
        case 0x17f450u: goto label_17f450;
        case 0x17f454u: goto label_17f454;
        case 0x17f458u: goto label_17f458;
        case 0x17f45cu: goto label_17f45c;
        case 0x17f460u: goto label_17f460;
        case 0x17f464u: goto label_17f464;
        case 0x17f468u: goto label_17f468;
        case 0x17f46cu: goto label_17f46c;
        case 0x17f470u: goto label_17f470;
        case 0x17f474u: goto label_17f474;
        case 0x17f478u: goto label_17f478;
        case 0x17f47cu: goto label_17f47c;
        case 0x17f480u: goto label_17f480;
        case 0x17f484u: goto label_17f484;
        case 0x17f488u: goto label_17f488;
        case 0x17f48cu: goto label_17f48c;
        case 0x17f490u: goto label_17f490;
        case 0x17f494u: goto label_17f494;
        case 0x17f498u: goto label_17f498;
        case 0x17f49cu: goto label_17f49c;
        default: break;
    }

    ctx->pc = 0x17f380u;

label_17f380:
    // 0x17f380: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17f380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_17f384:
    // 0x17f384: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x17f384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_17f388:
    // 0x17f388: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x17f388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_17f38c:
    // 0x17f38c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x17f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_17f390:
    // 0x17f390: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17f390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17f394:
    // 0x17f394: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17f394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17f398:
    // 0x17f398: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17f398u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17f39c:
    // 0x17f39c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x17f39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_17f3a0:
    // 0x17f3a0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x17f3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_17f3a4:
    // 0x17f3a4: 0x244289f8  addiu       $v0, $v0, -0x7608
    ctx->pc = 0x17f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937080));
label_17f3a8:
    // 0x17f3a8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x17f3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_17f3ac:
    // 0x17f3ac: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x17f3acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_17f3b0:
    // 0x17f3b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17f3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17f3b4:
    // 0x17f3b4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x17f3b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17f3b8:
    // 0x17f3b8: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x17f3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_17f3bc:
    // 0x17f3bc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x17f3bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17f3c0:
    // 0x17f3c0: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x17f3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_17f3c4:
    // 0x17f3c4: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x17f3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_17f3c8:
    // 0x17f3c8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x17f3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_17f3cc:
    // 0x17f3cc: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x17f3ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_17f3d0:
    // 0x17f3d0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x17f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_17f3d4:
    // 0x17f3d4: 0x40f809  jalr        $v0
label_17f3d8:
    if (ctx->pc == 0x17F3D8u) {
        ctx->pc = 0x17F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F3D4u;
        // 0x17f3d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F3DCu;
        goto label_17f3dc;
    }
    ctx->pc = 0x17F3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17F3DCu);
        ctx->pc = 0x17F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F3D4u;
        // 0x17f3d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F3D4u, 0x17F3DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17F3DCu;
label_17f3dc:
    // 0x17f3dc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x17f3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_17f3e0:
    // 0x17f3e0: 0x24420bb8  addiu       $v0, $v0, 0xBB8
    ctx->pc = 0x17f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3000));
label_17f3e4:
    // 0x17f3e4: 0x24638cc8  addiu       $v1, $v1, -0x7338
    ctx->pc = 0x17f3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937800));
label_17f3e8:
    // 0x17f3e8: 0xae700010  sw          $s0, 0x10($s3)
    ctx->pc = 0x17f3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 16));
label_17f3ec:
    // 0x17f3ec: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x17f3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
label_17f3f0:
    // 0x17f3f0: 0xae720028  sw          $s2, 0x28($s3)
    ctx->pc = 0x17f3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 18));
label_17f3f4:
    // 0x17f3f4: 0xae71000c  sw          $s1, 0xC($s3)
    ctx->pc = 0x17f3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 17));
label_17f3f8:
    // 0x17f3f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17f3f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f3fc:
    // 0x17f3fc: 0xae74001c  sw          $s4, 0x1C($s3)
    ctx->pc = 0x17f3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 20));
label_17f400:
    // 0x17f400: 0x24a5f278  addiu       $a1, $a1, -0xD88
    ctx->pc = 0x17f400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963832));
label_17f404:
    // 0x17f404: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17f404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17f408:
    // 0x17f408: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x17f408u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
label_17f40c:
    // 0x17f40c: 0xc11a7d2  jal         func_469F48
label_17f410:
    if (ctx->pc == 0x17F410u) {
        ctx->pc = 0x17F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F40Cu;
        // 0x17f410: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F414u;
        goto label_17f414;
    }
    ctx->pc = 0x17F40Cu;
    SET_GPR_U32(ctx, 31, 0x17F414u);
    ctx->pc = 0x17F410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F40Cu;
    // 0x17f410: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469F48u, 0x17F40Cu, 0x17F414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F414u;
label_17f414:
    // 0x17f414: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x17f414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_17f418:
    // 0x17f418: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x17f418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_17f41c:
    // 0x17f41c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x17f41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_17f420:
    // 0x17f420: 0x8c43ffd8  lw          $v1, -0x28($v0)
    ctx->pc = 0x17f420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967256)));
label_17f424:
    // 0x17f424: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x17f424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_17f428:
    // 0x17f428: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x17f428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_17f42c:
    // 0x17f42c: 0x88820007  lwl         $v0, 0x7($a0)
    ctx->pc = 0x17f42cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_17f430:
    // 0x17f430: 0x98820004  lwr         $v0, 0x4($a0)
    ctx->pc = 0x17f430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_17f434:
    // 0x17f434: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x17f434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_17f438:
    // 0x17f438: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x17f438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_17f43c:
    // 0x17f43c: 0xae660024  sw          $a2, 0x24($s3)
    ctx->pc = 0x17f43cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 6));
label_17f440:
    // 0x17f440: 0x93a60002  lbu         $a2, 0x2($sp)
    ctx->pc = 0x17f440u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_17f444:
    // 0x17f444: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x17f444u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_17f448:
    // 0x17f448: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x17f448u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_17f44c:
    // 0x17f44c: 0x93a50001  lbu         $a1, 0x1($sp)
    ctx->pc = 0x17f44cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_17f450:
    // 0x17f450: 0xa2620023  sb          $v0, 0x23($s3)
    ctx->pc = 0x17f450u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 35), (uint8_t)GPR_U32(ctx, 2));
label_17f454:
    // 0x17f454: 0xa2630020  sb          $v1, 0x20($s3)
    ctx->pc = 0x17f454u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 32), (uint8_t)GPR_U32(ctx, 3));
label_17f458:
    // 0x17f458: 0xa2650021  sb          $a1, 0x21($s3)
    ctx->pc = 0x17f458u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 33), (uint8_t)GPR_U32(ctx, 5));
label_17f45c:
    // 0x17f45c: 0xc1194f6  jal         func_4653D8
label_17f460:
    if (ctx->pc == 0x17F460u) {
        ctx->pc = 0x17F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F45Cu;
        // 0x17f460: 0xa2660022  sb          $a2, 0x22($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 34), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F464u;
        goto label_17f464;
    }
    ctx->pc = 0x17F45Cu;
    SET_GPR_U32(ctx, 31, 0x17F464u);
    ctx->pc = 0x17F460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F45Cu;
    // 0x17f460: 0xa2660022  sb          $a2, 0x22($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 34), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4653D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4653D8u, 0x17F45Cu, 0x17F464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F464u;
label_17f464:
    // 0x17f464: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_17f468:
    if (ctx->pc == 0x17F468u) {
        ctx->pc = 0x17F468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F464u;
        // 0x17f468: 0xae620018  sw          $v0, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F46Cu;
        goto label_17f46c;
    }
    ctx->pc = 0x17F464u;
    {
        const bool branch_taken_0x17f464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F464u;
        // 0x17f468: 0xae620018  sw          $v0, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f464) {
            ctx->pc = 0x17F478u;
            goto label_17f478;
        }
    }
    ctx->pc = 0x17F46Cu;
label_17f46c:
    // 0x17f46c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17f46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17f470:
    // 0x17f470: 0xae740014  sw          $s4, 0x14($s3)
    ctx->pc = 0x17f470u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 20));
label_17f474:
    // 0x17f474: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x17f474u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
label_17f478:
    // 0x17f478: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x17f478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17f47c:
    // 0x17f47c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x17f47cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17f480:
    // 0x17f480: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x17f480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17f484:
    // 0x17f484: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x17f484u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17f488:
    // 0x17f488: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17f488u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17f48c:
    // 0x17f48c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x17f48cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17f490:
    // 0x17f490: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17f490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17f494:
    // 0x17f494: 0x3e00008  jr          $ra
label_17f498:
    if (ctx->pc == 0x17F498u) {
        ctx->pc = 0x17F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F494u;
        // 0x17f498: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F49Cu;
        goto label_17f49c;
    }
    ctx->pc = 0x17F494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F494u;
        // 0x17f498: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F49Cu;
label_17f49c:
    // 0x17f49c: 0x0  nop
    ctx->pc = 0x17f49cu;
    // NOP
    ctx->pc = 0x17f4a0u;
}
