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

// Function: sub_0031E770
// Address: 0x31e770 - 0x31ea00
void sub_0031E770_0x31e770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E770_0x31e770");
#endif

    switch (ctx->pc) {
        case 0x31e770u: goto label_31e770;
        case 0x31e774u: goto label_31e774;
        case 0x31e778u: goto label_31e778;
        case 0x31e77cu: goto label_31e77c;
        case 0x31e780u: goto label_31e780;
        case 0x31e784u: goto label_31e784;
        case 0x31e788u: goto label_31e788;
        case 0x31e78cu: goto label_31e78c;
        case 0x31e790u: goto label_31e790;
        case 0x31e794u: goto label_31e794;
        case 0x31e798u: goto label_31e798;
        case 0x31e79cu: goto label_31e79c;
        case 0x31e7a0u: goto label_31e7a0;
        case 0x31e7a4u: goto label_31e7a4;
        case 0x31e7a8u: goto label_31e7a8;
        case 0x31e7acu: goto label_31e7ac;
        case 0x31e7b0u: goto label_31e7b0;
        case 0x31e7b4u: goto label_31e7b4;
        case 0x31e7b8u: goto label_31e7b8;
        case 0x31e7bcu: goto label_31e7bc;
        case 0x31e7c0u: goto label_31e7c0;
        case 0x31e7c4u: goto label_31e7c4;
        case 0x31e7c8u: goto label_31e7c8;
        case 0x31e7ccu: goto label_31e7cc;
        case 0x31e7d0u: goto label_31e7d0;
        case 0x31e7d4u: goto label_31e7d4;
        case 0x31e7d8u: goto label_31e7d8;
        case 0x31e7dcu: goto label_31e7dc;
        case 0x31e7e0u: goto label_31e7e0;
        case 0x31e7e4u: goto label_31e7e4;
        case 0x31e7e8u: goto label_31e7e8;
        case 0x31e7ecu: goto label_31e7ec;
        case 0x31e7f0u: goto label_31e7f0;
        case 0x31e7f4u: goto label_31e7f4;
        case 0x31e7f8u: goto label_31e7f8;
        case 0x31e7fcu: goto label_31e7fc;
        case 0x31e800u: goto label_31e800;
        case 0x31e804u: goto label_31e804;
        case 0x31e808u: goto label_31e808;
        case 0x31e80cu: goto label_31e80c;
        case 0x31e810u: goto label_31e810;
        case 0x31e814u: goto label_31e814;
        case 0x31e818u: goto label_31e818;
        case 0x31e81cu: goto label_31e81c;
        case 0x31e820u: goto label_31e820;
        case 0x31e824u: goto label_31e824;
        case 0x31e828u: goto label_31e828;
        case 0x31e82cu: goto label_31e82c;
        case 0x31e830u: goto label_31e830;
        case 0x31e834u: goto label_31e834;
        case 0x31e838u: goto label_31e838;
        case 0x31e83cu: goto label_31e83c;
        case 0x31e840u: goto label_31e840;
        case 0x31e844u: goto label_31e844;
        case 0x31e848u: goto label_31e848;
        case 0x31e84cu: goto label_31e84c;
        case 0x31e850u: goto label_31e850;
        case 0x31e854u: goto label_31e854;
        case 0x31e858u: goto label_31e858;
        case 0x31e85cu: goto label_31e85c;
        case 0x31e860u: goto label_31e860;
        case 0x31e864u: goto label_31e864;
        case 0x31e868u: goto label_31e868;
        case 0x31e86cu: goto label_31e86c;
        case 0x31e870u: goto label_31e870;
        case 0x31e874u: goto label_31e874;
        case 0x31e878u: goto label_31e878;
        case 0x31e87cu: goto label_31e87c;
        case 0x31e880u: goto label_31e880;
        case 0x31e884u: goto label_31e884;
        case 0x31e888u: goto label_31e888;
        case 0x31e88cu: goto label_31e88c;
        case 0x31e890u: goto label_31e890;
        case 0x31e894u: goto label_31e894;
        case 0x31e898u: goto label_31e898;
        case 0x31e89cu: goto label_31e89c;
        case 0x31e8a0u: goto label_31e8a0;
        case 0x31e8a4u: goto label_31e8a4;
        case 0x31e8a8u: goto label_31e8a8;
        case 0x31e8acu: goto label_31e8ac;
        case 0x31e8b0u: goto label_31e8b0;
        case 0x31e8b4u: goto label_31e8b4;
        case 0x31e8b8u: goto label_31e8b8;
        case 0x31e8bcu: goto label_31e8bc;
        case 0x31e8c0u: goto label_31e8c0;
        case 0x31e8c4u: goto label_31e8c4;
        case 0x31e8c8u: goto label_31e8c8;
        case 0x31e8ccu: goto label_31e8cc;
        case 0x31e8d0u: goto label_31e8d0;
        case 0x31e8d4u: goto label_31e8d4;
        case 0x31e8d8u: goto label_31e8d8;
        case 0x31e8dcu: goto label_31e8dc;
        case 0x31e8e0u: goto label_31e8e0;
        case 0x31e8e4u: goto label_31e8e4;
        case 0x31e8e8u: goto label_31e8e8;
        case 0x31e8ecu: goto label_31e8ec;
        case 0x31e8f0u: goto label_31e8f0;
        case 0x31e8f4u: goto label_31e8f4;
        case 0x31e8f8u: goto label_31e8f8;
        case 0x31e8fcu: goto label_31e8fc;
        case 0x31e900u: goto label_31e900;
        case 0x31e904u: goto label_31e904;
        case 0x31e908u: goto label_31e908;
        case 0x31e90cu: goto label_31e90c;
        case 0x31e910u: goto label_31e910;
        case 0x31e914u: goto label_31e914;
        case 0x31e918u: goto label_31e918;
        case 0x31e91cu: goto label_31e91c;
        case 0x31e920u: goto label_31e920;
        case 0x31e924u: goto label_31e924;
        case 0x31e928u: goto label_31e928;
        case 0x31e92cu: goto label_31e92c;
        case 0x31e930u: goto label_31e930;
        case 0x31e934u: goto label_31e934;
        case 0x31e938u: goto label_31e938;
        case 0x31e93cu: goto label_31e93c;
        case 0x31e940u: goto label_31e940;
        case 0x31e944u: goto label_31e944;
        case 0x31e948u: goto label_31e948;
        case 0x31e94cu: goto label_31e94c;
        case 0x31e950u: goto label_31e950;
        case 0x31e954u: goto label_31e954;
        case 0x31e958u: goto label_31e958;
        case 0x31e95cu: goto label_31e95c;
        case 0x31e960u: goto label_31e960;
        case 0x31e964u: goto label_31e964;
        case 0x31e968u: goto label_31e968;
        case 0x31e96cu: goto label_31e96c;
        case 0x31e970u: goto label_31e970;
        case 0x31e974u: goto label_31e974;
        case 0x31e978u: goto label_31e978;
        case 0x31e97cu: goto label_31e97c;
        case 0x31e980u: goto label_31e980;
        case 0x31e984u: goto label_31e984;
        case 0x31e988u: goto label_31e988;
        case 0x31e98cu: goto label_31e98c;
        case 0x31e990u: goto label_31e990;
        case 0x31e994u: goto label_31e994;
        case 0x31e998u: goto label_31e998;
        case 0x31e99cu: goto label_31e99c;
        case 0x31e9a0u: goto label_31e9a0;
        case 0x31e9a4u: goto label_31e9a4;
        case 0x31e9a8u: goto label_31e9a8;
        case 0x31e9acu: goto label_31e9ac;
        case 0x31e9b0u: goto label_31e9b0;
        case 0x31e9b4u: goto label_31e9b4;
        case 0x31e9b8u: goto label_31e9b8;
        case 0x31e9bcu: goto label_31e9bc;
        case 0x31e9c0u: goto label_31e9c0;
        case 0x31e9c4u: goto label_31e9c4;
        case 0x31e9c8u: goto label_31e9c8;
        case 0x31e9ccu: goto label_31e9cc;
        case 0x31e9d0u: goto label_31e9d0;
        case 0x31e9d4u: goto label_31e9d4;
        case 0x31e9d8u: goto label_31e9d8;
        case 0x31e9dcu: goto label_31e9dc;
        case 0x31e9e0u: goto label_31e9e0;
        case 0x31e9e4u: goto label_31e9e4;
        case 0x31e9e8u: goto label_31e9e8;
        case 0x31e9ecu: goto label_31e9ec;
        case 0x31e9f0u: goto label_31e9f0;
        case 0x31e9f4u: goto label_31e9f4;
        case 0x31e9f8u: goto label_31e9f8;
        case 0x31e9fcu: goto label_31e9fc;
        default: break;
    }

    ctx->pc = 0x31e770u;

