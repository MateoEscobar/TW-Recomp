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

// Function: sub_0011D808
// Address: 0x11d808 - 0x11daa8
void sub_0011D808_0x11d808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D808_0x11d808");
#endif

    switch (ctx->pc) {
        case 0x11d808u: goto label_11d808;
        case 0x11d80cu: goto label_11d80c;
        case 0x11d810u: goto label_11d810;
        case 0x11d814u: goto label_11d814;
        case 0x11d818u: goto label_11d818;
        case 0x11d81cu: goto label_11d81c;
        case 0x11d820u: goto label_11d820;
        case 0x11d824u: goto label_11d824;
        case 0x11d828u: goto label_11d828;
        case 0x11d82cu: goto label_11d82c;
        case 0x11d830u: goto label_11d830;
        case 0x11d834u: goto label_11d834;
        case 0x11d838u: goto label_11d838;
        case 0x11d83cu: goto label_11d83c;
        case 0x11d840u: goto label_11d840;
        case 0x11d844u: goto label_11d844;
        case 0x11d848u: goto label_11d848;
        case 0x11d84cu: goto label_11d84c;
        case 0x11d850u: goto label_11d850;
        case 0x11d854u: goto label_11d854;
        case 0x11d858u: goto label_11d858;
        case 0x11d85cu: goto label_11d85c;
        case 0x11d860u: goto label_11d860;
        case 0x11d864u: goto label_11d864;
        case 0x11d868u: goto label_11d868;
        case 0x11d86cu: goto label_11d86c;
        case 0x11d870u: goto label_11d870;
        case 0x11d874u: goto label_11d874;
        case 0x11d878u: goto label_11d878;
        case 0x11d87cu: goto label_11d87c;
        case 0x11d880u: goto label_11d880;
        case 0x11d884u: goto label_11d884;
        case 0x11d888u: goto label_11d888;
        case 0x11d88cu: goto label_11d88c;
        case 0x11d890u: goto label_11d890;
        case 0x11d894u: goto label_11d894;
        case 0x11d898u: goto label_11d898;
        case 0x11d89cu: goto label_11d89c;
        case 0x11d8a0u: goto label_11d8a0;
        case 0x11d8a4u: goto label_11d8a4;
        case 0x11d8a8u: goto label_11d8a8;
        case 0x11d8acu: goto label_11d8ac;
        case 0x11d8b0u: goto label_11d8b0;
        case 0x11d8b4u: goto label_11d8b4;
        case 0x11d8b8u: goto label_11d8b8;
        case 0x11d8bcu: goto label_11d8bc;
        case 0x11d8c0u: goto label_11d8c0;
        case 0x11d8c4u: goto label_11d8c4;
        case 0x11d8c8u: goto label_11d8c8;
        case 0x11d8ccu: goto label_11d8cc;
        case 0x11d8d0u: goto label_11d8d0;
        case 0x11d8d4u: goto label_11d8d4;
        case 0x11d8d8u: goto label_11d8d8;
        case 0x11d8dcu: goto label_11d8dc;
        case 0x11d8e0u: goto label_11d8e0;
        case 0x11d8e4u: goto label_11d8e4;
        case 0x11d8e8u: goto label_11d8e8;
        case 0x11d8ecu: goto label_11d8ec;
        case 0x11d8f0u: goto label_11d8f0;
        case 0x11d8f4u: goto label_11d8f4;
        case 0x11d8f8u: goto label_11d8f8;
        case 0x11d8fcu: goto label_11d8fc;
        case 0x11d900u: goto label_11d900;
        case 0x11d904u: goto label_11d904;
        case 0x11d908u: goto label_11d908;
        case 0x11d90cu: goto label_11d90c;
        case 0x11d910u: goto label_11d910;
        case 0x11d914u: goto label_11d914;
        case 0x11d918u: goto label_11d918;
        case 0x11d91cu: goto label_11d91c;
        case 0x11d920u: goto label_11d920;
        case 0x11d924u: goto label_11d924;
        case 0x11d928u: goto label_11d928;
        case 0x11d92cu: goto label_11d92c;
        case 0x11d930u: goto label_11d930;
        case 0x11d934u: goto label_11d934;
        case 0x11d938u: goto label_11d938;
        case 0x11d93cu: goto label_11d93c;
        case 0x11d940u: goto label_11d940;
        case 0x11d944u: goto label_11d944;
        case 0x11d948u: goto label_11d948;
        case 0x11d94cu: goto label_11d94c;
        case 0x11d950u: goto label_11d950;
        case 0x11d954u: goto label_11d954;
        case 0x11d958u: goto label_11d958;
        case 0x11d95cu: goto label_11d95c;
        case 0x11d960u: goto label_11d960;
        case 0x11d964u: goto label_11d964;
        case 0x11d968u: goto label_11d968;
        case 0x11d96cu: goto label_11d96c;
        case 0x11d970u: goto label_11d970;
        case 0x11d974u: goto label_11d974;
        case 0x11d978u: goto label_11d978;
        case 0x11d97cu: goto label_11d97c;
        case 0x11d980u: goto label_11d980;
        case 0x11d984u: goto label_11d984;
        case 0x11d988u: goto label_11d988;
        case 0x11d98cu: goto label_11d98c;
        case 0x11d990u: goto label_11d990;
        case 0x11d994u: goto label_11d994;
        case 0x11d998u: goto label_11d998;
        case 0x11d99cu: goto label_11d99c;
        case 0x11d9a0u: goto label_11d9a0;
        case 0x11d9a4u: goto label_11d9a4;
        case 0x11d9a8u: goto label_11d9a8;
        case 0x11d9acu: goto label_11d9ac;
        case 0x11d9b0u: goto label_11d9b0;
        case 0x11d9b4u: goto label_11d9b4;
        case 0x11d9b8u: goto label_11d9b8;
        case 0x11d9bcu: goto label_11d9bc;
        case 0x11d9c0u: goto label_11d9c0;
        case 0x11d9c4u: goto label_11d9c4;
        case 0x11d9c8u: goto label_11d9c8;
        case 0x11d9ccu: goto label_11d9cc;
        case 0x11d9d0u: goto label_11d9d0;
        case 0x11d9d4u: goto label_11d9d4;
        case 0x11d9d8u: goto label_11d9d8;
        case 0x11d9dcu: goto label_11d9dc;
        case 0x11d9e0u: goto label_11d9e0;
        case 0x11d9e4u: goto label_11d9e4;
        case 0x11d9e8u: goto label_11d9e8;
        case 0x11d9ecu: goto label_11d9ec;
        case 0x11d9f0u: goto label_11d9f0;
        case 0x11d9f4u: goto label_11d9f4;
        case 0x11d9f8u: goto label_11d9f8;
        case 0x11d9fcu: goto label_11d9fc;
        case 0x11da00u: goto label_11da00;
        case 0x11da04u: goto label_11da04;
        case 0x11da08u: goto label_11da08;
        case 0x11da0cu: goto label_11da0c;
        case 0x11da10u: goto label_11da10;
        case 0x11da14u: goto label_11da14;
        case 0x11da18u: goto label_11da18;
        case 0x11da1cu: goto label_11da1c;
        case 0x11da20u: goto label_11da20;
        case 0x11da24u: goto label_11da24;
        case 0x11da28u: goto label_11da28;
        case 0x11da2cu: goto label_11da2c;
        case 0x11da30u: goto label_11da30;
        case 0x11da34u: goto label_11da34;
        case 0x11da38u: goto label_11da38;
        case 0x11da3cu: goto label_11da3c;
        case 0x11da40u: goto label_11da40;
        case 0x11da44u: goto label_11da44;
        case 0x11da48u: goto label_11da48;
        case 0x11da4cu: goto label_11da4c;
        case 0x11da50u: goto label_11da50;
        case 0x11da54u: goto label_11da54;
        case 0x11da58u: goto label_11da58;
        case 0x11da5cu: goto label_11da5c;
        case 0x11da60u: goto label_11da60;
        case 0x11da64u: goto label_11da64;
        case 0x11da68u: goto label_11da68;
        case 0x11da6cu: goto label_11da6c;
        case 0x11da70u: goto label_11da70;
        case 0x11da74u: goto label_11da74;
        case 0x11da78u: goto label_11da78;
        case 0x11da7cu: goto label_11da7c;
        case 0x11da80u: goto label_11da80;
        case 0x11da84u: goto label_11da84;
        case 0x11da88u: goto label_11da88;
        case 0x11da8cu: goto label_11da8c;
        case 0x11da90u: goto label_11da90;
        case 0x11da94u: goto label_11da94;
        case 0x11da98u: goto label_11da98;
        case 0x11da9cu: goto label_11da9c;
        case 0x11daa0u: goto label_11daa0;
        case 0x11daa4u: goto label_11daa4;
        default: break;
    }

    ctx->pc = 0x11d808u;

