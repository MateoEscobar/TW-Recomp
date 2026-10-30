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

// Function: sub_003DD378
// Address: 0x3dd378 - 0x3dd538
void sub_003DD378_0x3dd378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD378_0x3dd378");
#endif

    switch (ctx->pc) {
        case 0x3dd378u: goto label_3dd378;
        case 0x3dd37cu: goto label_3dd37c;
        case 0x3dd380u: goto label_3dd380;
        case 0x3dd384u: goto label_3dd384;
        case 0x3dd388u: goto label_3dd388;
        case 0x3dd38cu: goto label_3dd38c;
        case 0x3dd390u: goto label_3dd390;
        case 0x3dd394u: goto label_3dd394;
        case 0x3dd398u: goto label_3dd398;
        case 0x3dd39cu: goto label_3dd39c;
        case 0x3dd3a0u: goto label_3dd3a0;
        case 0x3dd3a4u: goto label_3dd3a4;
        case 0x3dd3a8u: goto label_3dd3a8;
        case 0x3dd3acu: goto label_3dd3ac;
        case 0x3dd3b0u: goto label_3dd3b0;
        case 0x3dd3b4u: goto label_3dd3b4;
        case 0x3dd3b8u: goto label_3dd3b8;
        case 0x3dd3bcu: goto label_3dd3bc;
        case 0x3dd3c0u: goto label_3dd3c0;
        case 0x3dd3c4u: goto label_3dd3c4;
        case 0x3dd3c8u: goto label_3dd3c8;
        case 0x3dd3ccu: goto label_3dd3cc;
        case 0x3dd3d0u: goto label_3dd3d0;
        case 0x3dd3d4u: goto label_3dd3d4;
        case 0x3dd3d8u: goto label_3dd3d8;
        case 0x3dd3dcu: goto label_3dd3dc;
        case 0x3dd3e0u: goto label_3dd3e0;
        case 0x3dd3e4u: goto label_3dd3e4;
        case 0x3dd3e8u: goto label_3dd3e8;
        case 0x3dd3ecu: goto label_3dd3ec;
        case 0x3dd3f0u: goto label_3dd3f0;
        case 0x3dd3f4u: goto label_3dd3f4;
        case 0x3dd3f8u: goto label_3dd3f8;
        case 0x3dd3fcu: goto label_3dd3fc;
        case 0x3dd400u: goto label_3dd400;
        case 0x3dd404u: goto label_3dd404;
        case 0x3dd408u: goto label_3dd408;
        case 0x3dd40cu: goto label_3dd40c;
        case 0x3dd410u: goto label_3dd410;
        case 0x3dd414u: goto label_3dd414;
        case 0x3dd418u: goto label_3dd418;
        case 0x3dd41cu: goto label_3dd41c;
        case 0x3dd420u: goto label_3dd420;
        case 0x3dd424u: goto label_3dd424;
        case 0x3dd428u: goto label_3dd428;
        case 0x3dd42cu: goto label_3dd42c;
        case 0x3dd430u: goto label_3dd430;
        case 0x3dd434u: goto label_3dd434;
        case 0x3dd438u: goto label_3dd438;
        case 0x3dd43cu: goto label_3dd43c;
        case 0x3dd440u: goto label_3dd440;
        case 0x3dd444u: goto label_3dd444;
        case 0x3dd448u: goto label_3dd448;
        case 0x3dd44cu: goto label_3dd44c;
        case 0x3dd450u: goto label_3dd450;
        case 0x3dd454u: goto label_3dd454;
        case 0x3dd458u: goto label_3dd458;
        case 0x3dd45cu: goto label_3dd45c;
        case 0x3dd460u: goto label_3dd460;
        case 0x3dd464u: goto label_3dd464;
        case 0x3dd468u: goto label_3dd468;
        case 0x3dd46cu: goto label_3dd46c;
        case 0x3dd470u: goto label_3dd470;
        case 0x3dd474u: goto label_3dd474;
        case 0x3dd478u: goto label_3dd478;
        case 0x3dd47cu: goto label_3dd47c;
        case 0x3dd480u: goto label_3dd480;
        case 0x3dd484u: goto label_3dd484;
        case 0x3dd488u: goto label_3dd488;
        case 0x3dd48cu: goto label_3dd48c;
        case 0x3dd490u: goto label_3dd490;
        case 0x3dd494u: goto label_3dd494;
        case 0x3dd498u: goto label_3dd498;
        case 0x3dd49cu: goto label_3dd49c;
        case 0x3dd4a0u: goto label_3dd4a0;
        case 0x3dd4a4u: goto label_3dd4a4;
        case 0x3dd4a8u: goto label_3dd4a8;
        case 0x3dd4acu: goto label_3dd4ac;
        case 0x3dd4b0u: goto label_3dd4b0;
        case 0x3dd4b4u: goto label_3dd4b4;
        case 0x3dd4b8u: goto label_3dd4b8;
        case 0x3dd4bcu: goto label_3dd4bc;
        case 0x3dd4c0u: goto label_3dd4c0;
        case 0x3dd4c4u: goto label_3dd4c4;
        case 0x3dd4c8u: goto label_3dd4c8;
        case 0x3dd4ccu: goto label_3dd4cc;
        case 0x3dd4d0u: goto label_3dd4d0;
        case 0x3dd4d4u: goto label_3dd4d4;
        case 0x3dd4d8u: goto label_3dd4d8;
        case 0x3dd4dcu: goto label_3dd4dc;
        case 0x3dd4e0u: goto label_3dd4e0;
        case 0x3dd4e4u: goto label_3dd4e4;
        case 0x3dd4e8u: goto label_3dd4e8;
        case 0x3dd4ecu: goto label_3dd4ec;
        case 0x3dd4f0u: goto label_3dd4f0;
        case 0x3dd4f4u: goto label_3dd4f4;
        case 0x3dd4f8u: goto label_3dd4f8;
        case 0x3dd4fcu: goto label_3dd4fc;
        case 0x3dd500u: goto label_3dd500;
        case 0x3dd504u: goto label_3dd504;
        case 0x3dd508u: goto label_3dd508;
        case 0x3dd50cu: goto label_3dd50c;
        case 0x3dd510u: goto label_3dd510;
        case 0x3dd514u: goto label_3dd514;
        case 0x3dd518u: goto label_3dd518;
        case 0x3dd51cu: goto label_3dd51c;
        case 0x3dd520u: goto label_3dd520;
        case 0x3dd524u: goto label_3dd524;
        case 0x3dd528u: goto label_3dd528;
        case 0x3dd52cu: goto label_3dd52c;
        case 0x3dd530u: goto label_3dd530;
        case 0x3dd534u: goto label_3dd534;
        default: break;
    }

    ctx->pc = 0x3dd378u;