label_31e770:
    // 0x31e770: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x31e770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_31e774:
    // 0x31e774: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x31e774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31e778:
    // 0x31e778: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x31e778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_31e77c:
    // 0x31e77c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x31e77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_31e780:
    // 0x31e780: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x31e780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31e784:
    // 0x31e784: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x31e784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_31e788:
    // 0x31e788: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31e788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_31e78c:
    // 0x31e78c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x31e78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_31e790:
    // 0x31e790: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x31e790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_31e794:
    // 0x31e794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31e794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31e798:
    // 0x31e798: 0xc0e4060  jal         func_390180
label_31e79c:
    if (ctx->pc == 0x31E79Cu) {
        ctx->pc = 0x31E79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E798u;
        // 0x31e79c: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E7A0u;
        goto label_31e7a0;
    }
    ctx->pc = 0x31E798u;
    SET_GPR_U32(ctx, 31, 0x31E7A0u);
    ctx->pc = 0x31E79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E798u;
    // 0x31e79c: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x31E798u, 0x31E7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E7A0u;
label_31e7a0:
    // 0x31e7a0: 0xc08a61a  jal         func_229868
label_31e7a4:
    if (ctx->pc == 0x31E7A4u) {
        ctx->pc = 0x31E7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E7A0u;
        // 0x31e7a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E7A8u;
        goto label_31e7a8;
    }
    ctx->pc = 0x31E7A0u;
    SET_GPR_U32(ctx, 31, 0x31E7A8u);
    ctx->pc = 0x31E7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E7A0u;
    // 0x31e7a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x31E7A0u, 0x31E7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E7A8u;
