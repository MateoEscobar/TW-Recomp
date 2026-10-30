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

// Function: sub_00190588
// Address: 0x190588 - 0x1906e8
void sub_00190588_0x190588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190588_0x190588");
#endif

    switch (ctx->pc) {
        case 0x190588u: goto label_190588;
        case 0x19058cu: goto label_19058c;
        case 0x190590u: goto label_190590;
        case 0x190594u: goto label_190594;
        case 0x190598u: goto label_190598;
        case 0x19059cu: goto label_19059c;
        case 0x1905a0u: goto label_1905a0;
        case 0x1905a4u: goto label_1905a4;
        case 0x1905a8u: goto label_1905a8;
        case 0x1905acu: goto label_1905ac;
        case 0x1905b0u: goto label_1905b0;
        case 0x1905b4u: goto label_1905b4;
        case 0x1905b8u: goto label_1905b8;
        case 0x1905bcu: goto label_1905bc;
        case 0x1905c0u: goto label_1905c0;
        case 0x1905c4u: goto label_1905c4;
        case 0x1905c8u: goto label_1905c8;
        case 0x1905ccu: goto label_1905cc;
        case 0x1905d0u: goto label_1905d0;
        case 0x1905d4u: goto label_1905d4;
        case 0x1905d8u: goto label_1905d8;
        case 0x1905dcu: goto label_1905dc;
        case 0x1905e0u: goto label_1905e0;
        case 0x1905e4u: goto label_1905e4;
        case 0x1905e8u: goto label_1905e8;
        case 0x1905ecu: goto label_1905ec;
        case 0x1905f0u: goto label_1905f0;
        case 0x1905f4u: goto label_1905f4;
        case 0x1905f8u: goto label_1905f8;
        case 0x1905fcu: goto label_1905fc;
        case 0x190600u: goto label_190600;
        case 0x190604u: goto label_190604;
        case 0x190608u: goto label_190608;
        case 0x19060cu: goto label_19060c;
        case 0x190610u: goto label_190610;
        case 0x190614u: goto label_190614;
        case 0x190618u: goto label_190618;
        case 0x19061cu: goto label_19061c;
        case 0x190620u: goto label_190620;
        case 0x190624u: goto label_190624;
        case 0x190628u: goto label_190628;
        case 0x19062cu: goto label_19062c;
        case 0x190630u: goto label_190630;
        case 0x190634u: goto label_190634;
        case 0x190638u: goto label_190638;
        case 0x19063cu: goto label_19063c;
        case 0x190640u: goto label_190640;
        case 0x190644u: goto label_190644;
        case 0x190648u: goto label_190648;
        case 0x19064cu: goto label_19064c;
        case 0x190650u: goto label_190650;
        case 0x190654u: goto label_190654;
        case 0x190658u: goto label_190658;
        case 0x19065cu: goto label_19065c;
        case 0x190660u: goto label_190660;
        case 0x190664u: goto label_190664;
        case 0x190668u: goto label_190668;
        case 0x19066cu: goto label_19066c;
        case 0x190670u: goto label_190670;
        case 0x190674u: goto label_190674;
        case 0x190678u: goto label_190678;
        case 0x19067cu: goto label_19067c;
        case 0x190680u: goto label_190680;
        case 0x190684u: goto label_190684;
        case 0x190688u: goto label_190688;
        case 0x19068cu: goto label_19068c;
        case 0x190690u: goto label_190690;
        case 0x190694u: goto label_190694;
        case 0x190698u: goto label_190698;
        case 0x19069cu: goto label_19069c;
        case 0x1906a0u: goto label_1906a0;
        case 0x1906a4u: goto label_1906a4;
        case 0x1906a8u: goto label_1906a8;
        case 0x1906acu: goto label_1906ac;
        case 0x1906b0u: goto label_1906b0;
        case 0x1906b4u: goto label_1906b4;
        case 0x1906b8u: goto label_1906b8;
        case 0x1906bcu: goto label_1906bc;
        case 0x1906c0u: goto label_1906c0;
        case 0x1906c4u: goto label_1906c4;
        case 0x1906c8u: goto label_1906c8;
        case 0x1906ccu: goto label_1906cc;
        case 0x1906d0u: goto label_1906d0;
        case 0x1906d4u: goto label_1906d4;
        case 0x1906d8u: goto label_1906d8;
        case 0x1906dcu: goto label_1906dc;
        case 0x1906e0u: goto label_1906e0;
        case 0x1906e4u: goto label_1906e4;
        default: break;
    }

    ctx->pc = 0x190588u;

