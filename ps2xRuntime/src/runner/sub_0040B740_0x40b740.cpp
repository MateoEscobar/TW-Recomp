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

// Function: sub_0040B740
// Address: 0x40b740 - 0x40bb20
void sub_0040B740_0x40b740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040B740_0x40b740");
#endif

    switch (ctx->pc) {
        case 0x40b778u: goto label_40b778;
        case 0x40b78cu: goto label_40b78c;
        case 0x40b7a4u: goto label_40b7a4;
        case 0x40b7b8u: goto label_40b7b8;
        case 0x40b7c4u: goto label_40b7c4;
        case 0x40b7dcu: goto label_40b7dc;
        case 0x40b7f0u: goto label_40b7f0;
        case 0x40b804u: goto label_40b804;
        case 0x40b81cu: goto label_40b81c;
        case 0x40b830u: goto label_40b830;
        case 0x40b83cu: goto label_40b83c;
        case 0x40b854u: goto label_40b854;
        case 0x40b868u: goto label_40b868;
        case 0x40b87cu: goto label_40b87c;
        case 0x40b88cu: goto label_40b88c;
        case 0x40b8a0u: goto label_40b8a0;
        case 0x40b8acu: goto label_40b8ac;
        case 0x40b8bcu: goto label_40b8bc;
        case 0x40b8d0u: goto label_40b8d0;
        case 0x40b8e4u: goto label_40b8e4;
        case 0x40b8f8u: goto label_40b8f8;
        case 0x40b90cu: goto label_40b90c;
        case 0x40b918u: goto label_40b918;
        case 0x40b928u: goto label_40b928;
        case 0x40b940u: goto label_40b940;
        case 0x40b94cu: goto label_40b94c;
        case 0x40b960u: goto label_40b960;
        case 0x40b970u: goto label_40b970;
        case 0x40b97cu: goto label_40b97c;
        case 0x40b990u: goto label_40b990;
        case 0x40b9a0u: goto label_40b9a0;
        case 0x40b9acu: goto label_40b9ac;
        case 0x40b9c0u: goto label_40b9c0;
        case 0x40b9d0u: goto label_40b9d0;
        case 0x40b9dcu: goto label_40b9dc;
        case 0x40b9f0u: goto label_40b9f0;
        case 0x40ba04u: goto label_40ba04;
        case 0x40ba10u: goto label_40ba10;
        case 0x40ba24u: goto label_40ba24;
        case 0x40ba38u: goto label_40ba38;
        case 0x40ba44u: goto label_40ba44;
        case 0x40ba58u: goto label_40ba58;
        case 0x40ba6cu: goto label_40ba6c;
        case 0x40ba7cu: goto label_40ba7c;
        case 0x40ba8cu: goto label_40ba8c;
        case 0x40baa0u: goto label_40baa0;
        case 0x40bab4u: goto label_40bab4;
        case 0x40bac4u: goto label_40bac4;
        case 0x40bad8u: goto label_40bad8;
        case 0x40bae4u: goto label_40bae4;
        case 0x40baf4u: goto label_40baf4;
        default: break;
    }

    ctx->pc = 0x40b740u;

    // 0x40b740: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x40b740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x40b744: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x40b744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x40b748: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x40b748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x40b74c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40b74cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b750: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40b750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b754: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x40b754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x40b758: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x40b758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x40b75c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x40b75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x40b760: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x40b760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x40b764: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x40b764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x40b768: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x40b768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x40b76c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40b76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40b770: 0xc0c8e7e  jal         func_3239F8
    ctx->pc = 0x40B770u;
    SET_GPR_U32(ctx, 31, 0x40B778u);
    ctx->pc = 0x40B774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B770u;
    // 0x40b774: 0x24a5b5b8  addiu       $a1, $a1, -0x4A48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x40B770u, 0x40B778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B778u;