label_31e7a8:
    // 0x31e7a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31e7a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31e7ac:
    // 0x31e7ac: 0x5240008a  beql        $s2, $zero, . + 4 + (0x8A << 2)
label_31e7b0:
    if (ctx->pc == 0x31E7B0u) {
        ctx->pc = 0x31E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E7ACu;
        // 0x31e7b0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E7B4u;
        goto label_31e7b4;
    }
    ctx->pc = 0x31E7ACu;
    {
        const bool branch_taken_0x31e7ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e7ac) {
            ctx->pc = 0x31E7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E7ACu;
            // 0x31e7b0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E9D8u;
            goto label_31e9d8;
        }
    }
    ctx->pc = 0x31E7B4u;
label_31e7b4:
    // 0x31e7b4: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x31e7b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31e7b8:
    // 0x31e7b8: 0x52200087  beql        $s1, $zero, . + 4 + (0x87 << 2)
label_31e7bc:
    if (ctx->pc == 0x31E7BCu) {
        ctx->pc = 0x31E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E7B8u;
        // 0x31e7bc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E7C0u;
        goto label_31e7c0;
    }
    ctx->pc = 0x31E7B8u;
    {
        const bool branch_taken_0x31e7b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e7b8) {
            ctx->pc = 0x31E7BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E7B8u;
            // 0x31e7bc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E9D8u;
            goto label_31e9d8;
        }
    }
    ctx->pc = 0x31E7C0u;
label_31e7c0:
    // 0x31e7c0: 0xc087502  jal         func_21D408
label_31e7c4:
    if (ctx->pc == 0x31E7C4u) {
        ctx->pc = 0x31E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E7C0u;
        // 0x31e7c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E7C8u;
        goto label_31e7c8;
    }
    ctx->pc = 0x31E7C0u;
    SET_GPR_U32(ctx, 31, 0x31E7C8u);
    ctx->pc = 0x31E7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E7C0u;
    // 0x31e7c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31E7C0u, 0x31E7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E7C8u;
label_31e7c8:
    // 0x31e7c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x31e7c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31e7cc:
    // 0x31e7cc: 0xc087502  jal         func_21D408
label_31e7d0:
    if (ctx->pc == 0x31E7D0u) {
        ctx->pc = 0x31E7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E7CCu;
        // 0x31e7d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E7D4u;
        goto label_31e7d4;
    }
    ctx->pc = 0x31E7CCu;
    SET_GPR_U32(ctx, 31, 0x31E7D4u);
    ctx->pc = 0x31E7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E7CCu;
    // 0x31e7d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31E7CCu, 0x31E7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E7D4u;
label_31e7d4:
    // 0x31e7d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31e7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31e7d8:
    // 0x31e7d8: 0xc0a408c  jal         func_290230
