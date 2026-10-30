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

// Function: sub_002CB538
// Address: 0x2cb538 - 0x2cb5d0
void sub_002CB538_0x2cb538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB538_0x2cb538");
#endif

    switch (ctx->pc) {
        case 0x2cb538u: goto label_2cb538;
        case 0x2cb53cu: goto label_2cb53c;
        case 0x2cb540u: goto label_2cb540;
        case 0x2cb544u: goto label_2cb544;
        case 0x2cb548u: goto label_2cb548;
        case 0x2cb54cu: goto label_2cb54c;
        case 0x2cb550u: goto label_2cb550;
        case 0x2cb554u: goto label_2cb554;
        case 0x2cb558u: goto label_2cb558;
        case 0x2cb55cu: goto label_2cb55c;
        case 0x2cb560u: goto label_2cb560;
        case 0x2cb564u: goto label_2cb564;
        case 0x2cb568u: goto label_2cb568;
        case 0x2cb56cu: goto label_2cb56c;
        case 0x2cb570u: goto label_2cb570;
        case 0x2cb574u: goto label_2cb574;
        case 0x2cb578u: goto label_2cb578;
        case 0x2cb57cu: goto label_2cb57c;
        case 0x2cb580u: goto label_2cb580;
        case 0x2cb584u: goto label_2cb584;
        case 0x2cb588u: goto label_2cb588;
        case 0x2cb58cu: goto label_2cb58c;
        case 0x2cb590u: goto label_2cb590;
        case 0x2cb594u: goto label_2cb594;
        case 0x2cb598u: goto label_2cb598;
        case 0x2cb59cu: goto label_2cb59c;
        case 0x2cb5a0u: goto label_2cb5a0;
        case 0x2cb5a4u: goto label_2cb5a4;
        case 0x2cb5a8u: goto label_2cb5a8;
        case 0x2cb5acu: goto label_2cb5ac;
        case 0x2cb5b0u: goto label_2cb5b0;
        case 0x2cb5b4u: goto label_2cb5b4;
        case 0x2cb5b8u: goto label_2cb5b8;
        case 0x2cb5bcu: goto label_2cb5bc;
        case 0x2cb5c0u: goto label_2cb5c0;
        case 0x2cb5c4u: goto label_2cb5c4;
        case 0x2cb5c8u: goto label_2cb5c8;
        case 0x2cb5ccu: goto label_2cb5cc;
        default: break;
    }

    ctx->pc = 0x2cb538u;

label_2cb538:
    // 0x2cb538: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cb538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2cb53c:
    // 0x2cb53c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cb53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cb540:
    // 0x2cb540: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2cb540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2cb544:
    // 0x2cb544: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x2cb544u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_2cb548:
    // 0x2cb548: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2cb548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2cb54c:
    // 0x2cb54c: 0x8e22489c  lw          $v0, 0x489C($s1)
    ctx->pc = 0x2cb54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_2cb550:
    // 0x2cb550: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cb550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cb554:
    // 0x2cb554: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cb554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2cb558:
    // 0x2cb558: 0xa0400411  sb          $zero, 0x411($v0)
    ctx->pc = 0x2cb558u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1041), (uint8_t)GPR_U32(ctx, 0));
label_2cb55c:
    // 0x2cb55c: 0xc0a48cc  jal         func_292330
label_2cb560:
    if (ctx->pc == 0x2CB560u) {
        ctx->pc = 0x2CB560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB55Cu;
        // 0x2cb560: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB564u;
        goto label_2cb564;
    }
    ctx->pc = 0x2CB55Cu;
    SET_GPR_U32(ctx, 31, 0x2CB564u);
    ctx->pc = 0x2CB560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB55Cu;
    // 0x2cb560: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292330u, 0x2CB55Cu, 0x2CB564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB564u;
label_2cb564:
    // 0x2cb564: 0xc0e8550  jal         func_3A1540