label_190588:
    // 0x190588: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x190588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_19058c:
    // 0x19058c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19058cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_190590:
    // 0x190590: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x190590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_190594:
    // 0x190594: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x190594u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_190598:
    // 0x190598: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x190598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_19059c:
    // 0x19059c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x19059cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1905a0:
    // 0x1905a0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1905a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_1905a4:
    // 0x1905a4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1905a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_1905a8:
    // 0x1905a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1905a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1905ac:
    // 0x1905ac: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x1905acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1905b0:
    // 0x1905b0: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
label_1905b4:
    if (ctx->pc == 0x1905B4u) {
        ctx->pc = 0x1905B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1905B0u;
        // 0x1905b4: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1905B8u;
        goto label_1905b8;
    }
    ctx->pc = 0x1905B0u;
    {
        const bool branch_taken_0x1905b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1905B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1905B0u;
        // 0x1905b4: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1905b0) {
            ctx->pc = 0x19061Cu;
            goto label_19061c;
        }
    }
    ctx->pc = 0x1905B8u;
label_1905b8:
    // 0x1905b8: 0x848301be  lh          $v1, 0x1BE($a0)
    ctx->pc = 0x1905b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 446)));
label_1905bc:
    // 0x1905bc: 0x244530a0  addiu       $a1, $v0, 0x30A0
    ctx->pc = 0x1905bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12448));
label_1905c0:
    // 0x1905c0: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x1905c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_1905c4:
    // 0x1905c4: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_1905c8:
    if (ctx->pc == 0x1905C8u) {
        ctx->pc = 0x1905C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1905C4u;
        // 0x1905c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1905CCu;
        goto label_1905cc;
    }
    ctx->pc = 0x1905C4u;
    {
        const bool branch_taken_0x1905c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1905C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1905C4u;
        // 0x1905c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1905c4) {
            ctx->pc = 0x1905FCu;
            goto label_1905fc;
        }
    }
    ctx->pc = 0x1905CCu;
label_1905cc:
    // 0x1905cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1905ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1905d0:
    // 0x1905d0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1905d4:
    if (ctx->pc == 0x1905D4u) {
        ctx->pc = 0x1905D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1905D0u;
        // 0x1905d4: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1905D8u;
        goto label_1905d8;
    }
    ctx->pc = 0x1905D0u;
    {
        const bool branch_taken_0x1905d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1905D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1905D0u;
        // 0x1905d4: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1905d0) {
            ctx->pc = 0x1905E8u;
            goto label_1905e8;
        }
    }
    ctx->pc = 0x1905D8u;
label_1905d8:
    // 0x1905d8: 0x84a30004  lh          $v1, 0x4($a1)
    ctx->pc = 0x1905d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_1905dc:
    // 0x1905dc: 0x848201c0  lh          $v0, 0x1C0($a0)
    ctx->pc = 0x1905dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 448)));
label_1905e0:
    // 0x1905e0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_1905e4:
    if (ctx->pc == 0x1905E4u) {
        ctx->pc = 0x1905E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1905E0u;
        // 0x1905e4: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1905E8u;
        goto label_1905e8;
    }
    ctx->pc = 0x1905E0u;
    {
        const bool branch_taken_0x1905e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1905E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1905E0u;
        // 0x1905e4: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1905e0) {
            ctx->pc = 0x1905F8u;
            goto label_1905f8;
        }
    }
    ctx->pc = 0x1905E8u;
label_1905e8:
    // 0x1905e8: 0x8c8301c0  lw          $v1, 0x1C0($a0)
    ctx->pc = 0x1905e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
label_1905ec:
    // 0x1905ec: 0x24424770  addiu       $v0, $v0, 0x4770
    ctx->pc = 0x1905ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18288));
label_1905f0:
    // 0x1905f0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1905f4:
    if (ctx->pc == 0x1905F4u) {
        ctx->pc = 0x1905F8u;
        goto label_1905f8;
    }
    ctx->pc = 0x1905F0u;
    {
        const bool branch_taken_0x1905f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1905f0) {
            ctx->pc = 0x1905FCu;
            goto label_1905fc;
        }
    }
    ctx->pc = 0x1905F8u;
label_1905f8:
    // 0x1905f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1905f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1905fc:
    // 0x1905fc: 0x10c00031  beqz        $a2, . + 4 + (0x31 << 2)