label_31e7dc:
    if (ctx->pc == 0x31E7DCu) {
        ctx->pc = 0x31E7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E7D8u;
        // 0x31e7dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E7E0u;
        goto label_31e7e0;
    }
    ctx->pc = 0x31E7D8u;
    SET_GPR_U32(ctx, 31, 0x31E7E0u);
    ctx->pc = 0x31E7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E7D8u;
    // 0x31e7dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x31E7D8u, 0x31E7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E7E0u;
label_31e7e0:
    // 0x31e7e0: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
label_31e7e4:
    if (ctx->pc == 0x31E7E4u) {
        ctx->pc = 0x31E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E7E0u;
        // 0x31e7e4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E7E8u;
        goto label_31e7e8;
    }
    ctx->pc = 0x31E7E0u;
    {
        const bool branch_taken_0x31e7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E7E0u;
        // 0x31e7e4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e7e0) {
            ctx->pc = 0x31E9D8u;
            goto label_31e9d8;
        }
    }
    ctx->pc = 0x31E7E8u;
label_31e7e8:
    // 0x31e7e8: 0x8262002c  lb          $v0, 0x2C($s3)
    ctx->pc = 0x31e7e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 44)));
label_31e7ec:
    // 0x31e7ec: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_31e7f0:
    if (ctx->pc == 0x31E7F0u) {
        ctx->pc = 0x31E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E7ECu;
        // 0x31e7f0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E7F4u;
        goto label_31e7f4;
    }
    ctx->pc = 0x31E7ECu;
    {
        const bool branch_taken_0x31e7ec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x31E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E7ECu;
        // 0x31e7f0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e7ec) {
            ctx->pc = 0x31E800u;
            goto label_31e800;
        }
    }
    ctx->pc = 0x31E7F4u;
label_31e7f4:
    // 0x31e7f4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x31e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_31e7f8:
    // 0x31e7f8: 0x10000002  b           . + 4 + (0x2 << 2)
label_31e7fc:
    if (ctx->pc == 0x31E7FCu) {
        ctx->pc = 0x31E7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E7F8u;
        // 0x31e7fc: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E800u;
        goto label_31e800;
    }
    ctx->pc = 0x31E7F8u;
    {
        const bool branch_taken_0x31e7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E7F8u;
        // 0x31e7fc: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e7f8) {
            ctx->pc = 0x31E804u;
            goto label_31e804;
        }
    }
    ctx->pc = 0x31E800u;
label_31e800:
    // 0x31e800: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31e800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e804:
    // 0x31e804: 0x52000074  beql        $s0, $zero, . + 4 + (0x74 << 2)
label_31e808:
    if (ctx->pc == 0x31E808u) {
        ctx->pc = 0x31E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E804u;
        // 0x31e808: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E80Cu;
        goto label_31e80c;
    }
    ctx->pc = 0x31E804u;
    {
        const bool branch_taken_0x31e804 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e804) {
            ctx->pc = 0x31E808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E804u;
            // 0x31e808: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E9D8u;
            goto label_31e9d8;
        }
    }
    ctx->pc = 0x31E80Cu;
label_31e80c:
    // 0x31e80c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x31e80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_31e810:
    // 0x31e810: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x31e810u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_31e814:
    // 0x31e814: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x31e814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_31e818:
    // 0x31e818: 0x40f809  jalr        $v0
label_31e81c:
    if (ctx->pc == 0x31E81Cu) {
        ctx->pc = 0x31E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E818u;
        // 0x31e81c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E820u;
        goto label_31e820;
    }
    ctx->pc = 0x31E818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31E820u);
        ctx->pc = 0x31E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E818u;
        // 0x31e81c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E818u, 0x31E820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31E820u;
label_31e820:
    // 0x31e820: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x31e820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_31e824:
    // 0x31e824: 0x5443006c  bnel        $v0, $v1, . + 4 + (0x6C << 2)
label_31e828:
    if (ctx->pc == 0x31E828u) {
        ctx->pc = 0x31E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E824u;
        // 0x31e828: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E82Cu;
        goto label_31e82c;
    }
    ctx->pc = 0x31E824u;
    {
        const bool branch_taken_0x31e824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31e824) {
            ctx->pc = 0x31E828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E824u;
            // 0x31e828: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E9D8u;
            goto label_31e9d8;
        }
    }
    ctx->pc = 0x31E82Cu;
label_31e82c:
    // 0x31e82c: 0xc0b368a  jal         func_2CDA28
