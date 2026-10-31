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

// Function: sub_004224D8
// Address: 0x4224d8 - 0x4225d8
void sub_004224D8_0x4224d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004224D8_0x4224d8");
#endif

    switch (ctx->pc) {
        case 0x422504u: goto label_422504;
        case 0x42250cu: goto label_42250c;
        case 0x42254cu: goto label_42254c;
        case 0x422568u: goto label_422568;
        case 0x422584u: goto label_422584;
        case 0x4225a0u: goto label_4225a0;
        case 0x4225bcu: goto label_4225bc;
        default: break;
    }

    ctx->pc = 0x4224d8u;

    // 0x4224d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4224d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4224dc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4224dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4224e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4224e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4224e4: 0x30d0ffff  andi        $s0, $a2, 0xFFFF
    ctx->pc = 0x4224e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x4224e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4224e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4224ec: 0x30f1ffff  andi        $s1, $a3, 0xFFFF
    ctx->pc = 0x4224ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x4224f0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4224f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4224f4: 0x30b2ffff  andi        $s2, $a1, 0xFFFF
    ctx->pc = 0x4224f4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x4224f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4224f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4224fc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x4224FCu;
    SET_GPR_U32(ctx, 31, 0x422504u);
    ctx->pc = 0x422500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4224FCu;
    // 0x422500: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x4224FCu, 0x422504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422504u;
label_422504:
    // 0x422504: 0xc08a61a  jal         func_229868
    ctx->pc = 0x422504u;
    SET_GPR_U32(ctx, 31, 0x42250Cu);
    ctx->pc = 0x422508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422504u;
    // 0x422508: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x422504u, 0x42250Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42250Cu;
label_42250c:
    // 0x42250c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x42250cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422510: 0x10a00031  beqz        $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x422510u;
    {
        const bool branch_taken_0x422510 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x422514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422510u;
        // 0x422514: 0x2e420007  sltiu       $v0, $s2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x422510) {
            ctx->pc = 0x4225D8u;
            return;
        }
    }
    ctx->pc = 0x422518u;
    // 0x422518: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x422518u;
    {
        const bool branch_taken_0x422518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422518u;
        // 0x42251c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422518) {
            ctx->pc = 0x4225D8u;
            return;
        }
    }
    ctx->pc = 0x422520u;
    // 0x422520: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x422520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x422524: 0x2442b920  addiu       $v0, $v0, -0x46E0
    ctx->pc = 0x422524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949152));
    // 0x422528: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x422528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x42252c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x42252cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x422530: 0x800008  jr          $a0
    ctx->pc = 0x422530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x422538u: goto label_422538;
            case 0x422554u: goto label_422554;
            case 0x422570u: goto label_422570;
            case 0x42258Cu: goto label_42258c;
            case 0x4225A8u: goto label_4225a8;
            case 0x4225C4u: goto label_4225c4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x422530u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x422538u;
label_422538:
    // 0x422538: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x422538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x42253c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x42253cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422540: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x422540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x422544: 0xc13b642  jal         func_4ED908
    ctx->pc = 0x422544u;
    SET_GPR_U32(ctx, 31, 0x42254Cu);
    ctx->pc = 0x422548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422544u;
    // 0x422548: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED908u, 0x422544u, 0x42254Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42254Cu;
label_42254c:
    // 0x42254c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x42254Cu;
    {
        const bool branch_taken_0x42254c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x422550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42254Cu;
        // 0x422550: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42254c) {
            ctx->pc = 0x4225DCu;
            return;
        }
    }
    ctx->pc = 0x422554u;
label_422554:
    // 0x422554: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x422554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x422558: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x422558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42255c: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x42255cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x422560: 0xc13b622  jal         func_4ED888
    ctx->pc = 0x422560u;
    SET_GPR_U32(ctx, 31, 0x422568u);
    ctx->pc = 0x422564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422560u;
    // 0x422564: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED888u, 0x422560u, 0x422568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422568u;
label_422568:
    // 0x422568: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x422568u;
    {
        const bool branch_taken_0x422568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422568u;
        // 0x42256c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422568) {
            ctx->pc = 0x4225DCu;
            return;
        }
    }
    ctx->pc = 0x422570u;
label_422570:
    // 0x422570: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x422570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x422574: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x422574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422578: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x422578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x42257c: 0xc13b662  jal         func_4ED988
    ctx->pc = 0x42257Cu;
    SET_GPR_U32(ctx, 31, 0x422584u);
    ctx->pc = 0x422580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42257Cu;
    // 0x422580: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED988u, 0x42257Cu, 0x422584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422584u;
label_422584:
    // 0x422584: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x422584u;
    {
        const bool branch_taken_0x422584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x422588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422584u;
        // 0x422588: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422584) {
            ctx->pc = 0x4225DCu;
            return;
        }
    }
    ctx->pc = 0x42258Cu;
label_42258c:
    // 0x42258c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x42258cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x422590: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x422590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422594: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x422594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x422598: 0xc13b632  jal         func_4ED8C8
    ctx->pc = 0x422598u;
    SET_GPR_U32(ctx, 31, 0x4225A0u);
    ctx->pc = 0x42259Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422598u;
    // 0x42259c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED8C8u, 0x422598u, 0x4225A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4225A0u;
label_4225a0:
    // 0x4225a0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4225A0u;
    {
        const bool branch_taken_0x4225a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4225A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4225A0u;
        // 0x4225a4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4225a0) {
            ctx->pc = 0x4225DCu;
            return;
        }
    }
    ctx->pc = 0x4225A8u;
label_4225a8:
    // 0x4225a8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x4225a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x4225ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4225acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4225b0: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x4225b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x4225b4: 0xc13b652  jal         func_4ED948
    ctx->pc = 0x4225B4u;
    SET_GPR_U32(ctx, 31, 0x4225BCu);
    ctx->pc = 0x4225B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4225B4u;
    // 0x4225b8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED948u, 0x4225B4u, 0x4225BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4225BCu;
label_4225bc:
    // 0x4225bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4225BCu;
    {
        const bool branch_taken_0x4225bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4225C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4225BCu;
        // 0x4225c0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4225bc) {
            ctx->pc = 0x4225DCu;
            return;
        }
    }
    ctx->pc = 0x4225C4u;
label_4225c4:
    // 0x4225c4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x4225c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x4225c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4225c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4225cc: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x4225ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    // 0x4225d0: 0xc137894  jal         func_4DE250
    ctx->pc = 0x4225D0u;
    SET_GPR_U32(ctx, 31, 0x4225D8u);
    ctx->pc = 0x4225D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4225D0u;
    // 0x4225d4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE250u, 0x4225D0u, 0x4225D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4225D8u;
}
