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

// Function: sub_003AC2F8
// Address: 0x3ac2f8 - 0x3ac4d0
void sub_003AC2F8_0x3ac2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AC2F8_0x3ac2f8");
#endif

    switch (ctx->pc) {
        case 0x3ac2f8u: goto label_3ac2f8;
        case 0x3ac2fcu: goto label_3ac2fc;
        case 0x3ac300u: goto label_3ac300;
        case 0x3ac304u: goto label_3ac304;
        case 0x3ac308u: goto label_3ac308;
        case 0x3ac30cu: goto label_3ac30c;
        case 0x3ac310u: goto label_3ac310;
        case 0x3ac314u: goto label_3ac314;
        case 0x3ac318u: goto label_3ac318;
        case 0x3ac31cu: goto label_3ac31c;
        case 0x3ac320u: goto label_3ac320;
        case 0x3ac324u: goto label_3ac324;
        case 0x3ac328u: goto label_3ac328;
        case 0x3ac32cu: goto label_3ac32c;
        case 0x3ac330u: goto label_3ac330;
        case 0x3ac334u: goto label_3ac334;
        case 0x3ac338u: goto label_3ac338;
        case 0x3ac33cu: goto label_3ac33c;
        case 0x3ac340u: goto label_3ac340;
        case 0x3ac344u: goto label_3ac344;
        case 0x3ac348u: goto label_3ac348;
        case 0x3ac34cu: goto label_3ac34c;
        case 0x3ac350u: goto label_3ac350;
        case 0x3ac354u: goto label_3ac354;
        case 0x3ac358u: goto label_3ac358;
        case 0x3ac35cu: goto label_3ac35c;
        case 0x3ac360u: goto label_3ac360;
        case 0x3ac364u: goto label_3ac364;
        case 0x3ac368u: goto label_3ac368;
        case 0x3ac36cu: goto label_3ac36c;
        case 0x3ac370u: goto label_3ac370;
        case 0x3ac374u: goto label_3ac374;
        case 0x3ac378u: goto label_3ac378;
        case 0x3ac37cu: goto label_3ac37c;
        case 0x3ac380u: goto label_3ac380;
        case 0x3ac384u: goto label_3ac384;
        case 0x3ac388u: goto label_3ac388;
        case 0x3ac38cu: goto label_3ac38c;
        case 0x3ac390u: goto label_3ac390;
        case 0x3ac394u: goto label_3ac394;
        case 0x3ac398u: goto label_3ac398;
        case 0x3ac39cu: goto label_3ac39c;
        case 0x3ac3a0u: goto label_3ac3a0;
        case 0x3ac3a4u: goto label_3ac3a4;
        case 0x3ac3a8u: goto label_3ac3a8;
        case 0x3ac3acu: goto label_3ac3ac;
        case 0x3ac3b0u: goto label_3ac3b0;
        case 0x3ac3b4u: goto label_3ac3b4;
        case 0x3ac3b8u: goto label_3ac3b8;
        case 0x3ac3bcu: goto label_3ac3bc;
        case 0x3ac3c0u: goto label_3ac3c0;
        case 0x3ac3c4u: goto label_3ac3c4;
        case 0x3ac3c8u: goto label_3ac3c8;
        case 0x3ac3ccu: goto label_3ac3cc;
        case 0x3ac3d0u: goto label_3ac3d0;
        case 0x3ac3d4u: goto label_3ac3d4;
        case 0x3ac3d8u: goto label_3ac3d8;
        case 0x3ac3dcu: goto label_3ac3dc;
        case 0x3ac3e0u: goto label_3ac3e0;
        case 0x3ac3e4u: goto label_3ac3e4;
        case 0x3ac3e8u: goto label_3ac3e8;
        case 0x3ac3ecu: goto label_3ac3ec;
        case 0x3ac3f0u: goto label_3ac3f0;
        case 0x3ac3f4u: goto label_3ac3f4;
        case 0x3ac3f8u: goto label_3ac3f8;
        case 0x3ac3fcu: goto label_3ac3fc;
        case 0x3ac400u: goto label_3ac400;
        case 0x3ac404u: goto label_3ac404;
        case 0x3ac408u: goto label_3ac408;
        case 0x3ac40cu: goto label_3ac40c;
        case 0x3ac410u: goto label_3ac410;
        case 0x3ac414u: goto label_3ac414;
        case 0x3ac418u: goto label_3ac418;
        case 0x3ac41cu: goto label_3ac41c;
        case 0x3ac420u: goto label_3ac420;
        case 0x3ac424u: goto label_3ac424;
        case 0x3ac428u: goto label_3ac428;
        case 0x3ac42cu: goto label_3ac42c;
        case 0x3ac430u: goto label_3ac430;
        case 0x3ac434u: goto label_3ac434;
        case 0x3ac438u: goto label_3ac438;
        case 0x3ac43cu: goto label_3ac43c;
        case 0x3ac440u: goto label_3ac440;
        case 0x3ac444u: goto label_3ac444;
        case 0x3ac448u: goto label_3ac448;
        case 0x3ac44cu: goto label_3ac44c;
        case 0x3ac450u: goto label_3ac450;
        case 0x3ac454u: goto label_3ac454;
        case 0x3ac458u: goto label_3ac458;
        case 0x3ac45cu: goto label_3ac45c;
        case 0x3ac460u: goto label_3ac460;
        case 0x3ac464u: goto label_3ac464;
        case 0x3ac468u: goto label_3ac468;
        case 0x3ac46cu: goto label_3ac46c;
        case 0x3ac470u: goto label_3ac470;
        case 0x3ac474u: goto label_3ac474;
        case 0x3ac478u: goto label_3ac478;
        case 0x3ac47cu: goto label_3ac47c;
        case 0x3ac480u: goto label_3ac480;
        case 0x3ac484u: goto label_3ac484;
        case 0x3ac488u: goto label_3ac488;
        case 0x3ac48cu: goto label_3ac48c;
        case 0x3ac490u: goto label_3ac490;
        case 0x3ac494u: goto label_3ac494;
        case 0x3ac498u: goto label_3ac498;
        case 0x3ac49cu: goto label_3ac49c;
        case 0x3ac4a0u: goto label_3ac4a0;
        case 0x3ac4a4u: goto label_3ac4a4;
        case 0x3ac4a8u: goto label_3ac4a8;
        case 0x3ac4acu: goto label_3ac4ac;
        case 0x3ac4b0u: goto label_3ac4b0;
        case 0x3ac4b4u: goto label_3ac4b4;
        case 0x3ac4b8u: goto label_3ac4b8;
        case 0x3ac4bcu: goto label_3ac4bc;
        case 0x3ac4c0u: goto label_3ac4c0;
        case 0x3ac4c4u: goto label_3ac4c4;
        case 0x3ac4c8u: goto label_3ac4c8;
        case 0x3ac4ccu: goto label_3ac4cc;
        default: break;
    }

    ctx->pc = 0x3ac2f8u;

