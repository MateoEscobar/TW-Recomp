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

// Function: sub_003EB2E8
// Address: 0x3eb2e8 - 0x3eb4d0
void sub_003EB2E8_0x3eb2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EB2E8_0x3eb2e8");
#endif

    switch (ctx->pc) {
        case 0x3eb2e8u: goto label_3eb2e8;
        case 0x3eb2ecu: goto label_3eb2ec;
        case 0x3eb2f0u: goto label_3eb2f0;
        case 0x3eb2f4u: goto label_3eb2f4;
        case 0x3eb2f8u: goto label_3eb2f8;
        case 0x3eb2fcu: goto label_3eb2fc;
        case 0x3eb300u: goto label_3eb300;
        case 0x3eb304u: goto label_3eb304;
        case 0x3eb308u: goto label_3eb308;
        case 0x3eb30cu: goto label_3eb30c;
        case 0x3eb310u: goto label_3eb310;
        case 0x3eb314u: goto label_3eb314;
        case 0x3eb318u: goto label_3eb318;
        case 0x3eb31cu: goto label_3eb31c;
        case 0x3eb320u: goto label_3eb320;
        case 0x3eb324u: goto label_3eb324;
        case 0x3eb328u: goto label_3eb328;
        case 0x3eb32cu: goto label_3eb32c;
        case 0x3eb330u: goto label_3eb330;
        case 0x3eb334u: goto label_3eb334;
        case 0x3eb338u: goto label_3eb338;
        case 0x3eb33cu: goto label_3eb33c;
        case 0x3eb340u: goto label_3eb340;
        case 0x3eb344u: goto label_3eb344;
        case 0x3eb348u: goto label_3eb348;
        case 0x3eb34cu: goto label_3eb34c;
        case 0x3eb350u: goto label_3eb350;
        case 0x3eb354u: goto label_3eb354;
        case 0x3eb358u: goto label_3eb358;
        case 0x3eb35cu: goto label_3eb35c;
        case 0x3eb360u: goto label_3eb360;
        case 0x3eb364u: goto label_3eb364;
        case 0x3eb368u: goto label_3eb368;
        case 0x3eb36cu: goto label_3eb36c;
        case 0x3eb370u: goto label_3eb370;
        case 0x3eb374u: goto label_3eb374;
        case 0x3eb378u: goto label_3eb378;
        case 0x3eb37cu: goto label_3eb37c;
        case 0x3eb380u: goto label_3eb380;
        case 0x3eb384u: goto label_3eb384;
        case 0x3eb388u: goto label_3eb388;
        case 0x3eb38cu: goto label_3eb38c;
        case 0x3eb390u: goto label_3eb390;
        case 0x3eb394u: goto label_3eb394;
        case 0x3eb398u: goto label_3eb398;
        case 0x3eb39cu: goto label_3eb39c;
        case 0x3eb3a0u: goto label_3eb3a0;
        case 0x3eb3a4u: goto label_3eb3a4;
        case 0x3eb3a8u: goto label_3eb3a8;
        case 0x3eb3acu: goto label_3eb3ac;
        case 0x3eb3b0u: goto label_3eb3b0;
        case 0x3eb3b4u: goto label_3eb3b4;
        case 0x3eb3b8u: goto label_3eb3b8;
        case 0x3eb3bcu: goto label_3eb3bc;
        case 0x3eb3c0u: goto label_3eb3c0;
        case 0x3eb3c4u: goto label_3eb3c4;
        case 0x3eb3c8u: goto label_3eb3c8;
        case 0x3eb3ccu: goto label_3eb3cc;
        case 0x3eb3d0u: goto label_3eb3d0;
        case 0x3eb3d4u: goto label_3eb3d4;
        case 0x3eb3d8u: goto label_3eb3d8;
        case 0x3eb3dcu: goto label_3eb3dc;
        case 0x3eb3e0u: goto label_3eb3e0;
        case 0x3eb3e4u: goto label_3eb3e4;
        case 0x3eb3e8u: goto label_3eb3e8;
        case 0x3eb3ecu: goto label_3eb3ec;
        case 0x3eb3f0u: goto label_3eb3f0;
        case 0x3eb3f4u: goto label_3eb3f4;
        case 0x3eb3f8u: goto label_3eb3f8;
        case 0x3eb3fcu: goto label_3eb3fc;
        case 0x3eb400u: goto label_3eb400;
        case 0x3eb404u: goto label_3eb404;
        case 0x3eb408u: goto label_3eb408;
        case 0x3eb40cu: goto label_3eb40c;
        case 0x3eb410u: goto label_3eb410;
        case 0x3eb414u: goto label_3eb414;
        case 0x3eb418u: goto label_3eb418;
        case 0x3eb41cu: goto label_3eb41c;
        case 0x3eb420u: goto label_3eb420;
        case 0x3eb424u: goto label_3eb424;
        case 0x3eb428u: goto label_3eb428;
        case 0x3eb42cu: goto label_3eb42c;
        case 0x3eb430u: goto label_3eb430;
        case 0x3eb434u: goto label_3eb434;
        case 0x3eb438u: goto label_3eb438;
        case 0x3eb43cu: goto label_3eb43c;
        case 0x3eb440u: goto label_3eb440;
        case 0x3eb444u: goto label_3eb444;
        case 0x3eb448u: goto label_3eb448;
        case 0x3eb44cu: goto label_3eb44c;
        case 0x3eb450u: goto label_3eb450;
        case 0x3eb454u: goto label_3eb454;
        case 0x3eb458u: goto label_3eb458;
        case 0x3eb45cu: goto label_3eb45c;
        case 0x3eb460u: goto label_3eb460;
        case 0x3eb464u: goto label_3eb464;
        case 0x3eb468u: goto label_3eb468;
        case 0x3eb46cu: goto label_3eb46c;
        case 0x3eb470u: goto label_3eb470;
        case 0x3eb474u: goto label_3eb474;
        case 0x3eb478u: goto label_3eb478;
        case 0x3eb47cu: goto label_3eb47c;
        case 0x3eb480u: goto label_3eb480;
        case 0x3eb484u: goto label_3eb484;
        case 0x3eb488u: goto label_3eb488;
        case 0x3eb48cu: goto label_3eb48c;
        case 0x3eb490u: goto label_3eb490;
        case 0x3eb494u: goto label_3eb494;
        case 0x3eb498u: goto label_3eb498;
        case 0x3eb49cu: goto label_3eb49c;
        case 0x3eb4a0u: goto label_3eb4a0;
        case 0x3eb4a4u: goto label_3eb4a4;
        case 0x3eb4a8u: goto label_3eb4a8;
        case 0x3eb4acu: goto label_3eb4ac;
        case 0x3eb4b0u: goto label_3eb4b0;
        case 0x3eb4b4u: goto label_3eb4b4;
        case 0x3eb4b8u: goto label_3eb4b8;
        case 0x3eb4bcu: goto label_3eb4bc;
        case 0x3eb4c0u: goto label_3eb4c0;
        case 0x3eb4c4u: goto label_3eb4c4;
        case 0x3eb4c8u: goto label_3eb4c8;
        case 0x3eb4ccu: goto label_3eb4cc;
        default: break;
    }

    ctx->pc = 0x3eb2e8u;