label_11d808:
    // 0x11d808: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x11d808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_11d80c:
    // 0x11d80c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x11d80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_11d810:
    // 0x11d810: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x11d810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_11d814:
    // 0x11d814: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x11d814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_11d818:
    // 0x11d818: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x11d818u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_11d81c:
    // 0x11d81c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x11d81cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_11d820:
    // 0x11d820: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x11d820u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_11d824:
    // 0x11d824: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x11d824u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_11d828:
    // 0x11d828: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x11d828u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_11d82c:
    // 0x11d82c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x11d82cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_11d830:
    // 0x11d830: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x11d830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
label_11d834:
    // 0x11d834: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x11d834u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
label_11d838:
    // 0x11d838: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x11d838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_11d83c:
    // 0x11d83c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x11d83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_11d840:
    // 0x11d840: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x11d840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_11d844:
    // 0x11d844: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x11d844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_11d848:
    // 0x11d848: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x11d848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_11d84c:
    // 0x11d84c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11d84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_11d850:
    // 0x11d850: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x11d850u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_11d854:
    // 0x11d854: 0xc0e4060  jal         func_390180
label_11d858:
    if (ctx->pc == 0x11D858u) {
        ctx->pc = 0x11D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D854u;
        // 0x11d858: 0xafa50020  sw          $a1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11D85Cu;
        goto label_11d85c;
    }
    ctx->pc = 0x11D854u;
    SET_GPR_U32(ctx, 31, 0x11D85Cu);
    ctx->pc = 0x11D858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D854u;
    // 0x11d858: 0xafa50020  sw          $a1, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x11D854u, 0x11D85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D85Cu;
