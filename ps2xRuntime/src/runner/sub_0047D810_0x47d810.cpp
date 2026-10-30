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

// Function: sub_0047D810
// Address: 0x47d810 - 0x47d9b8
void sub_0047D810_0x47d810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047D810_0x47d810");
#endif

    switch (ctx->pc) {
        case 0x47d810u: goto label_47d810;
        case 0x47d814u: goto label_47d814;
        case 0x47d818u: goto label_47d818;
        case 0x47d81cu: goto label_47d81c;
        case 0x47d820u: goto label_47d820;
        case 0x47d824u: goto label_47d824;
        case 0x47d828u: goto label_47d828;
        case 0x47d82cu: goto label_47d82c;
        case 0x47d830u: goto label_47d830;
        case 0x47d834u: goto label_47d834;
        case 0x47d838u: goto label_47d838;
        case 0x47d83cu: goto label_47d83c;
        case 0x47d840u: goto label_47d840;
        case 0x47d844u: goto label_47d844;
        case 0x47d848u: goto label_47d848;
        case 0x47d84cu: goto label_47d84c;
        case 0x47d850u: goto label_47d850;
        case 0x47d854u: goto label_47d854;
        case 0x47d858u: goto label_47d858;
        case 0x47d85cu: goto label_47d85c;
        case 0x47d860u: goto label_47d860;
        case 0x47d864u: goto label_47d864;
        case 0x47d868u: goto label_47d868;
        case 0x47d86cu: goto label_47d86c;
        case 0x47d870u: goto label_47d870;
        case 0x47d874u: goto label_47d874;
        case 0x47d878u: goto label_47d878;
        case 0x47d87cu: goto label_47d87c;
        case 0x47d880u: goto label_47d880;
        case 0x47d884u: goto label_47d884;
        case 0x47d888u: goto label_47d888;
        case 0x47d88cu: goto label_47d88c;
        case 0x47d890u: goto label_47d890;
        case 0x47d894u: goto label_47d894;
        case 0x47d898u: goto label_47d898;
        case 0x47d89cu: goto label_47d89c;
        case 0x47d8a0u: goto label_47d8a0;
        case 0x47d8a4u: goto label_47d8a4;
        case 0x47d8a8u: goto label_47d8a8;
        case 0x47d8acu: goto label_47d8ac;
        case 0x47d8b0u: goto label_47d8b0;
        case 0x47d8b4u: goto label_47d8b4;
        case 0x47d8b8u: goto label_47d8b8;
        case 0x47d8bcu: goto label_47d8bc;
        case 0x47d8c0u: goto label_47d8c0;
        case 0x47d8c4u: goto label_47d8c4;
        case 0x47d8c8u: goto label_47d8c8;
        case 0x47d8ccu: goto label_47d8cc;
        case 0x47d8d0u: goto label_47d8d0;
        case 0x47d8d4u: goto label_47d8d4;
        case 0x47d8d8u: goto label_47d8d8;
        case 0x47d8dcu: goto label_47d8dc;
        case 0x47d8e0u: goto label_47d8e0;
        case 0x47d8e4u: goto label_47d8e4;
        case 0x47d8e8u: goto label_47d8e8;
        case 0x47d8ecu: goto label_47d8ec;
        case 0x47d8f0u: goto label_47d8f0;
        case 0x47d8f4u: goto label_47d8f4;
        case 0x47d8f8u: goto label_47d8f8;
        case 0x47d8fcu: goto label_47d8fc;
        case 0x47d900u: goto label_47d900;
        case 0x47d904u: goto label_47d904;
        case 0x47d908u: goto label_47d908;
        case 0x47d90cu: goto label_47d90c;
        case 0x47d910u: goto label_47d910;
        case 0x47d914u: goto label_47d914;
        case 0x47d918u: goto label_47d918;
        case 0x47d91cu: goto label_47d91c;
        case 0x47d920u: goto label_47d920;
        case 0x47d924u: goto label_47d924;
        case 0x47d928u: goto label_47d928;
        case 0x47d92cu: goto label_47d92c;
        case 0x47d930u: goto label_47d930;
        case 0x47d934u: goto label_47d934;
        case 0x47d938u: goto label_47d938;
        case 0x47d93cu: goto label_47d93c;
        case 0x47d940u: goto label_47d940;
        case 0x47d944u: goto label_47d944;
        case 0x47d948u: goto label_47d948;
        case 0x47d94cu: goto label_47d94c;
        case 0x47d950u: goto label_47d950;
        case 0x47d954u: goto label_47d954;
        case 0x47d958u: goto label_47d958;
        case 0x47d95cu: goto label_47d95c;
        case 0x47d960u: goto label_47d960;
        case 0x47d964u: goto label_47d964;
        case 0x47d968u: goto label_47d968;
        case 0x47d96cu: goto label_47d96c;
        case 0x47d970u: goto label_47d970;
        case 0x47d974u: goto label_47d974;
        case 0x47d978u: goto label_47d978;
        case 0x47d97cu: goto label_47d97c;
        case 0x47d980u: goto label_47d980;
        case 0x47d984u: goto label_47d984;
        case 0x47d988u: goto label_47d988;
        case 0x47d98cu: goto label_47d98c;
        case 0x47d990u: goto label_47d990;
        case 0x47d994u: goto label_47d994;
        case 0x47d998u: goto label_47d998;
        case 0x47d99cu: goto label_47d99c;
        case 0x47d9a0u: goto label_47d9a0;
        case 0x47d9a4u: goto label_47d9a4;
        case 0x47d9a8u: goto label_47d9a8;
        case 0x47d9acu: goto label_47d9ac;
        case 0x47d9b0u: goto label_47d9b0;
        case 0x47d9b4u: goto label_47d9b4;
        default: break;
    }

    ctx->pc = 0x47d810u;