label_3eb2e8:
    // 0x3eb2e8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3eb2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3eb2ec:
    // 0x3eb2ec: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3eb2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_3eb2f0:
    // 0x3eb2f0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3eb2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_3eb2f4:
    // 0x3eb2f4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3eb2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_3eb2f8:
    // 0x3eb2f8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3eb2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3eb2fc:
    // 0x3eb2fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3eb2fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eb300:
    // 0x3eb300: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x3eb300u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_3eb304:
    // 0x3eb304: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x3eb304u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3eb308:
    // 0x3eb308: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3eb308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3eb30c:
    // 0x3eb30c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3eb30cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3eb310:
    // 0x3eb310: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3eb310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3eb314:
    // 0x3eb314: 0x40f809  jalr        $v0
label_3eb318:
    if (ctx->pc == 0x3EB318u) {
        ctx->pc = 0x3EB318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB314u;
        // 0x3eb318: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB31Cu;
        goto label_3eb31c;
    }
    ctx->pc = 0x3EB314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EB31Cu);
        ctx->pc = 0x3EB318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB314u;
        // 0x3eb318: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB314u, 0x3EB31Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EB31Cu;
label_3eb31c:
    // 0x3eb31c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3eb31cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3eb320:
    // 0x3eb320: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3eb320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3eb324:
    // 0x3eb324: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3eb324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3eb328:
    // 0x3eb328: 0x2450b8b8  addiu       $s0, $v0, -0x4748
    ctx->pc = 0x3eb328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3eb32c:
    // 0x3eb32c: 0xc0cd4ee  jal         func_3353B8
