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

// Function: sub_00307878
// Address: 0x307878 - 0x307a10
void sub_00307878_0x307878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307878_0x307878");
#endif

    switch (ctx->pc) {
        case 0x307878u: goto label_307878;
        case 0x30787cu: goto label_30787c;
        case 0x307880u: goto label_307880;
        case 0x307884u: goto label_307884;
        case 0x307888u: goto label_307888;
        case 0x30788cu: goto label_30788c;
        case 0x307890u: goto label_307890;
        case 0x307894u: goto label_307894;
        case 0x307898u: goto label_307898;
        case 0x30789cu: goto label_30789c;
        case 0x3078a0u: goto label_3078a0;
        case 0x3078a4u: goto label_3078a4;
        case 0x3078a8u: goto label_3078a8;
        case 0x3078acu: goto label_3078ac;
        case 0x3078b0u: goto label_3078b0;
        case 0x3078b4u: goto label_3078b4;
        case 0x3078b8u: goto label_3078b8;
        case 0x3078bcu: goto label_3078bc;
        case 0x3078c0u: goto label_3078c0;
        case 0x3078c4u: goto label_3078c4;
        case 0x3078c8u: goto label_3078c8;
        case 0x3078ccu: goto label_3078cc;
        case 0x3078d0u: goto label_3078d0;
        case 0x3078d4u: goto label_3078d4;
        case 0x3078d8u: goto label_3078d8;
        case 0x3078dcu: goto label_3078dc;
        case 0x3078e0u: goto label_3078e0;
        case 0x3078e4u: goto label_3078e4;
        case 0x3078e8u: goto label_3078e8;
        case 0x3078ecu: goto label_3078ec;
        case 0x3078f0u: goto label_3078f0;
        case 0x3078f4u: goto label_3078f4;
        case 0x3078f8u: goto label_3078f8;
        case 0x3078fcu: goto label_3078fc;
        case 0x307900u: goto label_307900;
        case 0x307904u: goto label_307904;
        case 0x307908u: goto label_307908;
        case 0x30790cu: goto label_30790c;
        case 0x307910u: goto label_307910;
        case 0x307914u: goto label_307914;
        case 0x307918u: goto label_307918;
        case 0x30791cu: goto label_30791c;
        case 0x307920u: goto label_307920;
        case 0x307924u: goto label_307924;
        case 0x307928u: goto label_307928;
        case 0x30792cu: goto label_30792c;
        case 0x307930u: goto label_307930;
        case 0x307934u: goto label_307934;
        case 0x307938u: goto label_307938;
        case 0x30793cu: goto label_30793c;
        case 0x307940u: goto label_307940;
        case 0x307944u: goto label_307944;
        case 0x307948u: goto label_307948;
        case 0x30794cu: goto label_30794c;
        case 0x307950u: goto label_307950;
        case 0x307954u: goto label_307954;
        case 0x307958u: goto label_307958;
        case 0x30795cu: goto label_30795c;
        case 0x307960u: goto label_307960;
        case 0x307964u: goto label_307964;
        case 0x307968u: goto label_307968;
        case 0x30796cu: goto label_30796c;
        case 0x307970u: goto label_307970;
        case 0x307974u: goto label_307974;
        case 0x307978u: goto label_307978;
        case 0x30797cu: goto label_30797c;
        case 0x307980u: goto label_307980;
        case 0x307984u: goto label_307984;
        case 0x307988u: goto label_307988;
        case 0x30798cu: goto label_30798c;
        case 0x307990u: goto label_307990;
        case 0x307994u: goto label_307994;
        case 0x307998u: goto label_307998;
        case 0x30799cu: goto label_30799c;
        case 0x3079a0u: goto label_3079a0;
        case 0x3079a4u: goto label_3079a4;
        case 0x3079a8u: goto label_3079a8;
        case 0x3079acu: goto label_3079ac;
        case 0x3079b0u: goto label_3079b0;
        case 0x3079b4u: goto label_3079b4;
        case 0x3079b8u: goto label_3079b8;
        case 0x3079bcu: goto label_3079bc;
        case 0x3079c0u: goto label_3079c0;
        case 0x3079c4u: goto label_3079c4;
        case 0x3079c8u: goto label_3079c8;
        case 0x3079ccu: goto label_3079cc;
        case 0x3079d0u: goto label_3079d0;
        case 0x3079d4u: goto label_3079d4;
        case 0x3079d8u: goto label_3079d8;
        case 0x3079dcu: goto label_3079dc;
        case 0x3079e0u: goto label_3079e0;
        case 0x3079e4u: goto label_3079e4;
        case 0x3079e8u: goto label_3079e8;
        case 0x3079ecu: goto label_3079ec;
        case 0x3079f0u: goto label_3079f0;
        case 0x3079f4u: goto label_3079f4;
        case 0x3079f8u: goto label_3079f8;
        case 0x3079fcu: goto label_3079fc;
        case 0x307a00u: goto label_307a00;
        case 0x307a04u: goto label_307a04;
        case 0x307a08u: goto label_307a08;
        case 0x307a0cu: goto label_307a0c;
        default: break;
    }

    ctx->pc = 0x307878u;