label_3dd378:
    // 0x3dd378: 0x27bdfb90  addiu       $sp, $sp, -0x470
    ctx->pc = 0x3dd378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966160));
label_3dd37c:
    // 0x3dd37c: 0x7fb00460  sq          $s0, 0x460($sp)
    ctx->pc = 0x3dd37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 16));
label_3dd380:
    // 0x3dd380: 0x7fb10450  sq          $s1, 0x450($sp)
    ctx->pc = 0x3dd380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 17));
label_3dd384:
    // 0x3dd384: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dd384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dd388:
    // 0x3dd388: 0x7fb30430  sq          $s3, 0x430($sp)
    ctx->pc = 0x3dd388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 19));
label_3dd38c:
    // 0x3dd38c: 0x7fb20440  sq          $s2, 0x440($sp)
    ctx->pc = 0x3dd38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 18));
label_3dd390:
    // 0x3dd390: 0xffbf0420  sd          $ra, 0x420($sp)
    ctx->pc = 0x3dd390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 31));
label_3dd394:
    // 0x3dd394: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3dd394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3dd398:
    // 0x3dd398: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dd398u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dd39c:
    // 0x3dd39c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dd39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dd3a0:
    // 0x3dd3a0: 0x40f809  jalr        $v0
label_3dd3a4:
    if (ctx->pc == 0x3DD3A4u) {
        ctx->pc = 0x3DD3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD3A0u;
        // 0x3dd3a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD3A8u;
        goto label_3dd3a8;
    }
    ctx->pc = 0x3DD3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DD3A8u);
        ctx->pc = 0x3DD3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD3A0u;
        // 0x3dd3a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD3A0u, 0x3DD3A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DD3A8u;
