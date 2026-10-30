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

// Function: sub_0015B2D8
// Address: 0x15b2d8 - 0x15b490
void sub_0015B2D8_0x15b2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B2D8_0x15b2d8");
#endif

    switch (ctx->pc) {
        case 0x15b2d8u: goto label_15b2d8;
        case 0x15b2dcu: goto label_15b2dc;
        case 0x15b2e0u: goto label_15b2e0;
        case 0x15b2e4u: goto label_15b2e4;
        case 0x15b2e8u: goto label_15b2e8;
        case 0x15b2ecu: goto label_15b2ec;
        case 0x15b2f0u: goto label_15b2f0;
        case 0x15b2f4u: goto label_15b2f4;
        case 0x15b2f8u: goto label_15b2f8;
        case 0x15b2fcu: goto label_15b2fc;
        case 0x15b300u: goto label_15b300;
        case 0x15b304u: goto label_15b304;
        case 0x15b308u: goto label_15b308;
        case 0x15b30cu: goto label_15b30c;
        case 0x15b310u: goto label_15b310;
        case 0x15b314u: goto label_15b314;
        case 0x15b318u: goto label_15b318;
        case 0x15b31cu: goto label_15b31c;
        case 0x15b320u: goto label_15b320;
        case 0x15b324u: goto label_15b324;
        case 0x15b328u: goto label_15b328;
        case 0x15b32cu: goto label_15b32c;
        case 0x15b330u: goto label_15b330;
        case 0x15b334u: goto label_15b334;
        case 0x15b338u: goto label_15b338;
        case 0x15b33cu: goto label_15b33c;
        case 0x15b340u: goto label_15b340;
        case 0x15b344u: goto label_15b344;
        case 0x15b348u: goto label_15b348;
        case 0x15b34cu: goto label_15b34c;
        case 0x15b350u: goto label_15b350;
        case 0x15b354u: goto label_15b354;
        case 0x15b358u: goto label_15b358;
        case 0x15b35cu: goto label_15b35c;
        case 0x15b360u: goto label_15b360;
        case 0x15b364u: goto label_15b364;
        case 0x15b368u: goto label_15b368;
        case 0x15b36cu: goto label_15b36c;
        case 0x15b370u: goto label_15b370;
        case 0x15b374u: goto label_15b374;
        case 0x15b378u: goto label_15b378;
        case 0x15b37cu: goto label_15b37c;
        case 0x15b380u: goto label_15b380;
        case 0x15b384u: goto label_15b384;
        case 0x15b388u: goto label_15b388;
        case 0x15b38cu: goto label_15b38c;
        case 0x15b390u: goto label_15b390;
        case 0x15b394u: goto label_15b394;
        case 0x15b398u: goto label_15b398;
        case 0x15b39cu: goto label_15b39c;
        case 0x15b3a0u: goto label_15b3a0;
        case 0x15b3a4u: goto label_15b3a4;
        case 0x15b3a8u: goto label_15b3a8;
        case 0x15b3acu: goto label_15b3ac;
        case 0x15b3b0u: goto label_15b3b0;
        case 0x15b3b4u: goto label_15b3b4;
        case 0x15b3b8u: goto label_15b3b8;
        case 0x15b3bcu: goto label_15b3bc;
        case 0x15b3c0u: goto label_15b3c0;
        case 0x15b3c4u: goto label_15b3c4;
        case 0x15b3c8u: goto label_15b3c8;
        case 0x15b3ccu: goto label_15b3cc;
        case 0x15b3d0u: goto label_15b3d0;
        case 0x15b3d4u: goto label_15b3d4;
        case 0x15b3d8u: goto label_15b3d8;
        case 0x15b3dcu: goto label_15b3dc;
        case 0x15b3e0u: goto label_15b3e0;
        case 0x15b3e4u: goto label_15b3e4;
        case 0x15b3e8u: goto label_15b3e8;
        case 0x15b3ecu: goto label_15b3ec;
        case 0x15b3f0u: goto label_15b3f0;
        case 0x15b3f4u: goto label_15b3f4;
        case 0x15b3f8u: goto label_15b3f8;
        case 0x15b3fcu: goto label_15b3fc;
        case 0x15b400u: goto label_15b400;
        case 0x15b404u: goto label_15b404;
        case 0x15b408u: goto label_15b408;
        case 0x15b40cu: goto label_15b40c;
        case 0x15b410u: goto label_15b410;
        case 0x15b414u: goto label_15b414;
        case 0x15b418u: goto label_15b418;
        case 0x15b41cu: goto label_15b41c;
        case 0x15b420u: goto label_15b420;
        case 0x15b424u: goto label_15b424;
        case 0x15b428u: goto label_15b428;
        case 0x15b42cu: goto label_15b42c;
        case 0x15b430u: goto label_15b430;
        case 0x15b434u: goto label_15b434;
        case 0x15b438u: goto label_15b438;
        case 0x15b43cu: goto label_15b43c;
        case 0x15b440u: goto label_15b440;
        case 0x15b444u: goto label_15b444;
        case 0x15b448u: goto label_15b448;
        case 0x15b44cu: goto label_15b44c;
        case 0x15b450u: goto label_15b450;
        case 0x15b454u: goto label_15b454;
        case 0x15b458u: goto label_15b458;
        case 0x15b45cu: goto label_15b45c;
        case 0x15b460u: goto label_15b460;
        case 0x15b464u: goto label_15b464;
        case 0x15b468u: goto label_15b468;
        case 0x15b46cu: goto label_15b46c;
        case 0x15b470u: goto label_15b470;
        case 0x15b474u: goto label_15b474;
        case 0x15b478u: goto label_15b478;
        case 0x15b47cu: goto label_15b47c;
        case 0x15b480u: goto label_15b480;
        case 0x15b484u: goto label_15b484;
        case 0x15b488u: goto label_15b488;
        case 0x15b48cu: goto label_15b48c;
        default: break;
    }

    ctx->pc = 0x15b2d8u;