label_190600:
    if (ctx->pc == 0x190600u) {
        ctx->pc = 0x190600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1905FCu;
        // 0x190600: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190604u;
        goto label_190604;
    }
    ctx->pc = 0x1905FCu;
    {
        const bool branch_taken_0x1905fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x190600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1905FCu;
        // 0x190600: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1905fc) {
            ctx->pc = 0x1906C4u;
            goto label_1906c4;
        }
    }
    ctx->pc = 0x190604u;
label_190604:
    // 0x190604: 0xc089bfc  jal         func_226FF0
label_190608:
    if (ctx->pc == 0x190608u) {
        ctx->pc = 0x190608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190604u;
        // 0x190608: 0x8e64000c  lw          $a0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19060Cu;
        goto label_19060c;
    }
    ctx->pc = 0x190604u;
    SET_GPR_U32(ctx, 31, 0x19060Cu);
    ctx->pc = 0x190608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190604u;
    // 0x190608: 0x8e64000c  lw          $a0, 0xC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x190604u, 0x19060Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19060Cu;
label_19060c:
    // 0x19060c: 0xc0e57ce  jal         func_395F38
label_190610:
    if (ctx->pc == 0x190610u) {
        ctx->pc = 0x190610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19060Cu;
        // 0x190610: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190614u;
        goto label_190614;
    }
    ctx->pc = 0x19060Cu;
    SET_GPR_U32(ctx, 31, 0x190614u);
    ctx->pc = 0x190610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19060Cu;
    // 0x190610: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x19060Cu, 0x190614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190614u;
label_190614:
    // 0x190614: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_190618:
    if (ctx->pc == 0x190618u) {
        ctx->pc = 0x19061Cu;
        goto label_19061c;
    }
    ctx->pc = 0x190614u;
    {
        const bool branch_taken_0x190614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190614) {
            ctx->pc = 0x190624u;
            goto label_190624;
        }
    }
    ctx->pc = 0x19061Cu;
label_19061c:
    // 0x19061c: 0x10000029  b           . + 4 + (0x29 << 2)
label_190620:
    if (ctx->pc == 0x190620u) {
        ctx->pc = 0x190620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19061Cu;
        // 0x190620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190624u;
        goto label_190624;
    }
    ctx->pc = 0x19061Cu;
    {
        const bool branch_taken_0x19061c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19061Cu;
        // 0x190620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19061c) {
            ctx->pc = 0x1906C4u;
            goto label_1906c4;
        }
    }
    ctx->pc = 0x190624u;
label_190624:
    // 0x190624: 0xc047ab8  jal         func_11EAE0
label_190628:
    if (ctx->pc == 0x190628u) {
        ctx->pc = 0x190628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190624u;
        // 0x190628: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19062Cu;
        goto label_19062c;
    }
    ctx->pc = 0x190624u;
    SET_GPR_U32(ctx, 31, 0x19062Cu);
    ctx->pc = 0x190628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190624u;
    // 0x190628: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x190624u, 0x19062Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19062Cu;
label_19062c:
    // 0x19062c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19062cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_190630:
    // 0x190630: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
label_190634:
    if (ctx->pc == 0x190634u) {
        ctx->pc = 0x190634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190630u;
        // 0x190634: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190638u;
        goto label_190638;
    }
    ctx->pc = 0x190630u;
    {
        const bool branch_taken_0x190630 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x190634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190630u;
        // 0x190634: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190630) {
            ctx->pc = 0x1906C0u;
            goto label_1906c0;
        }
    }
    ctx->pc = 0x190638u;
label_190638:
    // 0x190638: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x190638u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_19063c:
    // 0x19063c: 0x2454ad28  addiu       $s4, $v0, -0x52D8
    ctx->pc = 0x19063cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946088));
label_190640:
    // 0x190640: 0x8ea6cdb4  lw          $a2, -0x324C($s5)
    ctx->pc = 0x190640u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954420)));
label_190644:
    // 0x190644: 0x0  nop
    ctx->pc = 0x190644u;
    // NOP
label_190648:
    // 0x190648: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x190648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19064c:
    // 0x19064c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x19064cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_190650:
    // 0x190650: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x190650u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_190654:
    // 0x190654: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x190654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_190658:
    // 0x190658: 0x40f809  jalr        $v0
label_19065c:
    if (ctx->pc == 0x19065Cu) {
        ctx->pc = 0x19065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190658u;
        // 0x19065c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190660u;
        goto label_190660;
    }
    ctx->pc = 0x190658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x190660u);
        ctx->pc = 0x19065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190658u;
        // 0x19065c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190658u, 0x190660u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x190660u;