label_3dd3a8:
    // 0x3dd3a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3dd3a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dd3ac:
    // 0x3dd3ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3dd3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3dd3b0:
    // 0x3dd3b0: 0x27b30410  addiu       $s3, $sp, 0x410
    ctx->pc = 0x3dd3b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3dd3b4:
    // 0x3dd3b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3dd3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3dd3b8:
    // 0x3dd3b8: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3dd3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3dd3bc:
    // 0x3dd3bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3dd3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3dd3c0:
    // 0x3dd3c0: 0x0  nop
    ctx->pc = 0x3dd3c0u;
    // NOP
label_3dd3c4:
    // 0x3dd3c4: 0x0  nop
    ctx->pc = 0x3dd3c4u;
    // NOP
label_3dd3c8:
    // 0x3dd3c8: 0x0  nop
    ctx->pc = 0x3dd3c8u;
    // NOP
label_3dd3cc:
    // 0x3dd3cc: 0x0  nop
    ctx->pc = 0x3dd3ccu;
    // NOP
label_3dd3d0:
    // 0x3dd3d0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3dd3d4:
    if (ctx->pc == 0x3DD3D4u) {
        ctx->pc = 0x3DD3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD3D0u;
        // 0x3dd3d4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD3D8u;
        goto label_3dd3d8;
    }
    ctx->pc = 0x3DD3D0u;
    {
        const bool branch_taken_0x3dd3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3DD3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD3D0u;
        // 0x3dd3d4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd3d0) {
            ctx->pc = 0x3DD3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dd3c0;
        }
    }
    ctx->pc = 0x3DD3D8u;
label_3dd3d8:
    // 0x3dd3d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3dd3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3dd3dc:
    // 0x3dd3dc: 0xc138ddc  jal         func_4E3770
label_3dd3e0:
    if (ctx->pc == 0x3DD3E0u) {
        ctx->pc = 0x3DD3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD3DCu;
        // 0x3dd3e0: 0x2452b8b8  addiu       $s2, $v0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD3E4u;
        goto label_3dd3e4;
    }
    ctx->pc = 0x3DD3DCu;
    SET_GPR_U32(ctx, 31, 0x3DD3E4u);
    ctx->pc = 0x3DD3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD3DCu;
    // 0x3dd3e0: 0x2452b8b8  addiu       $s2, $v0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3DD3DCu, 0x3DD3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD3E4u;
label_3dd3e4:
    // 0x3dd3e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3dd3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dd3e8:
    // 0x3dd3e8: 0xc0cd4ee  jal         func_3353B8
label_3dd3ec:
    if (ctx->pc == 0x3DD3ECu) {
        ctx->pc = 0x3DD3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD3E8u;
        // 0x3dd3ec: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD3F0u;
        goto label_3dd3f0;
    }
    ctx->pc = 0x3DD3E8u;
    SET_GPR_U32(ctx, 31, 0x3DD3F0u);
    ctx->pc = 0x3DD3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD3E8u;
    // 0x3dd3ec: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3DD3E8u, 0x3DD3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD3F0u;
label_3dd3f0:
    // 0x3dd3f0: 0x24450005  addiu       $a1, $v0, 0x5
    ctx->pc = 0x3dd3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_3dd3f4:
    // 0x3dd3f4: 0xc0e858c  jal         func_3A1630
label_3dd3f8:
    if (ctx->pc == 0x3DD3F8u) {
        ctx->pc = 0x3DD3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD3F4u;
        // 0x3dd3f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD3FCu;
        goto label_3dd3fc;
    }
    ctx->pc = 0x3DD3F4u;
    SET_GPR_U32(ctx, 31, 0x3DD3FCu);
    ctx->pc = 0x3DD3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD3F4u;
    // 0x3dd3f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DD3F4u, 0x3DD3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD3FCu;
label_3dd3fc:
    // 0x3dd3fc: 0x9602006e  lhu         $v0, 0x6E($s0)
    ctx->pc = 0x3dd3fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 110)));