label_15b2d8:
    // 0x15b2d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x15b2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_15b2dc:
    // 0x15b2dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15b2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15b2e0:
    // 0x15b2e0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x15b2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_15b2e4:
    // 0x15b2e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15b2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b2e8:
    // 0x15b2e8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x15b2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_15b2ec:
    // 0x15b2ec: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15b2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15b2f0:
    // 0x15b2f0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x15b2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_15b2f4:
    // 0x15b2f4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x15b2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_15b2f8:
    // 0x15b2f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15b2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_15b2fc:
    // 0x15b2fc: 0x8c465024  lw          $a2, 0x5024($v0)
    ctx->pc = 0x15b2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_15b300:
    // 0x15b300: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15b300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15b304:
    // 0x15b304: 0xac64c72c  sw          $a0, -0x38D4($v1)
    ctx->pc = 0x15b304u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952748), GPR_U32(ctx, 4));
label_15b308:
    // 0x15b308: 0x8cc50128  lw          $a1, 0x128($a2)
    ctx->pc = 0x15b308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 296)));
label_15b30c:
    // 0x15b30c: 0xac44c708  sw          $a0, -0x38F8($v0)
    ctx->pc = 0x15b30cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952712), GPR_U32(ctx, 4));
label_15b310:
    // 0x15b310: 0x84a40130  lh          $a0, 0x130($a1)
    ctx->pc = 0x15b310u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 304)));
label_15b314:
    // 0x15b314: 0x8ca20134  lw          $v0, 0x134($a1)
    ctx->pc = 0x15b314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 308)));
label_15b318:
    // 0x15b318: 0x40f809  jalr        $v0
label_15b31c:
    if (ctx->pc == 0x15B31Cu) {
        ctx->pc = 0x15B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B318u;
        // 0x15b31c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B320u;
        goto label_15b320;
    }
    ctx->pc = 0x15B318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15B320u);
        ctx->pc = 0x15B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B318u;
        // 0x15b31c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B318u, 0x15B320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B320u;
label_15b320:
    // 0x15b320: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15b320u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15b324:
    // 0x15b324: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15b324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_15b328:
    // 0x15b328: 0x8c435d80  lw          $v1, 0x5D80($v0)
    ctx->pc = 0x15b328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23936)));
label_15b32c:
    // 0x15b32c: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
label_15b330:
    if (ctx->pc == 0x15B330u) {
        ctx->pc = 0x15B330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B32Cu;
        // 0x15b330: 0x3c100055  lui         $s0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B334u;
        goto label_15b334;
    }
    ctx->pc = 0x15B32Cu;
    {
        const bool branch_taken_0x15b32c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B32Cu;
        // 0x15b330: 0x3c100055  lui         $s0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b32c) {
            ctx->pc = 0x15B3D4u;
            goto label_15b3d4;
        }
    }
    ctx->pc = 0x15B334u;