label_11d85c:
    // 0x11d85c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11d85cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d860:
    // 0x11d860: 0xc0e4060  jal         func_390180
label_11d864:
    if (ctx->pc == 0x11D864u) {
        ctx->pc = 0x11D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D860u;
        // 0x11d864: 0x27a40024  addiu       $a0, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11D868u;
        goto label_11d868;
    }
    ctx->pc = 0x11D860u;
    SET_GPR_U32(ctx, 31, 0x11D868u);
    ctx->pc = 0x11D864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D860u;
    // 0x11d864: 0x27a40024  addiu       $a0, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x11D860u, 0x11D868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D868u;
label_11d868:
    // 0x11d868: 0x12000080  beqz        $s0, . + 4 + (0x80 << 2)
label_11d86c:
    if (ctx->pc == 0x11D86Cu) {
        ctx->pc = 0x11D86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D868u;
        // 0x11d86c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11D870u;
        goto label_11d870;
    }
    ctx->pc = 0x11D868u;
    {
        const bool branch_taken_0x11d868 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D868u;
        // 0x11d86c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d868) {
            ctx->pc = 0x11DA6Cu;
            goto label_11da6c;
        }
    }
    ctx->pc = 0x11D870u;
label_11d870:
    // 0x11d870: 0x12a0007e  beqz        $s5, . + 4 + (0x7E << 2)