label_40b778:
    // 0x40b778: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x40b778u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
    // 0x40b77c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b780: 0x26318140  addiu       $s1, $s1, -0x7EC0
    ctx->pc = 0x40b780u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934848));
    // 0x40b784: 0xc102a16  jal         func_40A858
    ctx->pc = 0x40B784u;
    SET_GPR_U32(ctx, 31, 0x40B78Cu);
    ctx->pc = 0x40B788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B784u;
    // 0x40b788: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A858u, 0x40B784u, 0x40B78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B78Cu;
label_40b78c:
    // 0x40b78c: 0x3c160059  lui         $s6, 0x59
    ctx->pc = 0x40b78cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)89 << 16));
    // 0x40b790: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40b790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b794: 0x26d68368  addiu       $s6, $s6, -0x7C98
    ctx->pc = 0x40b794u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935400));
    // 0x40b798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b79c: 0xc0cca28  jal         func_3328A0
    ctx->pc = 0x40B79Cu;
    SET_GPR_U32(ctx, 31, 0x40B7A4u);
    ctx->pc = 0x40B7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B79Cu;
    // 0x40b7a0: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3328A0u, 0x40B79Cu, 0x40B7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B7A4u;
label_40b7a4:
    // 0x40b7a4: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x40b7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x40b7a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40b7a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b7ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b7b0: 0xc0c8e7e  jal         func_3239F8
    ctx->pc = 0x40B7B0u;
    SET_GPR_U32(ctx, 31, 0x40B7B8u);
    ctx->pc = 0x40B7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B7B0u;
    // 0x40b7b4: 0x24a5b608  addiu       $a1, $a1, -0x49F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x40B7B0u, 0x40B7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B7B8u;
label_40b7b8:
    // 0x40b7b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40b7b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b7bc: 0xc102a16  jal         func_40A858
    ctx->pc = 0x40B7BCu;
    SET_GPR_U32(ctx, 31, 0x40B7C4u);
    ctx->pc = 0x40B7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B7BCu;
    // 0x40b7c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A858u, 0x40B7BCu, 0x40B7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B7C4u;
label_40b7c4:
    // 0x40b7c4: 0x3c150059  lui         $s5, 0x59
    ctx->pc = 0x40b7c4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)89 << 16));
    // 0x40b7c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40b7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b7cc: 0x26b58378  addiu       $s5, $s5, -0x7C88
    ctx->pc = 0x40b7ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294935416));
    // 0x40b7d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b7d4: 0xc0cca28  jal         func_3328A0
    ctx->pc = 0x40B7D4u;
    SET_GPR_U32(ctx, 31, 0x40B7DCu);
    ctx->pc = 0x40B7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B7D4u;
    // 0x40b7d8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3328A0u, 0x40B7D4u, 0x40B7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B7DCu;
label_40b7dc:
    // 0x40b7dc: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x40b7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x40b7e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40b7e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b7e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b7e8: 0xc0c8e7e  jal         func_3239F8
    ctx->pc = 0x40B7E8u;
    SET_GPR_U32(ctx, 31, 0x40B7F0u);
    ctx->pc = 0x40B7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B7E8u;
    // 0x40b7ec: 0x24a5b450  addiu       $a1, $a1, -0x4BB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x40B7E8u, 0x40B7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B7F0u;
label_40b7f0:
    // 0x40b7f0: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x40b7f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
    // 0x40b7f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b7f8: 0x26318158  addiu       $s1, $s1, -0x7EA8
    ctx->pc = 0x40b7f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934872));
    // 0x40b7fc: 0xc102a16  jal         func_40A858
    ctx->pc = 0x40B7FCu;
    SET_GPR_U32(ctx, 31, 0x40B804u);
    ctx->pc = 0x40B800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B7FCu;
    // 0x40b800: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A858u, 0x40B7FCu, 0x40B804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B804u;