label_307878:
    // 0x307878: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x307878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_30787c:
    // 0x30787c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x30787cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_307880:
    // 0x307880: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x307880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_307884:
    // 0x307884: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x307884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_307888:
    // 0x307888: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x307888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_30788c:
    // 0x30788c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30788cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_307890:
    // 0x307890: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x307890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_307894:
    // 0x307894: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x307894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_307898:
    // 0x307898: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x307898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_30789c:
    // 0x30789c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30789cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3078a0:
    // 0x3078a0: 0xc05959e  jal         func_165678
label_3078a4:
    if (ctx->pc == 0x3078A4u) {
        ctx->pc = 0x3078A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3078A0u;
        // 0x3078a4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3078A8u;
        goto label_3078a8;
    }
    ctx->pc = 0x3078A0u;
    SET_GPR_U32(ctx, 31, 0x3078A8u);
    ctx->pc = 0x3078A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3078A0u;
    // 0x3078a4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x3078A0u, 0x3078A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3078A8u;
label_3078a8:
    // 0x3078a8: 0x50400051  beql        $v0, $zero, . + 4 + (0x51 << 2)
label_3078ac:
    if (ctx->pc == 0x3078ACu) {
        ctx->pc = 0x3078ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3078A8u;
        // 0x3078ac: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3078B0u;
        goto label_3078b0;
    }
    ctx->pc = 0x3078A8u;
    {
        const bool branch_taken_0x3078a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3078a8) {
            ctx->pc = 0x3078ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3078A8u;
            // 0x3078ac: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3079F0u;
            goto label_3079f0;
        }
    }
    ctx->pc = 0x3078B0u;
label_3078b0:
    // 0x3078b0: 0xc087502  jal         func_21D408
label_3078b4:
    if (ctx->pc == 0x3078B4u) {
        ctx->pc = 0x3078B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3078B0u;
        // 0x3078b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3078B8u;
        goto label_3078b8;
    }
    ctx->pc = 0x3078B0u;
    SET_GPR_U32(ctx, 31, 0x3078B8u);
    ctx->pc = 0x3078B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3078B0u;
    // 0x3078b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3078B0u, 0x3078B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3078B8u;
label_3078b8:
    // 0x3078b8: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x3078b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3078bc:
    // 0x3078bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3078bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3078c0:
    // 0x3078c0: 0xc0a44ac  jal         func_2912B0
label_3078c4:
    if (ctx->pc == 0x3078C4u) {
        ctx->pc = 0x3078C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3078C0u;
        // 0x3078c4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3078C8u;
        goto label_3078c8;
    }
    ctx->pc = 0x3078C0u;
    SET_GPR_U32(ctx, 31, 0x3078C8u);
    ctx->pc = 0x3078C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3078C0u;
    // 0x3078c4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2912B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2912B0u, 0x3078C0u, 0x3078C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3078C8u;
label_3078c8:
    // 0x3078c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3078c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3078cc:
    // 0x3078cc: 0x12600047  beqz        $s3, . + 4 + (0x47 << 2)
label_3078d0:
    if (ctx->pc == 0x3078D0u) {
        ctx->pc = 0x3078D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3078CCu;
        // 0x3078d0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3078D4u;
        goto label_3078d4;
    }
    ctx->pc = 0x3078CCu;
    {
        const bool branch_taken_0x3078cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3078D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3078CCu;
        // 0x3078d0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3078cc) {
            ctx->pc = 0x3079ECu;
            goto label_3079ec;
        }
    }
    ctx->pc = 0x3078D4u;