label_11d874:
    if (ctx->pc == 0x11D874u) {
        ctx->pc = 0x11D874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D870u;
        // 0x11d874: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11D878u;
        goto label_11d878;
    }
    ctx->pc = 0x11D870u;
    {
        const bool branch_taken_0x11d870 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D870u;
        // 0x11d874: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d870) {
            ctx->pc = 0x11DA6Cu;
            goto label_11da6c;
        }
    }
    ctx->pc = 0x11D878u;
label_11d878:
    // 0x11d878: 0xc047fd4  jal         func_11FF50
label_11d87c:
    if (ctx->pc == 0x11D87Cu) {
        ctx->pc = 0x11D87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D878u;
        // 0x11d87c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11D880u;
        goto label_11d880;
    }
    ctx->pc = 0x11D878u;
    SET_GPR_U32(ctx, 31, 0x11D880u);
    ctx->pc = 0x11D87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D878u;
    // 0x11d87c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF50u, 0x11D878u, 0x11D880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D880u;
label_11d880:
    // 0x11d880: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11d880u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d884:
    // 0x11d884: 0x12400079  beqz        $s2, . + 4 + (0x79 << 2)
label_11d888:
    if (ctx->pc == 0x11D888u) {
        ctx->pc = 0x11D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D884u;
        // 0x11d888: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11D88Cu;
        goto label_11d88c;
    }
    ctx->pc = 0x11D884u;
    {
        const bool branch_taken_0x11d884 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D884u;
        // 0x11d888: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d884) {
            ctx->pc = 0x11DA6Cu;
            goto label_11da6c;
        }
    }
    ctx->pc = 0x11D88Cu;
label_11d88c:
    // 0x11d88c: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x11d88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_11d890:
    // 0x11d890: 0xc6660008  lwc1        $f6, 0x8($s3)
    ctx->pc = 0x11d890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_11d894:
    // 0x11d894: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11d894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_11d898:
    // 0x11d898: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x11d898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_11d89c:
    // 0x11d89c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x11d89cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11d8a0:
    // 0x11d8a0: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x11d8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_11d8a4:
    // 0x11d8a4: 0xc6640004  lwc1        $f4, 0x4($s3)
    ctx->pc = 0x11d8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_11d8a8:
    // 0x11d8a8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x11d8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11d8ac:
    // 0x11d8ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11d8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_11d8b0:
    // 0x11d8b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11d8b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_11d8b4:
    // 0x11d8b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x11d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_11d8b8:
    // 0x11d8b8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x11d8b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_11d8bc:
    // 0x11d8bc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x11d8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_11d8c0:
    // 0x11d8c0: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x11d8c0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_11d8c4:
    // 0x11d8c4: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x11d8c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_11d8c8:
    // 0x11d8c8: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x11d8c8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_11d8cc:
    // 0x11d8cc: 0xe7a60018  swc1        $f6, 0x18($sp)
    ctx->pc = 0x11d8ccu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_11d8d0:
    // 0x11d8d0: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x11d8d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_11d8d4:
    // 0x11d8d4: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x11d8d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_11d8d8:
    // 0x11d8d8: 0xae4201e0  sw          $v0, 0x1E0($s2)
    ctx->pc = 0x11d8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 480), GPR_U32(ctx, 2));
label_11d8dc:
    // 0x11d8dc: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x11d8dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
label_11d8e0:
    // 0x11d8e0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x11d8e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_11d8e4:
    // 0x11d8e4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x11d8e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_11d8e8:
    // 0x11d8e8: 0x7e4201f0  sq          $v0, 0x1F0($s2)
    ctx->pc = 0x11d8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 496), GPR_VEC(ctx, 2));
label_11d8ec:
    // 0x11d8ec: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x11d8ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11d8f0:
    // 0x11d8f0: 0xc0488ac  jal         func_1222B0
label_11d8f4:
    if (ctx->pc == 0x11D8F4u) {
        ctx->pc = 0x11D8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D8F0u;
        // 0x11d8f4: 0x7e430200  sq          $v1, 0x200($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 512), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11D8F8u;
        goto label_11d8f8;
    }
    ctx->pc = 0x11D8F0u;
    SET_GPR_U32(ctx, 31, 0x11D8F8u);
    ctx->pc = 0x11D8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D8F0u;
    // 0x11d8f4: 0x7e430200  sq          $v1, 0x200($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 512), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1222B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1222B0u, 0x11D8F0u, 0x11D8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D8F8u;
