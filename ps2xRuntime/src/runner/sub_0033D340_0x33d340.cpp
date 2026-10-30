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

// Function: sub_0033D340
// Address: 0x33d340 - 0x33d498
void sub_0033D340_0x33d340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D340_0x33d340");
#endif

    switch (ctx->pc) {
        case 0x33d340u: goto label_33d340;
        case 0x33d344u: goto label_33d344;
        case 0x33d348u: goto label_33d348;
        case 0x33d34cu: goto label_33d34c;
        case 0x33d350u: goto label_33d350;
        case 0x33d354u: goto label_33d354;
        case 0x33d358u: goto label_33d358;
        case 0x33d35cu: goto label_33d35c;
        case 0x33d360u: goto label_33d360;
        case 0x33d364u: goto label_33d364;
        case 0x33d368u: goto label_33d368;
        case 0x33d36cu: goto label_33d36c;
        case 0x33d370u: goto label_33d370;
        case 0x33d374u: goto label_33d374;
        case 0x33d378u: goto label_33d378;
        case 0x33d37cu: goto label_33d37c;
        case 0x33d380u: goto label_33d380;
        case 0x33d384u: goto label_33d384;
        case 0x33d388u: goto label_33d388;
        case 0x33d38cu: goto label_33d38c;
        case 0x33d390u: goto label_33d390;
        case 0x33d394u: goto label_33d394;
        case 0x33d398u: goto label_33d398;
        case 0x33d39cu: goto label_33d39c;
        case 0x33d3a0u: goto label_33d3a0;
        case 0x33d3a4u: goto label_33d3a4;
        case 0x33d3a8u: goto label_33d3a8;
        case 0x33d3acu: goto label_33d3ac;
        case 0x33d3b0u: goto label_33d3b0;
        case 0x33d3b4u: goto label_33d3b4;
        case 0x33d3b8u: goto label_33d3b8;
        case 0x33d3bcu: goto label_33d3bc;
        case 0x33d3c0u: goto label_33d3c0;
        case 0x33d3c4u: goto label_33d3c4;
        case 0x33d3c8u: goto label_33d3c8;
        case 0x33d3ccu: goto label_33d3cc;
        case 0x33d3d0u: goto label_33d3d0;
        case 0x33d3d4u: goto label_33d3d4;
        case 0x33d3d8u: goto label_33d3d8;
        case 0x33d3dcu: goto label_33d3dc;
        case 0x33d3e0u: goto label_33d3e0;
        case 0x33d3e4u: goto label_33d3e4;
        case 0x33d3e8u: goto label_33d3e8;
        case 0x33d3ecu: goto label_33d3ec;
        case 0x33d3f0u: goto label_33d3f0;
        case 0x33d3f4u: goto label_33d3f4;
        case 0x33d3f8u: goto label_33d3f8;
        case 0x33d3fcu: goto label_33d3fc;
        case 0x33d400u: goto label_33d400;
        case 0x33d404u: goto label_33d404;
        case 0x33d408u: goto label_33d408;
        case 0x33d40cu: goto label_33d40c;
        case 0x33d410u: goto label_33d410;
        case 0x33d414u: goto label_33d414;
        case 0x33d418u: goto label_33d418;
        case 0x33d41cu: goto label_33d41c;
        case 0x33d420u: goto label_33d420;
        case 0x33d424u: goto label_33d424;
        case 0x33d428u: goto label_33d428;
        case 0x33d42cu: goto label_33d42c;
        case 0x33d430u: goto label_33d430;
        case 0x33d434u: goto label_33d434;
        case 0x33d438u: goto label_33d438;
        case 0x33d43cu: goto label_33d43c;
        case 0x33d440u: goto label_33d440;
        case 0x33d444u: goto label_33d444;
        case 0x33d448u: goto label_33d448;
        case 0x33d44cu: goto label_33d44c;
        case 0x33d450u: goto label_33d450;
        case 0x33d454u: goto label_33d454;
        case 0x33d458u: goto label_33d458;
        case 0x33d45cu: goto label_33d45c;
        case 0x33d460u: goto label_33d460;
        case 0x33d464u: goto label_33d464;
        case 0x33d468u: goto label_33d468;
        case 0x33d46cu: goto label_33d46c;
        case 0x33d470u: goto label_33d470;
        case 0x33d474u: goto label_33d474;
        case 0x33d478u: goto label_33d478;
        case 0x33d47cu: goto label_33d47c;
        case 0x33d480u: goto label_33d480;
        case 0x33d484u: goto label_33d484;
        case 0x33d488u: goto label_33d488;
        case 0x33d48cu: goto label_33d48c;
        case 0x33d490u: goto label_33d490;
        case 0x33d494u: goto label_33d494;
        default: break;
    }

    ctx->pc = 0x33d340u;

