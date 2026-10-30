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

// Function: sub_002617F8
// Address: 0x2617f8 - 0x261a08
void sub_002617F8_0x2617f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002617F8_0x2617f8");
#endif

    switch (ctx->pc) {
        case 0x2617f8u: goto label_2617f8;
        case 0x2617fcu: goto label_2617fc;
        case 0x261800u: goto label_261800;
        case 0x261804u: goto label_261804;
        case 0x261808u: goto label_261808;
        case 0x26180cu: goto label_26180c;
        case 0x261810u: goto label_261810;
        case 0x261814u: goto label_261814;
        case 0x261818u: goto label_261818;
        case 0x26181cu: goto label_26181c;
        case 0x261820u: goto label_261820;
        case 0x261824u: goto label_261824;
        case 0x261828u: goto label_261828;
        case 0x26182cu: goto label_26182c;
        case 0x261830u: goto label_261830;
        case 0x261834u: goto label_261834;
        case 0x261838u: goto label_261838;
        case 0x26183cu: goto label_26183c;
        case 0x261840u: goto label_261840;
        case 0x261844u: goto label_261844;
        case 0x261848u: goto label_261848;
        case 0x26184cu: goto label_26184c;
        case 0x261850u: goto label_261850;
        case 0x261854u: goto label_261854;
        case 0x261858u: goto label_261858;
        case 0x26185cu: goto label_26185c;
        case 0x261860u: goto label_261860;
        case 0x261864u: goto label_261864;
        case 0x261868u: goto label_261868;
        case 0x26186cu: goto label_26186c;
        case 0x261870u: goto label_261870;
        case 0x261874u: goto label_261874;
        case 0x261878u: goto label_261878;
        case 0x26187cu: goto label_26187c;
        case 0x261880u: goto label_261880;
        case 0x261884u: goto label_261884;
        case 0x261888u: goto label_261888;
        case 0x26188cu: goto label_26188c;
        case 0x261890u: goto label_261890;
        case 0x261894u: goto label_261894;
        case 0x261898u: goto label_261898;
        case 0x26189cu: goto label_26189c;
        case 0x2618a0u: goto label_2618a0;
        case 0x2618a4u: goto label_2618a4;
        case 0x2618a8u: goto label_2618a8;
        case 0x2618acu: goto label_2618ac;
        case 0x2618b0u: goto label_2618b0;
        case 0x2618b4u: goto label_2618b4;
        case 0x2618b8u: goto label_2618b8;
        case 0x2618bcu: goto label_2618bc;
        case 0x2618c0u: goto label_2618c0;
        case 0x2618c4u: goto label_2618c4;
        case 0x2618c8u: goto label_2618c8;
        case 0x2618ccu: goto label_2618cc;
        case 0x2618d0u: goto label_2618d0;
        case 0x2618d4u: goto label_2618d4;
        case 0x2618d8u: goto label_2618d8;
        case 0x2618dcu: goto label_2618dc;
        case 0x2618e0u: goto label_2618e0;
        case 0x2618e4u: goto label_2618e4;
        case 0x2618e8u: goto label_2618e8;
        case 0x2618ecu: goto label_2618ec;
        case 0x2618f0u: goto label_2618f0;
        case 0x2618f4u: goto label_2618f4;
        case 0x2618f8u: goto label_2618f8;
        case 0x2618fcu: goto label_2618fc;
        case 0x261900u: goto label_261900;
        case 0x261904u: goto label_261904;
        case 0x261908u: goto label_261908;
        case 0x26190cu: goto label_26190c;
        case 0x261910u: goto label_261910;
        case 0x261914u: goto label_261914;
        case 0x261918u: goto label_261918;
        case 0x26191cu: goto label_26191c;
        case 0x261920u: goto label_261920;
        case 0x261924u: goto label_261924;
        case 0x261928u: goto label_261928;
        case 0x26192cu: goto label_26192c;
        case 0x261930u: goto label_261930;
        case 0x261934u: goto label_261934;
        case 0x261938u: goto label_261938;
        case 0x26193cu: goto label_26193c;
        case 0x261940u: goto label_261940;
        case 0x261944u: goto label_261944;
        case 0x261948u: goto label_261948;
        case 0x26194cu: goto label_26194c;
        case 0x261950u: goto label_261950;
        case 0x261954u: goto label_261954;
        case 0x261958u: goto label_261958;
        case 0x26195cu: goto label_26195c;
        case 0x261960u: goto label_261960;
        case 0x261964u: goto label_261964;
        case 0x261968u: goto label_261968;
        case 0x26196cu: goto label_26196c;
        case 0x261970u: goto label_261970;
        case 0x261974u: goto label_261974;
        case 0x261978u: goto label_261978;
        case 0x26197cu: goto label_26197c;
        case 0x261980u: goto label_261980;
        case 0x261984u: goto label_261984;
        case 0x261988u: goto label_261988;
        case 0x26198cu: goto label_26198c;
        case 0x261990u: goto label_261990;
        case 0x261994u: goto label_261994;
        case 0x261998u: goto label_261998;
        case 0x26199cu: goto label_26199c;
        case 0x2619a0u: goto label_2619a0;
        case 0x2619a4u: goto label_2619a4;
        case 0x2619a8u: goto label_2619a8;
        case 0x2619acu: goto label_2619ac;
        case 0x2619b0u: goto label_2619b0;
        case 0x2619b4u: goto label_2619b4;
        case 0x2619b8u: goto label_2619b8;
        case 0x2619bcu: goto label_2619bc;
        case 0x2619c0u: goto label_2619c0;
        case 0x2619c4u: goto label_2619c4;
        case 0x2619c8u: goto label_2619c8;
        case 0x2619ccu: goto label_2619cc;
        case 0x2619d0u: goto label_2619d0;
        case 0x2619d4u: goto label_2619d4;
        case 0x2619d8u: goto label_2619d8;
        case 0x2619dcu: goto label_2619dc;
        case 0x2619e0u: goto label_2619e0;
        case 0x2619e4u: goto label_2619e4;
        case 0x2619e8u: goto label_2619e8;
        case 0x2619ecu: goto label_2619ec;
        case 0x2619f0u: goto label_2619f0;
        case 0x2619f4u: goto label_2619f4;
        case 0x2619f8u: goto label_2619f8;
        case 0x2619fcu: goto label_2619fc;
        case 0x261a00u: goto label_261a00;
        case 0x261a04u: goto label_261a04;
        default: break;
    }

    ctx->pc = 0x2617f8u;