label_11d8f8:
    // 0x11d8f8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11d8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11d8fc:
    // 0x11d8fc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x11d8fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_11d900:
    // 0x11d900: 0x84640190  lh          $a0, 0x190($v1)
    ctx->pc = 0x11d900u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 400)));
label_11d904:
    // 0x11d904: 0x8c620194  lw          $v0, 0x194($v1)
    ctx->pc = 0x11d904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
label_11d908:
    // 0x11d908: 0x40f809  jalr        $v0
label_11d90c:
    if (ctx->pc == 0x11D90Cu) {
        ctx->pc = 0x11D90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D908u;
        // 0x11d90c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11D910u;
        goto label_11d910;
    }
    ctx->pc = 0x11D908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11D910u);
        ctx->pc = 0x11D90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D908u;
        // 0x11d90c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D908u, 0x11D910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11D910u;
label_11d910:
    // 0x11d910: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11d910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11d914:
    // 0x11d914: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x11d914u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_11d918:
    // 0x11d918: 0x846401a0  lh          $a0, 0x1A0($v1)
    ctx->pc = 0x11d918u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 416)));
label_11d91c:
    // 0x11d91c: 0x8c6201a4  lw          $v0, 0x1A4($v1)
    ctx->pc = 0x11d91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 420)));
label_11d920:
    // 0x11d920: 0x40f809  jalr        $v0
label_11d924:
    if (ctx->pc == 0x11D924u) {
        ctx->pc = 0x11D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D920u;
        // 0x11d924: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11D928u;
        goto label_11d928;
    }
    ctx->pc = 0x11D920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11D928u);
        ctx->pc = 0x11D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D920u;
        // 0x11d924: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D920u, 0x11D928u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11D928u;
label_11d928:
    // 0x11d928: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11d928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11d92c:
    // 0x11d92c: 0x4617a329  min.s       $f12, $f20, $f23
    ctx->pc = 0x11d92cu;
    ctx->f[12] = std::min(ctx->f[20], ctx->f[23]);
label_11d930:
    // 0x11d930: 0x846401a8  lh          $a0, 0x1A8($v1)
    ctx->pc = 0x11d930u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 424)));
label_11d934:
    // 0x11d934: 0x8c6501ac  lw          $a1, 0x1AC($v1)
    ctx->pc = 0x11d934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 428)));
label_11d938:
    // 0x11d938: 0xa0f809  jalr        $a1
label_11d93c:
    if (ctx->pc == 0x11D93Cu) {
        ctx->pc = 0x11D93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D938u;
        // 0x11d93c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11D940u;
        goto label_11d940;
    }
    ctx->pc = 0x11D938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x11D940u);
        ctx->pc = 0x11D93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D938u;
        // 0x11d93c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D938u, 0x11D940u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11D940u;
label_11d940:
    // 0x11d940: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x11d940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11d944:
    // 0x11d944: 0x845001b0  lh          $s0, 0x1B0($v0)
    ctx->pc = 0x11d944u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 432)));
label_11d948:
    // 0x11d948: 0x245101b0  addiu       $s1, $v0, 0x1B0
    ctx->pc = 0x11d948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
label_11d94c:
    // 0x11d94c: 0x84440208  lh          $a0, 0x208($v0)
    ctx->pc = 0x11d94cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 520)));
label_11d950:
    // 0x11d950: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x11d950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_11d954:
    // 0x11d954: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x11d954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_11d958:
    // 0x11d958: 0x60f809  jalr        $v1
label_11d95c:
    if (ctx->pc == 0x11D95Cu) {
        ctx->pc = 0x11D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D958u;
        // 0x11d95c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11D960u;
        goto label_11d960;
    }
    ctx->pc = 0x11D958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11D960u);
        ctx->pc = 0x11D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D958u;
        // 0x11d95c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D958u, 0x11D960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11D960u;