label_47d810:
    // 0x47d810: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x47d810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_47d814:
    // 0x47d814: 0x8f8285d4  lw          $v0, -0x7A2C($gp)
    ctx->pc = 0x47d814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936020)));
label_47d818:
    // 0x47d818: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x47d818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_47d81c:
    // 0x47d81c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x47d81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_47d820:
    // 0x47d820: 0x24150010  addiu       $s5, $zero, 0x10
    ctx->pc = 0x47d820u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_47d824:
    // 0x47d824: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x47d824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_47d828:
    // 0x47d828: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x47d828u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_47d82c:
    // 0x47d82c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x47d82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_47d830:
    // 0x47d830: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x47d830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47d834:
    // 0x47d834: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x47d834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_47d838:
    // 0x47d838: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x47d838u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_47d83c:
    // 0x47d83c: 0x8f8885dc  lw          $t0, -0x7A24($gp)
    ctx->pc = 0x47d83cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936028)));
label_47d840:
    // 0x47d840: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x47d840u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_47d844:
    // 0x47d844: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x47d844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_47d848:
    // 0x47d848: 0xc6a80b  movn        $s5, $a2, $a2
    ctx->pc = 0x47d848u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 6));
label_47d84c:
    // 0x47d84c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x47d84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_47d850:
    // 0x47d850: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x47d850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_47d854:
    // 0x47d854: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
label_47d858:
    if (ctx->pc == 0x47D858u) {
        ctx->pc = 0x47D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D854u;
        // 0x47d858: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47D85Cu;
        goto label_47d85c;
    }
    ctx->pc = 0x47D854u;
    {
        const bool branch_taken_0x47d854 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x47D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D854u;
        // 0x47d858: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d854) {
            ctx->pc = 0x47D874u;
            goto label_47d874;
        }
    }
    ctx->pc = 0x47D85Cu;
label_47d85c:
    // 0x47d85c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x47d85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_47d860:
    // 0x47d860: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x47d860u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
label_47d864:
    // 0x47d864: 0x8c62ae30  lw          $v0, -0x51D0($v1)
    ctx->pc = 0x47d864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946352)));