label_15b334:
    // 0x15b334: 0x240400af  addiu       $a0, $zero, 0xAF
    ctx->pc = 0x15b334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
label_15b338:
    // 0x15b338: 0x2610f178  addiu       $s0, $s0, -0xE88
    ctx->pc = 0x15b338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963576));
label_15b33c:
    // 0x15b33c: 0xc067b9c  jal         func_19EE70
label_15b340:
    if (ctx->pc == 0x15B340u) {
        ctx->pc = 0x15B340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B33Cu;
        // 0x15b340: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B344u;
        goto label_15b344;
    }
    ctx->pc = 0x15B33Cu;
    SET_GPR_U32(ctx, 31, 0x15B344u);
    ctx->pc = 0x15B340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B33Cu;
    // 0x15b340: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B33Cu, 0x15B344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B344u;
label_15b344:
    // 0x15b344: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15b344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15b348:
    // 0x15b348: 0xc067b9c  jal         func_19EE70
label_15b34c:
    if (ctx->pc == 0x15B34Cu) {
        ctx->pc = 0x15B34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B348u;
        // 0x15b34c: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B350u;
        goto label_15b350;
    }
    ctx->pc = 0x15B348u;
    SET_GPR_U32(ctx, 31, 0x15B350u);
    ctx->pc = 0x15B34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B348u;
    // 0x15b34c: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B348u, 0x15B350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B350u;
label_15b350:
    // 0x15b350: 0x8e44c738  lw          $a0, -0x38C8($s2)
    ctx->pc = 0x15b350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952760)));
label_15b354:
    // 0x15b354: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15b354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15b358:
    // 0x15b358: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15b358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15b35c:
    // 0x15b35c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x15b35cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15b360:
    // 0x15b360: 0xc10ca28  jal         func_4328A0
label_15b364:
    if (ctx->pc == 0x15B364u) {
        ctx->pc = 0x15B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B360u;
        // 0x15b364: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B368u;
        goto label_15b368;
    }
    ctx->pc = 0x15B360u;
    SET_GPR_U32(ctx, 31, 0x15B368u);
    ctx->pc = 0x15B364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B360u;
    // 0x15b364: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x15B360u, 0x15B368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B368u;
label_15b368:
    // 0x15b368: 0x8e50c738  lw          $s0, -0x38C8($s2)
    ctx->pc = 0x15b368u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952760)));
label_15b36c:
    // 0x15b36c: 0xc067b9c  jal         func_19EE70
label_15b370:
    if (ctx->pc == 0x15B370u) {
        ctx->pc = 0x15B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B36Cu;
        // 0x15b370: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B374u;
        goto label_15b374;
    }
    ctx->pc = 0x15B36Cu;
    SET_GPR_U32(ctx, 31, 0x15B374u);
    ctx->pc = 0x15B370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B36Cu;
    // 0x15b370: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B36Cu, 0x15B374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B374u;
label_15b374:
    // 0x15b374: 0x240400bd  addiu       $a0, $zero, 0xBD
    ctx->pc = 0x15b374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
label_15b378:
    // 0x15b378: 0xc067b9c  jal         func_19EE70
label_15b37c:
    if (ctx->pc == 0x15B37Cu) {
        ctx->pc = 0x15B37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B378u;
        // 0x15b37c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B380u;
        goto label_15b380;
    }
    ctx->pc = 0x15B378u;
    SET_GPR_U32(ctx, 31, 0x15B380u);
    ctx->pc = 0x15B37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B378u;
    // 0x15b37c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B378u, 0x15B380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B380u;
label_15b380:
    // 0x15b380: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x15b380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_15b384:
    // 0x15b384: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15b384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_15b388:
    // 0x15b388: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x15b388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_15b38c:
    // 0x15b38c: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x15b38cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_15b390:
    // 0x15b390: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x15b390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15b394:
    // 0x15b394: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x15b394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15b398:
    // 0x15b398: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x15b398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_15b39c:
    // 0x15b39c: 0x24845840  addiu       $a0, $a0, 0x5840
    ctx->pc = 0x15b39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
label_15b3a0:
    // 0x15b3a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15b3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15b3a4:
    // 0x15b3a4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15b3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15b3a8:
    // 0x15b3a8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x15b3a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15b3ac:
    // 0x15b3ac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x15b3acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b3b0:
    // 0x15b3b0: 0x2443f180  addiu       $v1, $v0, -0xE80
    ctx->pc = 0x15b3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963584));