label_3dd400:
    // 0x3dd400: 0x2c42000e  sltiu       $v0, $v0, 0xE
    ctx->pc = 0x3dd400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_3dd404:
    // 0x3dd404: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_3dd408:
    if (ctx->pc == 0x3DD408u) {
        ctx->pc = 0x3DD408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD404u;
        // 0x3dd408: 0x7a020010  lq          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD40Cu;
        goto label_3dd40c;
    }
    ctx->pc = 0x3DD404u;
    {
        const bool branch_taken_0x3dd404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dd404) {
            ctx->pc = 0x3DD408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DD404u;
            // 0x3dd408: 0x7a020010  lq          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DD428u;
            goto label_3dd428;
        }
    }
    ctx->pc = 0x3DD40Cu;
label_3dd40c:
    // 0x3dd40c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3dd40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dd410:
    // 0x3dd410: 0xc0cd4ee  jal         func_3353B8
label_3dd414:
    if (ctx->pc == 0x3DD414u) {
        ctx->pc = 0x3DD414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD410u;
        // 0x3dd414: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD418u;
        goto label_3dd418;
    }
    ctx->pc = 0x3DD410u;
    SET_GPR_U32(ctx, 31, 0x3DD418u);
    ctx->pc = 0x3DD414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD410u;
    // 0x3dd414: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3DD410u, 0x3DD418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD418u;
label_3dd418:
    // 0x3dd418: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x3dd418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3dd41c:
    // 0x3dd41c: 0xc0e858c  jal         func_3A1630
label_3dd420:
    if (ctx->pc == 0x3DD420u) {
        ctx->pc = 0x3DD420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD41Cu;
        // 0x3dd420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD424u;
        goto label_3dd424;
    }
    ctx->pc = 0x3DD41Cu;
    SET_GPR_U32(ctx, 31, 0x3DD424u);
    ctx->pc = 0x3DD420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD41Cu;
    // 0x3dd420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DD41Cu, 0x3DD424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD424u;
label_3dd424:
    // 0x3dd424: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3dd424u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3dd428:
    // 0x3dd428: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3dd428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3dd42c:
    // 0x3dd42c: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x3dd42cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_3dd430:
    // 0x3dd430: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3dd430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dd434:
    // 0x3dd434: 0xc0e947e  jal         func_3A51F8
label_3dd438:
    if (ctx->pc == 0x3DD438u) {
        ctx->pc = 0x3DD438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD434u;
        // 0x3dd438: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD43Cu;
        goto label_3dd43c;
    }
    ctx->pc = 0x3DD434u;
    SET_GPR_U32(ctx, 31, 0x3DD43Cu);
    ctx->pc = 0x3DD438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD434u;
    // 0x3dd438: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F8u, 0x3DD434u, 0x3DD43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD43Cu;
label_3dd43c:
    // 0x3dd43c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3dd440:
    if (ctx->pc == 0x3DD440u) {
        ctx->pc = 0x3DD440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD43Cu;
        // 0x3dd440: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD444u;
        goto label_3dd444;
    }
    ctx->pc = 0x3DD43Cu;
    {
        const bool branch_taken_0x3dd43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD43Cu;
        // 0x3dd440: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd43c) {
            ctx->pc = 0x3DD480u;
            goto label_3dd480;
        }
    }
    ctx->pc = 0x3DD444u;
label_3dd444:
    // 0x3dd444: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3dd444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3dd448:
    // 0x3dd448: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_3dd44c:
    if (ctx->pc == 0x3DD44Cu) {
        ctx->pc = 0x3DD44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD448u;
        // 0x3dd44c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD450u;
        goto label_3dd450;
    }
    ctx->pc = 0x3DD448u;
    {
        const bool branch_taken_0x3dd448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dd448) {
            ctx->pc = 0x3DD44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DD448u;
            // 0x3dd44c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DD4B8u;
            goto label_3dd4b8;
        }
    }
    ctx->pc = 0x3DD450u;
label_3dd450:
    // 0x3dd450: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3dd450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3dd454:
    // 0x3dd454: 0xc0ea16a  jal         func_3A85A8
label_3dd458:
    if (ctx->pc == 0x3DD458u) {
        ctx->pc = 0x3DD458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD454u;
        // 0x3dd458: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD45Cu;
        goto label_3dd45c;
    }
    ctx->pc = 0x3DD454u;
    SET_GPR_U32(ctx, 31, 0x3DD45Cu);
    ctx->pc = 0x3DD458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD454u;
    // 0x3dd458: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3DD454u, 0x3DD45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD45Cu;