label_33d340:
    // 0x33d340: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x33d340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_33d344:
    // 0x33d344: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x33d344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33d348:
    // 0x33d348: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x33d348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_33d34c:
    // 0x33d34c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x33d34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_33d350:
    // 0x33d350: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x33d350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_33d354:
    // 0x33d354: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x33d354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_33d358:
    // 0x33d358: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x33d358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33d35c:
    // 0x33d35c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x33d35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_33d360:
    // 0x33d360: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x33d360u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_33d364:
    // 0x33d364: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x33d364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_33d368:
    // 0x33d368: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x33d368u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33d36c:
    // 0x33d36c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x33d36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_33d370:
    // 0x33d370: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x33d370u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_33d374:
    // 0x33d374: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x33d374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_33d378:
    // 0x33d378: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x33d378u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_33d37c:
    // 0x33d37c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x33d37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_33d380:
    // 0x33d380: 0x241600c0  addiu       $s6, $zero, 0xC0
    ctx->pc = 0x33d380u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_33d384:
    // 0x33d384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33d384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_33d388:
    // 0x33d388: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x33d388u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_33d38c:
    // 0x33d38c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x33d38cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33d390:
    // 0x33d390: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x33d390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33d394:
    // 0x33d394: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x33d394u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33d398:
    // 0x33d398: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x33d398u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33d39c:
    // 0x33d39c: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x33d39cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_33d3a0:
    // 0x33d3a0: 0xb61818  mult        $v1, $a1, $s6
    ctx->pc = 0x33d3a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33d3a4:
    // 0x33d3a4: 0xc0cf4b6  jal         func_33D2D8
label_33d3a8:
    if (ctx->pc == 0x33D3A8u) {
        ctx->pc = 0x33D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D3A4u;
        // 0x33d3a8: 0x722821  addu        $a1, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D3ACu;
        goto label_33d3ac;
    }
    ctx->pc = 0x33D3A4u;
    SET_GPR_U32(ctx, 31, 0x33D3ACu);
    ctx->pc = 0x33D3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D3A4u;
    // 0x33d3a8: 0x722821  addu        $a1, $v1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D2D8u, 0x33D3A4u, 0x33D3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D3ACu;
label_33d3ac:
    // 0x33d3ac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_33d3b0:
    if (ctx->pc == 0x33D3B0u) {
        ctx->pc = 0x33D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D3ACu;
        // 0x33d3b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D3B4u;
        goto label_33d3b4;
    }
    ctx->pc = 0x33D3ACu;
    {
        const bool branch_taken_0x33d3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D3ACu;
        // 0x33d3b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d3ac) {
            ctx->pc = 0x33D3DCu;
            goto label_33d3dc;
        }
    }
    ctx->pc = 0x33D3B4u;
label_33d3b4:
    // 0x33d3b4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x33d3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33d3b8:
    // 0x33d3b8: 0x8e280034  lw          $t0, 0x34($s1)
    ctx->pc = 0x33d3b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_33d3bc:
    // 0x33d3bc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x33d3bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_33d3c0:
    // 0x33d3c0: 0xb61018  mult        $v0, $a1, $s6
    ctx->pc = 0x33d3c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_33d3c4:
    // 0x33d3c4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x33d3c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33d3c8:
    // 0x33d3c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x33d3c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33d3cc:
    // 0x33d3cc: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x33d3ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33d3d0:
    // 0x33d3d0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x33d3d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33d3d4:
    // 0x33d3d4: 0xc0cf5c6  jal         func_33D718
label_33d3d8:
    if (ctx->pc == 0x33D3D8u) {
        ctx->pc = 0x33D3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D3D4u;
        // 0x33d3d8: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D3DCu;
        goto label_33d3dc;
    }
    ctx->pc = 0x33D3D4u;
    SET_GPR_U32(ctx, 31, 0x33D3DCu);
    ctx->pc = 0x33D3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D3D4u;
    // 0x33d3d8: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D718u, 0x33D3D4u, 0x33D3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D3DCu;
label_33d3dc:
    // 0x33d3dc: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x33d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_33d3e0:
    // 0x33d3e0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x33d3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_33d3e4:
    // 0x33d3e4: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_33d3e8:
    if (ctx->pc == 0x33D3E8u) {
        ctx->pc = 0x33D3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D3E4u;
        // 0x33d3e8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D3ECu;
        goto label_33d3ec;
    }
    ctx->pc = 0x33D3E4u;
    {
        const bool branch_taken_0x33d3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d3e4) {
            ctx->pc = 0x33D3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D3E4u;
            // 0x33d3e8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D46Cu;
            goto label_33d46c;
        }
    }
    ctx->pc = 0x33D3ECu;
label_33d3ec:
    // 0x33d3ec: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x33d3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_33d3f0:
    // 0x33d3f0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x33d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_33d3f4:
    // 0x33d3f4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x33d3f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_33d3f8:
    // 0x33d3f8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x33d3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_33d3fc:
    // 0x33d3fc: 0x40f809  jalr        $v0