label_3ac2f8:
    // 0x3ac2f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3ac2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3ac2fc:
    // 0x3ac2fc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3ac2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3ac300:
    // 0x3ac300: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3ac300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3ac304:
    // 0x3ac304: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ac304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ac308:
    // 0x3ac308: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3ac308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3ac30c:
    // 0x3ac30c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ac30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ac310:
    // 0x3ac310: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ac310u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ac314:
    // 0x3ac314: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ac314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ac318:
    // 0x3ac318: 0x40f809  jalr        $v0
label_3ac31c:
    if (ctx->pc == 0x3AC31Cu) {
        ctx->pc = 0x3AC31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC318u;
        // 0x3ac31c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC320u;
        goto label_3ac320;
    }
    ctx->pc = 0x3AC318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC320u);
        ctx->pc = 0x3AC31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC318u;
        // 0x3ac31c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC318u, 0x3AC320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC320u;
label_3ac320:
    // 0x3ac320: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ac320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ac324:
    // 0x3ac324: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3ac324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3ac328:
    // 0x3ac328: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ac328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3ac32c:
    // 0x3ac32c: 0x8e1100b0  lw          $s1, 0xB0($s0)
    ctx->pc = 0x3ac32cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_3ac330:
    // 0x3ac330: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x3ac330u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3ac334:
    // 0x3ac334: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
label_3ac338:
    if (ctx->pc == 0x3AC338u) {
        ctx->pc = 0x3AC338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC334u;
        // 0x3ac338: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC33Cu;
        goto label_3ac33c;
    }
    ctx->pc = 0x3AC334u;
    {
        const bool branch_taken_0x3ac334 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC334u;
        // 0x3ac338: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac334) {
            ctx->pc = 0x3AC378u;
            goto label_3ac378;
        }
    }
    ctx->pc = 0x3AC33Cu;