label_15b3b4:
    // 0x15b3b4: 0x686a0007  ldl         $t2, 0x7($v1)
    ctx->pc = 0x15b3b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_15b3b8:
    // 0x15b3b8: 0x6c6a0000  ldr         $t2, 0x0($v1)
    ctx->pc = 0x15b3b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_15b3bc:
    // 0x15b3bc: 0xb3aa0017  sdl         $t2, 0x17($sp)
    ctx->pc = 0x15b3bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15b3c0:
    // 0x15b3c0: 0xb7aa0010  sdr         $t2, 0x10($sp)
    ctx->pc = 0x15b3c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15b3c4:
    // 0x15b3c4: 0xc071c4a  jal         func_1C7128
label_15b3c8:
    if (ctx->pc == 0x15B3C8u) {
        ctx->pc = 0x15B3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B3C4u;
        // 0x15b3c8: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B3CCu;
        goto label_15b3cc;
    }
    ctx->pc = 0x15B3C4u;
    SET_GPR_U32(ctx, 31, 0x15B3CCu);
    ctx->pc = 0x15B3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B3C4u;
    // 0x15b3c8: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7128u, 0x15B3C4u, 0x15B3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B3CCu;
label_15b3cc:
    // 0x15b3cc: 0x10000028  b           . + 4 + (0x28 << 2)
label_15b3d0:
    if (ctx->pc == 0x15B3D0u) {
        ctx->pc = 0x15B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B3CCu;
        // 0x15b3d0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B3D4u;
        goto label_15b3d4;
    }
    ctx->pc = 0x15B3CCu;
    {
        const bool branch_taken_0x15b3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B3CCu;
        // 0x15b3d0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b3cc) {
            ctx->pc = 0x15B470u;
            goto label_15b470;
        }
    }
    ctx->pc = 0x15B3D4u;
label_15b3d4:
    // 0x15b3d4: 0x240400af  addiu       $a0, $zero, 0xAF
    ctx->pc = 0x15b3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
label_15b3d8:
    // 0x15b3d8: 0x2610f178  addiu       $s0, $s0, -0xE88
    ctx->pc = 0x15b3d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963576));
label_15b3dc:
    // 0x15b3dc: 0xc067b9c  jal         func_19EE70
label_15b3e0:
    if (ctx->pc == 0x15B3E0u) {
        ctx->pc = 0x15B3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B3DCu;
        // 0x15b3e0: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B3E4u;
        goto label_15b3e4;
    }
    ctx->pc = 0x15B3DCu;
    SET_GPR_U32(ctx, 31, 0x15B3E4u);
    ctx->pc = 0x15B3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B3DCu;
    // 0x15b3e0: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B3DCu, 0x15B3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B3E4u;
label_15b3e4:
    // 0x15b3e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15b3e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15b3e8:
    // 0x15b3e8: 0xc067b9c  jal         func_19EE70
label_15b3ec:
    if (ctx->pc == 0x15B3ECu) {
        ctx->pc = 0x15B3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B3E8u;
        // 0x15b3ec: 0x240400b1  addiu       $a0, $zero, 0xB1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B3F0u;
        goto label_15b3f0;
    }
    ctx->pc = 0x15B3E8u;
    SET_GPR_U32(ctx, 31, 0x15B3F0u);
    ctx->pc = 0x15B3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B3E8u;
    // 0x15b3ec: 0x240400b1  addiu       $a0, $zero, 0xB1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B3E8u, 0x15B3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B3F0u;
label_15b3f0:
    // 0x15b3f0: 0x8e44c738  lw          $a0, -0x38C8($s2)
    ctx->pc = 0x15b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952760)));
label_15b3f4:
    // 0x15b3f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15b3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15b3f8:
    // 0x15b3f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15b3f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15b3fc:
    // 0x15b3fc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x15b3fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15b400:
    // 0x15b400: 0xc10ca28  jal         func_4328A0
label_15b404:
    if (ctx->pc == 0x15B404u) {
        ctx->pc = 0x15B404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B400u;
        // 0x15b404: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B408u;
        goto label_15b408;
    }
    ctx->pc = 0x15B400u;
    SET_GPR_U32(ctx, 31, 0x15B408u);
    ctx->pc = 0x15B404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B400u;
    // 0x15b404: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x15B400u, 0x15B408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B408u;
label_15b408:
    // 0x15b408: 0x8e50c738  lw          $s0, -0x38C8($s2)
    ctx->pc = 0x15b408u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952760)));