label_31e830:
    if (ctx->pc == 0x31E830u) {
        ctx->pc = 0x31E830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E82Cu;
        // 0x31e830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E834u;
        goto label_31e834;
    }
    ctx->pc = 0x31E82Cu;
    SET_GPR_U32(ctx, 31, 0x31E834u);
    ctx->pc = 0x31E830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E82Cu;
    // 0x31e830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDA28u, 0x31E82Cu, 0x31E834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E834u;
label_31e834:
    // 0x31e834: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31e834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31e838:
    // 0x31e838: 0x14430067  bne         $v0, $v1, . + 4 + (0x67 << 2)
label_31e83c:
    if (ctx->pc == 0x31E83Cu) {
        ctx->pc = 0x31E83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E838u;
        // 0x31e83c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E840u;
        goto label_31e840;
    }
    ctx->pc = 0x31E838u;
    {
        const bool branch_taken_0x31e838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x31E83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E838u;
        // 0x31e83c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e838) {
            ctx->pc = 0x31E9D8u;
            goto label_31e9d8;
        }
    }
    ctx->pc = 0x31E840u;
label_31e840:
    // 0x31e840: 0x26500090  addiu       $s0, $s2, 0x90
    ctx->pc = 0x31e840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_31e844:
    // 0x31e844: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x31e844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_31e848:
    // 0x31e848: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x31e848u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_31e84c:
    // 0x31e84c: 0x24544b00  addiu       $s4, $v0, 0x4B00
    ctx->pc = 0x31e84cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_31e850:
    // 0x31e850: 0x26350090  addiu       $s5, $s1, 0x90
    ctx->pc = 0x31e850u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_31e854:
    // 0x31e854: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x31e854u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_31e858:
    // 0x31e858: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x31e858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_31e85c:
    // 0x31e85c: 0xc0cd7d2  jal         func_335F48
label_31e860:
    if (ctx->pc == 0x31E860u) {
        ctx->pc = 0x31E860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E85Cu;
        // 0x31e860: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E864u;
        goto label_31e864;
    }
    ctx->pc = 0x31E85Cu;
    SET_GPR_U32(ctx, 31, 0x31E864u);
    ctx->pc = 0x31E860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E85Cu;
    // 0x31e860: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x31E85Cu, 0x31E864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E864u;
label_31e864:
    // 0x31e864: 0xc0cd742  jal         func_335D08
label_31e868:
    if (ctx->pc == 0x31E868u) {
        ctx->pc = 0x31E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E864u;
        // 0x31e868: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E86Cu;
        goto label_31e86c;
    }
    ctx->pc = 0x31E864u;
    SET_GPR_U32(ctx, 31, 0x31E86Cu);
    ctx->pc = 0x31E868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E864u;
    // 0x31e868: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x31E864u, 0x31E86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E86Cu;
label_31e86c:
    // 0x31e86c: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x31e86cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_31e870:
    // 0x31e870: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x31e870u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_31e874:
    // 0x31e874: 0x86a50002  lh          $a1, 0x2($s5)
    ctx->pc = 0x31e874u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_31e878:
    // 0x31e878: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x31e878u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_31e87c:
    // 0x31e87c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x31e87cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_31e880:
    // 0x31e880: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x31e880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_31e884:
    // 0x31e884: 0xc0cd780  jal         func_335E00
label_31e888:
    if (ctx->pc == 0x31E888u) {
        ctx->pc = 0x31E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E884u;
        // 0x31e888: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E88Cu;
        goto label_31e88c;
    }
    ctx->pc = 0x31E884u;
    SET_GPR_U32(ctx, 31, 0x31E88Cu);
    ctx->pc = 0x31E888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E884u;
    // 0x31e888: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x31E884u, 0x31E88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E88Cu;
label_31e88c:
    // 0x31e88c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x31e88cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_31e890:
    // 0x31e890: 0xc0cdd2e  jal         func_3374B8
label_31e894:
    if (ctx->pc == 0x31E894u) {
        ctx->pc = 0x31E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E890u;
        // 0x31e894: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E898u;
        goto label_31e898;
    }
    ctx->pc = 0x31E890u;
    SET_GPR_U32(ctx, 31, 0x31E898u);
    ctx->pc = 0x31E894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E890u;
    // 0x31e894: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x31E890u, 0x31E898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E898u;
label_31e898:
    // 0x31e898: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31e898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_31e89c:
    // 0x31e89c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x31e89cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_31e8a0:
    // 0x31e8a0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x31e8a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_31e8a4:
    // 0x31e8a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31e8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31e8a8:
    // 0x31e8a8: 0x26440284  addiu       $a0, $s2, 0x284
    ctx->pc = 0x31e8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 644));
