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

// Function: sub_0014E4B0
// Address: 0x14e4b0 - 0x14e628
void sub_0014E4B0_0x14e4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E4B0_0x14e4b0");
#endif

    switch (ctx->pc) {
        case 0x14e4fcu: goto label_14e4fc;
        case 0x14e51cu: goto label_14e51c;
        case 0x14e564u: goto label_14e564;
        case 0x14e57cu: goto label_14e57c;
        case 0x14e584u: goto label_14e584;
        case 0x14e58cu: goto label_14e58c;
        case 0x14e598u: goto label_14e598;
        case 0x14e5a4u: goto label_14e5a4;
        case 0x14e5b0u: goto label_14e5b0;
        case 0x14e5bcu: goto label_14e5bc;
        case 0x14e5c8u: goto label_14e5c8;
        case 0x14e5d4u: goto label_14e5d4;
        case 0x14e5dcu: goto label_14e5dc;
        case 0x14e5e4u: goto label_14e5e4;
        case 0x14e5f4u: goto label_14e5f4;
        default: break;
    }

    ctx->pc = 0x14e4b0u;

    // 0x14e4b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x14e4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x14e4b4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x14e4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x14e4b8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x14e4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x14e4bc: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x14e4bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e4c0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x14e4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x14e4c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14e4c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e4c8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x14e4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x14e4cc: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x14e4ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e4d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14e4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14e4d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14e4d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e4d8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x14e4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x14e4dc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x14e4dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e4e0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x14e4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x14e4e4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x14e4e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e4e8: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x14e4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x14e4ec: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x14e4ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e4f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14e4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14e4f4: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x14E4F4u;
    SET_GPR_U32(ctx, 31, 0x14E4FCu);
    ctx->pc = 0x14E4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E4F4u;
    // 0x14e4f8: 0x100b82d  daddu       $s7, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x14E4F4u, 0x14E4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E4FCu;
label_14e4fc:
    // 0x14e4fc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x14e4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x14e500: 0x2222824  and         $a1, $s1, $v0
    ctx->pc = 0x14e500u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x14e504: 0x3231ffff  andi        $s1, $s1, 0xFFFF
    ctx->pc = 0x14e504u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x14e508: 0x2e220030  sltiu       $v0, $s1, 0x30
    ctx->pc = 0x14e508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x14e50c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14E50Cu;
    {
        const bool branch_taken_0x14e50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E50Cu;
        // 0x14e510: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e50c) {
            ctx->pc = 0x14E524u;
            goto label_14e524;
        }
    }
    ctx->pc = 0x14E514u;
    // 0x14e514: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14E514u;
    SET_GPR_U32(ctx, 31, 0x14E51Cu);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14E514u, 0x14E51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E51Cu;
label_14e51c:
    // 0x14e51c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x14E51Cu;
    {
        const bool branch_taken_0x14e51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E51Cu;
        // 0x14e520: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e51c) {
            ctx->pc = 0x14E5F8u;
            goto label_14e5f8;
        }
    }
    ctx->pc = 0x14E524u;
label_14e524:
    // 0x14e524: 0x56102b  sltu        $v0, $v0, $s6
    ctx->pc = 0x14e524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x14e528: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x14E528u;
    {
        const bool branch_taken_0x14e528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E528u;
        // 0x14e52c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e528) {
            ctx->pc = 0x14E5ECu;
            goto label_14e5ec;
        }
    }
    ctx->pc = 0x14E530u;
    // 0x14e530: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14e530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14e534: 0x2442be98  addiu       $v0, $v0, -0x4168
    ctx->pc = 0x14e534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950552));
    // 0x14e538: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x14e538u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x14e53c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14e53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14e540: 0x2463c248  addiu       $v1, $v1, -0x3DB8
    ctx->pc = 0x14e540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951496));
    // 0x14e544: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x14e544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x14e548: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14e548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14e54c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x14e54cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x14e550: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x14e550u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x14e554: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x14e554u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
    // 0x14e558: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x14e558u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x14e55c: 0xc05446a  jal         func_1511A8
    ctx->pc = 0x14E55Cu;
    SET_GPR_U32(ctx, 31, 0x14E564u);
    ctx->pc = 0x14E560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E55Cu;
    // 0x14e560: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1511A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1511A8u, 0x14E55Cu, 0x14E564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E564u;
label_14e564:
    // 0x14e564: 0x142c00  sll         $a1, $s4, 16
    ctx->pc = 0x14e564u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
    // 0x14e568: 0x153400  sll         $a2, $s5, 16
    ctx->pc = 0x14e568u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
    // 0x14e56c: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x14e56cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x14e570: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x14e570u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x14e574: 0xc054494  jal         func_151250
    ctx->pc = 0x14E574u;
    SET_GPR_U32(ctx, 31, 0x14E57Cu);
    ctx->pc = 0x14E578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E574u;
    // 0x14e578: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151250u, 0x14E574u, 0x14E57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E57Cu;
