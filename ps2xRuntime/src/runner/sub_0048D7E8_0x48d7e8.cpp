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

// Function: sub_0048D7E8
// Address: 0x48d7e8 - 0x48d9f0
void sub_0048D7E8_0x48d7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048D7E8_0x48d7e8");
#endif

    switch (ctx->pc) {
        case 0x48d80cu: goto label_48d80c;
        case 0x48d844u: goto label_48d844;
        case 0x48d940u: goto label_48d940;
        default: break;
    }

    ctx->pc = 0x48d7e8u;

    // 0x48d7e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48d7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48d7ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x48d7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x48d7f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48d7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48d7f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x48d7f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d7f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x48d7f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d7fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48d7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48d800: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x48d800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d804: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x48D804u;
    SET_GPR_U32(ctx, 31, 0x48D80Cu);
    ctx->pc = 0x48D808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48D804u;
    // 0x48d808: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x48D804u, 0x48D80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D80Cu;
label_48d80c:
    // 0x48d80c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x48D80Cu;
    {
        const bool branch_taken_0x48d80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D80Cu;
        // 0x48d810: 0x8f848990  lw          $a0, -0x7670($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936976)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d80c) {
            ctx->pc = 0x48D850u;
            goto label_48d850;
        }
    }
    ctx->pc = 0x48D814u;
    // 0x48d814: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x48D814u;
    {
        const bool branch_taken_0x48d814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D814u;
        // 0x48d818: 0x8f8389d4  lw          $v1, -0x762C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937044)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d814) {
            ctx->pc = 0x48D834u;
            goto label_48d834;
        }
    }
    ctx->pc = 0x48D81Cu;
    // 0x48d81c: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x48d81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x48d820: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x48d820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x48d824: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x48d824u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x48d828: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x48d828u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x48d82c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x48D82Cu;
    {
        const bool branch_taken_0x48d82c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D82Cu;
        // 0x48d830: 0x24830010  addiu       $v1, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d82c) {
            ctx->pc = 0x48D868u;
            goto label_48d868;
        }
    }
    ctx->pc = 0x48D834u;
label_48d834:
    // 0x48d834: 0x26040003  addiu       $a0, $s0, 0x3
    ctx->pc = 0x48d834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x48d838: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48d838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d83c: 0xc123560  jal         func_48D580
    ctx->pc = 0x48D83Cu;
    SET_GPR_U32(ctx, 31, 0x48D844u);
    ctx->pc = 0x48D840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48D83Cu;
    // 0x48d840: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48D580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D580u, 0x48D83Cu, 0x48D844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D844u;
label_48d844:
    // 0x48d844: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x48d844u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d848: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x48D848u;
    {
        const bool branch_taken_0x48d848 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x48D84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D848u;
        // 0x48d84c: 0x8f8289d0  lw          $v0, -0x7630($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d848) {
            ctx->pc = 0x48D858u;
            goto label_48d858;
        }
    }
    ctx->pc = 0x48D850u;
label_48d850:
    // 0x48d850: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x48D850u;
    {
        const bool branch_taken_0x48d850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D850u;
        // 0x48d854: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d850) {
            ctx->pc = 0x48D9D8u;
            goto label_48d9d8;
        }
    }
    ctx->pc = 0x48D858u;
label_48d858:
    // 0x48d858: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x48d858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x48d85c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x48d85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x48d860: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48D860u;
    {
        const bool branch_taken_0x48d860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D860u;
        // 0x48d864: 0xaf8289d4  sw          $v0, -0x762C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937044), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d860) {
            ctx->pc = 0x48D874u;
            goto label_48d874;
        }
    }
    ctx->pc = 0x48D868u;
