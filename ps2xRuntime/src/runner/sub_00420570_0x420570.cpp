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

// Function: sub_00420570
// Address: 0x420570 - 0x4206a0
void sub_00420570_0x420570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420570_0x420570");
#endif

    switch (ctx->pc) {
        case 0x420570u: goto label_420570;
        case 0x420574u: goto label_420574;
        case 0x420578u: goto label_420578;
        case 0x42057cu: goto label_42057c;
        case 0x420580u: goto label_420580;
        case 0x420584u: goto label_420584;
        case 0x420588u: goto label_420588;
        case 0x42058cu: goto label_42058c;
        case 0x420590u: goto label_420590;
        case 0x420594u: goto label_420594;
        case 0x420598u: goto label_420598;
        case 0x42059cu: goto label_42059c;
        case 0x4205a0u: goto label_4205a0;
        case 0x4205a4u: goto label_4205a4;
        case 0x4205a8u: goto label_4205a8;
        case 0x4205acu: goto label_4205ac;
        case 0x4205b0u: goto label_4205b0;
        case 0x4205b4u: goto label_4205b4;
        case 0x4205b8u: goto label_4205b8;
        case 0x4205bcu: goto label_4205bc;
        case 0x4205c0u: goto label_4205c0;
        case 0x4205c4u: goto label_4205c4;
        case 0x4205c8u: goto label_4205c8;
        case 0x4205ccu: goto label_4205cc;
        case 0x4205d0u: goto label_4205d0;
        case 0x4205d4u: goto label_4205d4;
        case 0x4205d8u: goto label_4205d8;
        case 0x4205dcu: goto label_4205dc;
        case 0x4205e0u: goto label_4205e0;
        case 0x4205e4u: goto label_4205e4;
        case 0x4205e8u: goto label_4205e8;
        case 0x4205ecu: goto label_4205ec;
        case 0x4205f0u: goto label_4205f0;
        case 0x4205f4u: goto label_4205f4;
        case 0x4205f8u: goto label_4205f8;
        case 0x4205fcu: goto label_4205fc;
        case 0x420600u: goto label_420600;
        case 0x420604u: goto label_420604;
        case 0x420608u: goto label_420608;
        case 0x42060cu: goto label_42060c;
        case 0x420610u: goto label_420610;
        case 0x420614u: goto label_420614;
        case 0x420618u: goto label_420618;
        case 0x42061cu: goto label_42061c;
        case 0x420620u: goto label_420620;
        case 0x420624u: goto label_420624;
        case 0x420628u: goto label_420628;
        case 0x42062cu: goto label_42062c;
        case 0x420630u: goto label_420630;
        case 0x420634u: goto label_420634;
        case 0x420638u: goto label_420638;
        case 0x42063cu: goto label_42063c;
        case 0x420640u: goto label_420640;
        case 0x420644u: goto label_420644;
        case 0x420648u: goto label_420648;
        case 0x42064cu: goto label_42064c;
        case 0x420650u: goto label_420650;
        case 0x420654u: goto label_420654;
        case 0x420658u: goto label_420658;
        case 0x42065cu: goto label_42065c;
        case 0x420660u: goto label_420660;
        case 0x420664u: goto label_420664;
        case 0x420668u: goto label_420668;
        case 0x42066cu: goto label_42066c;
        case 0x420670u: goto label_420670;
        case 0x420674u: goto label_420674;
        case 0x420678u: goto label_420678;
        case 0x42067cu: goto label_42067c;
        case 0x420680u: goto label_420680;
        case 0x420684u: goto label_420684;
        case 0x420688u: goto label_420688;
        case 0x42068cu: goto label_42068c;
        case 0x420690u: goto label_420690;
        case 0x420694u: goto label_420694;
        case 0x420698u: goto label_420698;
        case 0x42069cu: goto label_42069c;
        default: break;
    }

    ctx->pc = 0x420570u;