label_3dd45c:
    // 0x3dd45c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3dd45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3dd460:
    // 0x3dd460: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3dd460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3dd464:
    // 0x3dd464: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3dd464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3dd468:
    // 0x3dd468: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3dd468u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3dd46c:
    // 0x3dd46c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3dd46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3dd470:
    // 0x3dd470: 0x60f809  jalr        $v1
label_3dd474:
    if (ctx->pc == 0x3DD474u) {
        ctx->pc = 0x3DD474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD470u;
        // 0x3dd474: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD478u;
        goto label_3dd478;
    }
    ctx->pc = 0x3DD470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3DD478u);
        ctx->pc = 0x3DD474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD470u;
        // 0x3dd474: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD470u, 0x3DD478u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DD478u;
label_3dd478:
    // 0x3dd478: 0x1000000f  b           . + 4 + (0xF << 2)
label_3dd47c:
    if (ctx->pc == 0x3DD47Cu) {
        ctx->pc = 0x3DD47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD478u;
        // 0x3dd47c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD480u;
        goto label_3dd480;
    }
    ctx->pc = 0x3DD478u;
    {
        const bool branch_taken_0x3dd478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD478u;
        // 0x3dd47c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd478) {
            ctx->pc = 0x3DD4B8u;
            goto label_3dd4b8;
        }
    }
    ctx->pc = 0x3DD480u;
label_3dd480:
    // 0x3dd480: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3dd480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3dd484:
    // 0x3dd484: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_3dd488:
    if (ctx->pc == 0x3DD488u) {
        ctx->pc = 0x3DD488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD484u;
        // 0x3dd488: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD48Cu;
        goto label_3dd48c;
    }
    ctx->pc = 0x3DD484u;
    {
        const bool branch_taken_0x3dd484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dd484) {
            ctx->pc = 0x3DD488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DD484u;
            // 0x3dd488: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DD4B8u;
            goto label_3dd4b8;
        }
    }
    ctx->pc = 0x3DD48Cu;
label_3dd48c:
    // 0x3dd48c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3dd48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3dd490:
    // 0x3dd490: 0xc0ea16a  jal         func_3A85A8
label_3dd494:
    if (ctx->pc == 0x3DD494u) {
        ctx->pc = 0x3DD494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD490u;
        // 0x3dd494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD498u;
        goto label_3dd498;
    }
    ctx->pc = 0x3DD490u;
    SET_GPR_U32(ctx, 31, 0x3DD498u);
    ctx->pc = 0x3DD494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD490u;
    // 0x3dd494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3DD490u, 0x3DD498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD498u;
label_3dd498:
    // 0x3dd498: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3dd498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3dd49c:
    // 0x3dd49c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3dd49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3dd4a0:
    // 0x3dd4a0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3dd4a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3dd4a4:
    // 0x3dd4a4: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3dd4a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3dd4a8:
    // 0x3dd4a8: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3dd4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3dd4ac:
    // 0x3dd4ac: 0x60f809  jalr        $v1
label_3dd4b0:
    if (ctx->pc == 0x3DD4B0u) {
        ctx->pc = 0x3DD4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD4ACu;
        // 0x3dd4b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD4B4u;
        goto label_3dd4b4;
    }
    ctx->pc = 0x3DD4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3DD4B4u);
        ctx->pc = 0x3DD4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD4ACu;
        // 0x3dd4b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD4ACu, 0x3DD4B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DD4B4u;
label_3dd4b4:
    // 0x3dd4b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3dd4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3dd4b8:
    // 0x3dd4b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3dd4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3dd4bc:
    // 0x3dd4bc: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_3dd4c0:
    if (ctx->pc == 0x3DD4C0u) {
        ctx->pc = 0x3DD4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD4BCu;
        // 0x3dd4c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD4C4u;
        goto label_3dd4c4;
    }
    ctx->pc = 0x3DD4BCu;
    {
        const bool branch_taken_0x3dd4bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DD4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD4BCu;
        // 0x3dd4c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd4bc) {
            ctx->pc = 0x3DD518u;
            goto label_3dd518;
        }
    }
    ctx->pc = 0x3DD4C4u;