label_48d868:
    // 0x48d868: 0x3c02cfff  lui         $v0, 0xCFFF
    ctx->pc = 0x48d868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53247 << 16));
    // 0x48d86c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x48d86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x48d870: 0x624824  and         $t1, $v1, $v0
    ctx->pc = 0x48d870u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_48d874:
    // 0x48d874: 0x8f8a8990  lw          $t2, -0x7670($gp)
    ctx->pc = 0x48d874u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936976)));
    // 0x48d878: 0x1140001a  beqz        $t2, . + 4 + (0x1A << 2)
    ctx->pc = 0x48D878u;
    {
        const bool branch_taken_0x48d878 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D878u;
        // 0x48d87c: 0x8f828678  lw          $v0, -0x7988($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d878) {
            ctx->pc = 0x48D8E4u;
            goto label_48d8e4;
        }
    }
    ctx->pc = 0x48D880u;
    // 0x48d880: 0x3c055000  lui         $a1, 0x5000
    ctx->pc = 0x48d880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    // 0x48d884: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x48d884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x48d888: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x48d888u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d88c: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x48d88cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x48d890: 0x244203f0  addiu       $v0, $v0, 0x3F0
    ctx->pc = 0x48d890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x48d894: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x48d894u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x48d898: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x48d898u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x48d89c: 0x34c60040  ori         $a2, $a2, 0x40
    ctx->pc = 0x48d89cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x48d8a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x48d8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x48d8a4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x48d8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x48d8a8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x48d8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x48d8ac: 0x9203c  dsll32      $a0, $t1, 0
    ctx->pc = 0x48d8acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) << (32 + 0));
    // 0x48d8b0: 0x70e22b89  pcpyld      $a1, $a3, $v0
    ctx->pc = 0x48d8b0u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x48d8b4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x48d8b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x48d8b8: 0x7d45ffd0  sq          $a1, -0x30($t2)
    ctx->pc = 0x48d8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 4294967248), GPR_VEC(ctx, 5));
    // 0x48d8bc: 0x71062b89  pcpyld      $a1, $t0, $a2
    ctx->pc = 0x48d8bcu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 6)));
    // 0x48d8c0: 0x8f828990  lw          $v0, -0x7670($gp)
    ctx->pc = 0x48d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936976)));
    // 0x48d8c4: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x48d8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x48d8c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x48d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48d8cc: 0x70e42b89  pcpyld      $a1, $a3, $a0
    ctx->pc = 0x48d8ccu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
    // 0x48d8d0: 0xaf828990  sw          $v0, -0x7670($gp)
    ctx->pc = 0x48d8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936976), GPR_U32(ctx, 2));
    // 0x48d8d4: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x48d8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48d8d8: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x48d8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x48d8dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x48D8DCu;
    {
        const bool branch_taken_0x48d8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D8DCu;
        // 0x48d8e0: 0xaf838990  sw          $v1, -0x7670($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936976), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d8dc) {
            ctx->pc = 0x48D8E8u;
            goto label_48d8e8;
        }
    }
    ctx->pc = 0x48D8E4u;
label_48d8e4:
    // 0x48d8e4: 0xaf8989ec  sw          $t1, -0x7614($gp)
    ctx->pc = 0x48d8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937068), GPR_U32(ctx, 9));