label_420570:
    // 0x420570: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x420570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_420574:
    // 0x420574: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x420574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_420578:
    // 0x420578: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x420578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_42057c:
    // 0x42057c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x42057cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_420580:
    // 0x420580: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x420580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_420584:
    // 0x420584: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x420584u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_420588:
    // 0x420588: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x420588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_42058c:
    // 0x42058c: 0x8e030188  lw          $v1, 0x188($s0)
    ctx->pc = 0x42058cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
label_420590:
    // 0x420590: 0x1071001b  beq         $v1, $s1, . + 4 + (0x1B << 2)
label_420594:
    if (ctx->pc == 0x420594u) {
        ctx->pc = 0x420598u;
        goto label_420598;
    }
    ctx->pc = 0x420590u;
    {
        const bool branch_taken_0x420590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x420590) {
            ctx->pc = 0x420600u;
            goto label_420600;
        }
    }
    ctx->pc = 0x420598u;
label_420598:
    // 0x420598: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_42059c:
    if (ctx->pc == 0x42059Cu) {
        ctx->pc = 0x42059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420598u;
        // 0x42059c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4205A0u;
        goto label_4205a0;
    }
    ctx->pc = 0x420598u;
    {
        const bool branch_taken_0x420598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420598u;
        // 0x42059c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420598) {
            ctx->pc = 0x4205B0u;
            goto label_4205b0;
        }
    }
    ctx->pc = 0x4205A0u;
label_4205a0:
    // 0x4205a0: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
label_4205a4:
    if (ctx->pc == 0x4205A4u) {
        ctx->pc = 0x4205A8u;
        goto label_4205a8;
    }
    ctx->pc = 0x4205A0u;
    {
        const bool branch_taken_0x4205a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4205a0) {
            ctx->pc = 0x420664u;
            goto label_420664;
        }
    }
    ctx->pc = 0x4205A8u;
label_4205a8:
    // 0x4205a8: 0x10000038  b           . + 4 + (0x38 << 2)
label_4205ac:
    if (ctx->pc == 0x4205ACu) {
        ctx->pc = 0x4205ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4205A8u;
        // 0x4205ac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4205B0u;
        goto label_4205b0;
    }
    ctx->pc = 0x4205A8u;
    {
        const bool branch_taken_0x4205a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4205ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4205A8u;
        // 0x4205ac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4205a8) {
            ctx->pc = 0x42068Cu;
            goto label_42068c;
        }
    }
    ctx->pc = 0x4205B0u;
label_4205b0:
    // 0x4205b0: 0x26040148  addiu       $a0, $s0, 0x148
    ctx->pc = 0x4205b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
label_4205b4:
    // 0x4205b4: 0xc052d32  jal         func_14B4C8
label_4205b8:
    if (ctx->pc == 0x4205B8u) {
        ctx->pc = 0x4205B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4205B4u;
        // 0x4205b8: 0x26050180  addiu       $a1, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4205BCu;
        goto label_4205bc;
    }
    ctx->pc = 0x4205B4u;
    SET_GPR_U32(ctx, 31, 0x4205BCu);
    ctx->pc = 0x4205B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4205B4u;
    // 0x4205b8: 0x26050180  addiu       $a1, $s0, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B4C8u, 0x4205B4u, 0x4205BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4205BCu;
label_4205bc:
    // 0x4205bc: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
label_4205c0:
    if (ctx->pc == 0x4205C0u) {
        ctx->pc = 0x4205C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4205BCu;
        // 0x4205c0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4205C4u;
        goto label_4205c4;
    }
    ctx->pc = 0x4205BCu;
    {
        const bool branch_taken_0x4205bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4205bc) {
            ctx->pc = 0x4205C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4205BCu;
            // 0x4205c0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42068Cu;
            goto label_42068c;
        }
    }
    ctx->pc = 0x4205C4u;
label_4205c4:
    // 0x4205c4: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x4205c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_4205c8:
    // 0x4205c8: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