label_2617f8:
    // 0x2617f8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2617f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2617fc:
    // 0x2617fc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2617fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_261800:
    // 0x261800: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x261800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_261804:
    // 0x261804: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x261804u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_261808:
    // 0x261808: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x261808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_26180c:
    // 0x26180c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26180cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_261810:
    // 0x261810: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x261810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_261814:
    // 0x261814: 0x2610dd30  addiu       $s0, $s0, -0x22D0
    ctx->pc = 0x261814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958384));
label_261818:
    // 0x261818: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x261818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_26181c:
    // 0x26181c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26181cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261820:
    // 0x261820: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x261820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_261824:
    // 0x261824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x261824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_261828:
    // 0x261828: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x261828u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_26182c:
    // 0x26182c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x26182cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_261830:
    // 0x261830: 0xc041532  jal         func_1054C8
label_261834:
    if (ctx->pc == 0x261834u) {
        ctx->pc = 0x261834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261830u;
        // 0x261834: 0x8e3600d8  lw          $s6, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261838u;
        goto label_261838;
    }
    ctx->pc = 0x261830u;
    SET_GPR_U32(ctx, 31, 0x261838u);
    ctx->pc = 0x261834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261830u;
    // 0x261834: 0x8e3600d8  lw          $s6, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x261830u, 0x261838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261838u;
label_261838:
    // 0x261838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26183c:
    // 0x26183c: 0xc041532  jal         func_1054C8
label_261840:
    if (ctx->pc == 0x261840u) {
        ctx->pc = 0x261840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26183Cu;
        // 0x261840: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261844u;
        goto label_261844;
    }
    ctx->pc = 0x26183Cu;
    SET_GPR_U32(ctx, 31, 0x261844u);
    ctx->pc = 0x261840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26183Cu;
    // 0x261840: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26183Cu, 0x261844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261844u;