label_3ac33c:
    // 0x3ac33c: 0xc0e9694  jal         func_3A5A50
label_3ac340:
    if (ctx->pc == 0x3AC340u) {
        ctx->pc = 0x3AC340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC33Cu;
        // 0x3ac340: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC344u;
        goto label_3ac344;
    }
    ctx->pc = 0x3AC33Cu;
    SET_GPR_U32(ctx, 31, 0x3AC344u);
    ctx->pc = 0x3AC340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC33Cu;
    // 0x3ac340: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3AC33Cu, 0x3AC344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC344u;
label_3ac344:
    // 0x3ac344: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3ac348:
    if (ctx->pc == 0x3AC348u) {
        ctx->pc = 0x3AC348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC344u;
        // 0x3ac348: 0x322200ff  andi        $v0, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC34Cu;
        goto label_3ac34c;
    }
    ctx->pc = 0x3AC344u;
    {
        const bool branch_taken_0x3ac344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC344u;
        // 0x3ac348: 0x322200ff  andi        $v0, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac344) {
            ctx->pc = 0x3AC37Cu;
            goto label_3ac37c;
        }
    }
    ctx->pc = 0x3AC34Cu;
label_3ac34c:
    // 0x3ac34c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ac34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ac350:
    // 0x3ac350: 0xc0e90ca  jal         func_3A4328
label_3ac354:
    if (ctx->pc == 0x3AC354u) {
        ctx->pc = 0x3AC354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC350u;
        // 0x3ac354: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC358u;
        goto label_3ac358;
    }
    ctx->pc = 0x3AC350u;
    SET_GPR_U32(ctx, 31, 0x3AC358u);
    ctx->pc = 0x3AC354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC350u;
    // 0x3ac354: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3AC350u, 0x3AC358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC358u;
label_3ac358:
    // 0x3ac358: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x3ac358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_3ac35c:
    // 0x3ac35c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ac35cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ac360:
    // 0x3ac360: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x3ac360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_3ac364:
    // 0x3ac364: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ac364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ac368:
    // 0x3ac368: 0xc0e9f56  jal         func_3A7D58
label_3ac36c:
    if (ctx->pc == 0x3AC36Cu) {
        ctx->pc = 0x3AC36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC368u;
        // 0x3ac36c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC370u;
        goto label_3ac370;
    }
    ctx->pc = 0x3AC368u;
    SET_GPR_U32(ctx, 31, 0x3AC370u);
    ctx->pc = 0x3AC36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC368u;
    // 0x3ac36c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7D58u, 0x3AC368u, 0x3AC370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC370u;
label_3ac370:
    // 0x3ac370: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3ac374:
    if (ctx->pc == 0x3AC374u) {
        ctx->pc = 0x3AC378u;
        goto label_3ac378;
    }
    ctx->pc = 0x3AC370u;
    {
        const bool branch_taken_0x3ac370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ac370) {
            ctx->pc = 0x3AC390u;
            goto label_3ac390;
        }
    }
    ctx->pc = 0x3AC378u;
label_3ac378:
    // 0x3ac378: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x3ac378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_3ac37c:
    // 0x3ac37c: 0x2c42000f  sltiu       $v0, $v0, 0xF
    ctx->pc = 0x3ac37cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_3ac380:
    // 0x3ac380: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
label_3ac384:
    if (ctx->pc == 0x3AC384u) {
        ctx->pc = 0x3AC384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC380u;
        // 0x3ac384: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC388u;
        goto label_3ac388;
    }
    ctx->pc = 0x3AC380u;
    {
        const bool branch_taken_0x3ac380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC380u;
        // 0x3ac384: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac380) {
            ctx->pc = 0x3AC4B8u;
            goto label_3ac4b8;
        }
    }
    ctx->pc = 0x3AC388u;
label_3ac388:
    // 0x3ac388: 0x2631fff4  addiu       $s1, $s1, -0xC
    ctx->pc = 0x3ac388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967284));
label_3ac38c:
    // 0x3ac38c: 0xae1100b4  sw          $s1, 0xB4($s0)
    ctx->pc = 0x3ac38cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 17));