label_40b804:
    // 0x40b804: 0x3c140059  lui         $s4, 0x59
    ctx->pc = 0x40b804u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)89 << 16));
    // 0x40b808: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40b808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b80c: 0x26948388  addiu       $s4, $s4, -0x7C78
    ctx->pc = 0x40b80cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294935432));
    // 0x40b810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b814: 0xc0cca28  jal         func_3328A0
    ctx->pc = 0x40B814u;
    SET_GPR_U32(ctx, 31, 0x40B81Cu);
    ctx->pc = 0x40B818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B814u;
    // 0x40b818: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3328A0u, 0x40B814u, 0x40B81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B81Cu;
label_40b81c:
    // 0x40b81c: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x40b81cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x40b820: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40b820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b828: 0xc0c8e7e  jal         func_3239F8
    ctx->pc = 0x40B828u;
    SET_GPR_U32(ctx, 31, 0x40B830u);
    ctx->pc = 0x40B82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B828u;
    // 0x40b82c: 0x24a5b4f0  addiu       $a1, $a1, -0x4B10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x40B828u, 0x40B830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B830u;
label_40b830:
    // 0x40b830: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40b830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b834: 0xc102a16  jal         func_40A858
    ctx->pc = 0x40B834u;
    SET_GPR_U32(ctx, 31, 0x40B83Cu);
    ctx->pc = 0x40B838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B834u;
    // 0x40b838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A858u, 0x40B834u, 0x40B83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B83Cu;
label_40b83c:
    // 0x40b83c: 0x3c130059  lui         $s3, 0x59
    ctx->pc = 0x40b83cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)89 << 16));
    // 0x40b840: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40b840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b844: 0x26738390  addiu       $s3, $s3, -0x7C70
    ctx->pc = 0x40b844u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935440));
    // 0x40b848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b84c: 0xc0cca28  jal         func_3328A0
    ctx->pc = 0x40B84Cu;
    SET_GPR_U32(ctx, 31, 0x40B854u);
    ctx->pc = 0x40B850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B84Cu;
    // 0x40b850: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3328A0u, 0x40B84Cu, 0x40B854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B854u;
label_40b854:
    // 0x40b854: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x40b854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x40b858: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40b858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b85c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b860: 0xc0c8e7e  jal         func_3239F8
    ctx->pc = 0x40B860u;
    SET_GPR_U32(ctx, 31, 0x40B868u);
    ctx->pc = 0x40B864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B860u;
    // 0x40b864: 0x24a5b030  addiu       $a1, $a1, -0x4FD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x40B860u, 0x40B868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B868u;
label_40b868:
    // 0x40b868: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x40b868u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
    // 0x40b86c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b870: 0x26318170  addiu       $s1, $s1, -0x7E90
    ctx->pc = 0x40b870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934896));
    // 0x40b874: 0xc102a16  jal         func_40A858
    ctx->pc = 0x40B874u;
    SET_GPR_U32(ctx, 31, 0x40B87Cu);
    ctx->pc = 0x40B878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B874u;
    // 0x40b878: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A858u, 0x40B874u, 0x40B87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B87Cu;
label_40b87c:
    // 0x40b87c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40b87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b880: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b884: 0xc0cca28  jal         func_3328A0
    ctx->pc = 0x40B884u;
    SET_GPR_U32(ctx, 31, 0x40B88Cu);
    ctx->pc = 0x40B888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B884u;
    // 0x40b888: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3328A0u, 0x40B884u, 0x40B88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B88Cu;
label_40b88c:
    // 0x40b88c: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x40b88cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x40b890: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40b890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b898: 0xc0c8e7e  jal         func_3239F8
    ctx->pc = 0x40B898u;
    SET_GPR_U32(ctx, 31, 0x40B8A0u);
    ctx->pc = 0x40B89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B898u;
    // 0x40b89c: 0x24a5b058  addiu       $a1, $a1, -0x4FA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x40B898u, 0x40B8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B8A0u;
label_40b8a0:
    // 0x40b8a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40b8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b8a4: 0xc102a16  jal         func_40A858
    ctx->pc = 0x40B8A4u;
    SET_GPR_U32(ctx, 31, 0x40B8ACu);
    ctx->pc = 0x40B8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B8A4u;
    // 0x40b8a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A858u, 0x40B8A4u, 0x40B8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B8ACu;