label_47d868:
    // 0x47d868: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x47d868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_47d86c:
    // 0x47d86c: 0x10000006  b           . + 4 + (0x6 << 2)
label_47d870:
    if (ctx->pc == 0x47D870u) {
        ctx->pc = 0x47D870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D86Cu;
        // 0x47d870: 0x2852824  and         $a1, $s4, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47D874u;
        goto label_47d874;
    }
    ctx->pc = 0x47D86Cu;
    {
        const bool branch_taken_0x47d86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47D870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D86Cu;
        // 0x47d870: 0x2852824  and         $a1, $s4, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d86c) {
            ctx->pc = 0x47D888u;
            goto label_47d888;
        }
    }
    ctx->pc = 0x47D874u;
label_47d874:
    // 0x47d874: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x47d874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_47d878:
    // 0x47d878: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x47d878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
label_47d87c:
    // 0x47d87c: 0x8c62ae20  lw          $v0, -0x51E0($v1)
    ctx->pc = 0x47d87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946336)));
label_47d880:
    // 0x47d880: 0x2852824  and         $a1, $s4, $a1
    ctx->pc = 0x47d880u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & GPR_U64(ctx, 5));
label_47d884:
    // 0x47d884: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x47d884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_47d888:
    // 0x47d888: 0x40f809  jalr        $v0
label_47d88c:
    if (ctx->pc == 0x47D88Cu) {
        ctx->pc = 0x47D890u;
        goto label_47d890;
    }
    ctx->pc = 0x47D888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47D890u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47D888u, 0x47D890u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47D890u;
label_47d890:
    // 0x47d890: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x47d890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47d894:
    // 0x47d894: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
label_47d898:
    if (ctx->pc == 0x47D898u) {
        ctx->pc = 0x47D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D894u;
        // 0x47d898: 0x2642ffff  addiu       $v0, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47D89Cu;
        goto label_47d89c;
    }
    ctx->pc = 0x47D894u;
    {
        const bool branch_taken_0x47d894 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x47D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D894u;
        // 0x47d898: 0x2642ffff  addiu       $v0, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d894) {
            ctx->pc = 0x47D8B4u;
            goto label_47d8b4;
        }
    }
    ctx->pc = 0x47D89Cu;
label_47d89c:
    // 0x47d89c: 0x10000039  b           . + 4 + (0x39 << 2)
label_47d8a0:
    if (ctx->pc == 0x47D8A0u) {
        ctx->pc = 0x47D8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D89Cu;
        // 0x47d8a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47D8A4u;
        goto label_47d8a4;
    }
    ctx->pc = 0x47D89Cu;
    {
        const bool branch_taken_0x47d89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47D8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D89Cu;
        // 0x47d8a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d89c) {
            ctx->pc = 0x47D984u;
            goto label_47d984;
        }
    }
    ctx->pc = 0x47D8A4u;
label_47d8a4:
    // 0x47d8a4: 0xc11f886  jal         func_47E218
label_47d8a8:
    if (ctx->pc == 0x47D8A8u) {
        ctx->pc = 0x47D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D8A4u;
        // 0x47d8a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47D8ACu;
        goto label_47d8ac;
    }
    ctx->pc = 0x47D8A4u;
    SET_GPR_U32(ctx, 31, 0x47D8ACu);
    ctx->pc = 0x47D8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47D8A4u;
    // 0x47d8a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47E218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E218u, 0x47D8A4u, 0x47D8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D8ACu;
label_47d8ac:
    // 0x47d8ac: 0x10000035  b           . + 4 + (0x35 << 2)
label_47d8b0:
    if (ctx->pc == 0x47D8B0u) {
        ctx->pc = 0x47D8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D8ACu;
        // 0x47d8b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47D8B4u;
        goto label_47d8b4;
    }
    ctx->pc = 0x47D8ACu;
    {
        const bool branch_taken_0x47d8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47D8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D8ACu;
        // 0x47d8b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d8ac) {
            ctx->pc = 0x47D984u;
            goto label_47d984;
        }
    }
    ctx->pc = 0x47D8B4u;
