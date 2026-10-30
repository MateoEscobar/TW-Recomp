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

// Function: sub_0044A368
// Address: 0x44a368 - 0x44a4e8
void sub_0044A368_0x44a368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044A368_0x44a368");
#endif

    switch (ctx->pc) {
        case 0x44a3f8u: goto label_44a3f8;
        case 0x44a454u: goto label_44a454;
        case 0x44a478u: goto label_44a478;
        case 0x44a48cu: goto label_44a48c;
        default: break;
    }

    ctx->pc = 0x44a368u;

    // 0x44a368: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x44a368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x44a36c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x44a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x44a370: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x44a370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x44a374: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x44a374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x44a378: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x44a378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x44a37c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44a37cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a380: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x44a380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x44a384: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x44a384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a388: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x44a388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x44a38c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x44a38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x44a390: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x44a390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x44a394: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x44a394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x44a398: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x44a398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x44a39c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x44a39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x44a3a0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x44a3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x44a3a4: 0xdc510000  ld          $s1, 0x0($v0)
    ctx->pc = 0x44a3a4u;
    SET_GPR_U64(ctx, 17, runtime->Load64(rdram, ctx, 0x10002000u));
    // 0x44a3a8: 0x6230042  bgezl       $s1, . + 4 + (0x42 << 2)
    ctx->pc = 0x44A3A8u;
    {
        const bool branch_taken_0x44a3a8 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x44a3a8) {
            ctx->pc = 0x44A3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A3A8u;
            // 0x44a3ac: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A4B4u;
            goto label_44a4b4;
        }
    }
    ctx->pc = 0x44A3B0u;
    // 0x44a3b0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x44a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x44a3b4: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x44a3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x44a3b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x44a3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10000000
    // 0x44a3bc: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x44a3bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x44a3c0: 0x5460003c  bnel        $v1, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x44A3C0u;
    {
        const bool branch_taken_0x44a3c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x44a3c0) {
            ctx->pc = 0x44A3C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A3C0u;
            // 0x44a3c4: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A4B4u;
            goto label_44a4b4;
        }
    }
    ctx->pc = 0x44A3C8u;
    // 0x44a3c8: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x44a3c8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
    // 0x44a3cc: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x44a3ccu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x44a3d0: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x44a3d0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x44a3d4: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x44a3d4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x44a3d8: 0x36b52020  ori         $s5, $s5, 0x2020
    ctx->pc = 0x44a3d8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8224);
    // 0x44a3dc: 0x3c1e2000  lui         $fp, 0x2000
    ctx->pc = 0x44a3dcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)8192 << 16));
    // 0x44a3e0: 0x3c173000  lui         $s7, 0x3000
    ctx->pc = 0x44a3e0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)12288 << 16));
    // 0x44a3e4: 0x3c164000  lui         $s6, 0x4000
    ctx->pc = 0x44a3e4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16384 << 16));
    // 0x44a3e8: 0x3694b420  ori         $s4, $s4, 0xB420
    ctx->pc = 0x44a3e8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)46112);
    // 0x44a3ec: 0x36732000  ori         $s3, $s3, 0x2000
    ctx->pc = 0x44a3ecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)8192);
    // 0x44a3f0: 0x36522010  ori         $s2, $s2, 0x2010
    ctx->pc = 0x44a3f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)8208);
    // 0x44a3f4: 0x0  nop
    ctx->pc = 0x44a3f4u;
    // NOP
label_44a3f8:
    // 0x44a3f8: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x44a3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x44a3fc: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x44a3fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x44a400: 0x8e05082c  lw          $a1, 0x82C($s0)
    ctx->pc = 0x44a400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2092)));
    // 0x44a404: 0x3083ff00  andi        $v1, $a0, 0xFF00
    ctx->pc = 0x44a404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x44a408: 0x871024  and         $v0, $a0, $a3
    ctx->pc = 0x44a408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x44a40c: 0x21242  srl         $v0, $v0, 9
    ctx->pc = 0x44a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x44a410: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x44a410u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x44a414: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x44a414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x44a418: 0x3084007f  andi        $a0, $a0, 0x7F
    ctx->pc = 0x44a418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x44a41c: 0x10be0005  beq         $a1, $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x44A41Cu;
    {
        const bool branch_taken_0x44a41c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 30));
        ctx->pc = 0x44A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A41Cu;
        // 0x44a420: 0x641023  subu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a41c) {
            ctx->pc = 0x44A434u;
            goto label_44a434;
        }
    }
    ctx->pc = 0x44A424u;
    // 0x44a424: 0x50b70004  beql        $a1, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x44A424u;
    {
        const bool branch_taken_0x44a424 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 23));
        if (branch_taken_0x44a424) {
            ctx->pc = 0x44A428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A424u;
            // 0x44a428: 0x2c420020  sltiu       $v0, $v0, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A438u;
            goto label_44a438;
        }
    }
    ctx->pc = 0x44A42Cu;
    // 0x44a42c: 0x54b6000d  bnel        $a1, $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x44A42Cu;
    {
        const bool branch_taken_0x44a42c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 22));
        if (branch_taken_0x44a42c) {
            ctx->pc = 0x44A430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A42Cu;
            // 0x44a430: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A464u;
            goto label_44a464;
        }
    }
    ctx->pc = 0x44A434u;