label_261844:
    // 0x261844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x261844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261848:
    // 0x261848: 0xc041532  jal         func_1054C8
label_26184c:
    if (ctx->pc == 0x26184Cu) {
        ctx->pc = 0x26184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261848u;
        // 0x26184c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261850u;
        goto label_261850;
    }
    ctx->pc = 0x261848u;
    SET_GPR_U32(ctx, 31, 0x261850u);
    ctx->pc = 0x26184Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261848u;
    // 0x26184c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x261848u, 0x261850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261850u;
label_261850:
    // 0x261850: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x261850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_261854:
    // 0x261854: 0xc0899e8  jal         func_2267A0
label_261858:
    if (ctx->pc == 0x261858u) {
        ctx->pc = 0x261858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261854u;
        // 0x261858: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26185Cu;
        goto label_26185c;
    }
    ctx->pc = 0x261854u;
    SET_GPR_U32(ctx, 31, 0x26185Cu);
    ctx->pc = 0x261858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261854u;
    // 0x261858: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x261854u, 0x26185Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26185Cu;
label_26185c:
    // 0x26185c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26185cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_261860:
    // 0x261860: 0xc0899e8  jal         func_2267A0
label_261864:
    if (ctx->pc == 0x261864u) {
        ctx->pc = 0x261864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261860u;
        // 0x261864: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261868u;
        goto label_261868;
    }
    ctx->pc = 0x261860u;
    SET_GPR_U32(ctx, 31, 0x261868u);
    ctx->pc = 0x261864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261860u;
    // 0x261864: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x261860u, 0x261868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261868u;
label_261868:
    // 0x261868: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x261868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26186c:
    // 0x26186c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26186cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_261870:
    // 0x261870: 0xc099cb4  jal         func_2672D0
label_261874:
    if (ctx->pc == 0x261874u) {
        ctx->pc = 0x261874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261870u;
        // 0x261874: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261878u;
        goto label_261878;
    }
    ctx->pc = 0x261870u;
    SET_GPR_U32(ctx, 31, 0x261878u);
    ctx->pc = 0x261874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261870u;
    // 0x261874: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x261870u, 0x261878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261878u;
label_261878:
    // 0x261878: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x261878u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26187c:
    // 0x26187c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_261880:
    if (ctx->pc == 0x261880u) {
        ctx->pc = 0x261880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26187Cu;
        // 0x261880: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261884u;
        goto label_261884;
    }
    ctx->pc = 0x26187Cu;
    {
        const bool branch_taken_0x26187c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x261880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26187Cu;
        // 0x261880: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26187c) {
            ctx->pc = 0x26188Cu;
            goto label_26188c;
        }
    }
    ctx->pc = 0x261884u;
label_261884:
    // 0x261884: 0x10000007  b           . + 4 + (0x7 << 2)
label_261888:
    if (ctx->pc == 0x261888u) {
        ctx->pc = 0x261888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261884u;
        // 0x261888: 0x24100269  addiu       $s0, $zero, 0x269 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 617));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26188Cu;
        goto label_26188c;
    }
    ctx->pc = 0x261884u;
    {
        const bool branch_taken_0x261884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261884u;
        // 0x261888: 0x24100269  addiu       $s0, $zero, 0x269 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 617));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261884) {
            ctx->pc = 0x2618A4u;
            goto label_2618a4;
        }
    }
    ctx->pc = 0x26188Cu;
label_26188c:
    // 0x26188c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_261890:
    if (ctx->pc == 0x261890u) {
        ctx->pc = 0x261890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26188Cu;
        // 0x261890: 0x2410026a  addiu       $s0, $zero, 0x26A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261894u;
        goto label_261894;
    }
    ctx->pc = 0x26188Cu;
    {
        const bool branch_taken_0x26188c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x261890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26188Cu;
        // 0x261890: 0x2410026a  addiu       $s0, $zero, 0x26A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26188c) {
            ctx->pc = 0x2618A4u;
            goto label_2618a4;
        }
    }
    ctx->pc = 0x261894u;
label_261894:
    // 0x261894: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x261894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_261898:
    // 0x261898: 0x2410026c  addiu       $s0, $zero, 0x26C
    ctx->pc = 0x261898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 620));
