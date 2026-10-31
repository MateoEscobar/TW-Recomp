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

// Function: sub_0030D820
// Address: 0x30d820 - 0x30d960
void sub_0030D820_0x30d820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D820_0x30d820");
#endif

    switch (ctx->pc) {
        case 0x30d820u: goto label_30d820;
        case 0x30d824u: goto label_30d824;
        case 0x30d828u: goto label_30d828;
        case 0x30d82cu: goto label_30d82c;
        case 0x30d830u: goto label_30d830;
        case 0x30d834u: goto label_30d834;
        case 0x30d838u: goto label_30d838;
        case 0x30d83cu: goto label_30d83c;
        case 0x30d840u: goto label_30d840;
        case 0x30d844u: goto label_30d844;
        case 0x30d848u: goto label_30d848;
        case 0x30d84cu: goto label_30d84c;
        case 0x30d850u: goto label_30d850;
        case 0x30d854u: goto label_30d854;
        case 0x30d858u: goto label_30d858;
        case 0x30d85cu: goto label_30d85c;
        case 0x30d860u: goto label_30d860;
        case 0x30d864u: goto label_30d864;
        case 0x30d868u: goto label_30d868;
        case 0x30d86cu: goto label_30d86c;
        case 0x30d870u: goto label_30d870;
        case 0x30d874u: goto label_30d874;
        case 0x30d878u: goto label_30d878;
        case 0x30d87cu: goto label_30d87c;
        case 0x30d880u: goto label_30d880;
        case 0x30d884u: goto label_30d884;
        case 0x30d888u: goto label_30d888;
        case 0x30d88cu: goto label_30d88c;
        case 0x30d890u: goto label_30d890;
        case 0x30d894u: goto label_30d894;
        case 0x30d898u: goto label_30d898;
        case 0x30d89cu: goto label_30d89c;
        case 0x30d8a0u: goto label_30d8a0;
        case 0x30d8a4u: goto label_30d8a4;
        case 0x30d8a8u: goto label_30d8a8;
        case 0x30d8acu: goto label_30d8ac;
        case 0x30d8b0u: goto label_30d8b0;
        case 0x30d8b4u: goto label_30d8b4;
        case 0x30d8b8u: goto label_30d8b8;
        case 0x30d8bcu: goto label_30d8bc;
        case 0x30d8c0u: goto label_30d8c0;
        case 0x30d8c4u: goto label_30d8c4;
        case 0x30d8c8u: goto label_30d8c8;
        case 0x30d8ccu: goto label_30d8cc;
        case 0x30d8d0u: goto label_30d8d0;
        case 0x30d8d4u: goto label_30d8d4;
        case 0x30d8d8u: goto label_30d8d8;
        case 0x30d8dcu: goto label_30d8dc;
        case 0x30d8e0u: goto label_30d8e0;
        case 0x30d8e4u: goto label_30d8e4;
        case 0x30d8e8u: goto label_30d8e8;
        case 0x30d8ecu: goto label_30d8ec;
        case 0x30d8f0u: goto label_30d8f0;
        case 0x30d8f4u: goto label_30d8f4;
        case 0x30d8f8u: goto label_30d8f8;
        case 0x30d8fcu: goto label_30d8fc;
        case 0x30d900u: goto label_30d900;
        case 0x30d904u: goto label_30d904;
        case 0x30d908u: goto label_30d908;
        case 0x30d90cu: goto label_30d90c;
        case 0x30d910u: goto label_30d910;
        case 0x30d914u: goto label_30d914;
        case 0x30d918u: goto label_30d918;
        case 0x30d91cu: goto label_30d91c;
        case 0x30d920u: goto label_30d920;
        case 0x30d924u: goto label_30d924;
        case 0x30d928u: goto label_30d928;
        case 0x30d92cu: goto label_30d92c;
        case 0x30d930u: goto label_30d930;
        case 0x30d934u: goto label_30d934;
        case 0x30d938u: goto label_30d938;
        case 0x30d93cu: goto label_30d93c;
        case 0x30d940u: goto label_30d940;
        case 0x30d944u: goto label_30d944;
        case 0x30d948u: goto label_30d948;
        case 0x30d94cu: goto label_30d94c;
        case 0x30d950u: goto label_30d950;
        case 0x30d954u: goto label_30d954;
        case 0x30d958u: goto label_30d958;
        case 0x30d95cu: goto label_30d95c;
        default: break;
    }

    ctx->pc = 0x30d820u;

