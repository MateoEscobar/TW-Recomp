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

// Function: sub_0041B520
// Address: 0x41b520 - 0x41b5e0
void sub_0041B520_0x41b520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041B520_0x41b520");
#endif

    switch (ctx->pc) {
        case 0x41b520u: goto label_41b520;
        case 0x41b524u: goto label_41b524;
        case 0x41b528u: goto label_41b528;
        case 0x41b52cu: goto label_41b52c;
        case 0x41b530u: goto label_41b530;
        case 0x41b534u: goto label_41b534;
        case 0x41b538u: goto label_41b538;
        case 0x41b53cu: goto label_41b53c;
        case 0x41b540u: goto label_41b540;
        case 0x41b544u: goto label_41b544;
        case 0x41b548u: goto label_41b548;
        case 0x41b54cu: goto label_41b54c;
        case 0x41b550u: goto label_41b550;
        case 0x41b554u: goto label_41b554;
        case 0x41b558u: goto label_41b558;
        case 0x41b55cu: goto label_41b55c;
        case 0x41b560u: goto label_41b560;
        case 0x41b564u: goto label_41b564;
        case 0x41b568u: goto label_41b568;
        case 0x41b56cu: goto label_41b56c;
        case 0x41b570u: goto label_41b570;
        case 0x41b574u: goto label_41b574;
        case 0x41b578u: goto label_41b578;
        case 0x41b57cu: goto label_41b57c;
        case 0x41b580u: goto label_41b580;
        case 0x41b584u: goto label_41b584;
        case 0x41b588u: goto label_41b588;
        case 0x41b58cu: goto label_41b58c;
        case 0x41b590u: goto label_41b590;
        case 0x41b594u: goto label_41b594;
        case 0x41b598u: goto label_41b598;
        case 0x41b59cu: goto label_41b59c;
        case 0x41b5a0u: goto label_41b5a0;
        case 0x41b5a4u: goto label_41b5a4;
        case 0x41b5a8u: goto label_41b5a8;
        case 0x41b5acu: goto label_41b5ac;
        case 0x41b5b0u: goto label_41b5b0;
        case 0x41b5b4u: goto label_41b5b4;
        case 0x41b5b8u: goto label_41b5b8;
        case 0x41b5bcu: goto label_41b5bc;
        case 0x41b5c0u: goto label_41b5c0;
        case 0x41b5c4u: goto label_41b5c4;
        case 0x41b5c8u: goto label_41b5c8;
        case 0x41b5ccu: goto label_41b5cc;
        case 0x41b5d0u: goto label_41b5d0;
        case 0x41b5d4u: goto label_41b5d4;
        case 0x41b5d8u: goto label_41b5d8;
        case 0x41b5dcu: goto label_41b5dc;
        default: break;
    }

    ctx->pc = 0x41b520u;

label_41b520:
    // 0x41b520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x41b520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_41b524:
    // 0x41b524: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x41b524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_41b528:
    // 0x41b528: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x41b528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_41b52c:
    // 0x41b52c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x41b52cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41b530:
    // 0x41b530: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x41b530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_41b534:
    // 0x41b534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41b534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41b538:
    // 0x41b538: 0x80820384  lb          $v0, 0x384($a0)
    ctx->pc = 0x41b538u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 900)));
label_41b53c:
    // 0x41b53c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_41b540:
    if (ctx->pc == 0x41B540u) {
        ctx->pc = 0x41B540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B53Cu;
        // 0x41b540: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B544u;
        goto label_41b544;
    }
    ctx->pc = 0x41B53Cu;
    {
        const bool branch_taken_0x41b53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B53Cu;
        // 0x41b540: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b53c) {
            ctx->pc = 0x41B5C8u;
            goto label_41b5c8;
        }
    }
    ctx->pc = 0x41B544u;
label_41b544:
    // 0x41b544: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x41b544u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_41b548:
    // 0x41b548: 0x24850384  addiu       $a1, $a0, 0x384
    ctx->pc = 0x41b548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 900));
label_41b54c:
    // 0x41b54c: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x41b54cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_41b550:
    // 0x41b550: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x41b550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41b554:
    // 0x41b554: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x41b554u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_41b558:
    // 0x41b558: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x41b558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_41b55c:
    // 0x41b55c: 0x40f809  jalr        $v0