label_4205cc:
    if (ctx->pc == 0x4205CCu) {
        ctx->pc = 0x4205CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4205C8u;
        // 0x4205cc: 0xae110184  sw          $s1, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4205D0u;
        goto label_4205d0;
    }
    ctx->pc = 0x4205C8u;
    {
        const bool branch_taken_0x4205c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4205c8) {
            ctx->pc = 0x4205CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4205C8u;
            // 0x4205cc: 0xae110184  sw          $s1, 0x184($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x420688u;
            goto label_420688;
        }
    }
    ctx->pc = 0x4205D0u;
label_4205d0:
    // 0x4205d0: 0x8e050110  lw          $a1, 0x110($s0)
    ctx->pc = 0x4205d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_4205d4:
    // 0x4205d4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4205d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4205d8:
    // 0x4205d8: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x4205d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_4205dc:
    // 0x4205dc: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x4205dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_4205e0:
    // 0x4205e0: 0x40f809  jalr        $v0
label_4205e4:
    if (ctx->pc == 0x4205E4u) {
        ctx->pc = 0x4205E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4205E0u;
        // 0x4205e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4205E8u;
        goto label_4205e8;
    }
    ctx->pc = 0x4205E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4205E8u);
        ctx->pc = 0x4205E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4205E0u;
        // 0x4205e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4205E0u, 0x4205E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4205E8u;
label_4205e8:
    // 0x4205e8: 0x8e05010c  lw          $a1, 0x10C($s0)
    ctx->pc = 0x4205e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_4205ec:
    // 0x4205ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4205ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4205f0:
    // 0x4205f0: 0xc052ddc  jal         func_14B770
label_4205f4:
    if (ctx->pc == 0x4205F4u) {
        ctx->pc = 0x4205F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4205F0u;
        // 0x4205f4: 0x8e060180  lw          $a2, 0x180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4205F8u;
        goto label_4205f8;
    }
    ctx->pc = 0x4205F0u;
    SET_GPR_U32(ctx, 31, 0x4205F8u);
    ctx->pc = 0x4205F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4205F0u;
    // 0x4205f4: 0x8e060180  lw          $a2, 0x180($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B770u, 0x4205F0u, 0x4205F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4205F8u;
label_4205f8:
    // 0x4205f8: 0x10000014  b           . + 4 + (0x14 << 2)
label_4205fc:
    if (ctx->pc == 0x4205FCu) {
        ctx->pc = 0x420600u;
        goto label_420600;
    }
    ctx->pc = 0x4205F8u;
    {
        const bool branch_taken_0x4205f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4205f8) {
            ctx->pc = 0x42064Cu;
            goto label_42064c;
        }
    }
    ctx->pc = 0x420600u;
label_420600:
    // 0x420600: 0xc052e74  jal         func_14B9D0
label_420604:
    if (ctx->pc == 0x420604u) {
        ctx->pc = 0x420604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420600u;
        // 0x420604: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420608u;
        goto label_420608;
    }
    ctx->pc = 0x420600u;
    SET_GPR_U32(ctx, 31, 0x420608u);
    ctx->pc = 0x420604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420600u;
    // 0x420604: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B9D0u, 0x420600u, 0x420608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420608u;
label_420608:
    // 0x420608: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_42060c:
    if (ctx->pc == 0x42060Cu) {
        ctx->pc = 0x42060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420608u;
        // 0x42060c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420610u;
        goto label_420610;
    }
    ctx->pc = 0x420608u;
    {
        const bool branch_taken_0x420608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420608u;
        // 0x42060c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420608) {
            ctx->pc = 0x420688u;
            goto label_420688;
        }
    }
    ctx->pc = 0x420610u;
label_420610:
    // 0x420610: 0x4630005  bgezl       $v1, . + 4 + (0x5 << 2)