label_30d820:
    // 0x30d820: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x30d820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_30d824:
    // 0x30d824: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x30d824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_30d828:
    // 0x30d828: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x30d828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_30d82c:
    // 0x30d82c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30d82cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30d830:
    // 0x30d830: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x30d830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_30d834:
    // 0x30d834: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x30d834u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30d838:
    // 0x30d838: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x30d838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_30d83c:
    // 0x30d83c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x30d83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_30d840:
    // 0x30d840: 0x3c150057  lui         $s5, 0x57
    ctx->pc = 0x30d840u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
label_30d844:
    // 0x30d844: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x30d844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_30d848:
    // 0x30d848: 0x241600b2  addiu       $s6, $zero, 0xB2
    ctx->pc = 0x30d848u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
label_30d84c:
    // 0x30d84c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x30d84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_30d850:
    // 0x30d850: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30d850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30d854:
    // 0x30d854: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x30d854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_30d858:
    // 0x30d858: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x30d858u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_30d85c:
    // 0x30d85c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30d85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30d860:
    // 0x30d860: 0xc137826  jal         func_4DE098
label_30d864:
    if (ctx->pc == 0x30D864u) {
        ctx->pc = 0x30D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D860u;
        // 0x30d864: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D868u;
        goto label_30d868;
    }
    ctx->pc = 0x30D860u;
    SET_GPR_U32(ctx, 31, 0x30D868u);
    ctx->pc = 0x30D864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D860u;
    // 0x30d864: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30D860u, 0x30D868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D868u;
label_30d868:
    // 0x30d868: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x30d868u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_30d86c:
    // 0x30d86c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30d86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30d870:
    // 0x30d870: 0xc0e409a  jal         func_390268
label_30d874:
    if (ctx->pc == 0x30D874u) {
        ctx->pc = 0x30D874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D870u;
        // 0x30d874: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D878u;
        goto label_30d878;
    }
    ctx->pc = 0x30D870u;
    SET_GPR_U32(ctx, 31, 0x30D878u);
    ctx->pc = 0x30D874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D870u;
    // 0x30d874: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30D870u, 0x30D878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D878u;
label_30d878:
    // 0x30d878: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30d878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30d87c:
    // 0x30d87c: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
label_30d880:
    if (ctx->pc == 0x30D880u) {
        ctx->pc = 0x30D880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D87Cu;
        // 0x30d880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D884u;
        goto label_30d884;
    }
    ctx->pc = 0x30D87Cu;
    {
        const bool branch_taken_0x30d87c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D87Cu;
        // 0x30d880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d87c) {
            ctx->pc = 0x30D92Cu;
            goto label_30d92c;
        }
    }
    ctx->pc = 0x30D884u;
label_30d884:
    // 0x30d884: 0xc089f76  jal         func_227DD8
label_30d888:
    if (ctx->pc == 0x30D888u) {
        ctx->pc = 0x30D88Cu;
        goto label_30d88c;
    }
    ctx->pc = 0x30D884u;
    SET_GPR_U32(ctx, 31, 0x30D88Cu);
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x30D884u, 0x30D88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D88Cu;
label_30d88c:
    // 0x30d88c: 0x10510027  beq         $v0, $s1, . + 4 + (0x27 << 2)
label_30d890:
    if (ctx->pc == 0x30D890u) {
        ctx->pc = 0x30D890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D88Cu;
        // 0x30d890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D894u;
        goto label_30d894;
    }
    ctx->pc = 0x30D88Cu;
    {
        const bool branch_taken_0x30d88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x30D890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D88Cu;
        // 0x30d890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d88c) {
            ctx->pc = 0x30D92Cu;
            goto label_30d92c;
        }
    }
    ctx->pc = 0x30D894u;
label_30d894:
    // 0x30d894: 0xc088edc  jal         func_223B70
label_30d898:
    if (ctx->pc == 0x30D898u) {
        ctx->pc = 0x30D89Cu;
        goto label_30d89c;
    }
    ctx->pc = 0x30D894u;
    SET_GPR_U32(ctx, 31, 0x30D89Cu);
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x30D894u, 0x30D89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D89Cu;
label_30d89c:
    // 0x30d89c: 0x10510023  beq         $v0, $s1, . + 4 + (0x23 << 2)