label_31e8ac:
    // 0x31e8ac: 0x240607d0  addiu       $a2, $zero, 0x7D0
    ctx->pc = 0x31e8acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_31e8b0:
    // 0x31e8b0: 0xc0a6800  jal         func_29A000
label_31e8b4:
    if (ctx->pc == 0x31E8B4u) {
        ctx->pc = 0x31E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E8B0u;
        // 0x31e8b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E8B8u;
        goto label_31e8b8;
    }
    ctx->pc = 0x31E8B0u;
    SET_GPR_U32(ctx, 31, 0x31E8B8u);
    ctx->pc = 0x31E8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E8B0u;
    // 0x31e8b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x31E8B0u, 0x31E8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E8B8u;
label_31e8b8:
    // 0x31e8b8: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x31e8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_31e8bc:
    // 0x31e8bc: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x31e8bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_31e8c0:
    // 0x31e8c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31e8c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e8c4:
    // 0x31e8c4: 0x0  nop
    ctx->pc = 0x31e8c4u;
    // NOP
label_31e8c8:
    // 0x31e8c8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x31e8c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31e8cc:
    // 0x31e8cc: 0x0  nop
    ctx->pc = 0x31e8ccu;
    // NOP
label_31e8d0:
    // 0x31e8d0: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_31e8d4:
    if (ctx->pc == 0x31E8D4u) {
        ctx->pc = 0x31E8D8u;
        goto label_31e8d8;
    }
    ctx->pc = 0x31E8D0u;
    {
        const bool branch_taken_0x31e8d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31e8d0) {
            ctx->pc = 0x31E914u;
            goto label_31e914;
        }
    }
    ctx->pc = 0x31E8D8u;
label_31e8d8:
    // 0x31e8d8: 0xc0a367c  jal         func_28D9F0
label_31e8dc:
    if (ctx->pc == 0x31E8DCu) {
        ctx->pc = 0x31E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E8D8u;
        // 0x31e8dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E8E0u;
        goto label_31e8e0;
    }
    ctx->pc = 0x31E8D8u;
    SET_GPR_U32(ctx, 31, 0x31E8E0u);
    ctx->pc = 0x31E8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E8D8u;
    // 0x31e8dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x31E8D8u, 0x31E8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E8E0u;
label_31e8e0:
    // 0x31e8e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31e8e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31e8e4:
    // 0x31e8e4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_31e8e8:
    if (ctx->pc == 0x31E8E8u) {
        ctx->pc = 0x31E8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E8E4u;
        // 0x31e8e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E8ECu;
        goto label_31e8ec;
    }
    ctx->pc = 0x31E8E4u;
    {
        const bool branch_taken_0x31e8e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E8E4u;
        // 0x31e8e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e8e4) {
            ctx->pc = 0x31E914u;
            goto label_31e914;
        }
    }
    ctx->pc = 0x31E8ECu;
label_31e8ec:
    // 0x31e8ec: 0x86b00002  lh          $s0, 0x2($s5)
    ctx->pc = 0x31e8ecu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_31e8f0:
    // 0x31e8f0: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x31e8f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_31e8f4:
    // 0x31e8f4: 0xc0884f6  jal         func_2213D8
label_31e8f8:
    if (ctx->pc == 0x31E8F8u) {
        ctx->pc = 0x31E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E8F4u;
        // 0x31e8f8: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E8FCu;
        goto label_31e8fc;
    }
    ctx->pc = 0x31E8F4u;
    SET_GPR_U32(ctx, 31, 0x31E8FCu);
    ctx->pc = 0x31E8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E8F4u;
    // 0x31e8f8: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x31E8F4u, 0x31E8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E8FCu;
label_31e8fc:
    // 0x31e8fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31e8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31e900:
    // 0x31e900: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x31e900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31e904:
    // 0x31e904: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x31e904u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_31e908:
    // 0x31e908: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31e908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31e90c:
    // 0x31e90c: 0xc0bf800  jal         func_2FE000
label_31e910:
    if (ctx->pc == 0x31E910u) {
        ctx->pc = 0x31E910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E90Cu;
        // 0x31e910: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E914u;
        goto label_31e914;
    }
    ctx->pc = 0x31E90Cu;
    SET_GPR_U32(ctx, 31, 0x31E914u);
    ctx->pc = 0x31E910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E90Cu;
    // 0x31e910: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x31E90Cu, 0x31E914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E914u;