label_26189c:
    // 0x26189c: 0x2402026b  addiu       $v0, $zero, 0x26B
    ctx->pc = 0x26189cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 619));
label_2618a0:
    // 0x2618a0: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x2618a0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_2618a4:
    // 0x2618a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2618a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2618a8:
    // 0x2618a8: 0xc08a658  jal         func_229960
label_2618ac:
    if (ctx->pc == 0x2618ACu) {
        ctx->pc = 0x2618ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2618A8u;
        // 0x2618ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2618B0u;
        goto label_2618b0;
    }
    ctx->pc = 0x2618A8u;
    SET_GPR_U32(ctx, 31, 0x2618B0u);
    ctx->pc = 0x2618ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2618A8u;
    // 0x2618ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229960u, 0x2618A8u, 0x2618B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2618B0u;
label_2618b0:
    // 0x2618b0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2618b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2618b4:
    // 0x2618b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2618b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2618b8:
    // 0x2618b8: 0xc095142  jal         func_254508
label_2618bc:
    if (ctx->pc == 0x2618BCu) {
        ctx->pc = 0x2618BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2618B8u;
        // 0x2618bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2618C0u;
        goto label_2618c0;
    }
    ctx->pc = 0x2618B8u;
    SET_GPR_U32(ctx, 31, 0x2618C0u);
    ctx->pc = 0x2618BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2618B8u;
    // 0x2618bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254508u, 0x2618B8u, 0x2618C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2618C0u;
label_2618c0:
    // 0x2618c0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2618c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2618c4:
    // 0x2618c4: 0x0  nop
    ctx->pc = 0x2618c4u;
    // NOP
label_2618c8:
    // 0x2618c8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_2618cc:
    if (ctx->pc == 0x2618CCu) {
        ctx->pc = 0x2618CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2618C8u;
        // 0x2618cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2618D0u;
        goto label_2618d0;
    }
    ctx->pc = 0x2618C8u;
    {
        const bool branch_taken_0x2618c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2618CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2618C8u;
        // 0x2618cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2618c8) {
            ctx->pc = 0x2618E8u;
            goto label_2618e8;
        }
    }
    ctx->pc = 0x2618D0u;
label_2618d0:
    // 0x2618d0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2618d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2618d4:
    // 0x2618d4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2618d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2618d8:
    // 0x2618d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2618d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2618dc:
    // 0x2618dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2618dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2618e0:
    // 0x2618e0: 0xc09d872  jal         func_2761C8
label_2618e4:
    if (ctx->pc == 0x2618E4u) {
        ctx->pc = 0x2618E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2618E0u;
        // 0x2618e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2618E8u;
        goto label_2618e8;
    }
    ctx->pc = 0x2618E0u;
    SET_GPR_U32(ctx, 31, 0x2618E8u);
    ctx->pc = 0x2618E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2618E0u;
    // 0x2618e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2761C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2761C8u, 0x2618E0u, 0x2618E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2618E8u;
label_2618e8:
    // 0x2618e8: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_2618ec:
    if (ctx->pc == 0x2618ECu) {
        ctx->pc = 0x2618ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2618E8u;
        // 0x2618ec: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2618F0u;
        goto label_2618f0;
    }
    ctx->pc = 0x2618E8u;
    {
        const bool branch_taken_0x2618e8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2618ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2618E8u;
        // 0x2618ec: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2618e8) {
            ctx->pc = 0x261908u;
            goto label_261908;
        }
    }
    ctx->pc = 0x2618F0u;
label_2618f0:
    // 0x2618f0: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x2618f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_2618f4:
    // 0x2618f4: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2618f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2618f8:
    // 0x2618f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2618f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2618fc:
    // 0x2618fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2618fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_261900:
    // 0x261900: 0xc041b20  jal         func_106C80
label_261904:
    if (ctx->pc == 0x261904u) {
        ctx->pc = 0x261904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261900u;
        // 0x261904: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261908u;
        goto label_261908;
    }
    ctx->pc = 0x261900u;
    SET_GPR_U32(ctx, 31, 0x261908u);
    ctx->pc = 0x261904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261900u;
    // 0x261904: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x261900u, 0x261908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261908u;