label_190660:
    // 0x190660: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x190660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_190664:
    // 0x190664: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x190664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_190668:
    // 0x190668: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x190668u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_19066c:
    // 0x19066c: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x19066cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_190670:
    // 0x190670: 0x40f809  jalr        $v0
label_190674:
    if (ctx->pc == 0x190674u) {
        ctx->pc = 0x190674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190670u;
        // 0x190674: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190678u;
        goto label_190678;
    }
    ctx->pc = 0x190670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x190678u);
        ctx->pc = 0x190674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190670u;
        // 0x190674: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190670u, 0x190678u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x190678u;
label_190678:
    // 0x190678: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_19067c:
    if (ctx->pc == 0x19067Cu) {
        ctx->pc = 0x19067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190678u;
        // 0x19067c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190680u;
        goto label_190680;
    }
    ctx->pc = 0x190678u;
    {
        const bool branch_taken_0x190678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190678) {
            ctx->pc = 0x19067Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190678u;
            // 0x19067c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1906B4u;
            goto label_1906b4;
        }
    }
    ctx->pc = 0x190680u;
label_190680:
    // 0x190680: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x190680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_190684:
    // 0x190684: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x190684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_190688:
    // 0x190688: 0x40f809  jalr        $v0
label_19068c:
    if (ctx->pc == 0x19068Cu) {
        ctx->pc = 0x19068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190688u;
        // 0x19068c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190690u;
        goto label_190690;
    }
    ctx->pc = 0x190688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x190690u);
        ctx->pc = 0x19068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190688u;
        // 0x19068c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190688u, 0x190690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x190690u;
label_190690:
    // 0x190690: 0xc11a840  jal         func_46A100
label_190694:
    if (ctx->pc == 0x190694u) {
        ctx->pc = 0x190694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190690u;
        // 0x190694: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190698u;
        goto label_190698;
    }
    ctx->pc = 0x190690u;
    SET_GPR_U32(ctx, 31, 0x190698u);
    ctx->pc = 0x190694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190690u;
    // 0x190694: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A100u, 0x190690u, 0x190698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190698u;
label_190698:
    // 0x190698: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x190698u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_19069c:
    // 0x19069c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19069cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1906a0:
    // 0x1906a0: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1906a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1906a4:
    // 0x1906a4: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1906a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1906a8:
    // 0x1906a8: 0x40f809  jalr        $v0
label_1906ac:
    if (ctx->pc == 0x1906ACu) {
        ctx->pc = 0x1906ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1906A8u;
        // 0x1906ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1906B0u;
        goto label_1906b0;
    }
    ctx->pc = 0x1906A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1906B0u);
        ctx->pc = 0x1906ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1906A8u;
        // 0x1906ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1906A8u, 0x1906B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1906B0u;
label_1906b0:
    // 0x1906b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1906b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1906b4:
    // 0x1906b4: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x1906b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_1906b8:
    // 0x1906b8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_1906bc:
    if (ctx->pc == 0x1906BCu) {
        ctx->pc = 0x1906BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1906B8u;
        // 0x1906bc: 0x8ea6cdb4  lw          $a2, -0x324C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1906C0u;
        goto label_1906c0;
    }
    ctx->pc = 0x1906B8u;
    {
        const bool branch_taken_0x1906b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1906BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1906B8u;
        // 0x1906bc: 0x8ea6cdb4  lw          $a2, -0x324C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1906b8) {
            ctx->pc = 0x190648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190648;
        }
    }
    ctx->pc = 0x1906C0u;
label_1906c0:
    // 0x1906c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1906c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1906c4:
    // 0x1906c4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1906c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1906c8:
    // 0x1906c8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1906c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1906cc:
    // 0x1906cc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1906ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1906d0:
    // 0x1906d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1906d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1906d4:
    // 0x1906d4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1906d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1906d8:
    // 0x1906d8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1906d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1906dc:
    // 0x1906dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1906dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1906e0:
    // 0x1906e0: 0x3e00008  jr          $ra
label_1906e4:
    if (ctx->pc == 0x1906E4u) {
        ctx->pc = 0x1906E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1906E0u;
        // 0x1906e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1906E8u;
        goto label_fallthrough_0x1906e0;
    }
    ctx->pc = 0x1906E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1906E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1906E0u;
        // 0x1906e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1906E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1906e0:
    ctx->pc = 0x1906E8u;
}