label_420614:
    if (ctx->pc == 0x420614u) {
        ctx->pc = 0x420614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420610u;
        // 0x420614: 0x8e02010c  lw          $v0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420618u;
        goto label_420618;
    }
    ctx->pc = 0x420610u;
    {
        const bool branch_taken_0x420610 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x420610) {
            ctx->pc = 0x420614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x420610u;
            // 0x420614: 0x8e02010c  lw          $v0, 0x10C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x420628u;
            goto label_420628;
        }
    }
    ctx->pc = 0x420618u;
label_420618:
    // 0x420618: 0xc0529fc  jal         func_14A7F0
label_42061c:
    if (ctx->pc == 0x42061Cu) {
        ctx->pc = 0x42061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420618u;
        // 0x42061c: 0x8e040180  lw          $a0, 0x180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420620u;
        goto label_420620;
    }
    ctx->pc = 0x420618u;
    SET_GPR_U32(ctx, 31, 0x420620u);
    ctx->pc = 0x42061Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420618u;
    // 0x42061c: 0x8e040180  lw          $a0, 0x180($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A7F0u, 0x420618u, 0x420620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420620u;
label_420620:
    // 0x420620: 0x10000019  b           . + 4 + (0x19 << 2)
label_420624:
    if (ctx->pc == 0x420624u) {
        ctx->pc = 0x420624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420620u;
        // 0x420624: 0xae110184  sw          $s1, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420628u;
        goto label_420628;
    }
    ctx->pc = 0x420620u;
    {
        const bool branch_taken_0x420620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x420624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420620u;
        // 0x420624: 0xae110184  sw          $s1, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420620) {
            ctx->pc = 0x420688u;
            goto label_420688;
        }
    }
    ctx->pc = 0x420628u;
label_420628:
    // 0x420628: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x420628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_42062c:
    // 0x42062c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_420630:
    if (ctx->pc == 0x420630u) {
        ctx->pc = 0x420634u;
        goto label_420634;
    }
    ctx->pc = 0x42062Cu;
    {
        const bool branch_taken_0x42062c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42062c) {
            ctx->pc = 0x420644u;
            goto label_420644;
        }
    }
    ctx->pc = 0x420634u;
label_420634:
    // 0x420634: 0xc0529fc  jal         func_14A7F0
label_420638:
    if (ctx->pc == 0x420638u) {
        ctx->pc = 0x420638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420634u;
        // 0x420638: 0x8e040180  lw          $a0, 0x180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42063Cu;
        goto label_42063c;
    }
    ctx->pc = 0x420634u;
    SET_GPR_U32(ctx, 31, 0x42063Cu);
    ctx->pc = 0x420638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420634u;
    // 0x420638: 0x8e040180  lw          $a0, 0x180($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A7F0u, 0x420634u, 0x42063Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42063Cu;
label_42063c:
    // 0x42063c: 0x10000012  b           . + 4 + (0x12 << 2)
label_420640:
    if (ctx->pc == 0x420640u) {
        ctx->pc = 0x420640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42063Cu;
        // 0x420640: 0xae110184  sw          $s1, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420644u;
        goto label_420644;
    }
    ctx->pc = 0x42063Cu;
    {
        const bool branch_taken_0x42063c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x420640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42063Cu;
        // 0x420640: 0xae110184  sw          $s1, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42063c) {
            ctx->pc = 0x420688u;
            goto label_420688;
        }
    }
    ctx->pc = 0x420644u;
label_420644:
    // 0x420644: 0xc052dac  jal         func_14B6B0
label_420648:
    if (ctx->pc == 0x420648u) {
        ctx->pc = 0x420648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420644u;
        // 0x420648: 0x8e040180  lw          $a0, 0x180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42064Cu;
        goto label_42064c;
    }
    ctx->pc = 0x420644u;
    SET_GPR_U32(ctx, 31, 0x42064Cu);
    ctx->pc = 0x420648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420644u;
    // 0x420648: 0x8e040180  lw          $a0, 0x180($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6B0u, 0x420644u, 0x42064Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42064Cu;