label_15b40c:
    // 0x15b40c: 0xc067b9c  jal         func_19EE70
label_15b410:
    if (ctx->pc == 0x15B410u) {
        ctx->pc = 0x15B410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B40Cu;
        // 0x15b410: 0x240400ba  addiu       $a0, $zero, 0xBA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B414u;
        goto label_15b414;
    }
    ctx->pc = 0x15B40Cu;
    SET_GPR_U32(ctx, 31, 0x15B414u);
    ctx->pc = 0x15B410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B40Cu;
    // 0x15b410: 0x240400ba  addiu       $a0, $zero, 0xBA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B40Cu, 0x15B414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B414u;
label_15b414:
    // 0x15b414: 0x240400bd  addiu       $a0, $zero, 0xBD
    ctx->pc = 0x15b414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
label_15b418:
    // 0x15b418: 0xc067b9c  jal         func_19EE70
label_15b41c:
    if (ctx->pc == 0x15B41Cu) {
        ctx->pc = 0x15B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B418u;
        // 0x15b41c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B420u;
        goto label_15b420;
    }
    ctx->pc = 0x15B418u;
    SET_GPR_U32(ctx, 31, 0x15B420u);
    ctx->pc = 0x15B41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B418u;
    // 0x15b41c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B418u, 0x15B420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B420u;
label_15b420:
    // 0x15b420: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x15b420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_15b424:
    // 0x15b424: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15b424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_15b428:
    // 0x15b428: 0x6ba50027  ldl         $a1, 0x27($sp)
    ctx->pc = 0x15b428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_15b42c:
    // 0x15b42c: 0x6fa50020  ldr         $a1, 0x20($sp)
    ctx->pc = 0x15b42cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_15b430:
    // 0x15b430: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x15b430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15b434:
    // 0x15b434: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x15b434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15b438:
    // 0x15b438: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x15b438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_15b43c:
    // 0x15b43c: 0x24845840  addiu       $a0, $a0, 0x5840
    ctx->pc = 0x15b43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
label_15b440:
    // 0x15b440: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15b440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15b444:
    // 0x15b444: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15b444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15b448:
    // 0x15b448: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x15b448u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15b44c:
    // 0x15b44c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x15b44cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b450:
    // 0x15b450: 0x244af188  addiu       $t2, $v0, -0xE78
    ctx->pc = 0x15b450u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963592));
label_15b454:
    // 0x15b454: 0x694b0007  ldl         $t3, 0x7($t2)
    ctx->pc = 0x15b454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_15b458:
    // 0x15b458: 0x6d4b0000  ldr         $t3, 0x0($t2)
    ctx->pc = 0x15b458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_15b45c:
    // 0x15b45c: 0xb3ab0027  sdl         $t3, 0x27($sp)
    ctx->pc = 0x15b45cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15b460:
    // 0x15b460: 0xb7ab0020  sdr         $t3, 0x20($sp)
    ctx->pc = 0x15b460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15b464:
    // 0x15b464: 0xc071c4a  jal         func_1C7128
label_15b468:
    if (ctx->pc == 0x15B468u) {
        ctx->pc = 0x15B468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B464u;
        // 0x15b468: 0x27a90020  addiu       $t1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B46Cu;
        goto label_15b46c;
    }
    ctx->pc = 0x15B464u;
    SET_GPR_U32(ctx, 31, 0x15B46Cu);
    ctx->pc = 0x15B468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B464u;
    // 0x15b468: 0x27a90020  addiu       $t1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7128u, 0x15B464u, 0x15B46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B46Cu;
label_15b46c:
    // 0x15b46c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15b46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15b470:
    // 0x15b470: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x15b470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15b474:
    // 0x15b474: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x15b474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_15b478:
    // 0x15b478: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x15b478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15b47c:
    // 0x15b47c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x15b47cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15b480:
    // 0x15b480: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15b480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15b484:
    // 0x15b484: 0xac40c734  sw          $zero, -0x38CC($v0)
    ctx->pc = 0x15b484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952756), GPR_U32(ctx, 0));
label_15b488:
    // 0x15b488: 0x3e00008  jr          $ra
label_15b48c:
    if (ctx->pc == 0x15B48Cu) {
        ctx->pc = 0x15B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B488u;
        // 0x15b48c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B490u;
        goto label_fallthrough_0x15b488;
    }
    ctx->pc = 0x15B488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B488u;
        // 0x15b48c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15b488:
    ctx->pc = 0x15B490u;
}