label_31e914:
    // 0x31e914: 0xc0a47b4  jal         func_291ED0
label_31e918:
    if (ctx->pc == 0x31E918u) {
        ctx->pc = 0x31E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E914u;
        // 0x31e918: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E91Cu;
        goto label_31e91c;
    }
    ctx->pc = 0x31E914u;
    SET_GPR_U32(ctx, 31, 0x31E91Cu);
    ctx->pc = 0x31E918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E914u;
    // 0x31e918: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x31E914u, 0x31E91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E91Cu;
label_31e91c:
    // 0x31e91c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31e91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31e920:
    // 0x31e920: 0x1443002d  bne         $v0, $v1, . + 4 + (0x2D << 2)
label_31e924:
    if (ctx->pc == 0x31E924u) {
        ctx->pc = 0x31E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E920u;
        // 0x31e924: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E928u;
        goto label_31e928;
    }
    ctx->pc = 0x31E920u;
    {
        const bool branch_taken_0x31e920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x31E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E920u;
        // 0x31e924: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e920) {
            ctx->pc = 0x31E9D8u;
            goto label_31e9d8;
        }
    }
    ctx->pc = 0x31E928u;
label_31e928:
    // 0x31e928: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x31e928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_31e92c:
    // 0x31e92c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31e92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_31e930:
    // 0x31e930: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x31e930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_31e934:
    // 0x31e934: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x31e934u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_31e938:
    // 0x31e938: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31e938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31e93c:
    // 0x31e93c: 0x2405008f  addiu       $a1, $zero, 0x8F
    ctx->pc = 0x31e93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_31e940:
    // 0x31e940: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31e940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e944:
    // 0x31e944: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x31e944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31e948:
    // 0x31e948: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x31e948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31e94c:
    // 0x31e94c: 0xc088178  jal         func_2205E0
label_31e950:
    if (ctx->pc == 0x31E950u) {
        ctx->pc = 0x31E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E94Cu;
        // 0x31e950: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E954u;
        goto label_31e954;
    }
    ctx->pc = 0x31E94Cu;
    SET_GPR_U32(ctx, 31, 0x31E954u);
    ctx->pc = 0x31E950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E94Cu;
    // 0x31e950: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x31E94Cu, 0x31E954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E954u;
label_31e954:
    // 0x31e954: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x31e954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_31e958:
    // 0x31e958: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x31e958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_31e95c:
    // 0x31e95c: 0xc0cd4ee  jal         func_3353B8
label_31e960:
    if (ctx->pc == 0x31E960u) {
        ctx->pc = 0x31E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E95Cu;
        // 0x31e960: 0x2484b8a0  addiu       $a0, $a0, -0x4760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E964u;
        goto label_31e964;
    }
    ctx->pc = 0x31E95Cu;
    SET_GPR_U32(ctx, 31, 0x31E964u);
    ctx->pc = 0x31E960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E95Cu;
    // 0x31e960: 0x2484b8a0  addiu       $a0, $a0, -0x4760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x31E95Cu, 0x31E964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E964u;
label_31e964:
    // 0x31e964: 0x2c420032  sltiu       $v0, $v0, 0x32
    ctx->pc = 0x31e964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
label_31e968:
    // 0x31e968: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_31e96c:
    if (ctx->pc == 0x31E96Cu) {
        ctx->pc = 0x31E96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E968u;
        // 0x31e96c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E970u;
        goto label_31e970;
    }
    ctx->pc = 0x31E968u;
    {
        const bool branch_taken_0x31e968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E968u;
        // 0x31e96c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e968) {
            ctx->pc = 0x31E9D8u;
            goto label_31e9d8;
        }
    }
    ctx->pc = 0x31E970u;
label_31e970:
    // 0x31e970: 0xc089000  jal         func_224000
label_31e974:
    if (ctx->pc == 0x31E974u) {
        ctx->pc = 0x31E974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E970u;
        // 0x31e974: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E978u;
        goto label_31e978;
    }
    ctx->pc = 0x31E970u;
    SET_GPR_U32(ctx, 31, 0x31E978u);
    ctx->pc = 0x31E974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E970u;
    // 0x31e974: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x31E970u, 0x31E978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E978u;