label_44a434:
    // 0x44a434: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x44a434u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_44a438:
    // 0x44a438: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x44A438u;
    {
        const bool branch_taken_0x44a438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A438u;
        // 0x44a43c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a438) {
            ctx->pc = 0x44A464u;
            goto label_44a464;
        }
    }
    ctx->pc = 0x44A440u;
    // 0x44a440: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x44a440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x44a444: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x44A444u;
    {
        const bool branch_taken_0x44a444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A444u;
        // 0x44a448: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a444) {
            ctx->pc = 0x44A464u;
            goto label_44a464;
        }
    }
    ctx->pc = 0x44A44Cu;
    // 0x44a44c: 0xc1119a0  jal         func_446680
    ctx->pc = 0x44A44Cu;
    SET_GPR_U32(ctx, 31, 0x44A454u);
    ctx->pc = 0x44A450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44A44Cu;
    // 0x44a450: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446680u, 0x44A44Cu, 0x44A454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A454u;
label_44a454:
    // 0x44a454: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x44a454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x44a458: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x44A458u;
    {
        const bool branch_taken_0x44a458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x44A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A458u;
        // 0x44a45c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a458) {
            ctx->pc = 0x44A484u;
            goto label_44a484;
        }
    }
    ctx->pc = 0x44A460u;
    // 0x44a460: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x44a460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_44a464:
    // 0x44a464: 0x284201f5  slti        $v0, $v0, 0x1F5
    ctx->pc = 0x44a464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)501) ? 1 : 0);
    // 0x44a468: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x44A468u;
    {
        const bool branch_taken_0x44a468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A468u;
        // 0x44a46c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a468) {
            ctx->pc = 0x44A494u;
            goto label_44a494;
        }
    }
    ctx->pc = 0x44A470u;
    // 0x44a470: 0xc1119a0  jal         func_446680
    ctx->pc = 0x44A470u;
    SET_GPR_U32(ctx, 31, 0x44A478u);
    ctx->pc = 0x44A474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44A470u;
    // 0x44a474: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446680u, 0x44A470u, 0x44A478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A478u;
label_44a478:
    // 0x44a478: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x44a478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x44a47c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x44A47Cu;
    {
        const bool branch_taken_0x44a47c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A47Cu;
        // 0x44a480: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a47c) {
            ctx->pc = 0x44A494u;
            goto label_44a494;
        }
    }
    ctx->pc = 0x44A484u;
label_44a484:
    // 0x44a484: 0xc111f1c  jal         func_447C70
    ctx->pc = 0x44A484u;
    SET_GPR_U32(ctx, 31, 0x44A48Cu);
    ctx->pc = 0x447C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447C70u, 0x44A484u, 0x44A48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A48Cu;
label_44a48c:
    // 0x44a48c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x44A48Cu;
    {
        const bool branch_taken_0x44a48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A48Cu;
        // 0x44a490: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a48c) {
            ctx->pc = 0x44A4B4u;
            goto label_44a4b4;
        }
    }
    ctx->pc = 0x44A494u;
label_44a494:
    // 0x44a494: 0xde710000  ld          $s1, 0x0($s3)
    ctx->pc = 0x44a494u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x44a498: 0x6230006  bgezl       $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x44A498u;
    {
        const bool branch_taken_0x44a498 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x44a498) {
            ctx->pc = 0x44A49Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A498u;
            // 0x44a49c: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A4B4u;
            goto label_44a4b4;
        }
    }
    ctx->pc = 0x44A4A0u;
    // 0x44a4a0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x44a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x44a4a4: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x44a4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x44a4a8: 0x1040ffd3  beqz        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x44A4A8u;
    {
        const bool branch_taken_0x44a4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44a4a8) {
            ctx->pc = 0x44A3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44a3f8;
        }
    }
    ctx->pc = 0x44A4B0u;
    // 0x44a4b0: 0xae00082c  sw          $zero, 0x82C($s0)
    ctx->pc = 0x44a4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
label_44a4b4:
    // 0x44a4b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x44a4b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a4b8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x44a4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x44a4bc: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x44a4bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x44a4c0: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x44a4c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x44a4c4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x44a4c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x44a4c8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x44a4c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x44a4cc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x44a4ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x44a4d0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x44a4d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44a4d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x44a4d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44a4d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x44a4d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44a4dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x44a4dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44a4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x44A4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A4E0u;
        // 0x44a4e4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44A4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44A4E8u;
}