label_261908:
    // 0x261908: 0xc05d484  jal         func_175210
label_26190c:
    if (ctx->pc == 0x26190Cu) {
        ctx->pc = 0x26190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261908u;
        // 0x26190c: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261910u;
        goto label_261910;
    }
    ctx->pc = 0x261908u;
    SET_GPR_U32(ctx, 31, 0x261910u);
    ctx->pc = 0x26190Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261908u;
    // 0x26190c: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x261908u, 0x261910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261910u;
label_261910:
    // 0x261910: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x261910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_261914:
    // 0x261914: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x261914u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_261918:
    // 0x261918: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x261918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26191c:
    // 0x26191c: 0xa0f809  jalr        $a1
label_261920:
    if (ctx->pc == 0x261920u) {
        ctx->pc = 0x261920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26191Cu;
        // 0x261920: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261924u;
        goto label_261924;
    }
    ctx->pc = 0x26191Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x261924u);
        ctx->pc = 0x261920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26191Cu;
        // 0x261920: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26191Cu, 0x261924u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261924u;
label_261924:
    // 0x261924: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x261924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_261928:
    // 0x261928: 0xc087016  jal         func_21C058
label_26192c:
    if (ctx->pc == 0x26192Cu) {
        ctx->pc = 0x26192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261928u;
        // 0x26192c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261930u;
        goto label_261930;
    }
    ctx->pc = 0x261928u;
    SET_GPR_U32(ctx, 31, 0x261930u);
    ctx->pc = 0x26192Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261928u;
    // 0x26192c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x261928u, 0x261930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261930u;
label_261930:
    // 0x261930: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_261934:
    if (ctx->pc == 0x261934u) {
        ctx->pc = 0x261934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261930u;
        // 0x261934: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261938u;
        goto label_261938;
    }
    ctx->pc = 0x261930u;
    {
        const bool branch_taken_0x261930 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x261934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261930u;
        // 0x261934: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261930) {
            ctx->pc = 0x261958u;
            goto label_261958;
        }
    }
    ctx->pc = 0x261938u;
label_261938:
    // 0x261938: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x261938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26193c:
    // 0x26193c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26193cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_261940:
    // 0x261940: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x261940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_261944:
    // 0x261944: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x261944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_261948:
    // 0x261948: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x261948u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26194c:
    // 0x26194c: 0xc04159e  jal         func_105678
label_261950:
    if (ctx->pc == 0x261950u) {
        ctx->pc = 0x261950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26194Cu;
        // 0x261950: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261954u;
        goto label_261954;
    }
    ctx->pc = 0x26194Cu;
    SET_GPR_U32(ctx, 31, 0x261954u);
    ctx->pc = 0x261950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26194Cu;
    // 0x261950: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x26194Cu, 0x261954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261954u;
label_261954:
    // 0x261954: 0x0  nop
    ctx->pc = 0x261954u;
    // NOP
label_261958:
    // 0x261958: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x261958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26195c:
    // 0x26195c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x26195cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_261960:
    // 0x261960: 0x12a00011  beqz        $s5, . + 4 + (0x11 << 2)
label_261964:
    if (ctx->pc == 0x261964u) {
        ctx->pc = 0x261964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261960u;
        // 0x261964: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261968u;
        goto label_261968;
    }
    ctx->pc = 0x261960u;
    {
        const bool branch_taken_0x261960 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x261964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261960u;
        // 0x261964: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261960) {
            ctx->pc = 0x2619A8u;
            goto label_2619a8;
        }
    }
    ctx->pc = 0x261968u;
label_261968:
    // 0x261968: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x261968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26196c:
    // 0x26196c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26196cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_261970:
    // 0x261970: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x261970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_261974:
    // 0x261974: 0x40f809  jalr        $v0
label_261978:
    if (ctx->pc == 0x261978u) {
        ctx->pc = 0x261978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261974u;
        // 0x261978: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26197Cu;
        goto label_26197c;
    }
    ctx->pc = 0x261974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26197Cu);
        ctx->pc = 0x261978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261974u;
        // 0x261978: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261974u, 0x26197Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26197Cu;