label_30d8a0:
    if (ctx->pc == 0x30D8A0u) {
        ctx->pc = 0x30D8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D89Cu;
        // 0x30d8a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D8A4u;
        goto label_30d8a4;
    }
    ctx->pc = 0x30D89Cu;
    {
        const bool branch_taken_0x30d89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x30D8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D89Cu;
        // 0x30d8a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d89c) {
            ctx->pc = 0x30D92Cu;
            goto label_30d92c;
        }
    }
    ctx->pc = 0x30D8A4u;
label_30d8a4:
    // 0x30d8a4: 0xc0c3658  jal         func_30D960
label_30d8a8:
    if (ctx->pc == 0x30D8A8u) {
        ctx->pc = 0x30D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D8A4u;
        // 0x30d8a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D8ACu;
        goto label_30d8ac;
    }
    ctx->pc = 0x30D8A4u;
    SET_GPR_U32(ctx, 31, 0x30D8ACu);
    ctx->pc = 0x30D8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D8A4u;
    // 0x30d8a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D960u, 0x30D8A4u, 0x30D8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D8ACu;
label_30d8ac:
    // 0x30d8ac: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x30d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_30d8b0:
    // 0x30d8b0: 0x1456001e  bne         $v0, $s6, . + 4 + (0x1E << 2)
label_30d8b4:
    if (ctx->pc == 0x30D8B4u) {
        ctx->pc = 0x30D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D8B0u;
        // 0x30d8b4: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D8B8u;
        goto label_30d8b8;
    }
    ctx->pc = 0x30D8B0u;
    {
        const bool branch_taken_0x30d8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x30D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D8B0u;
        // 0x30d8b4: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d8b0) {
            ctx->pc = 0x30D92Cu;
            goto label_30d92c;
        }
    }
    ctx->pc = 0x30D8B8u;
label_30d8b8:
    // 0x30d8b8: 0xc0e4060  jal         func_390180
label_30d8bc:
    if (ctx->pc == 0x30D8BCu) {
        ctx->pc = 0x30D8C0u;
        goto label_30d8c0;
    }
    ctx->pc = 0x30D8B8u;
    SET_GPR_U32(ctx, 31, 0x30D8C0u);
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x30D8B8u, 0x30D8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D8C0u;
label_30d8c0:
    // 0x30d8c0: 0xc105e98  jal         func_417A60
label_30d8c4:
    if (ctx->pc == 0x30D8C4u) {
        ctx->pc = 0x30D8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D8C0u;
        // 0x30d8c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D8C8u;
        goto label_30d8c8;
    }
    ctx->pc = 0x30D8C0u;
    SET_GPR_U32(ctx, 31, 0x30D8C8u);
    ctx->pc = 0x30D8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D8C0u;
    // 0x30d8c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417A60u, 0x30D8C0u, 0x30D8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D8C8u;
label_30d8c8:
    // 0x30d8c8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_30d8cc:
    if (ctx->pc == 0x30D8CCu) {
        ctx->pc = 0x30D8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D8C8u;
        // 0x30d8cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D8D0u;
        goto label_30d8d0;
    }
    ctx->pc = 0x30D8C8u;
    {
        const bool branch_taken_0x30d8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D8C8u;
        // 0x30d8cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d8c8) {
            ctx->pc = 0x30D92Cu;
            goto label_30d92c;
        }
    }
    ctx->pc = 0x30D8D0u;
label_30d8d0:
    // 0x30d8d0: 0xc089bfc  jal         func_226FF0
label_30d8d4:
    if (ctx->pc == 0x30D8D4u) {
        ctx->pc = 0x30D8D8u;
        goto label_30d8d8;
    }
    ctx->pc = 0x30D8D0u;
    SET_GPR_U32(ctx, 31, 0x30D8D8u);
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x30D8D0u, 0x30D8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D8D8u;
label_30d8d8:
    // 0x30d8d8: 0xc0e57ce  jal         func_395F38
label_30d8dc:
    if (ctx->pc == 0x30D8DCu) {
        ctx->pc = 0x30D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D8D8u;
        // 0x30d8dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D8E0u;
        goto label_30d8e0;
    }
    ctx->pc = 0x30D8D8u;
    SET_GPR_U32(ctx, 31, 0x30D8E0u);
    ctx->pc = 0x30D8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D8D8u;
    // 0x30d8dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x30D8D8u, 0x30D8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D8E0u;