label_3dd4c4:
    // 0x3dd4c4: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_3dd4c8:
    if (ctx->pc == 0x3DD4C8u) {
        ctx->pc = 0x3DD4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD4C4u;
        // 0x3dd4c8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD4CCu;
        goto label_3dd4cc;
    }
    ctx->pc = 0x3DD4C4u;
    {
        const bool branch_taken_0x3dd4c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dd4c4) {
            ctx->pc = 0x3DD4C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DD4C4u;
            // 0x3dd4c8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DD4DCu;
            goto label_3dd4dc;
        }
    }
    ctx->pc = 0x3DD4CCu;
label_3dd4cc:
    // 0x3dd4cc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3dd4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3dd4d0:
    // 0x3dd4d0: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x3dd4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_3dd4d4:
    // 0x3dd4d4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3dd4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3dd4d8:
    // 0x3dd4d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3dd4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dd4dc:
    // 0x3dd4dc: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_3dd4e0:
    if (ctx->pc == 0x3DD4E0u) {
        ctx->pc = 0x3DD4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD4DCu;
        // 0x3dd4e0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD4E4u;
        goto label_3dd4e4;
    }
    ctx->pc = 0x3DD4DCu;
    {
        const bool branch_taken_0x3dd4dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3dd4dc) {
            ctx->pc = 0x3DD4E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DD4DCu;
            // 0x3dd4e0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DD4F0u;
            goto label_3dd4f0;
        }
    }
    ctx->pc = 0x3DD4E4u;
label_3dd4e4:
    // 0x3dd4e4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3dd4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3dd4e8:
    // 0x3dd4e8: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x3dd4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_3dd4ec:
    // 0x3dd4ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3dd4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3dd4f0:
    // 0x3dd4f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3dd4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3dd4f4:
    // 0x3dd4f4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_3dd4f8:
    if (ctx->pc == 0x3DD4F8u) {
        ctx->pc = 0x3DD4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD4F4u;
        // 0x3dd4f8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD4FCu;
        goto label_3dd4fc;
    }
    ctx->pc = 0x3DD4F4u;
    {
        const bool branch_taken_0x3dd4f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DD4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD4F4u;
        // 0x3dd4f8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd4f4) {
            ctx->pc = 0x3DD514u;
            goto label_3dd514;
        }
    }
    ctx->pc = 0x3DD4FCu;
label_3dd4fc:
    // 0x3dd4fc: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x3dd4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_3dd500:
    // 0x3dd500: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3dd500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3dd504:
    // 0x3dd504: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3dd504u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_3dd508:
    // 0x3dd508: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3dd508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3dd50c:
    // 0x3dd50c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3dd50cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3dd510:
    // 0x3dd510: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3dd510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3dd514:
    // 0x3dd514: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dd514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dd518:
    // 0x3dd518: 0x7bb00460  lq          $s0, 0x460($sp)
    ctx->pc = 0x3dd518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3dd51c:
    // 0x3dd51c: 0x7bb10450  lq          $s1, 0x450($sp)
    ctx->pc = 0x3dd51cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3dd520:
    // 0x3dd520: 0x7bb20440  lq          $s2, 0x440($sp)
    ctx->pc = 0x3dd520u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3dd524:
    // 0x3dd524: 0x7bb30430  lq          $s3, 0x430($sp)
    ctx->pc = 0x3dd524u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3dd528:
    // 0x3dd528: 0xdfbf0420  ld          $ra, 0x420($sp)
    ctx->pc = 0x3dd528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
label_3dd52c:
    // 0x3dd52c: 0x3e00008  jr          $ra
label_3dd530:
    if (ctx->pc == 0x3DD530u) {
        ctx->pc = 0x3DD530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD52Cu;
        // 0x3dd530: 0x27bd0470  addiu       $sp, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD534u;
        goto label_3dd534;
    }
    ctx->pc = 0x3DD52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD52Cu;
        // 0x3dd530: 0x27bd0470  addiu       $sp, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD534u;
label_3dd534:
    // 0x3dd534: 0x0  nop
    ctx->pc = 0x3dd534u;
    // NOP
    ctx->pc = 0x3dd538u;
}