label_3eb330:
    if (ctx->pc == 0x3EB330u) {
        ctx->pc = 0x3EB330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB32Cu;
        // 0x3eb330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB334u;
        goto label_3eb334;
    }
    ctx->pc = 0x3EB32Cu;
    SET_GPR_U32(ctx, 31, 0x3EB334u);
    ctx->pc = 0x3EB330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB32Cu;
    // 0x3eb330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3EB32Cu, 0x3EB334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB334u;
label_3eb334:
    // 0x3eb334: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x3eb334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3eb338:
    // 0x3eb338: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3eb338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3eb33c:
    // 0x3eb33c: 0xc0e858c  jal         func_3A1630
label_3eb340:
    if (ctx->pc == 0x3EB340u) {
        ctx->pc = 0x3EB340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB33Cu;
        // 0x3eb340: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB344u;
        goto label_3eb344;
    }
    ctx->pc = 0x3EB33Cu;
    SET_GPR_U32(ctx, 31, 0x3EB344u);
    ctx->pc = 0x3EB340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB33Cu;
    // 0x3eb340: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3EB33Cu, 0x3EB344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB344u;
label_3eb344:
    // 0x3eb344: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3eb344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3eb348:
    // 0x3eb348: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x3eb348u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_3eb34c:
    // 0x3eb34c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3eb34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3eb350:
    // 0x3eb350: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_3eb354:
    if (ctx->pc == 0x3EB354u) {
        ctx->pc = 0x3EB354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB350u;
        // 0x3eb354: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB358u;
        goto label_3eb358;
    }
    ctx->pc = 0x3EB350u;
    {
        const bool branch_taken_0x3eb350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EB354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB350u;
        // 0x3eb354: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb350) {
            ctx->pc = 0x3EB36Cu;
            goto label_3eb36c;
        }
    }
    ctx->pc = 0x3EB358u;
label_3eb358:
    // 0x3eb358: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3eb358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3eb35c:
    // 0x3eb35c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3eb35cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb360:
    // 0x3eb360: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x3eb360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_3eb364:
    // 0x3eb364: 0x10000051  b           . + 4 + (0x51 << 2)
label_3eb368:
    if (ctx->pc == 0x3EB368u) {
        ctx->pc = 0x3EB368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB364u;
        // 0x3eb368: 0xae4300cc  sw          $v1, 0xCC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB36Cu;
        goto label_3eb36c;
    }
    ctx->pc = 0x3EB364u;
    {
        const bool branch_taken_0x3eb364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB364u;
        // 0x3eb368: 0xae4300cc  sw          $v1, 0xCC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb364) {
            ctx->pc = 0x3EB4ACu;
            goto label_3eb4ac;
        }
    }
    ctx->pc = 0x3EB36Cu;
label_3eb36c:
    // 0x3eb36c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3eb36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3eb370:
    // 0x3eb370: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3eb370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3eb374:
    // 0x3eb374: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x3eb374u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
