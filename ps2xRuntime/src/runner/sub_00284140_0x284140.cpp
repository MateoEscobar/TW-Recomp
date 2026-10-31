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

// Function: sub_00284140
// Address: 0x284140 - 0x284280
void sub_00284140_0x284140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284140_0x284140");
#endif

    switch (ctx->pc) {
        case 0x284174u: goto label_284174;
        case 0x284184u: goto label_284184;
        case 0x284194u: goto label_284194;
        case 0x2841a8u: goto label_2841a8;
        case 0x2841b8u: goto label_2841b8;
        case 0x2841ccu: goto label_2841cc;
        case 0x2841e0u: goto label_2841e0;
        case 0x2841f0u: goto label_2841f0;
        case 0x284200u: goto label_284200;
        case 0x28420cu: goto label_28420c;
        case 0x284220u: goto label_284220;
        case 0x284228u: goto label_284228;
        case 0x28423cu: goto label_28423c;
        case 0x284244u: goto label_284244;
        case 0x284254u: goto label_284254;
        case 0x28425cu: goto label_28425c;
        default: break;
    }

    ctx->pc = 0x284140u;

    // 0x284140: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x284140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x284144: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x284144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x284148: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x284148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x28414c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28414cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284150: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x284150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x284154: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x284154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x284158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x284158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28415c: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x28415cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x284160: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x284160u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x284164: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x284164u;
    {
        const bool branch_taken_0x284164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284164u;
        // 0x284168: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284164) {
            ctx->pc = 0x284260u;
            goto label_284260;
        }
    }
    ctx->pc = 0x28416Cu;
    // 0x28416c: 0xc08a046  jal         func_228118
    ctx->pc = 0x28416Cu;
    SET_GPR_U32(ctx, 31, 0x284174u);
    ctx->pc = 0x284170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28416Cu;
    // 0x284170: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228118u, 0x28416Cu, 0x284174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284174u;
label_284174:
    // 0x284174: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x284174u;
    {
        const bool branch_taken_0x284174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284174) {
            ctx->pc = 0x28418Cu;
            goto label_28418c;
        }
    }
    ctx->pc = 0x28417Cu;
    // 0x28417c: 0xc0a0cf0  jal         func_2833C0
    ctx->pc = 0x28417Cu;
    SET_GPR_U32(ctx, 31, 0x284184u);
    ctx->pc = 0x284180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28417Cu;
    // 0x284180: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2833C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2833C0u, 0x28417Cu, 0x284184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284184u;
label_284184:
    // 0x284184: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x284184u;
    {
        const bool branch_taken_0x284184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284184u;
        // 0x284188: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284184) {
            ctx->pc = 0x284198u;
            goto label_284198;
        }
    }
    ctx->pc = 0x28418Cu;
label_28418c:
    // 0x28418c: 0xc0a0e8c  jal         func_283A30
    ctx->pc = 0x28418Cu;
    SET_GPR_U32(ctx, 31, 0x284194u);
    ctx->pc = 0x284190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28418Cu;
    // 0x284190: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283A30u, 0x28418Cu, 0x284194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284194u;
label_284194:
    // 0x284194: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x284194u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_284198:
    // 0x284198: 0x16600031  bnez        $s3, . + 4 + (0x31 << 2)
    ctx->pc = 0x284198u;
    {
        const bool branch_taken_0x284198 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x28419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284198u;
        // 0x28419c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284198) {
            ctx->pc = 0x284260u;
            goto label_284260;
        }
    }
    ctx->pc = 0x2841A0u;
    // 0x2841a0: 0xc08a046  jal         func_228118
    ctx->pc = 0x2841A0u;
    SET_GPR_U32(ctx, 31, 0x2841A8u);
    ctx->pc = 0x2841A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2841A0u;
    // 0x2841a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228118u, 0x2841A0u, 0x2841A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2841A8u;
label_2841a8:
    // 0x2841a8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2841A8u;
    {
        const bool branch_taken_0x2841a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2841ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841A8u;
        // 0x2841ac: 0x263200c4  addiu       $s2, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2841a8) {
            ctx->pc = 0x2841F8u;
            goto label_2841f8;
        }
    }
    ctx->pc = 0x2841B0u;
    // 0x2841b0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2841B0u;
    SET_GPR_U32(ctx, 31, 0x2841B8u);
    ctx->pc = 0x2841B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2841B0u;
    // 0x2841b4: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2841B0u, 0x2841B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2841B8u;
label_2841b8:
    // 0x2841b8: 0x922605b4  lbu         $a2, 0x5B4($s1)
    ctx->pc = 0x2841b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1460)));
    // 0x2841bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2841bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2841c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2841c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2841c4: 0xc08b47e  jal         func_22D1F8
    ctx->pc = 0x2841C4u;
    SET_GPR_U32(ctx, 31, 0x2841CCu);
    ctx->pc = 0x2841C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2841C4u;
    // 0x2841c8: 0x6302b  sltu        $a2, $zero, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D1F8u, 0x2841C4u, 0x2841CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2841CCu;