label_42064c:
    // 0x42064c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_420650:
    if (ctx->pc == 0x420650u) {
        ctx->pc = 0x420650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42064Cu;
        // 0x420650: 0xae110184  sw          $s1, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420654u;
        goto label_420654;
    }
    ctx->pc = 0x42064Cu;
    {
        const bool branch_taken_0x42064c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42064c) {
            ctx->pc = 0x420650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42064Cu;
            // 0x420650: 0xae110184  sw          $s1, 0x184($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x420688u;
            goto label_420688;
        }
    }
    ctx->pc = 0x420654u;
label_420654:
    // 0x420654: 0x8e020188  lw          $v0, 0x188($s0)
    ctx->pc = 0x420654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
label_420658:
    // 0x420658: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x420658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_42065c:
    // 0x42065c: 0x1000000a  b           . + 4 + (0xA << 2)
label_420660:
    if (ctx->pc == 0x420660u) {
        ctx->pc = 0x420660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42065Cu;
        // 0x420660: 0xae020188  sw          $v0, 0x188($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420664u;
        goto label_420664;
    }
    ctx->pc = 0x42065Cu;
    {
        const bool branch_taken_0x42065c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x420660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42065Cu;
        // 0x420660: 0xae020188  sw          $v0, 0x188($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42065c) {
            ctx->pc = 0x420688u;
            goto label_420688;
        }
    }
    ctx->pc = 0x420664u;
label_420664:
    // 0x420664: 0xc052e74  jal         func_14B9D0
label_420668:
    if (ctx->pc == 0x420668u) {
        ctx->pc = 0x420668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420664u;
        // 0x420668: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42066Cu;
        goto label_42066c;
    }
    ctx->pc = 0x420664u;
    SET_GPR_U32(ctx, 31, 0x42066Cu);
    ctx->pc = 0x420668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420664u;
    // 0x420668: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B9D0u, 0x420664u, 0x42066Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42066Cu;
label_42066c:
    // 0x42066c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_420670:
    if (ctx->pc == 0x420670u) {
        ctx->pc = 0x420670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42066Cu;
        // 0x420670: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420674u;
        goto label_420674;
    }
    ctx->pc = 0x42066Cu;
    {
        const bool branch_taken_0x42066c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42066c) {
            ctx->pc = 0x420670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42066Cu;
            // 0x420670: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42068Cu;
            goto label_42068c;
        }
    }
    ctx->pc = 0x420674u;
label_420674:
    // 0x420674: 0x8e050110  lw          $a1, 0x110($s0)
    ctx->pc = 0x420674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_420678:
    // 0x420678: 0xc108576  jal         func_4215D8
label_42067c:
    if (ctx->pc == 0x42067Cu) {
        ctx->pc = 0x42067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420678u;
        // 0x42067c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420680u;
        goto label_420680;
    }
    ctx->pc = 0x420678u;
    SET_GPR_U32(ctx, 31, 0x420680u);
    ctx->pc = 0x42067Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420678u;
    // 0x42067c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4215D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4215D8u, 0x420678u, 0x420680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420680u;
label_420680:
    // 0x420680: 0xae11018c  sw          $s1, 0x18C($s0)
    ctx->pc = 0x420680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 17));
label_420684:
    // 0x420684: 0xae110184  sw          $s1, 0x184($s0)
    ctx->pc = 0x420684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 17));
label_420688:
    // 0x420688: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x420688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_42068c:
    // 0x42068c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x42068cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_420690:
    // 0x420690: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x420690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_420694:
    // 0x420694: 0x3e00008  jr          $ra
label_420698:
    if (ctx->pc == 0x420698u) {
        ctx->pc = 0x420698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420694u;
        // 0x420698: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42069Cu;
        goto label_42069c;
    }
    ctx->pc = 0x420694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420694u;
        // 0x420698: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42069Cu;
label_42069c:
    // 0x42069c: 0x0  nop
    ctx->pc = 0x42069cu;
    // NOP
    ctx->pc = 0x4206a0u;
}