label_3078d4:
    // 0x3078d4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3078d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3078d8:
    // 0x3078d8: 0x24550048  addiu       $s5, $v0, 0x48
    ctx->pc = 0x3078d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_3078dc:
    // 0x3078dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3078dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3078e0:
    // 0x3078e0: 0xc137826  jal         func_4DE098
label_3078e4:
    if (ctx->pc == 0x3078E4u) {
        ctx->pc = 0x3078E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3078E0u;
        // 0x3078e4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3078E8u;
        goto label_3078e8;
    }
    ctx->pc = 0x3078E0u;
    SET_GPR_U32(ctx, 31, 0x3078E8u);
    ctx->pc = 0x3078E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3078E0u;
    // 0x3078e4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x3078E0u, 0x3078E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3078E8u;
label_3078e8:
    // 0x3078e8: 0xc0e409a  jal         func_390268
label_3078ec:
    if (ctx->pc == 0x3078ECu) {
        ctx->pc = 0x3078ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3078E8u;
        // 0x3078ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3078F0u;
        goto label_3078f0;
    }
    ctx->pc = 0x3078E8u;
    SET_GPR_U32(ctx, 31, 0x3078F0u);
    ctx->pc = 0x3078ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3078E8u;
    // 0x3078ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3078E8u, 0x3078F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3078F0u;
label_3078f0:
    // 0x3078f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3078f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3078f4:
    // 0x3078f4: 0x12200039  beqz        $s1, . + 4 + (0x39 << 2)
label_3078f8:
    if (ctx->pc == 0x3078F8u) {
        ctx->pc = 0x3078F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3078F4u;
        // 0x3078f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3078FCu;
        goto label_3078fc;
    }
    ctx->pc = 0x3078F4u;
    {
        const bool branch_taken_0x3078f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3078F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3078F4u;
        // 0x3078f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3078f4) {
            ctx->pc = 0x3079DCu;
            goto label_3079dc;
        }
    }
    ctx->pc = 0x3078FCu;
label_3078fc:
    // 0x3078fc: 0xc089f98  jal         func_227E60
label_307900:
    if (ctx->pc == 0x307900u) {
        ctx->pc = 0x307900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3078FCu;
        // 0x307900: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307904u;
        goto label_307904;
    }
    ctx->pc = 0x3078FCu;
    SET_GPR_U32(ctx, 31, 0x307904u);
    ctx->pc = 0x307900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3078FCu;
    // 0x307900: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x3078FCu, 0x307904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307904u;
label_307904:
    // 0x307904: 0x50520036  beql        $v0, $s2, . + 4 + (0x36 << 2)
label_307908:
    if (ctx->pc == 0x307908u) {
        ctx->pc = 0x307908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307904u;
        // 0x307908: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30790Cu;
        goto label_30790c;
    }
    ctx->pc = 0x307904u;
    {
        const bool branch_taken_0x307904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x307904) {
            ctx->pc = 0x307908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307904u;
            // 0x307908: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3079E0u;
            goto label_3079e0;
        }
    }
    ctx->pc = 0x30790Cu;
label_30790c:
    // 0x30790c: 0xc087502  jal         func_21D408
label_307910:
    if (ctx->pc == 0x307910u) {
        ctx->pc = 0x307910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30790Cu;
        // 0x307910: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307914u;
        goto label_307914;
    }
    ctx->pc = 0x30790Cu;
    SET_GPR_U32(ctx, 31, 0x307914u);
    ctx->pc = 0x307910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30790Cu;
    // 0x307910: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30790Cu, 0x307914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307914u;
label_307914:
    // 0x307914: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x307914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_307918:
    // 0x307918: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x307918u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_30791c:
    // 0x30791c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x30791cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_307920:
    // 0x307920: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x307920u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_307924:
    // 0x307924: 0x5052002e  beql        $v0, $s2, . + 4 + (0x2E << 2)