label_3ac390:
    // 0x3ac390: 0xc0e87c0  jal         func_3A1F00
label_3ac394:
    if (ctx->pc == 0x3AC394u) {
        ctx->pc = 0x3AC394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC390u;
        // 0x3ac394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC398u;
        goto label_3ac398;
    }
    ctx->pc = 0x3AC390u;
    SET_GPR_U32(ctx, 31, 0x3AC398u);
    ctx->pc = 0x3AC394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC390u;
    // 0x3ac394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3AC390u, 0x3AC398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC398u;
label_3ac398:
    // 0x3ac398: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3ac398u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3ac39c:
    // 0x3ac39c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3ac39cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ac3a0:
    // 0x3ac3a0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3ac3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3ac3a4:
    // 0x3ac3a4: 0x84a40050  lh          $a0, 0x50($a1)
    ctx->pc = 0x3ac3a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 80)));
label_3ac3a8:
    // 0x3ac3a8: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x3ac3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
label_3ac3ac:
    // 0x3ac3ac: 0x40f809  jalr        $v0
label_3ac3b0:
    if (ctx->pc == 0x3AC3B0u) {
        ctx->pc = 0x3AC3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC3ACu;
        // 0x3ac3b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC3B4u;
        goto label_3ac3b4;
    }
    ctx->pc = 0x3AC3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC3B4u);
        ctx->pc = 0x3AC3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC3ACu;
        // 0x3ac3b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC3ACu, 0x3AC3B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC3B4u;
label_3ac3b4:
    // 0x3ac3b4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x3ac3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_3ac3b8:
    // 0x3ac3b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3ac3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3ac3bc:
    // 0x3ac3bc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_3ac3c0:
    if (ctx->pc == 0x3AC3C0u) {
        ctx->pc = 0x3AC3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC3BCu;
        // 0x3ac3c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC3C4u;
        goto label_3ac3c4;
    }
    ctx->pc = 0x3AC3BCu;
    {
        const bool branch_taken_0x3ac3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC3BCu;
        // 0x3ac3c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac3bc) {
            ctx->pc = 0x3AC460u;
            goto label_3ac460;
        }
    }
    ctx->pc = 0x3AC3C4u;
label_3ac3c4:
    // 0x3ac3c4: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3ac3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3ac3c8:
    // 0x3ac3c8: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x3ac3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
label_3ac3cc:
    // 0x3ac3cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3ac3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3ac3d0:
    // 0x3ac3d0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3ac3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ac3d4:
    // 0x3ac3d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3ac3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3ac3d8:
    // 0x3ac3d8: 0xc0e92f4  jal         func_3A4BD0
label_3ac3dc:
    if (ctx->pc == 0x3AC3DCu) {
        ctx->pc = 0x3AC3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC3D8u;
        // 0x3ac3dc: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC3E0u;
        goto label_3ac3e0;
    }
    ctx->pc = 0x3AC3D8u;
    SET_GPR_U32(ctx, 31, 0x3AC3E0u);
    ctx->pc = 0x3AC3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC3D8u;
    // 0x3ac3dc: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4BD0u, 0x3AC3D8u, 0x3AC3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC3E0u;
label_3ac3e0:
    // 0x3ac3e0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x3ac3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ac3e4:
    // 0x3ac3e4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x3ac3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ac3e8:
    // 0x3ac3e8: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x3ac3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ac3ec:
    // 0x3ac3ec: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x3ac3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3ac3f0:
    // 0x3ac3f0: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x3ac3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3ac3f4:
    // 0x3ac3f4: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x3ac3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3ac3f8:
    // 0x3ac3f8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3ac3f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_3ac3fc:
    // 0x3ac3fc: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3ac3fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_3ac400:
    // 0x3ac400: 0x3c01bfb3  lui         $at, 0xBFB3
    ctx->pc = 0x3ac400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49075 << 16));