label_33d400:
    if (ctx->pc == 0x33D400u) {
        ctx->pc = 0x33D400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D3FCu;
        // 0x33d400: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D404u;
        goto label_33d404;
    }
    ctx->pc = 0x33D3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33D404u);
        ctx->pc = 0x33D400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D3FCu;
        // 0x33d400: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D3FCu, 0x33D404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33D404u;
label_33d404:
    // 0x33d404: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x33d404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_33d408:
    // 0x33d408: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33d408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_33d40c:
    // 0x33d40c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_33d410:
    if (ctx->pc == 0x33D410u) {
        ctx->pc = 0x33D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D40Cu;
        // 0x33d410: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D414u;
        goto label_33d414;
    }
    ctx->pc = 0x33D40Cu;
    {
        const bool branch_taken_0x33d40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D40Cu;
        // 0x33d410: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d40c) {
            ctx->pc = 0x33D468u;
            goto label_33d468;
        }
    }
    ctx->pc = 0x33D414u;
label_33d414:
    // 0x33d414: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x33d414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_33d418:
    // 0x33d418: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33d418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33d41c:
    // 0x33d41c: 0xc08f902  jal         func_23E408
label_33d420:
    if (ctx->pc == 0x33D420u) {
        ctx->pc = 0x33D420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D41Cu;
        // 0x33d420: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D424u;
        goto label_33d424;
    }
    ctx->pc = 0x33D41Cu;
    SET_GPR_U32(ctx, 31, 0x33D424u);
    ctx->pc = 0x33D420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D41Cu;
    // 0x33d420: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E408u, 0x33D41Cu, 0x33D424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D424u;
label_33d424:
    // 0x33d424: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_33d428:
    if (ctx->pc == 0x33D428u) {
        ctx->pc = 0x33D428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D424u;
        // 0x33d428: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D42Cu;
        goto label_33d42c;
    }
    ctx->pc = 0x33D424u;
    {
        const bool branch_taken_0x33d424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D424u;
        // 0x33d428: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d424) {
            ctx->pc = 0x33D468u;
            goto label_33d468;
        }
    }
    ctx->pc = 0x33D42Cu;
label_33d42c:
    // 0x33d42c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33d430:
    // 0x33d430: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33d430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33d434:
    // 0x33d434: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x33d434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_33d438:
    // 0x33d438: 0x562818  mult        $a1, $v0, $s6
    ctx->pc = 0x33d438u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_33d43c:
    // 0x33d43c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x33d43cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33d440:
    // 0x33d440: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x33d440u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33d444:
    // 0x33d444: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x33d444u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33d448:
    // 0x33d448: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x33d448u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33d44c:
    // 0x33d44c: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x33d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_33d450:
    // 0x33d450: 0xac4300b0  sw          $v1, 0xB0($v0)
    ctx->pc = 0x33d450u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 3));
label_33d454:
    // 0x33d454: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x33d454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33d458:
    // 0x33d458: 0x8e280034  lw          $t0, 0x34($s1)
    ctx->pc = 0x33d458u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_33d45c:
    // 0x33d45c: 0xb61018  mult        $v0, $a1, $s6
    ctx->pc = 0x33d45cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_33d460:
    // 0x33d460: 0xc0cf5c6  jal         func_33D718
label_33d464:
    if (ctx->pc == 0x33D464u) {
        ctx->pc = 0x33D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D460u;
        // 0x33d464: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D468u;
        goto label_33d468;
    }
    ctx->pc = 0x33D460u;
    SET_GPR_U32(ctx, 31, 0x33D468u);
    ctx->pc = 0x33D464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D460u;
    // 0x33d464: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D718u, 0x33D460u, 0x33D468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D468u;
label_33d468:
    // 0x33d468: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x33d468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_33d46c:
    // 0x33d46c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x33d46cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_33d470:
    // 0x33d470: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x33d470u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_33d474:
    // 0x33d474: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x33d474u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_33d478:
    // 0x33d478: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x33d478u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_33d47c:
    // 0x33d47c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x33d47cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33d480:
    // 0x33d480: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x33d480u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33d484:
    // 0x33d484: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x33d484u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33d488:
    // 0x33d488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33d488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33d48c:
    // 0x33d48c: 0x3e00008  jr          $ra
label_33d490:
    if (ctx->pc == 0x33D490u) {
        ctx->pc = 0x33D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D48Cu;
        // 0x33d490: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D494u;
        goto label_33d494;
    }
    ctx->pc = 0x33D48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D48Cu;
        // 0x33d490: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D48Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D494u;
label_33d494:
    // 0x33d494: 0x0  nop
    ctx->pc = 0x33d494u;
    // NOP
    ctx->pc = 0x33d498u;
}