label_3eb378:
    // 0x3eb378: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3eb378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3eb37c:
    // 0x3eb37c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3eb37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3eb380:
    // 0x3eb380: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_3eb384:
    if (ctx->pc == 0x3EB384u) {
        ctx->pc = 0x3EB384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB380u;
        // 0x3eb384: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB388u;
        goto label_3eb388;
    }
    ctx->pc = 0x3EB380u;
    {
        const bool branch_taken_0x3eb380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb380) {
            ctx->pc = 0x3EB384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB380u;
            // 0x3eb384: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB388u;
            goto label_3eb388;
        }
    }
    ctx->pc = 0x3EB388u;
label_3eb388:
    // 0x3eb388: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x3eb388u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_3eb38c:
    // 0x3eb38c: 0x1010  mfhi        $v0
    ctx->pc = 0x3eb38cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_3eb390:
    // 0x3eb390: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
label_3eb394:
    if (ctx->pc == 0x3EB394u) {
        ctx->pc = 0x3EB394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB390u;
        // 0x3eb394: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB398u;
        goto label_3eb398;
    }
    ctx->pc = 0x3EB390u;
    {
        const bool branch_taken_0x3eb390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eb390) {
            ctx->pc = 0x3EB394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB390u;
            // 0x3eb394: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB440u;
            goto label_3eb440;
        }
    }
    ctx->pc = 0x3EB398u;
label_3eb398:
    // 0x3eb398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3eb398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3eb39c:
    // 0x3eb39c: 0xc0cd4ee  jal         func_3353B8
label_3eb3a0:
    if (ctx->pc == 0x3EB3A0u) {
        ctx->pc = 0x3EB3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB39Cu;
        // 0x3eb3a0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB3A4u;
        goto label_3eb3a4;
    }
    ctx->pc = 0x3EB39Cu;
    SET_GPR_U32(ctx, 31, 0x3EB3A4u);
    ctx->pc = 0x3EB3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB39Cu;
    // 0x3eb3a0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3EB39Cu, 0x3EB3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB3A4u;
label_3eb3a4:
    // 0x3eb3a4: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x3eb3a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3eb3a8:
    // 0x3eb3a8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x3eb3a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3eb3ac:
    // 0x3eb3ac: 0x0  nop
    ctx->pc = 0x3eb3acu;
    // NOP
label_3eb3b0:
    // 0x3eb3b0: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x3eb3b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_3eb3b4:
    // 0x3eb3b4: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x3eb3b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_3eb3b8:
    // 0x3eb3b8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3eb3b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3eb3bc:
    // 0x3eb3bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3eb3bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3eb3c0:
    // 0x3eb3c0: 0x0  nop
    ctx->pc = 0x3eb3c0u;
    // NOP
label_3eb3c4:
    // 0x3eb3c4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x3eb3c4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3eb3c8:
    // 0x3eb3c8: 0xc12e310  jal         func_4B8C40
label_3eb3cc:
    if (ctx->pc == 0x3EB3CCu) {
        ctx->pc = 0x3EB3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB3C8u;
        // 0x3eb3cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB3D0u;
        goto label_3eb3d0;
    }
    ctx->pc = 0x3EB3C8u;
    SET_GPR_U32(ctx, 31, 0x3EB3D0u);
    ctx->pc = 0x3EB3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB3C8u;
    // 0x3eb3cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x3EB3C8u, 0x3EB3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB3D0u;
label_3eb3d0:
    // 0x3eb3d0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3eb3d0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3eb3d4:
    // 0x3eb3d4: 0xc12e29c  jal         func_4B8A70
label_3eb3d8:
    if (ctx->pc == 0x3EB3D8u) {
        ctx->pc = 0x3EB3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB3D4u;
        // 0x3eb3d8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB3DCu;
        goto label_3eb3dc;
    }
    ctx->pc = 0x3EB3D4u;
    SET_GPR_U32(ctx, 31, 0x3EB3DCu);
    ctx->pc = 0x3EB3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB3D4u;
    // 0x3eb3d8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x3EB3D4u, 0x3EB3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB3DCu;