label_40b8ac:
    // 0x40b8ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40b8acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b8b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b8b4: 0xc0cca28  jal         func_3328A0
    ctx->pc = 0x40B8B4u;
    SET_GPR_U32(ctx, 31, 0x40B8BCu);
    ctx->pc = 0x40B8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B8B4u;
    // 0x40b8b8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3328A0u, 0x40B8B4u, 0x40B8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B8BCu;
label_40b8bc:
    // 0x40b8bc: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x40b8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x40b8c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40b8c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b8c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b8c8: 0xc0c8e7e  jal         func_3239F8
    ctx->pc = 0x40B8C8u;
    SET_GPR_U32(ctx, 31, 0x40B8D0u);
    ctx->pc = 0x40B8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B8C8u;
    // 0x40b8cc: 0x24a5b0c8  addiu       $a1, $a1, -0x4F38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x40B8C8u, 0x40B8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B8D0u;
label_40b8d0:
    // 0x40b8d0: 0x3c120059  lui         $s2, 0x59
    ctx->pc = 0x40b8d0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)89 << 16));
    // 0x40b8d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b8d8: 0x26528198  addiu       $s2, $s2, -0x7E68
    ctx->pc = 0x40b8d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294934936));
    // 0x40b8dc: 0xc102a16  jal         func_40A858
    ctx->pc = 0x40B8DCu;
    SET_GPR_U32(ctx, 31, 0x40B8E4u);
    ctx->pc = 0x40B8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B8DCu;
    // 0x40b8e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A858u, 0x40B8DCu, 0x40B8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B8E4u;
label_40b8e4:
    // 0x40b8e4: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40b8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x40b8e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40b8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b8ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b8f0: 0xc0cca28  jal         func_3328A0
    ctx->pc = 0x40B8F0u;
    SET_GPR_U32(ctx, 31, 0x40B8F8u);
    ctx->pc = 0x40B8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B8F0u;
    // 0x40b8f4: 0x24c683a0  addiu       $a2, $a2, -0x7C60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3328A0u, 0x40B8F0u, 0x40B8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B8F8u;
label_40b8f8:
    // 0x40b8f8: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x40b8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x40b8fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40b8fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b904: 0xc0c8e7e  jal         func_3239F8
    ctx->pc = 0x40B904u;
    SET_GPR_U32(ctx, 31, 0x40B90Cu);
    ctx->pc = 0x40B908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B904u;
    // 0x40b908: 0x24a5b168  addiu       $a1, $a1, -0x4E98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x40B904u, 0x40B90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B90Cu;
label_40b90c:
    // 0x40b90c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b910: 0xc102a16  jal         func_40A858
    ctx->pc = 0x40B910u;
    SET_GPR_U32(ctx, 31, 0x40B918u);
    ctx->pc = 0x40B914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B910u;
    // 0x40b914: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A858u, 0x40B910u, 0x40B918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B918u;
label_40b918:
    // 0x40b918: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40b918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b91c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x40b91cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b920: 0xc0cca28  jal         func_3328A0
    ctx->pc = 0x40B920u;
    SET_GPR_U32(ctx, 31, 0x40B928u);
    ctx->pc = 0x40B924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B920u;
    // 0x40b924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3328A0u, 0x40B920u, 0x40B928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B928u;
label_40b928:
    // 0x40b928: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x40b928u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
    // 0x40b92c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40b92cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b930: 0x2631b3a0  addiu       $s1, $s1, -0x4C60
    ctx->pc = 0x40b930u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947744));
    // 0x40b934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b938: 0xc0c8e7e  jal         func_3239F8
    ctx->pc = 0x40B938u;
    SET_GPR_U32(ctx, 31, 0x40B940u);
    ctx->pc = 0x40B93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B938u;
    // 0x40b93c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x40B938u, 0x40B940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B940u;