label_47d8b4:
    // 0x47d8b4: 0x152023  negu        $a0, $s5
    ctx->pc = 0x47d8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 21)));
label_47d8b8:
    // 0x47d8b8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x47d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_47d8bc:
    // 0x47d8bc: 0x26630007  addiu       $v1, $s3, 0x7
    ctx->pc = 0x47d8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 7));
label_47d8c0:
    // 0x47d8c0: 0x442824  and         $a1, $v0, $a0
    ctx->pc = 0x47d8c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_47d8c4:
    // 0x47d8c4: 0x390c2  srl         $s2, $v1, 3
    ctx->pc = 0x47d8c4u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_47d8c8:
    // 0x47d8c8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x47d8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_47d8cc:
    // 0x47d8cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x47d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47d8d0:
    // 0x47d8d0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x47d8d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47d8d4:
    // 0x47d8d4: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x47d8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_47d8d8:
    // 0x47d8d8: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x47d8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_47d8dc:
    // 0x47d8dc: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x47d8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
label_47d8e0:
    // 0x47d8e0: 0xae15000c  sw          $s5, 0xC($s0)
    ctx->pc = 0x47d8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
label_47d8e4:
    // 0x47d8e4: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x47d8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
label_47d8e8:
    // 0x47d8e8: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x47d8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_47d8ec:
    // 0x47d8ec: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
label_47d8f0:
    if (ctx->pc == 0x47D8F0u) {
        ctx->pc = 0x47D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D8ECu;
        // 0x47d8f0: 0xae040014  sw          $a0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47D8F4u;
        goto label_47d8f4;
    }
    ctx->pc = 0x47D8ECu;
    {
        const bool branch_taken_0x47d8ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x47D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D8ECu;
        // 0x47d8f0: 0xae040014  sw          $a0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d8ec) {
            ctx->pc = 0x47D960u;
            goto label_47d960;
        }
    }
    ctx->pc = 0x47D8F4u;
label_47d8f4:
    // 0x47d8f4: 0x2651018  mult        $v0, $s3, $a1
    ctx->pc = 0x47d8f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_47d8f8:
    // 0x47d8f8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x47d8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_47d8fc:
    // 0x47d8fc: 0x2477ad18  addiu       $s7, $v1, -0x52E8
    ctx->pc = 0x47d8fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_47d900:
    // 0x47d900: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x47d900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_47d904:
    // 0x47d904: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x47d904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_47d908:
    // 0x47d908: 0x559821  addu        $s3, $v0, $s5
    ctx->pc = 0x47d908u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_47d90c:
    // 0x47d90c: 0x8ee20108  lw          $v0, 0x108($s7)
    ctx->pc = 0x47d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
label_47d910:
    // 0x47d910: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x47d910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_47d914:
    // 0x47d914: 0x40f809  jalr        $v0
label_47d918:
    if (ctx->pc == 0x47D918u) {
        ctx->pc = 0x47D918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D914u;
        // 0x47d918: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47D91Cu;
        goto label_47d91c;
    }
    ctx->pc = 0x47D914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47D91Cu);
        ctx->pc = 0x47D918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D914u;
        // 0x47d918: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47D914u, 0x47D91Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47D91Cu;
label_47d91c:
    // 0x47d91c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x47d91cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47d920:
    // 0x47d920: 0x10e0ffe0  beqz        $a3, . + 4 + (-0x20 << 2)
label_47d924:
    if (ctx->pc == 0x47D924u) {
        ctx->pc = 0x47D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D920u;
        // 0x47d924: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47D928u;
        goto label_47d928;
    }
    ctx->pc = 0x47D920u;
    {
        const bool branch_taken_0x47d920 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x47D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D920u;
        // 0x47d924: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47d920) {
            ctx->pc = 0x47D8A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47d8a4;
        }
    }
    ctx->pc = 0x47D928u;