label_11d960:
    // 0x11d960: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x11d960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_11d964:
    // 0x11d964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11d968:
    // 0x11d968: 0x40f809  jalr        $v0
label_11d96c:
    if (ctx->pc == 0x11D96Cu) {
        ctx->pc = 0x11D96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D968u;
        // 0x11d96c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11D970u;
        goto label_11d970;
    }
    ctx->pc = 0x11D968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11D970u);
        ctx->pc = 0x11D96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D968u;
        // 0x11d96c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D968u, 0x11D970u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11D970u;
label_11d970:
    // 0x11d970: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x11d970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_11d974:
    // 0x11d974: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x11d974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
label_11d978:
    // 0x11d978: 0x1000002e  b           . + 4 + (0x2E << 2)
label_11d97c:
    if (ctx->pc == 0x11D97Cu) {
        ctx->pc = 0x11D97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D978u;
        // 0x11d97c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11D980u;
        goto label_11d980;
    }
    ctx->pc = 0x11D978u;
    {
        const bool branch_taken_0x11d978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D978u;
        // 0x11d97c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d978) {
            ctx->pc = 0x11DA34u;
            goto label_11da34;
        }
    }
    ctx->pc = 0x11D980u;
label_11d980:
    // 0x11d980: 0xc047fd4  jal         func_11FF50
label_11d984:
    if (ctx->pc == 0x11D984u) {
        ctx->pc = 0x11D984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D980u;
        // 0x11d984: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11D988u;
        goto label_11d988;
    }
    ctx->pc = 0x11D980u;
    SET_GPR_U32(ctx, 31, 0x11D988u);
    ctx->pc = 0x11D984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D980u;
    // 0x11d984: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF50u, 0x11D980u, 0x11D988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D988u;
label_11d988:
    // 0x11d988: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11d988u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d98c:
    // 0x11d98c: 0x12400027  beqz        $s2, . + 4 + (0x27 << 2)
label_11d990:
    if (ctx->pc == 0x11D990u) {
        ctx->pc = 0x11D990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D98Cu;
        // 0x11d990: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11D994u;
        goto label_11d994;
    }
    ctx->pc = 0x11D98Cu;
    {
        const bool branch_taken_0x11d98c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D98Cu;
        // 0x11d990: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d98c) {
            ctx->pc = 0x11DA2Cu;
            goto label_11da2c;
        }
    }
    ctx->pc = 0x11D994u;
label_11d994:
    // 0x11d994: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11d994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11d998:
    // 0x11d998: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11d998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_11d99c:
    // 0x11d99c: 0xae4301e0  sw          $v1, 0x1E0($s2)
    ctx->pc = 0x11d99cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 480), GPR_U32(ctx, 3));
label_11d9a0:
    // 0x11d9a0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x11d9a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_11d9a4:
    // 0x11d9a4: 0x7e4201f0  sq          $v0, 0x1F0($s2)
    ctx->pc = 0x11d9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 496), GPR_VEC(ctx, 2));
label_11d9a8:
    // 0x11d9a8: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x11d9a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11d9ac:
    // 0x11d9ac: 0xc0488ac  jal         func_1222B0
label_11d9b0:
    if (ctx->pc == 0x11D9B0u) {
        ctx->pc = 0x11D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D9ACu;
        // 0x11d9b0: 0x7e430200  sq          $v1, 0x200($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 512), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11D9B4u;
        goto label_11d9b4;
    }
    ctx->pc = 0x11D9ACu;
    SET_GPR_U32(ctx, 31, 0x11D9B4u);
    ctx->pc = 0x11D9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D9ACu;
    // 0x11d9b0: 0x7e430200  sq          $v1, 0x200($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 512), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1222B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1222B0u, 0x11D9ACu, 0x11D9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D9B4u;
label_11d9b4:
    // 0x11d9b4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11d9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11d9b8:
    // 0x11d9b8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x11d9b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_11d9bc:
    // 0x11d9bc: 0x84640190  lh          $a0, 0x190($v1)
    ctx->pc = 0x11d9bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 400)));