label_26197c:
    // 0x26197c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x26197cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_261980:
    // 0x261980: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x261980u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_261984:
    // 0x261984: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x261984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_261988:
    // 0x261988: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x261988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26198c:
    // 0x26198c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x26198cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_261990:
    // 0x261990: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x261990u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261994:
    // 0x261994: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x261994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_261998:
    // 0x261998: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x261998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26199c:
    // 0x26199c: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x26199cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_2619a0:
    // 0x2619a0: 0xc041664  jal         func_105990
label_2619a4:
    if (ctx->pc == 0x2619A4u) {
        ctx->pc = 0x2619A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619A0u;
        // 0x2619a4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2619A8u;
        goto label_2619a8;
    }
    ctx->pc = 0x2619A0u;
    SET_GPR_U32(ctx, 31, 0x2619A8u);
    ctx->pc = 0x2619A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2619A0u;
    // 0x2619a4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x2619A0u, 0x2619A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2619A8u;
label_2619a8:
    // 0x2619a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2619a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2619ac:
    // 0x2619ac: 0xc089988  jal         func_226620
label_2619b0:
    if (ctx->pc == 0x2619B0u) {
        ctx->pc = 0x2619B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619ACu;
        // 0x2619b0: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2619B4u;
        goto label_2619b4;
    }
    ctx->pc = 0x2619ACu;
    SET_GPR_U32(ctx, 31, 0x2619B4u);
    ctx->pc = 0x2619B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2619ACu;
    // 0x2619b0: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x2619ACu, 0x2619B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2619B4u;
label_2619b4:
    // 0x2619b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2619b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2619b8:
    // 0x2619b8: 0xc089990  jal         func_226640
label_2619bc:
    if (ctx->pc == 0x2619BCu) {
        ctx->pc = 0x2619BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619B8u;
        // 0x2619bc: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2619C0u;
        goto label_2619c0;
    }
    ctx->pc = 0x2619B8u;
    SET_GPR_U32(ctx, 31, 0x2619C0u);
    ctx->pc = 0x2619BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2619B8u;
    // 0x2619bc: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x2619B8u, 0x2619C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2619C0u;
label_2619c0:
    // 0x2619c0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2619c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2619c4:
    // 0x2619c4: 0xc05d53a  jal         func_1754E8
label_2619c8:
    if (ctx->pc == 0x2619C8u) {
        ctx->pc = 0x2619C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619C4u;
        // 0x2619c8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2619CCu;
        goto label_2619cc;
    }
    ctx->pc = 0x2619C4u;
    SET_GPR_U32(ctx, 31, 0x2619CCu);
    ctx->pc = 0x2619C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2619C4u;
    // 0x2619c8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x2619C4u, 0x2619CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2619CCu;
label_2619cc:
    // 0x2619cc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2619ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2619d0:
    // 0x2619d0: 0xc05d4f6  jal         func_1753D8
label_2619d4:
    if (ctx->pc == 0x2619D4u) {
        ctx->pc = 0x2619D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619D0u;
        // 0x2619d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2619D8u;
        goto label_2619d8;
    }
    ctx->pc = 0x2619D0u;
    SET_GPR_U32(ctx, 31, 0x2619D8u);
    ctx->pc = 0x2619D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2619D0u;
    // 0x2619d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x2619D0u, 0x2619D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2619D8u;
label_2619d8:
    // 0x2619d8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2619d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2619dc:
    // 0x2619dc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2619dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2619e0:
    // 0x2619e0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2619e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2619e4:
    // 0x2619e4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2619e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2619e8:
    // 0x2619e8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2619e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2619ec:
    // 0x2619ec: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2619ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2619f0:
    // 0x2619f0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2619f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2619f4:
    // 0x2619f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2619f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2619f8:
    // 0x2619f8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2619f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2619fc:
    // 0x2619fc: 0x3e00008  jr          $ra
label_261a00:
    if (ctx->pc == 0x261A00u) {
        ctx->pc = 0x261A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619FCu;
        // 0x261a00: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261A04u;
        goto label_261a04;
    }
    ctx->pc = 0x2619FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619FCu;
        // 0x261a00: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2619FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261A04u;
label_261a04:
    // 0x261a04: 0x0  nop
    ctx->pc = 0x261a04u;
    // NOP
    ctx->pc = 0x261a08u;
}