label_2841cc:
    // 0x2841cc: 0x922205b4  lbu         $v0, 0x5B4($s1)
    ctx->pc = 0x2841ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1460)));
    // 0x2841d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2841D0u;
    {
        const bool branch_taken_0x2841d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2841d0) {
            ctx->pc = 0x2841E8u;
            goto label_2841e8;
        }
    }
    ctx->pc = 0x2841D8u;
    // 0x2841d8: 0xc098094  jal         func_260250
    ctx->pc = 0x2841D8u;
    SET_GPR_U32(ctx, 31, 0x2841E0u);
    ctx->pc = 0x2841DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2841D8u;
    // 0x2841dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260250u, 0x2841D8u, 0x2841E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2841E0u;
label_2841e0:
    // 0x2841e0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2841E0u;
    {
        const bool branch_taken_0x2841e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2841E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841E0u;
        // 0x2841e4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2841e0) {
            ctx->pc = 0x284260u;
            goto label_284260;
        }
    }
    ctx->pc = 0x2841E8u;
label_2841e8:
    // 0x2841e8: 0xc09c51c  jal         func_271470
    ctx->pc = 0x2841E8u;
    SET_GPR_U32(ctx, 31, 0x2841F0u);
    ctx->pc = 0x2841ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2841E8u;
    // 0x2841ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271470u, 0x2841E8u, 0x2841F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2841F0u;
label_2841f0:
    // 0x2841f0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2841F0u;
    {
        const bool branch_taken_0x2841f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2841F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841F0u;
        // 0x2841f4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2841f0) {
            ctx->pc = 0x284260u;
            goto label_284260;
        }
    }
    ctx->pc = 0x2841F8u;
label_2841f8:
    // 0x2841f8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2841F8u;
    SET_GPR_U32(ctx, 31, 0x284200u);
    ctx->pc = 0x2841FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2841F8u;
    // 0x2841fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2841F8u, 0x284200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284200u;
label_284200:
    // 0x284200: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x284200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284204: 0xc0e409a  jal         func_390268
    ctx->pc = 0x284204u;
    SET_GPR_U32(ctx, 31, 0x28420Cu);
    ctx->pc = 0x284208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284204u;
    // 0x284208: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x284204u, 0x28420Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28420Cu;
label_28420c:
    // 0x28420c: 0x904605b4  lbu         $a2, 0x5B4($v0)
    ctx->pc = 0x28420cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1460)));
    // 0x284210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x284210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284214: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x284214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284218: 0xc08b47e  jal         func_22D1F8
    ctx->pc = 0x284218u;
    SET_GPR_U32(ctx, 31, 0x284220u);
    ctx->pc = 0x28421Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284218u;
    // 0x28421c: 0x6302b  sltu        $a2, $zero, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D1F8u, 0x284218u, 0x284220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284220u;
label_284220:
    // 0x284220: 0xc0e409a  jal         func_390268
    ctx->pc = 0x284220u;
    SET_GPR_U32(ctx, 31, 0x284228u);
    ctx->pc = 0x284224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284220u;
    // 0x284224: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x284220u, 0x284228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284228u;
label_284228:
    // 0x284228: 0x904305b4  lbu         $v1, 0x5B4($v0)
    ctx->pc = 0x284228u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1460)));
    // 0x28422c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28422Cu;
    {
        const bool branch_taken_0x28422c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28422c) {
            ctx->pc = 0x28424Cu;
            goto label_28424c;
        }
    }
    ctx->pc = 0x284234u;
    // 0x284234: 0xc0e409a  jal         func_390268
    ctx->pc = 0x284234u;
    SET_GPR_U32(ctx, 31, 0x28423Cu);
    ctx->pc = 0x284238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284234u;
    // 0x284238: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x284234u, 0x28423Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28423Cu;
label_28423c:
    // 0x28423c: 0xc098094  jal         func_260250
    ctx->pc = 0x28423Cu;
    SET_GPR_U32(ctx, 31, 0x284244u);
    ctx->pc = 0x284240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28423Cu;
    // 0x284240: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260250u, 0x28423Cu, 0x284244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284244u;
label_284244:
    // 0x284244: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x284244u;
    {
        const bool branch_taken_0x284244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284244u;
        // 0x284248: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284244) {
            ctx->pc = 0x284260u;
            goto label_284260;
        }
    }
    ctx->pc = 0x28424Cu;
label_28424c:
    // 0x28424c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x28424Cu;
    SET_GPR_U32(ctx, 31, 0x284254u);
    ctx->pc = 0x284250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28424Cu;
    // 0x284250: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x28424Cu, 0x284254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284254u;
label_284254:
    // 0x284254: 0xc09c51c  jal         func_271470
    ctx->pc = 0x284254u;
    SET_GPR_U32(ctx, 31, 0x28425Cu);
    ctx->pc = 0x284258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284254u;
    // 0x284258: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271470u, 0x284254u, 0x28425Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28425Cu;
label_28425c:
    // 0x28425c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x28425cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_284260:
    // 0x284260: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x284260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x284264: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x284264u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284268: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x284268u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28426c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x28426cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x284270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284274: 0x3e00008  jr          $ra
    ctx->pc = 0x284274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284274u;
        // 0x284278: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28427Cu;
    // 0x28427c: 0x0  nop
    ctx->pc = 0x28427cu;
    // NOP
    ctx->pc = 0x284280u;
}