label_3ac404:
    // 0x3ac404: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3ac404u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3ac408:
    // 0x3ac408: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3ac408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3ac40c:
    // 0x3ac40c: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x3ac40cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_3ac410:
    // 0x3ac410: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3ac410u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ac414:
    // 0x3ac414: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3ac414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3ac418:
    // 0x3ac418: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x3ac418u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_3ac41c:
    // 0x3ac41c: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x3ac41cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_3ac420:
    // 0x3ac420: 0x44041800  mfc1        $a0, $f3
    ctx->pc = 0x3ac420u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3ac424:
    // 0x3ac424: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3ac424u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ac428:
    // 0x3ac428: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3ac428u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3ac42c:
    // 0x3ac42c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3ac42cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3ac430:
    // 0x3ac430: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3ac430u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3ac434:
    // 0x3ac434: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3ac434u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3ac438:
    // 0x3ac438: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3ac438u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3ac43c:
    // 0x3ac43c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3ac43cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3ac440:
    // 0x3ac440: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3ac440u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3ac444:
    // 0x3ac444: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3ac444u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3ac448:
    // 0x3ac448: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3ac448u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_3ac44c:
    // 0x3ac44c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3ac44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3ac450:
    // 0x3ac450: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3ac450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3ac454:
    // 0x3ac454: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3ac454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3ac458:
    // 0x3ac458: 0x1000000d  b           . + 4 + (0xD << 2)
label_3ac45c:
    if (ctx->pc == 0x3AC45Cu) {
        ctx->pc = 0x3AC45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC458u;
        // 0x3ac45c: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC460u;
        goto label_3ac460;
    }
    ctx->pc = 0x3AC458u;
    {
        const bool branch_taken_0x3ac458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC458u;
        // 0x3ac45c: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac458) {
            ctx->pc = 0x3AC490u;
            goto label_3ac490;
        }
    }
    ctx->pc = 0x3AC460u;
label_3ac460:
    // 0x3ac460: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3ac460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3ac464:
    // 0x3ac464: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x3ac464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
label_3ac468:
    // 0x3ac468: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3ac468u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3ac46c:
    // 0x3ac46c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ac46cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ac470:
    // 0x3ac470: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3ac470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3ac474:
    // 0x3ac474: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3ac474u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3ac478:
    // 0x3ac478: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ac478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ac47c:
    // 0x3ac47c: 0xc0cd518  jal         func_335460
label_3ac480:
    if (ctx->pc == 0x3AC480u) {
        ctx->pc = 0x3AC480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC47Cu;
        // 0x3ac480: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC484u;
        goto label_3ac484;
    }
    ctx->pc = 0x3AC47Cu;
    SET_GPR_U32(ctx, 31, 0x3AC484u);
    ctx->pc = 0x3AC480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC47Cu;
    // 0x3ac480: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AC47Cu, 0x3AC484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC484u;
label_3ac484:
    // 0x3ac484: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x3ac484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ac488:
    // 0x3ac488: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ac488u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3ac48c:
    // 0x3ac48c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x3ac48cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3ac490:
    // 0x3ac490: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ac490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ac494:
    // 0x3ac494: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ac494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ac498:
    // 0x3ac498: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ac498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ac49c:
    // 0x3ac49c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3ac49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ac4a0:
    // 0x3ac4a0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x3ac4a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3ac4a4:
    // 0x3ac4a4: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3ac4a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3ac4a8:
    // 0x3ac4a8: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3ac4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3ac4ac:
    // 0x3ac4ac: 0x60f809  jalr        $v1
label_3ac4b0:
    if (ctx->pc == 0x3AC4B0u) {
        ctx->pc = 0x3AC4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC4ACu;
        // 0x3ac4b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC4B4u;
        goto label_3ac4b4;
    }
    ctx->pc = 0x3AC4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AC4B4u);
        ctx->pc = 0x3AC4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC4ACu;
        // 0x3ac4b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC4ACu, 0x3AC4B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC4B4u;
label_3ac4b4:
    // 0x3ac4b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ac4b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ac4b8:
    // 0x3ac4b8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3ac4b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ac4bc:
    // 0x3ac4bc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3ac4bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ac4c0:
    // 0x3ac4c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3ac4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3ac4c4:
    // 0x3ac4c4: 0x3e00008  jr          $ra
label_3ac4c8:
    if (ctx->pc == 0x3AC4C8u) {
        ctx->pc = 0x3AC4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC4C4u;
        // 0x3ac4c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC4CCu;
        goto label_3ac4cc;
    }
    ctx->pc = 0x3AC4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC4C4u;
        // 0x3ac4c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC4C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AC4CCu;
label_3ac4cc:
    // 0x3ac4cc: 0x0  nop
    ctx->pc = 0x3ac4ccu;
    // NOP
    ctx->pc = 0x3ac4d0u;
}