label_11d9c0:
    // 0x11d9c0: 0x8c620194  lw          $v0, 0x194($v1)
    ctx->pc = 0x11d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
label_11d9c4:
    // 0x11d9c4: 0x40f809  jalr        $v0
label_11d9c8:
    if (ctx->pc == 0x11D9C8u) {
        ctx->pc = 0x11D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D9C4u;
        // 0x11d9c8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11D9CCu;
        goto label_11d9cc;
    }
    ctx->pc = 0x11D9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11D9CCu);
        ctx->pc = 0x11D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D9C4u;
        // 0x11d9c8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D9C4u, 0x11D9CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11D9CCu;
label_11d9cc:
    // 0x11d9cc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11d9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11d9d0:
    // 0x11d9d0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x11d9d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_11d9d4:
    // 0x11d9d4: 0x846401a0  lh          $a0, 0x1A0($v1)
    ctx->pc = 0x11d9d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 416)));
label_11d9d8:
    // 0x11d9d8: 0x8c6201a4  lw          $v0, 0x1A4($v1)
    ctx->pc = 0x11d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 420)));
label_11d9dc:
    // 0x11d9dc: 0x40f809  jalr        $v0
label_11d9e0:
    if (ctx->pc == 0x11D9E0u) {
        ctx->pc = 0x11D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D9DCu;
        // 0x11d9e0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11D9E4u;
        goto label_11d9e4;
    }
    ctx->pc = 0x11D9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11D9E4u);
        ctx->pc = 0x11D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D9DCu;
        // 0x11d9e0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D9DCu, 0x11D9E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11D9E4u;
label_11d9e4:
    // 0x11d9e4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11d9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11d9e8:
    // 0x11d9e8: 0x4617a329  min.s       $f12, $f20, $f23
    ctx->pc = 0x11d9e8u;
    ctx->f[12] = std::min(ctx->f[20], ctx->f[23]);
label_11d9ec:
    // 0x11d9ec: 0x846401a8  lh          $a0, 0x1A8($v1)
    ctx->pc = 0x11d9ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 424)));
label_11d9f0:
    // 0x11d9f0: 0x8c6501ac  lw          $a1, 0x1AC($v1)
    ctx->pc = 0x11d9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 428)));
label_11d9f4:
    // 0x11d9f4: 0xa0f809  jalr        $a1
label_11d9f8:
    if (ctx->pc == 0x11D9F8u) {
        ctx->pc = 0x11D9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D9F4u;
        // 0x11d9f8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11D9FCu;
        goto label_11d9fc;
    }
    ctx->pc = 0x11D9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x11D9FCu);
        ctx->pc = 0x11D9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D9F4u;
        // 0x11d9f8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D9F4u, 0x11D9FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11D9FCu;
label_11d9fc:
    // 0x11d9fc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x11d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11da00:
    // 0x11da00: 0x845001b0  lh          $s0, 0x1B0($v0)
    ctx->pc = 0x11da00u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 432)));
label_11da04:
    // 0x11da04: 0x245101b0  addiu       $s1, $v0, 0x1B0
    ctx->pc = 0x11da04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
label_11da08:
    // 0x11da08: 0x84440208  lh          $a0, 0x208($v0)
    ctx->pc = 0x11da08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 520)));
label_11da0c:
    // 0x11da0c: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x11da0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_11da10:
    // 0x11da10: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x11da10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_11da14:
    // 0x11da14: 0x60f809  jalr        $v1
label_11da18:
    if (ctx->pc == 0x11DA18u) {
        ctx->pc = 0x11DA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA14u;
        // 0x11da18: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DA1Cu;
        goto label_11da1c;
    }
    ctx->pc = 0x11DA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11DA1Cu);
        ctx->pc = 0x11DA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA14u;
        // 0x11da18: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DA14u, 0x11DA1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11DA1Cu;
label_11da1c:
    // 0x11da1c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x11da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_11da20:
    // 0x11da20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11da20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11da24:
    // 0x11da24: 0x40f809  jalr        $v0