label_31e978:
    // 0x31e978: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_31e97c:
    if (ctx->pc == 0x31E97Cu) {
        ctx->pc = 0x31E97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E978u;
        // 0x31e97c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E980u;
        goto label_31e980;
    }
    ctx->pc = 0x31E978u;
    {
        const bool branch_taken_0x31e978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E978u;
        // 0x31e97c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e978) {
            ctx->pc = 0x31E9D8u;
            goto label_31e9d8;
        }
    }
    ctx->pc = 0x31E980u;
label_31e980:
    // 0x31e980: 0xc0a367c  jal         func_28D9F0
label_31e984:
    if (ctx->pc == 0x31E984u) {
        ctx->pc = 0x31E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E980u;
        // 0x31e984: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E988u;
        goto label_31e988;
    }
    ctx->pc = 0x31E980u;
    SET_GPR_U32(ctx, 31, 0x31E988u);
    ctx->pc = 0x31E984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E980u;
    // 0x31e984: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x31E980u, 0x31E988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E988u;
label_31e988:
    // 0x31e988: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31e988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31e98c:
    // 0x31e98c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_31e990:
    if (ctx->pc == 0x31E990u) {
        ctx->pc = 0x31E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E98Cu;
        // 0x31e990: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E994u;
        goto label_31e994;
    }
    ctx->pc = 0x31E98Cu;
    {
        const bool branch_taken_0x31e98c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E98Cu;
        // 0x31e990: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e98c) {
            ctx->pc = 0x31E9D4u;
            goto label_31e9d4;
        }
    }
    ctx->pc = 0x31E994u;
label_31e994:
    // 0x31e994: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31e994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e998:
    // 0x31e998: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x31e998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_31e99c:
    // 0x31e99c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x31e99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_31e9a0:
    // 0x31e9a0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x31e9a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_31e9a4:
    // 0x31e9a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x31e9a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_31e9a8:
    // 0x31e9a8: 0xc0cd4fc  jal         func_3353F0
label_31e9ac:
    if (ctx->pc == 0x31E9ACu) {
        ctx->pc = 0x31E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E9A8u;
        // 0x31e9ac: 0x240602ee  addiu       $a2, $zero, 0x2EE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E9B0u;
        goto label_31e9b0;
    }
    ctx->pc = 0x31E9A8u;
    SET_GPR_U32(ctx, 31, 0x31E9B0u);
    ctx->pc = 0x31E9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E9A8u;
    // 0x31e9ac: 0x240602ee  addiu       $a2, $zero, 0x2EE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x31E9A8u, 0x31E9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E9B0u;
label_31e9b0:
    // 0x31e9b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31e9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31e9b4:
    // 0x31e9b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31e9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31e9b8:
    // 0x31e9b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x31e9b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_31e9bc:
    // 0x31e9bc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x31e9bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31e9c0:
    // 0x31e9c0: 0x24060256  addiu       $a2, $zero, 0x256
    ctx->pc = 0x31e9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
label_31e9c4:
    // 0x31e9c4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x31e9c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_31e9c8:
    // 0x31e9c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x31e9c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31e9cc:
    // 0x31e9cc: 0xc0be968  jal         func_2FA5A0
label_31e9d0:
    if (ctx->pc == 0x31E9D0u) {
        ctx->pc = 0x31E9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E9CCu;
        // 0x31e9d0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E9D4u;
        goto label_31e9d4;
    }
    ctx->pc = 0x31E9CCu;
    SET_GPR_U32(ctx, 31, 0x31E9D4u);
    ctx->pc = 0x31E9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E9CCu;
    // 0x31e9d0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x31E9CCu, 0x31E9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E9D4u;
label_31e9d4:
    // 0x31e9d4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x31e9d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31e9d8:
    // 0x31e9d8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x31e9d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31e9dc:
    // 0x31e9dc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x31e9dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31e9e0:
    // 0x31e9e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31e9e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31e9e4:
    // 0x31e9e4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x31e9e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31e9e8:
    // 0x31e9e8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x31e9e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31e9ec:
    // 0x31e9ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31e9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31e9f0:
    // 0x31e9f0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x31e9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_31e9f4:
    // 0x31e9f4: 0x3e00008  jr          $ra
label_31e9f8:
    if (ctx->pc == 0x31E9F8u) {
        ctx->pc = 0x31E9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E9F4u;
        // 0x31e9f8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E9FCu;
        goto label_31e9fc;
    }
    ctx->pc = 0x31E9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E9F4u;
        // 0x31e9f8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E9FCu;
label_31e9fc:
    // 0x31e9fc: 0x0  nop
    ctx->pc = 0x31e9fcu;
    // NOP
    ctx->pc = 0x31ea00u;
}