label_2cb568:
    if (ctx->pc == 0x2CB568u) {
        ctx->pc = 0x2CB56Cu;
        goto label_2cb56c;
    }
    ctx->pc = 0x2CB564u;
    SET_GPR_U32(ctx, 31, 0x2CB56Cu);
    ctx->pc = 0x3A1540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1540u, 0x2CB564u, 0x2CB56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB56Cu;
label_2cb56c:
    // 0x2cb56c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2cb570:
    if (ctx->pc == 0x2CB570u) {
        ctx->pc = 0x2CB570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB56Cu;
        // 0x2cb570: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB574u;
        goto label_2cb574;
    }
    ctx->pc = 0x2CB56Cu;
    {
        const bool branch_taken_0x2cb56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb56c) {
            ctx->pc = 0x2CB570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB56Cu;
            // 0x2cb570: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB580u;
            goto label_2cb580;
        }
    }
    ctx->pc = 0x2CB574u;
label_2cb574:
    // 0x2cb574: 0xc0d51a8  jal         func_3546A0
label_2cb578:
    if (ctx->pc == 0x2CB578u) {
        ctx->pc = 0x2CB57Cu;
        goto label_2cb57c;
    }
    ctx->pc = 0x2CB574u;
    SET_GPR_U32(ctx, 31, 0x2CB57Cu);
    ctx->pc = 0x3546A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3546A0u, 0x2CB574u, 0x2CB57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB57Cu;
label_2cb57c:
    // 0x2cb57c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2cb57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2cb580:
    // 0x2cb580: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2cb584:
    if (ctx->pc == 0x2CB584u) {
        ctx->pc = 0x2CB584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB580u;
        // 0x2cb584: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB588u;
        goto label_2cb588;
    }
    ctx->pc = 0x2CB580u;
    {
        const bool branch_taken_0x2cb580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB580u;
        // 0x2cb584: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb580) {
            ctx->pc = 0x2CB5BCu;
            goto label_2cb5bc;
        }
    }
    ctx->pc = 0x2CB588u;
label_2cb588:
    // 0x2cb588: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2cb588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cb58c:
    // 0x2cb58c: 0x8e26489c  lw          $a2, 0x489C($s1)
    ctx->pc = 0x2cb58cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_2cb590:
    // 0x2cb590: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2cb590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2cb594:
    // 0x2cb594: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2cb594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cb598:
    // 0x2cb598: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x2cb598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_2cb59c:
    // 0x2cb59c: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x2cb59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
label_2cb5a0:
    // 0x2cb5a0: 0x94c20412  lhu         $v0, 0x412($a2)
    ctx->pc = 0x2cb5a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 1042)));
label_2cb5a4:
    // 0x2cb5a4: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x2cb5a4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
label_2cb5a8:
    // 0x2cb5a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2cb5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cb5ac:
    // 0x2cb5ac: 0x84660040  lh          $a2, 0x40($v1)
    ctx->pc = 0x2cb5acu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_2cb5b0:
    // 0x2cb5b0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2cb5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2cb5b4:
    // 0x2cb5b4: 0x40f809  jalr        $v0
label_2cb5b8:
    if (ctx->pc == 0x2CB5B8u) {
        ctx->pc = 0x2CB5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB5B4u;
        // 0x2cb5b8: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB5BCu;
        goto label_2cb5bc;
    }
    ctx->pc = 0x2CB5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CB5BCu);
        ctx->pc = 0x2CB5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB5B4u;
        // 0x2cb5b8: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB5B4u, 0x2CB5BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CB5BCu;
label_2cb5bc:
    // 0x2cb5bc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2cb5bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2cb5c0:
    // 0x2cb5c0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2cb5c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2cb5c4:
    // 0x2cb5c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cb5c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2cb5c8:
    // 0x2cb5c8: 0x3e00008  jr          $ra
label_2cb5cc:
    if (ctx->pc == 0x2CB5CCu) {
        ctx->pc = 0x2CB5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB5C8u;
        // 0x2cb5cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB5D0u;
        goto label_fallthrough_0x2cb5c8;
    }
    ctx->pc = 0x2CB5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB5C8u;
        // 0x2cb5cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2cb5c8:
    ctx->pc = 0x2CB5D0u;
}