label_3eb3dc:
    // 0x3eb3dc: 0x7a430020  lq          $v1, 0x20($s2)
    ctx->pc = 0x3eb3dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_3eb3e0:
    // 0x3eb3e0: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x3eb3e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_3eb3e4:
    // 0x3eb3e4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x3eb3e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_3eb3e8:
    // 0x3eb3e8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3eb3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_3eb3ec:
    // 0x3eb3ec: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3eb3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_3eb3f0:
    // 0x3eb3f0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3eb3f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3eb3f4:
    // 0x3eb3f4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3eb3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3eb3f8:
    // 0x3eb3f8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3eb3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3eb3fc:
    // 0x3eb3fc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3eb3fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3eb400:
    // 0x3eb400: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3eb400u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3eb404:
    // 0x3eb404: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3eb404u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3eb408:
    // 0x3eb408: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3eb408u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3eb40c:
    // 0x3eb40c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3eb40cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3eb410:
    // 0x3eb410: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3eb410u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3eb414:
    // 0x3eb414: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3eb414u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3eb418:
    // 0x3eb418: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3eb418u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3eb41c:
    // 0x3eb41c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3eb41cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3eb420:
    // 0x3eb420: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3eb420u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3eb424:
    // 0x3eb424: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3eb424u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3eb428:
    // 0x3eb428: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3eb428u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3eb42c:
    // 0x3eb42c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3eb42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3eb430:
    // 0x3eb430: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3eb430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3eb434:
    // 0x3eb434: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3eb434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3eb438:
    // 0x3eb438: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3eb438u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3eb43c:
    // 0x3eb43c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x3eb43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3eb440:
    // 0x3eb440: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3eb444:
    if (ctx->pc == 0x3EB444u) {
        ctx->pc = 0x3EB444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB440u;
        // 0x3eb444: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB448u;
        goto label_3eb448;
    }
    ctx->pc = 0x3EB440u;
    {
        const bool branch_taken_0x3eb440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB440u;
        // 0x3eb444: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb440) {
            ctx->pc = 0x3EB478u;
            goto label_3eb478;
        }
    }
    ctx->pc = 0x3EB448u;
label_3eb448:
    // 0x3eb448: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3eb448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb44c:
    // 0x3eb44c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3eb44cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3eb450:
    // 0x3eb450: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_3eb454:
    if (ctx->pc == 0x3EB454u) {
        ctx->pc = 0x3EB454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB450u;
        // 0x3eb454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB458u;
        goto label_3eb458;
    }
    ctx->pc = 0x3EB450u;
    {
        const bool branch_taken_0x3eb450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EB454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB450u;
        // 0x3eb454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb450) {
            ctx->pc = 0x3EB4ACu;
            goto label_3eb4ac;
        }
    }
    ctx->pc = 0x3EB458u;
label_3eb458:
    // 0x3eb458: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x3eb458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_3eb45c:
    // 0x3eb45c: 0x3c0519d3  lui         $a1, 0x19D3
    ctx->pc = 0x3eb45cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)6611 << 16));
label_3eb460:
    // 0x3eb460: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3eb460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3eb464:
    // 0x3eb464: 0xc0e9132  jal         func_3A44C8
label_3eb468:
    if (ctx->pc == 0x3EB468u) {
        ctx->pc = 0x3EB468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB464u;
        // 0x3eb468: 0x34a57747  ori         $a1, $a1, 0x7747 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)30535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB46Cu;
        goto label_3eb46c;
    }
    ctx->pc = 0x3EB464u;
    SET_GPR_U32(ctx, 31, 0x3EB46Cu);
    ctx->pc = 0x3EB468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB464u;
    // 0x3eb468: 0x34a57747  ori         $a1, $a1, 0x7747 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)30535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3EB464u, 0x3EB46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB46Cu;