label_40b940:
    // 0x40b940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b944: 0xc102a16  jal         func_40A858
    ctx->pc = 0x40B944u;
    SET_GPR_U32(ctx, 31, 0x40B94Cu);
    ctx->pc = 0x40B948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B944u;
    // 0x40b948: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A858u, 0x40B944u, 0x40B94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B94Cu;
label_40b94c:
    // 0x40b94c: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40b94cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x40b950: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40b950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b958: 0xc0cca28  jal         func_3328A0
    ctx->pc = 0x40B958u;
    SET_GPR_U32(ctx, 31, 0x40B960u);
    ctx->pc = 0x40B95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B958u;
    // 0x40b95c: 0x24c683b0  addiu       $a2, $a2, -0x7C50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3328A0u, 0x40B958u, 0x40B960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B960u;
label_40b960:
    // 0x40b960: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40b960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b968: 0xc0c8e7e  jal         func_3239F8
    ctx->pc = 0x40B968u;
    SET_GPR_U32(ctx, 31, 0x40B970u);
    ctx->pc = 0x40B96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B968u;
    // 0x40b96c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x40B968u, 0x40B970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B970u;
label_40b970:
    // 0x40b970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b974: 0xc102a16  jal         func_40A858
    ctx->pc = 0x40B974u;
    SET_GPR_U32(ctx, 31, 0x40B97Cu);
    ctx->pc = 0x40B978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B974u;
    // 0x40b978: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A858u, 0x40B974u, 0x40B97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B97Cu;
label_40b97c:
    // 0x40b97c: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40b97cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x40b980: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40b980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b988: 0xc0cca28  jal         func_3328A0
    ctx->pc = 0x40B988u;
    SET_GPR_U32(ctx, 31, 0x40B990u);
    ctx->pc = 0x40B98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B988u;
    // 0x40b98c: 0x24c683b8  addiu       $a2, $a2, -0x7C48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3328A0u, 0x40B988u, 0x40B990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B990u;
label_40b990:
    // 0x40b990: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40b990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b998: 0xc0c8e7e  jal         func_3239F8
    ctx->pc = 0x40B998u;
    SET_GPR_U32(ctx, 31, 0x40B9A0u);
    ctx->pc = 0x40B99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B998u;
    // 0x40b99c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x40B998u, 0x40B9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B9A0u;
label_40b9a0:
    // 0x40b9a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b9a4: 0xc102a16  jal         func_40A858
    ctx->pc = 0x40B9A4u;
    SET_GPR_U32(ctx, 31, 0x40B9ACu);
    ctx->pc = 0x40B9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B9A4u;
    // 0x40b9a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A858u, 0x40B9A4u, 0x40B9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B9ACu;
label_40b9ac:
    // 0x40b9ac: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40b9acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x40b9b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40b9b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b9b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b9b8: 0xc0cca28  jal         func_3328A0
    ctx->pc = 0x40B9B8u;
    SET_GPR_U32(ctx, 31, 0x40B9C0u);
    ctx->pc = 0x40B9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B9B8u;
    // 0x40b9bc: 0x24c683c0  addiu       $a2, $a2, -0x7C40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3328A0u, 0x40B9B8u, 0x40B9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B9C0u;
label_40b9c0:
    // 0x40b9c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40b9c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b9c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40b9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b9c8: 0xc0c8e7e  jal         func_3239F8
    ctx->pc = 0x40B9C8u;
    SET_GPR_U32(ctx, 31, 0x40B9D0u);
    ctx->pc = 0x40B9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B9C8u;
    // 0x40b9cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x40B9C8u, 0x40B9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B9D0u;
label_40b9d0:
    // 0x40b9d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b9d4: 0xc102a16  jal         func_40A858
    ctx->pc = 0x40B9D4u;
    SET_GPR_U32(ctx, 31, 0x40B9DCu);
    ctx->pc = 0x40B9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B9D4u;
    // 0x40b9d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A858u, 0x40B9D4u, 0x40B9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B9DCu;