label_14e57c:
    // 0x14e57c: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x14E57Cu;
    SET_GPR_U32(ctx, 31, 0x14E584u);
    ctx->pc = 0x14E580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E57Cu;
    // 0x14e580: 0x24040039  addiu       $a0, $zero, 0x39 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x14E57Cu, 0x14E584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E584u;
label_14e584:
    // 0x14e584: 0xc05373e  jal         func_14DCF8
    ctx->pc = 0x14E584u;
    SET_GPR_U32(ctx, 31, 0x14E58Cu);
    ctx->pc = 0x14E588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E584u;
    // 0x14e588: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DCF8u, 0x14E584u, 0x14E58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E58Cu;
label_14e58c:
    // 0x14e58c: 0x112400  sll         $a0, $s1, 16
    ctx->pc = 0x14e58cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x14e590: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14E590u;
    SET_GPR_U32(ctx, 31, 0x14E598u);
    ctx->pc = 0x14E594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E590u;
    // 0x14e594: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14E590u, 0x14E598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E598u;
label_14e598:
    // 0x14e598: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x14e598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x14e59c: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14E59Cu;
    SET_GPR_U32(ctx, 31, 0x14E5A4u);
    ctx->pc = 0x14E5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E59Cu;
    // 0x14e5a0: 0x844441a8  lh          $a0, 0x41A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16808)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14E59Cu, 0x14E5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E5A4u;
label_14e5a4:
    // 0x14e5a4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x14e5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x14e5a8: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14E5A8u;
    SET_GPR_U32(ctx, 31, 0x14E5B0u);
    ctx->pc = 0x14E5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E5A8u;
    // 0x14e5ac: 0x844441ac  lh          $a0, 0x41AC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16812)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14E5A8u, 0x14E5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E5B0u;
label_14e5b0:
    // 0x14e5b0: 0x172400  sll         $a0, $s7, 16
    ctx->pc = 0x14e5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 16));
    // 0x14e5b4: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14E5B4u;
    SET_GPR_U32(ctx, 31, 0x14E5BCu);
    ctx->pc = 0x14E5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E5B4u;
    // 0x14e5b8: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14E5B4u, 0x14E5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E5BCu;
label_14e5bc:
    // 0x14e5bc: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x14e5bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x14e5c0: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14E5C0u;
    SET_GPR_U32(ctx, 31, 0x14E5C8u);
    ctx->pc = 0x14E5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E5C0u;
    // 0x14e5c4: 0x102403  sra         $a0, $s0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14E5C0u, 0x14E5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E5C8u;
label_14e5c8:
    // 0x14e5c8: 0x162400  sll         $a0, $s6, 16
    ctx->pc = 0x14e5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x14e5cc: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14E5CCu;
    SET_GPR_U32(ctx, 31, 0x14E5D4u);
    ctx->pc = 0x14E5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E5CCu;
    // 0x14e5d0: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14E5CCu, 0x14E5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E5D4u;
label_14e5d4:
    // 0x14e5d4: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x14E5D4u;
    SET_GPR_U32(ctx, 31, 0x14E5DCu);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x14E5D4u, 0x14E5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E5DCu;
label_14e5dc:
    // 0x14e5dc: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14E5DCu;
    SET_GPR_U32(ctx, 31, 0x14E5E4u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14E5DCu, 0x14E5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E5E4u;
label_14e5e4:
    // 0x14e5e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14E5E4u;
    {
        const bool branch_taken_0x14e5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5E4u;
        // 0x14e5e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e5e4) {
            ctx->pc = 0x14E5F8u;
            goto label_14e5f8;
        }
    }
    ctx->pc = 0x14E5ECu;
label_14e5ec:
    // 0x14e5ec: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14E5ECu;
    SET_GPR_U32(ctx, 31, 0x14E5F4u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14E5ECu, 0x14E5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E5F4u;
label_14e5f4:
    // 0x14e5f4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x14e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_14e5f8:
    // 0x14e5f8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x14e5f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14e5fc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x14e5fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14e600: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x14e600u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14e604: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x14e604u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14e608: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14e608u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14e60c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x14e60cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14e610: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x14e610u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e614: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x14e614u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14e618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e61c: 0x3e00008  jr          $ra
    ctx->pc = 0x14E61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E61Cu;
        // 0x14e620: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E624u;
    // 0x14e624: 0x0  nop
    ctx->pc = 0x14e624u;
    // NOP
    ctx->pc = 0x14e628u;
}