label_47d928:
    // 0x47d928: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x47d928u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_47d92c:
    // 0x47d92c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x47d92cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_47d930:
    // 0x47d930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x47d930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47d934:
    // 0x47d934: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x47d934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47d938:
    // 0x47d938: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x47d938u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_47d93c:
    // 0x47d93c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x47d93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_47d940:
    // 0x47d940: 0xacf60004  sw          $s6, 0x4($a3)
    ctx->pc = 0x47d940u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 22));
label_47d944:
    // 0x47d944: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x47d944u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_47d948:
    // 0x47d948: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x47d948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_47d94c:
    // 0x47d94c: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x47d94cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
label_47d950:
    // 0x47d950: 0xc10c1fa  jal         func_4307E8
label_47d954:
    if (ctx->pc == 0x47D954u) {
        ctx->pc = 0x47D954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D950u;
        // 0x47d954: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47D958u;
        goto label_47d958;
    }
    ctx->pc = 0x47D950u;
    SET_GPR_U32(ctx, 31, 0x47D958u);
    ctx->pc = 0x47D954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47D950u;
    // 0x47d954: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x47D950u, 0x47D958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47D958u;
label_47d958:
    // 0x47d958: 0x5620ffed  bnel        $s1, $zero, . + 4 + (-0x13 << 2)
label_47d95c:
    if (ctx->pc == 0x47D95Cu) {
        ctx->pc = 0x47D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D958u;
        // 0x47d95c: 0x8ee20108  lw          $v0, 0x108($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47D960u;
        goto label_47d960;
    }
    ctx->pc = 0x47D958u;
    {
        const bool branch_taken_0x47d958 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x47d958) {
            ctx->pc = 0x47D95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47D958u;
            // 0x47d95c: 0x8ee20108  lw          $v0, 0x108($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47D910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47d910;
        }
    }
    ctx->pc = 0x47D960u;
label_47d960:
    // 0x47d960: 0x8f848930  lw          $a0, -0x76D0($gp)
    ctx->pc = 0x47d960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936880)));
label_47d964:
    // 0x47d964: 0x27828930  addiu       $v0, $gp, -0x76D0
    ctx->pc = 0x47d964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936880));
label_47d968:
    // 0x47d968: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x47d968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_47d96c:
    // 0x47d96c: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x47d96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_47d970:
    // 0x47d970: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x47d970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
label_47d974:
    // 0x47d974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47d974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47d978:
    // 0x47d978: 0x8f828930  lw          $v0, -0x76D0($gp)
    ctx->pc = 0x47d978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936880)));
label_47d97c:
    // 0x47d97c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x47d97cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_47d980:
    // 0x47d980: 0xaf838930  sw          $v1, -0x76D0($gp)
    ctx->pc = 0x47d980u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936880), GPR_U32(ctx, 3));
label_47d984:
    // 0x47d984: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x47d984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_47d988:
    // 0x47d988: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x47d988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47d98c:
    // 0x47d98c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x47d98cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_47d990:
    // 0x47d990: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x47d990u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_47d994:
    // 0x47d994: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x47d994u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_47d998:
    // 0x47d998: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x47d998u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47d99c:
    // 0x47d99c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x47d99cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47d9a0:
    // 0x47d9a0: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x47d9a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47d9a4:
    // 0x47d9a4: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x47d9a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47d9a8:
    // 0x47d9a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47d9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_47d9ac:
    // 0x47d9ac: 0x3e00008  jr          $ra
label_47d9b0:
    if (ctx->pc == 0x47D9B0u) {
        ctx->pc = 0x47D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D9ACu;
        // 0x47d9b0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47D9B4u;
        goto label_47d9b4;
    }
    ctx->pc = 0x47D9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47D9ACu;
        // 0x47d9b0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47D9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47D9B4u;
label_47d9b4:
    // 0x47d9b4: 0x0  nop
    ctx->pc = 0x47d9b4u;
    // NOP
    ctx->pc = 0x47d9b8u;
}