label_40b9dc:
    // 0x40b9dc: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40b9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x40b9e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40b9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b9e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b9e8: 0xc0cca28  jal         func_3328A0
    ctx->pc = 0x40B9E8u;
    SET_GPR_U32(ctx, 31, 0x40B9F0u);
    ctx->pc = 0x40B9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B9E8u;
    // 0x40b9ec: 0x24c683c8  addiu       $a2, $a2, -0x7C38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3328A0u, 0x40B9E8u, 0x40B9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B9F0u;
label_40b9f0:
    // 0x40b9f0: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x40b9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x40b9f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40b9f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b9f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b9fc: 0xc0c8e7e  jal         func_3239F8
    ctx->pc = 0x40B9FCu;
    SET_GPR_U32(ctx, 31, 0x40BA04u);
    ctx->pc = 0x40BA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B9FCu;
    // 0x40ba00: 0x24a5b3c0  addiu       $a1, $a1, -0x4C40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x40B9FCu, 0x40BA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BA04u;
label_40ba04:
    // 0x40ba04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40ba04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ba08: 0xc102a16  jal         func_40A858
    ctx->pc = 0x40BA08u;
    SET_GPR_U32(ctx, 31, 0x40BA10u);
    ctx->pc = 0x40BA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BA08u;
    // 0x40ba0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A858u, 0x40BA08u, 0x40BA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BA10u;
label_40ba10:
    // 0x40ba10: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40ba10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x40ba14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40ba14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ba18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40ba18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ba1c: 0xc0cca28  jal         func_3328A0
    ctx->pc = 0x40BA1Cu;
    SET_GPR_U32(ctx, 31, 0x40BA24u);
    ctx->pc = 0x40BA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BA1Cu;
    // 0x40ba20: 0x24c683d0  addiu       $a2, $a2, -0x7C30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3328A0u, 0x40BA1Cu, 0x40BA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BA24u;
label_40ba24:
    // 0x40ba24: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x40ba24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x40ba28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40ba28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ba2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40ba2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ba30: 0xc0c8e7e  jal         func_3239F8
    ctx->pc = 0x40BA30u;
    SET_GPR_U32(ctx, 31, 0x40BA38u);
    ctx->pc = 0x40BA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BA30u;
    // 0x40ba34: 0x24a5b2c0  addiu       $a1, $a1, -0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x40BA30u, 0x40BA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BA38u;
label_40ba38:
    // 0x40ba38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x40ba38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ba3c: 0xc102a16  jal         func_40A858
    ctx->pc = 0x40BA3Cu;
    SET_GPR_U32(ctx, 31, 0x40BA44u);
    ctx->pc = 0x40BA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BA3Cu;
    // 0x40ba40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A858u, 0x40BA3Cu, 0x40BA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BA44u;
label_40ba44:
    // 0x40ba44: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40ba44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x40ba48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40ba48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ba4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40ba4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ba50: 0xc0cca28  jal         func_3328A0
    ctx->pc = 0x40BA50u;
    SET_GPR_U32(ctx, 31, 0x40BA58u);
    ctx->pc = 0x40BA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BA50u;
    // 0x40ba54: 0x24c683d8  addiu       $a2, $a2, -0x7C28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3328A0u, 0x40BA50u, 0x40BA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BA58u;
label_40ba58:
    // 0x40ba58: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x40ba58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x40ba5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40ba5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ba60: 0x24a5b410  addiu       $a1, $a1, -0x4BF0
    ctx->pc = 0x40ba60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
    // 0x40ba64: 0xc0c8e7e  jal         func_3239F8
    ctx->pc = 0x40BA64u;
    SET_GPR_U32(ctx, 31, 0x40BA6Cu);
    ctx->pc = 0x40BA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BA64u;
    // 0x40ba68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x40BA64u, 0x40BA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BA6Cu;
label_40ba6c:
    // 0x40ba6c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40ba6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40ba70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40ba70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ba74: 0xc102a16  jal         func_40A858
    ctx->pc = 0x40BA74u;
    SET_GPR_U32(ctx, 31, 0x40BA7Cu);
    ctx->pc = 0x40BA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BA74u;
    // 0x40ba78: 0x24a581b0  addiu       $a1, $a1, -0x7E50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A858u, 0x40BA74u, 0x40BA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BA7Cu;