label_307928:
    if (ctx->pc == 0x307928u) {
        ctx->pc = 0x307928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307924u;
        // 0x307928: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30792Cu;
        goto label_30792c;
    }
    ctx->pc = 0x307924u;
    {
        const bool branch_taken_0x307924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x307924) {
            ctx->pc = 0x307928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307924u;
            // 0x307928: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3079E0u;
            goto label_3079e0;
        }
    }
    ctx->pc = 0x30792Cu;
label_30792c:
    // 0x30792c: 0xc0a3630  jal         func_28D8C0
label_307930:
    if (ctx->pc == 0x307930u) {
        ctx->pc = 0x307930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30792Cu;
        // 0x307930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307934u;
        goto label_307934;
    }
    ctx->pc = 0x30792Cu;
    SET_GPR_U32(ctx, 31, 0x307934u);
    ctx->pc = 0x307930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30792Cu;
    // 0x307930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x30792Cu, 0x307934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307934u;
label_307934:
    // 0x307934: 0xc0a3628  jal         func_28D8A0
label_307938:
    if (ctx->pc == 0x307938u) {
        ctx->pc = 0x307938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307934u;
        // 0x307938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30793Cu;
        goto label_30793c;
    }
    ctx->pc = 0x307934u;
    SET_GPR_U32(ctx, 31, 0x30793Cu);
    ctx->pc = 0x307938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307934u;
    // 0x307938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x307934u, 0x30793Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30793Cu;
label_30793c:
    // 0x30793c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x30793cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_307940:
    // 0x307940: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x307940u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_307944:
    // 0x307944: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x307944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_307948:
    // 0x307948: 0x40f809  jalr        $v0
label_30794c:
    if (ctx->pc == 0x30794Cu) {
        ctx->pc = 0x30794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307948u;
        // 0x30794c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307950u;
        goto label_307950;
    }
    ctx->pc = 0x307948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x307950u);
        ctx->pc = 0x30794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307948u;
        // 0x30794c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307948u, 0x307950u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x307950u;
label_307950:
    // 0x307950: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x307950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_307954:
    // 0x307954: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x307954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_307958:
    // 0x307958: 0xc0ab742  jal         func_2ADD08
label_30795c:
    if (ctx->pc == 0x30795Cu) {
        ctx->pc = 0x30795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307958u;
        // 0x30795c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x307960u;
        goto label_307960;
    }
    ctx->pc = 0x307958u;
    SET_GPR_U32(ctx, 31, 0x307960u);
    ctx->pc = 0x30795Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307958u;
    // 0x30795c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADD08u, 0x307958u, 0x307960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307960u;
label_307960:
    // 0x307960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_307964:
    // 0x307964: 0xc0a354e  jal         func_28D538
label_307968:
    if (ctx->pc == 0x307968u) {
        ctx->pc = 0x307968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307964u;
        // 0x307968: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30796Cu;
        goto label_30796c;
    }
    ctx->pc = 0x307964u;
    SET_GPR_U32(ctx, 31, 0x30796Cu);
    ctx->pc = 0x307968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307964u;
    // 0x307968: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D538u, 0x307964u, 0x30796Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30796Cu;
label_30796c:
    // 0x30796c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30796cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_307970:
    // 0x307970: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x307970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_307974:
    // 0x307974: 0xc0a33f8  jal         func_28CFE0
label_307978:
    if (ctx->pc == 0x307978u) {
        ctx->pc = 0x307978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307974u;
        // 0x307978: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30797Cu;
        goto label_30797c;
    }
    ctx->pc = 0x307974u;
    SET_GPR_U32(ctx, 31, 0x30797Cu);
    ctx->pc = 0x307978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307974u;
    // 0x307978: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x307974u, 0x30797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30797Cu;
label_30797c:
    // 0x30797c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30797cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_307980:
    // 0x307980: 0xc0a3658  jal         func_28D960
label_307984:
    if (ctx->pc == 0x307984u) {
        ctx->pc = 0x307984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307980u;
        // 0x307984: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307988u;
        goto label_307988;
    }
    ctx->pc = 0x307980u;
    SET_GPR_U32(ctx, 31, 0x307988u);
    ctx->pc = 0x307984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307980u;
    // 0x307984: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x307980u, 0x307988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307988u;
label_307988:
    // 0x307988: 0x8203002d  lb          $v1, 0x2D($s0)
    ctx->pc = 0x307988u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