label_11da28:
    if (ctx->pc == 0x11DA28u) {
        ctx->pc = 0x11DA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA24u;
        // 0x11da28: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DA2Cu;
        goto label_11da2c;
    }
    ctx->pc = 0x11DA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11DA2Cu);
        ctx->pc = 0x11DA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA24u;
        // 0x11da28: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DA24u, 0x11DA2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11DA2Cu;
label_11da2c:
    // 0x11da2c: 0x8e63489c  lw          $v1, 0x489C($s3)
    ctx->pc = 0x11da2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_11da30:
    // 0x11da30: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x11da30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_11da34:
    // 0x11da34: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x11da34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_11da38:
    // 0x11da38: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x11da38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_11da3c:
    // 0x11da3c: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
label_11da40:
    if (ctx->pc == 0x11DA40u) {
        ctx->pc = 0x11DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA3Cu;
        // 0x11da40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DA44u;
        goto label_11da44;
    }
    ctx->pc = 0x11DA3Cu;
    {
        const bool branch_taken_0x11da3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA3Cu;
        // 0x11da40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da3c) {
            ctx->pc = 0x11D980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d980;
        }
    }
    ctx->pc = 0x11DA44u;
label_11da44:
    // 0x11da44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11da44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11da48:
    // 0x11da48: 0xc047fd4  jal         func_11FF50
label_11da4c:
    if (ctx->pc == 0x11DA4Cu) {
        ctx->pc = 0x11DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA48u;
        // 0x11da4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DA50u;
        goto label_11da50;
    }
    ctx->pc = 0x11DA48u;
    SET_GPR_U32(ctx, 31, 0x11DA50u);
    ctx->pc = 0x11DA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DA48u;
    // 0x11da4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF50u, 0x11DA48u, 0x11DA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DA50u;
label_11da50:
    // 0x11da50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11da50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11da54:
    // 0x11da54: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x11da54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_11da58:
    // 0x11da58: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x11da58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_11da5c:
    // 0x11da5c: 0xa0f809  jalr        $a1
label_11da60:
    if (ctx->pc == 0x11DA60u) {
        ctx->pc = 0x11DA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA5Cu;
        // 0x11da60: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DA64u;
        goto label_11da64;
    }
    ctx->pc = 0x11DA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x11DA64u);
        ctx->pc = 0x11DA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA5Cu;
        // 0x11da60: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DA5Cu, 0x11DA64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11DA64u;
label_11da64:
    // 0x11da64: 0x10000004  b           . + 4 + (0x4 << 2)
label_11da68:
    if (ctx->pc == 0x11DA68u) {
        ctx->pc = 0x11DA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA64u;
        // 0x11da68: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DA6Cu;
        goto label_11da6c;
    }
    ctx->pc = 0x11DA64u;
    {
        const bool branch_taken_0x11da64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA64u;
        // 0x11da68: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da64) {
            ctx->pc = 0x11DA78u;
            goto label_11da78;
        }
    }
    ctx->pc = 0x11DA6Cu;
label_11da6c:
    // 0x11da6c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x11da6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_11da70:
    // 0x11da70: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x11da70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_11da74:
    // 0x11da74: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x11da74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_11da78:
    // 0x11da78: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x11da78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_11da7c:
    // 0x11da7c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x11da7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_11da80:
    // 0x11da80: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x11da80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_11da84:
    // 0x11da84: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x11da84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_11da88:
    // 0x11da88: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x11da88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11da8c:
    // 0x11da8c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11da8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_11da90:
    // 0x11da90: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x11da90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_11da94:
    // 0x11da94: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x11da94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_11da98:
    // 0x11da98: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x11da98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_11da9c:
    // 0x11da9c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x11da9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_11daa0:
    // 0x11daa0: 0x3e00008  jr          $ra
label_11daa4:
    if (ctx->pc == 0x11DAA4u) {
        ctx->pc = 0x11DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DAA0u;
        // 0x11daa4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DAA8u;
        goto label_fallthrough_0x11daa0;
    }
    ctx->pc = 0x11DAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DAA0u;
        // 0x11daa4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DAA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11daa0:
    ctx->pc = 0x11DAA8u;
}