label_40ba7c:
    // 0x40ba7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40ba7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ba80: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x40ba80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ba84: 0xc0cca28  jal         func_3328A0
    ctx->pc = 0x40BA84u;
    SET_GPR_U32(ctx, 31, 0x40BA8Cu);
    ctx->pc = 0x40BA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BA84u;
    // 0x40ba88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3328A0u, 0x40BA84u, 0x40BA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BA8Cu;
label_40ba8c:
    // 0x40ba8c: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x40ba8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x40ba90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40ba90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ba94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40ba94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ba98: 0xc0c8e7e  jal         func_3239F8
    ctx->pc = 0x40BA98u;
    SET_GPR_U32(ctx, 31, 0x40BAA0u);
    ctx->pc = 0x40BA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BA98u;
    // 0x40ba9c: 0x24a5b688  addiu       $a1, $a1, -0x4978 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x40BA98u, 0x40BAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BAA0u;
label_40baa0:
    // 0x40baa0: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x40baa0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
    // 0x40baa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40baa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40baa8: 0x26318248  addiu       $s1, $s1, -0x7DB8
    ctx->pc = 0x40baa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294935112));
    // 0x40baac: 0xc102a16  jal         func_40A858
    ctx->pc = 0x40BAACu;
    SET_GPR_U32(ctx, 31, 0x40BAB4u);
    ctx->pc = 0x40BAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BAACu;
    // 0x40bab0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A858u, 0x40BAACu, 0x40BAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BAB4u;
label_40bab4:
    // 0x40bab4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40bab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bab8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x40bab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40babc: 0xc0cca28  jal         func_3328A0
    ctx->pc = 0x40BABCu;
    SET_GPR_U32(ctx, 31, 0x40BAC4u);
    ctx->pc = 0x40BAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BABCu;
    // 0x40bac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3328A0u, 0x40BABCu, 0x40BAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BAC4u;
label_40bac4:
    // 0x40bac4: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x40bac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x40bac8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40bac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bacc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40baccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bad0: 0xc0c8e7e  jal         func_3239F8
    ctx->pc = 0x40BAD0u;
    SET_GPR_U32(ctx, 31, 0x40BAD8u);
    ctx->pc = 0x40BAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BAD0u;
    // 0x40bad4: 0x24a5b6e0  addiu       $a1, $a1, -0x4920 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239F8u, 0x40BAD0u, 0x40BAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BAD8u;
label_40bad8:
    // 0x40bad8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40bad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40badc: 0xc102a16  jal         func_40A858
    ctx->pc = 0x40BADCu;
    SET_GPR_U32(ctx, 31, 0x40BAE4u);
    ctx->pc = 0x40BAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BADCu;
    // 0x40bae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A858u, 0x40BADCu, 0x40BAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BAE4u;
label_40bae4:
    // 0x40bae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40bae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bae8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x40bae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40baec: 0xc0cca28  jal         func_3328A0
    ctx->pc = 0x40BAECu;
    SET_GPR_U32(ctx, 31, 0x40BAF4u);
    ctx->pc = 0x40BAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BAECu;
    // 0x40baf0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3328A0u, 0x40BAECu, 0x40BAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BAF4u;
label_40baf4:
    // 0x40baf4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x40baf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x40baf8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x40baf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x40bafc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x40bafcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x40bb00: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x40bb00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x40bb04: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x40bb04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40bb08: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x40bb08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40bb0c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x40bb0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40bb10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40bb10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40bb14: 0x3e00008  jr          $ra
    ctx->pc = 0x40BB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40BB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BB14u;
        // 0x40bb18: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40BB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40BB1Cu;
    // 0x40bb1c: 0x0  nop
    ctx->pc = 0x40bb1cu;
    // NOP
    ctx->pc = 0x40bb20u;
}