label_30798c:
    // 0x30798c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x30798cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_307990:
    // 0x307990: 0x54600013  bnel        $v1, $zero, . + 4 + (0x13 << 2)
label_307994:
    if (ctx->pc == 0x307994u) {
        ctx->pc = 0x307994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307990u;
        // 0x307994: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307998u;
        goto label_307998;
    }
    ctx->pc = 0x307990u;
    {
        const bool branch_taken_0x307990 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x307990) {
            ctx->pc = 0x307994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307990u;
            // 0x307994: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3079E0u;
            goto label_3079e0;
        }
    }
    ctx->pc = 0x307998u;
label_307998:
    // 0x307998: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x307998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30799c:
    // 0x30799c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x30799cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3079a0:
    // 0x3079a0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3079a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3079a4:
    // 0x3079a4: 0x40f809  jalr        $v0
label_3079a8:
    if (ctx->pc == 0x3079A8u) {
        ctx->pc = 0x3079A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3079A4u;
        // 0x3079a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3079ACu;
        goto label_3079ac;
    }
    ctx->pc = 0x3079A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3079ACu);
        ctx->pc = 0x3079A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3079A4u;
        // 0x3079a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3079A4u, 0x3079ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3079ACu;
label_3079ac:
    // 0x3079ac: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3079acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3079b0:
    // 0x3079b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3079b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3079b4:
    // 0x3079b4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3079b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3079b8:
    // 0x3079b8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3079b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3079bc:
    // 0x3079bc: 0x40f809  jalr        $v0
label_3079c0:
    if (ctx->pc == 0x3079C0u) {
        ctx->pc = 0x3079C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3079BCu;
        // 0x3079c0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3079C4u;
        goto label_3079c4;
    }
    ctx->pc = 0x3079BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3079C4u);
        ctx->pc = 0x3079C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3079BCu;
        // 0x3079c0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3079BCu, 0x3079C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3079C4u;
label_3079c4:
    // 0x3079c4: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x3079c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_3079c8:
    // 0x3079c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3079c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3079cc:
    // 0x3079cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3079ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3079d0:
    // 0x3079d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3079d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3079d4:
    // 0x3079d4: 0xc0add6e  jal         func_2B75B8
label_3079d8:
    if (ctx->pc == 0x3079D8u) {
        ctx->pc = 0x3079D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3079D4u;
        // 0x3079d8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3079DCu;
        goto label_3079dc;
    }
    ctx->pc = 0x3079D4u;
    SET_GPR_U32(ctx, 31, 0x3079DCu);
    ctx->pc = 0x3079D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3079D4u;
    // 0x3079d8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B75B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B75B8u, 0x3079D4u, 0x3079DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3079DCu;
label_3079dc:
    // 0x3079dc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3079dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3079e0:
    // 0x3079e0: 0x2e820010  sltiu       $v0, $s4, 0x10
    ctx->pc = 0x3079e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_3079e4:
    // 0x3079e4: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
label_3079e8:
    if (ctx->pc == 0x3079E8u) {
        ctx->pc = 0x3079E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3079E4u;
        // 0x3079e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3079ECu;
        goto label_3079ec;
    }
    ctx->pc = 0x3079E4u;
    {
        const bool branch_taken_0x3079e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3079E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3079E4u;
        // 0x3079e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3079e4) {
            ctx->pc = 0x3078E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3078e0;
        }
    }
    ctx->pc = 0x3079ECu;
label_3079ec:
    // 0x3079ec: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3079ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3079f0:
    // 0x3079f0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3079f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3079f4:
    // 0x3079f4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3079f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3079f8:
    // 0x3079f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3079f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3079fc:
    // 0x3079fc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3079fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_307a00:
    // 0x307a00: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x307a00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_307a04:
    // 0x307a04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x307a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_307a08:
    // 0x307a08: 0x3e00008  jr          $ra
label_307a0c:
    if (ctx->pc == 0x307A0Cu) {
        ctx->pc = 0x307A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307A08u;
        // 0x307a0c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307A10u;
        goto label_fallthrough_0x307a08;
    }
    ctx->pc = 0x307A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307A08u;
        // 0x307a0c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x307a08:
    ctx->pc = 0x307A10u;
}