label_3eb46c:
    // 0x3eb46c: 0xae4200c4  sw          $v0, 0xC4($s2)
    ctx->pc = 0x3eb46cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
label_3eb470:
    // 0x3eb470: 0x1000000d  b           . + 4 + (0xD << 2)
label_3eb474:
    if (ctx->pc == 0x3EB474u) {
        ctx->pc = 0x3EB474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB470u;
        // 0x3eb474: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB478u;
        goto label_3eb478;
    }
    ctx->pc = 0x3EB470u;
    {
        const bool branch_taken_0x3eb470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB470u;
        // 0x3eb474: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb470) {
            ctx->pc = 0x3EB4A8u;
            goto label_3eb4a8;
        }
    }
    ctx->pc = 0x3EB478u;
label_3eb478:
    // 0x3eb478: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3eb478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb47c:
    // 0x3eb47c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3eb47cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3eb480:
    // 0x3eb480: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_3eb484:
    if (ctx->pc == 0x3EB484u) {
        ctx->pc = 0x3EB484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB480u;
        // 0x3eb484: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB488u;
        goto label_3eb488;
    }
    ctx->pc = 0x3EB480u;
    {
        const bool branch_taken_0x3eb480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EB484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB480u;
        // 0x3eb484: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb480) {
            ctx->pc = 0x3EB4ACu;
            goto label_3eb4ac;
        }
    }
    ctx->pc = 0x3EB488u;
label_3eb488:
    // 0x3eb488: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x3eb488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_3eb48c:
    // 0x3eb48c: 0x3c0580da  lui         $a1, 0x80DA
    ctx->pc = 0x3eb48cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32986 << 16));
label_3eb490:
    // 0x3eb490: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3eb490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3eb494:
    // 0x3eb494: 0xc0e9132  jal         func_3A44C8
label_3eb498:
    if (ctx->pc == 0x3EB498u) {
        ctx->pc = 0x3EB498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB494u;
        // 0x3eb498: 0x34a526fd  ori         $a1, $a1, 0x26FD (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9981);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB49Cu;
        goto label_3eb49c;
    }
    ctx->pc = 0x3EB494u;
    SET_GPR_U32(ctx, 31, 0x3EB49Cu);
    ctx->pc = 0x3EB498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB494u;
    // 0x3eb498: 0x34a526fd  ori         $a1, $a1, 0x26FD (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9981);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3EB494u, 0x3EB49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB49Cu;
label_3eb49c:
    // 0x3eb49c: 0xae4200c4  sw          $v0, 0xC4($s2)
    ctx->pc = 0x3eb49cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
label_3eb4a0:
    // 0x3eb4a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3eb4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3eb4a4:
    // 0x3eb4a4: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x3eb4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_3eb4a8:
    // 0x3eb4a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3eb4a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb4ac:
    // 0x3eb4ac: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3eb4acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3eb4b0:
    // 0x3eb4b0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3eb4b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3eb4b4:
    // 0x3eb4b4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3eb4b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3eb4b8:
    // 0x3eb4b8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3eb4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3eb4bc:
    // 0x3eb4bc: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x3eb4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3eb4c0:
    // 0x3eb4c0: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x3eb4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3eb4c4:
    // 0x3eb4c4: 0x3e00008  jr          $ra
label_3eb4c8:
    if (ctx->pc == 0x3EB4C8u) {
        ctx->pc = 0x3EB4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB4C4u;
        // 0x3eb4c8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB4CCu;
        goto label_3eb4cc;
    }
    ctx->pc = 0x3EB4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EB4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB4C4u;
        // 0x3eb4c8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB4C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EB4CCu;
label_3eb4cc:
    // 0x3eb4cc: 0x0  nop
    ctx->pc = 0x3eb4ccu;
    // NOP
    ctx->pc = 0x3eb4d0u;
}