label_41b560:
    if (ctx->pc == 0x41B560u) {
        ctx->pc = 0x41B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B55Cu;
        // 0x41b560: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B564u;
        goto label_41b564;
    }
    ctx->pc = 0x41B55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B564u);
        ctx->pc = 0x41B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B55Cu;
        // 0x41b560: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B55Cu, 0x41B564u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B564u;
label_41b564:
    // 0x41b564: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x41b564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41b568:
    // 0x41b568: 0x54430018  bnel        $v0, $v1, . + 4 + (0x18 << 2)
label_41b56c:
    if (ctx->pc == 0x41B56Cu) {
        ctx->pc = 0x41B56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B568u;
        // 0x41b56c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B570u;
        goto label_41b570;
    }
    ctx->pc = 0x41B568u;
    {
        const bool branch_taken_0x41b568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x41b568) {
            ctx->pc = 0x41B56Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41B568u;
            // 0x41b56c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41B5CCu;
            goto label_41b5cc;
        }
    }
    ctx->pc = 0x41B570u;
label_41b570:
    // 0x41b570: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x41b570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_41b574:
    // 0x41b574: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41b574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41b578:
    // 0x41b578: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x41b578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41b57c:
    // 0x41b57c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x41b57cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_41b580:
    // 0x41b580: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x41b580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_41b584:
    // 0x41b584: 0x60f809  jalr        $v1
label_41b588:
    if (ctx->pc == 0x41B588u) {
        ctx->pc = 0x41B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B584u;
        // 0x41b588: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B58Cu;
        goto label_41b58c;
    }
    ctx->pc = 0x41B584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41B58Cu);
        ctx->pc = 0x41B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B584u;
        // 0x41b588: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B584u, 0x41B58Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B58Cu;
label_41b58c:
    // 0x41b58c: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x41b58cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_41b590:
    // 0x41b590: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41b590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41b594:
    // 0x41b594: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x41b594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41b598:
    // 0x41b598: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x41b598u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_41b59c:
    // 0x41b59c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x41b59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_41b5a0:
    // 0x41b5a0: 0x60f809  jalr        $v1
label_41b5a4:
    if (ctx->pc == 0x41B5A4u) {
        ctx->pc = 0x41B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B5A0u;
        // 0x41b5a4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B5A8u;
        goto label_41b5a8;
    }
    ctx->pc = 0x41B5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41B5A8u);
        ctx->pc = 0x41B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B5A0u;
        // 0x41b5a4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B5A0u, 0x41B5A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B5A8u;
label_41b5a8:
    // 0x41b5a8: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x41b5a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_41b5ac:
    // 0x41b5ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x41b5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_41b5b0:
    // 0x41b5b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41b5b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41b5b4:
    // 0x41b5b4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x41b5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_41b5b8:
    // 0x41b5b8: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x41b5b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_41b5bc:
    // 0x41b5bc: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x41b5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_41b5c0:
    // 0x41b5c0: 0x60f809  jalr        $v1
label_41b5c4:
    if (ctx->pc == 0x41B5C4u) {
        ctx->pc = 0x41B5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B5C0u;
        // 0x41b5c4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B5C8u;
        goto label_41b5c8;
    }
    ctx->pc = 0x41B5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41B5C8u);
        ctx->pc = 0x41B5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B5C0u;
        // 0x41b5c4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B5C0u, 0x41B5C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B5C8u;
label_41b5c8:
    // 0x41b5c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x41b5c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41b5cc:
    // 0x41b5cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x41b5ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41b5d0:
    // 0x41b5d0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x41b5d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41b5d4:
    // 0x41b5d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41b5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41b5d8:
    // 0x41b5d8: 0x3e00008  jr          $ra
label_41b5dc:
    if (ctx->pc == 0x41B5DCu) {
        ctx->pc = 0x41B5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B5D8u;
        // 0x41b5dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B5E0u;
        goto label_fallthrough_0x41b5d8;
    }
    ctx->pc = 0x41B5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41B5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B5D8u;
        // 0x41b5dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x41b5d8:
    ctx->pc = 0x41B5E0u;
}
