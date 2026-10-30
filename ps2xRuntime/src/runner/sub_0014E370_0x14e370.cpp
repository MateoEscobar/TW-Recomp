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

// Function: sub_0014E370
// Address: 0x14e370 - 0x14e4b0
void sub_0014E370_0x14e370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E370_0x14e370");
#endif

    switch (ctx->pc) {
        case 0x14e3b4u: goto label_14e3b4;
        case 0x14e400u: goto label_14e400;
        case 0x14e418u: goto label_14e418;
        case 0x14e420u: goto label_14e420;
        case 0x14e428u: goto label_14e428;
        case 0x14e434u: goto label_14e434;
        case 0x14e440u: goto label_14e440;
        case 0x14e44cu: goto label_14e44c;
        case 0x14e458u: goto label_14e458;
        case 0x14e464u: goto label_14e464;
        case 0x14e46cu: goto label_14e46c;
        case 0x14e474u: goto label_14e474;
        case 0x14e484u: goto label_14e484;
        default: break;
    }

    ctx->pc = 0x14e370u;

    // 0x14e370: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x14e370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x14e374: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x14e374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x14e378: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x14e378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x14e37c: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x14e37cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e380: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x14e380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x14e384: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14e384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e388: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14e388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x14e38c: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x14e38cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e390: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x14e390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x14e394: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14e394u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e398: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x14e398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x14e39c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x14e39cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e3a0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x14e3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x14e3a4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x14e3a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e3a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14e3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14e3ac: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x14E3ACu;
    SET_GPR_U32(ctx, 31, 0x14E3B4u);
    ctx->pc = 0x14E3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E3ACu;
    // 0x14e3b0: 0x100b02d  daddu       $s6, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x14E3ACu, 0x14E3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E3B4u;
label_14e3b4:
    // 0x14e3b4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x14e3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x14e3b8: 0x2222824  and         $a1, $s1, $v0
    ctx->pc = 0x14e3b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x14e3bc: 0x3231ffff  andi        $s1, $s1, 0xFFFF
    ctx->pc = 0x14e3bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x14e3c0: 0x2e220030  sltiu       $v0, $s1, 0x30
    ctx->pc = 0x14e3c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x14e3c4: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x14E3C4u;
    {
        const bool branch_taken_0x14e3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E3C4u;
        // 0x14e3c8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e3c4) {
            ctx->pc = 0x14E47Cu;
            goto label_14e47c;
        }
    }
    ctx->pc = 0x14E3CCu;
    // 0x14e3cc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14e3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14e3d0: 0x2442be98  addiu       $v0, $v0, -0x4168
    ctx->pc = 0x14e3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950552));
    // 0x14e3d4: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x14e3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x14e3d8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14e3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14e3dc: 0x2463c248  addiu       $v1, $v1, -0x3DB8
    ctx->pc = 0x14e3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951496));
    // 0x14e3e0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x14e3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x14e3e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14e3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14e3e8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x14e3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x14e3ec: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x14e3ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x14e3f0: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x14e3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
    // 0x14e3f4: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x14e3f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x14e3f8: 0xc05446a  jal         func_1511A8
    ctx->pc = 0x14E3F8u;
    SET_GPR_U32(ctx, 31, 0x14E400u);
    ctx->pc = 0x14E3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E3F8u;
    // 0x14e3fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1511A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1511A8u, 0x14E3F8u, 0x14E400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E400u;
label_14e400:
    // 0x14e400: 0x142c00  sll         $a1, $s4, 16
    ctx->pc = 0x14e400u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
    // 0x14e404: 0x153400  sll         $a2, $s5, 16
    ctx->pc = 0x14e404u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
    // 0x14e408: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x14e408u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x14e40c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x14e40cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x14e410: 0xc054494  jal         func_151250
    ctx->pc = 0x14E410u;
    SET_GPR_U32(ctx, 31, 0x14E418u);
    ctx->pc = 0x14E414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E410u;
    // 0x14e414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151250u, 0x14E410u, 0x14E418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E418u;
label_14e418:
    // 0x14e418: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x14E418u;
    SET_GPR_U32(ctx, 31, 0x14E420u);
    ctx->pc = 0x14E41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E418u;
    // 0x14e41c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x14E418u, 0x14E420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E420u;
label_14e420:
    // 0x14e420: 0xc05373e  jal         func_14DCF8
    ctx->pc = 0x14E420u;
    SET_GPR_U32(ctx, 31, 0x14E428u);
    ctx->pc = 0x14E424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E420u;
    // 0x14e424: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DCF8u, 0x14E420u, 0x14E428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E428u;
label_14e428:
    // 0x14e428: 0x112400  sll         $a0, $s1, 16
    ctx->pc = 0x14e428u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x14e42c: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14E42Cu;
    SET_GPR_U32(ctx, 31, 0x14E434u);
    ctx->pc = 0x14E430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E42Cu;
    // 0x14e430: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14E42Cu, 0x14E434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E434u;
label_14e434:
    // 0x14e434: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x14e434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x14e438: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14E438u;
    SET_GPR_U32(ctx, 31, 0x14E440u);
    ctx->pc = 0x14E43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E438u;
    // 0x14e43c: 0x844441a8  lh          $a0, 0x41A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16808)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14E438u, 0x14E440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E440u;
label_14e440:
    // 0x14e440: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x14e440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x14e444: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14E444u;
    SET_GPR_U32(ctx, 31, 0x14E44Cu);
    ctx->pc = 0x14E448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E444u;
    // 0x14e448: 0x844441ac  lh          $a0, 0x41AC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16812)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14E444u, 0x14E44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E44Cu;
label_14e44c:
    // 0x14e44c: 0x162400  sll         $a0, $s6, 16
    ctx->pc = 0x14e44cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x14e450: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14E450u;
    SET_GPR_U32(ctx, 31, 0x14E458u);
    ctx->pc = 0x14E454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E450u;
    // 0x14e454: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14E450u, 0x14E458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E458u;
label_14e458:
    // 0x14e458: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x14e458u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x14e45c: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14E45Cu;
    SET_GPR_U32(ctx, 31, 0x14E464u);
    ctx->pc = 0x14E460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E45Cu;
    // 0x14e460: 0x102403  sra         $a0, $s0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14E45Cu, 0x14E464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E464u;
label_14e464:
    // 0x14e464: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x14E464u;
    SET_GPR_U32(ctx, 31, 0x14E46Cu);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x14E464u, 0x14E46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E46Cu;
label_14e46c:
    // 0x14e46c: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14E46Cu;
    SET_GPR_U32(ctx, 31, 0x14E474u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14E46Cu, 0x14E474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E474u;
label_14e474:
    // 0x14e474: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14E474u;
    {
        const bool branch_taken_0x14e474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E474u;
        // 0x14e478: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e474) {
            ctx->pc = 0x14E488u;
            goto label_14e488;
        }
    }
    ctx->pc = 0x14E47Cu;
label_14e47c:
    // 0x14e47c: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14E47Cu;
    SET_GPR_U32(ctx, 31, 0x14E484u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14E47Cu, 0x14E484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E484u;
label_14e484:
    // 0x14e484: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14e484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14e488:
    // 0x14e488: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x14e488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14e48c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x14e48cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14e490: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x14e490u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14e494: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x14e494u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14e498: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x14e498u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14e49c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x14e49cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e4a0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x14e4a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e4a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14e4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x14E4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4A8u;
        // 0x14e4ac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E4B0u;
}