label_48d8e8:
    // 0x48d8e8: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x48d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x48d8ec: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x48d8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x48d8f0: 0x12200028  beqz        $s1, . + 4 + (0x28 << 2)
    ctx->pc = 0x48D8F0u;
    {
        const bool branch_taken_0x48d8f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D8F0u;
        // 0x48d8f4: 0xaf828990  sw          $v0, -0x7670($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d8f0) {
            ctx->pc = 0x48D994u;
            goto label_48d994;
        }
    }
    ctx->pc = 0x48D8F8u;
    // 0x48d8f8: 0x8f848994  lw          $a0, -0x766C($gp)
    ctx->pc = 0x48d8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936980)));
    // 0x48d8fc: 0x10800025  beqz        $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x48D8FCu;
    {
        const bool branch_taken_0x48d8fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D8FCu;
        // 0x48d900: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d8fc) {
            ctx->pc = 0x48D994u;
            goto label_48d994;
        }
    }
    ctx->pc = 0x48D904u;
    // 0x48d904: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x48d904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x48d908: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x48d908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x48d90c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x48d90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x48d910: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x48D910u;
    {
        const bool branch_taken_0x48d910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x48D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D910u;
        // 0x48d914: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d910) {
            ctx->pc = 0x48D960u;
            goto label_48d960;
        }
    }
    ctx->pc = 0x48D918u;
    // 0x48d918: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x48d918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x48d91c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x48d91cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x48d920: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x48d920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x48d924: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x48D924u;
    {
        const bool branch_taken_0x48d924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D924u;
        // 0x48d928: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d924) {
            ctx->pc = 0x48D960u;
            goto label_48d960;
        }
    }
    ctx->pc = 0x48D92Cu;
    // 0x48d92c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x48d92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x48d930: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x48d930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x48d934: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x48d934u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x48d938: 0xf  sync
    ctx->pc = 0x48d938u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x48d93c: 0x40f  sync.p
    ctx->pc = 0x48d93cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_48d940:
    // 0x48d940: 0x0  nop
    ctx->pc = 0x48d940u;
    // NOP
    // 0x48d944: 0x0  nop
    ctx->pc = 0x48d944u;
    // NOP
    // 0x48d948: 0x0  nop
    ctx->pc = 0x48d948u;
    // NOP
    // 0x48d94c: 0x0  nop
    ctx->pc = 0x48d94cu;
    // NOP
    // 0x48d950: 0x0  nop
    ctx->pc = 0x48d950u;
    // NOP
    // 0x48d954: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x48D954u;
    {
        const bool branch_taken_0x48d954 = (false);
        if (branch_taken_0x48d954) {
            ctx->pc = 0x48D940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48d940;
        }
    }
    ctx->pc = 0x48D95Cu;
    // 0x48d95c: 0x0  nop
    ctx->pc = 0x48d95cu;
    // NOP
label_48d960:
    // 0x48d960: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x48d960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x48d964: 0x8f868994  lw          $a2, -0x766C($gp)
    ctx->pc = 0x48d964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936980)));
    // 0x48d968: 0x2442f9e0  addiu       $v0, $v0, -0x620
    ctx->pc = 0x48d968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965728));
    // 0x48d96c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x48d96cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x48d970: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x48d970u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x70F9E0u));
    // 0x48d974: 0x2463f9f0  addiu       $v1, $v1, -0x610
    ctx->pc = 0x48d974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965744));
    // 0x48d978: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x48d978u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x48d97c: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x48d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48d980: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x48d980u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x70F9F0u));
    // 0x48d984: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x48d984u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x48d988: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x48d988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48d98c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x48D98Cu;
    {
        const bool branch_taken_0x48d98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D98Cu;
        // 0x48d990: 0xaf82898c  sw          $v0, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d98c) {
            ctx->pc = 0x48D9B0u;
            goto label_48d9b0;
        }
    }
    ctx->pc = 0x48D994u;
label_48d994:
    // 0x48d994: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x48d994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x48d998: 0x8f84898c  lw          $a0, -0x7674($gp)
    ctx->pc = 0x48d998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48d99c: 0x2442fa00  addiu       $v0, $v0, -0x600
    ctx->pc = 0x48d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965760));
    // 0x48d9a0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x48d9a0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x70FA00u));
    // 0x48d9a4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x48d9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x48d9a8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x48d9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x48d9ac: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x48d9acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
label_48d9b0:
    // 0x48d9b0: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x48d9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x48d9b4: 0x8f85898c  lw          $a1, -0x7674($gp)
    ctx->pc = 0x48d9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48d9b8: 0x2484fa10  addiu       $a0, $a0, -0x5F0
    ctx->pc = 0x48d9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965776));
    // 0x48d9bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48d9c0: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x48d9c0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x70FA10u));
    // 0x48d9c4: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x48d9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x48d9c8: 0x8f84898c  lw          $a0, -0x7674($gp)
    ctx->pc = 0x48d9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48d9cc: 0xaf848994  sw          $a0, -0x766C($gp)
    ctx->pc = 0x48d9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936980), GPR_U32(ctx, 4));
    // 0x48d9d0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x48d9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x48d9d4: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x48d9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
label_48d9d8:
    // 0x48d9d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x48d9d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48d9dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48d9dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48d9e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48d9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48d9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x48D9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48D9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48D9E4u;
        // 0x48d9e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48D9ECu;
    // 0x48d9ec: 0x0  nop
    ctx->pc = 0x48d9ecu;
    // NOP
    ctx->pc = 0x48d9f0u;
}