label_30d8e0:
    // 0x30d8e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30d8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30d8e4:
    // 0x30d8e4: 0x26a5cea0  addiu       $a1, $s5, -0x3160
    ctx->pc = 0x30d8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954656));
label_30d8e8:
    // 0x30d8e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x30d8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30d8ec:
    // 0x30d8ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_30d8f0:
    if (ctx->pc == 0x30D8F0u) {
        ctx->pc = 0x30D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D8ECu;
        // 0x30d8f0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D8F4u;
        goto label_30d8f4;
    }
    ctx->pc = 0x30D8ECu;
    {
        const bool branch_taken_0x30d8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D8ECu;
        // 0x30d8f0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d8ec) {
            ctx->pc = 0x30D8FCu;
            goto label_30d8fc;
        }
    }
    ctx->pc = 0x30D8F4u;
label_30d8f4:
    // 0x30d8f4: 0xc0930a0  jal         func_24C280
label_30d8f8:
    if (ctx->pc == 0x30D8F8u) {
        ctx->pc = 0x30D8FCu;
        goto label_30d8fc;
    }
    ctx->pc = 0x30D8F4u;
    SET_GPR_U32(ctx, 31, 0x30D8FCu);
    ctx->pc = 0x24C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C280u, 0x30D8F4u, 0x30D8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D8FCu;
label_30d8fc:
    // 0x30d8fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x30d8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_30d900:
    // 0x30d900: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x30d900u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_30d904:
    // 0x30d904: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x30d904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_30d908:
    // 0x30d908: 0x40f809  jalr        $v0
label_30d90c:
    if (ctx->pc == 0x30D90Cu) {
        ctx->pc = 0x30D90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D908u;
        // 0x30d90c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D910u;
        goto label_30d910;
    }
    ctx->pc = 0x30D908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30D910u);
        ctx->pc = 0x30D90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D908u;
        // 0x30d90c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D908u, 0x30D910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30D910u;
label_30d910:
    // 0x30d910: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x30d910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_30d914:
    // 0x30d914: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30d914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30d918:
    // 0x30d918: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x30d918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_30d91c:
    // 0x30d91c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30d91cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30d920:
    // 0x30d920: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x30d920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_30d924:
    // 0x30d924: 0xc0b3d20  jal         func_2CF480
label_30d928:
    if (ctx->pc == 0x30D928u) {
        ctx->pc = 0x30D928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D924u;
        // 0x30d928: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D92Cu;
        goto label_30d92c;
    }
    ctx->pc = 0x30D924u;
    SET_GPR_U32(ctx, 31, 0x30D92Cu);
    ctx->pc = 0x30D928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D924u;
    // 0x30d928: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF480u, 0x30D924u, 0x30D92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D92Cu;
label_30d92c:
    // 0x30d92c: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x30d92cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_30d930:
    // 0x30d930: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
label_30d934:
    if (ctx->pc == 0x30D934u) {
        ctx->pc = 0x30D934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D930u;
        // 0x30d934: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D938u;
        goto label_30d938;
    }
    ctx->pc = 0x30D930u;
    {
        const bool branch_taken_0x30d930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D930u;
        // 0x30d934: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d930) {
            ctx->pc = 0x30D860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d860;
        }
    }
    ctx->pc = 0x30D938u;
label_30d938:
    // 0x30d938: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x30d938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_30d93c:
    // 0x30d93c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x30d93cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_30d940:
    // 0x30d940: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x30d940u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_30d944:
    // 0x30d944: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x30d944u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30d948:
    // 0x30d948: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x30d948u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30d94c:
    // 0x30d94c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x30d94cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30d950:
    // 0x30d950: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x30d950u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30d954:
    // 0x30d954: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30d954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30d958:
    // 0x30d958: 0x3e00008  jr          $ra
label_30d95c:
    if (ctx->pc == 0x30D95Cu) {
        ctx->pc = 0x30D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D958u;
        // 0x30d95c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D960u;
        goto label_fallthrough_0x30d958;
    }
    ctx->pc = 0x30D958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D958u;
        // 0x30d95c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x30d958:
    ctx->pc = 0x30D960u;
}
