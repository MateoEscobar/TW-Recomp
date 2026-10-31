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

// Function: sub_00356390
// Address: 0x356390 - 0x356450
void sub_00356390_0x356390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356390_0x356390");
#endif

    switch (ctx->pc) {
        case 0x356390u: goto label_356390;
        case 0x356394u: goto label_356394;
        case 0x356398u: goto label_356398;
        case 0x35639cu: goto label_35639c;
        case 0x3563a0u: goto label_3563a0;
        case 0x3563a4u: goto label_3563a4;
        case 0x3563a8u: goto label_3563a8;
        case 0x3563acu: goto label_3563ac;
        case 0x3563b0u: goto label_3563b0;
        case 0x3563b4u: goto label_3563b4;
        case 0x3563b8u: goto label_3563b8;
        case 0x3563bcu: goto label_3563bc;
        case 0x3563c0u: goto label_3563c0;
        case 0x3563c4u: goto label_3563c4;
        case 0x3563c8u: goto label_3563c8;
        case 0x3563ccu: goto label_3563cc;
        case 0x3563d0u: goto label_3563d0;
        case 0x3563d4u: goto label_3563d4;
        case 0x3563d8u: goto label_3563d8;
        case 0x3563dcu: goto label_3563dc;
        case 0x3563e0u: goto label_3563e0;
        case 0x3563e4u: goto label_3563e4;
        case 0x3563e8u: goto label_3563e8;
        case 0x3563ecu: goto label_3563ec;
        case 0x3563f0u: goto label_3563f0;
        case 0x3563f4u: goto label_3563f4;
        case 0x3563f8u: goto label_3563f8;
        case 0x3563fcu: goto label_3563fc;
        case 0x356400u: goto label_356400;
        case 0x356404u: goto label_356404;
        case 0x356408u: goto label_356408;
        case 0x35640cu: goto label_35640c;
        case 0x356410u: goto label_356410;
        case 0x356414u: goto label_356414;
        case 0x356418u: goto label_356418;
        case 0x35641cu: goto label_35641c;
        case 0x356420u: goto label_356420;
        case 0x356424u: goto label_356424;
        case 0x356428u: goto label_356428;
        case 0x35642cu: goto label_35642c;
        case 0x356430u: goto label_356430;
        case 0x356434u: goto label_356434;
        case 0x356438u: goto label_356438;
        case 0x35643cu: goto label_35643c;
        case 0x356440u: goto label_356440;
        case 0x356444u: goto label_356444;
        case 0x356448u: goto label_356448;
        case 0x35644cu: goto label_35644c;
        default: break;
    }

    ctx->pc = 0x356390u;

label_356390:
    // 0x356390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x356390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_356394:
    // 0x356394: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x356394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_356398:
    // 0x356398: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x356398u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_35639c:
    // 0x35639c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35639cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3563a0:
    // 0x3563a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3563a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3563a4:
    // 0x3563a4: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x3563a4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_3563a8:
    // 0x3563a8: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x3563a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_3563ac:
    // 0x3563ac: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x3563acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_3563b0:
    // 0x3563b0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3563b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3563b4:
    // 0x3563b4: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x3563b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_3563b8:
    // 0x3563b8: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x3563b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_3563bc:
    // 0x3563bc: 0x60f809  jalr        $v1
label_3563c0:
    if (ctx->pc == 0x3563C0u) {
        ctx->pc = 0x3563C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3563BCu;
        // 0x3563c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3563C4u;
        goto label_3563c4;
    }
    ctx->pc = 0x3563BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3563C4u);
        ctx->pc = 0x3563C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3563BCu;
        // 0x3563c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3563BCu, 0x3563C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3563C4u;
label_3563c4:
    // 0x3563c4: 0x8e0b27e4  lw          $t3, 0x27E4($s0)
    ctx->pc = 0x3563c4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_3563c8:
    // 0x3563c8: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3563c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3563cc:
    // 0x3563cc: 0x3c080058  lui         $t0, 0x58
    ctx->pc = 0x3563ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)88 << 16));
label_3563d0:
    // 0x3563d0: 0x24a58f98  addiu       $a1, $a1, -0x7068
    ctx->pc = 0x3563d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938520));
label_3563d4:
    // 0x3563d4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x3563d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_3563d8:
    // 0x3563d8: 0x25088fa8  addiu       $t0, $t0, -0x7058
    ctx->pc = 0x3563d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294938536));
label_3563dc:
    // 0x3563dc: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x3563dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_3563e0:
    // 0x3563e0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x3563e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3563e4:
    // 0x3563e4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3563e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3563e8:
    // 0x3563e8: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x3563e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_3563ec:
    // 0x3563ec: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3563ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3563f0:
    // 0x3563f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3563f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3563f4:
    // 0x3563f4: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x3563f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_3563f8:
    // 0x3563f8: 0x40f809  jalr        $v0
label_3563fc:
    if (ctx->pc == 0x3563FCu) {
        ctx->pc = 0x3563FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3563F8u;
        // 0x3563fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356400u;
        goto label_356400;
    }
    ctx->pc = 0x3563F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x356400u);
        ctx->pc = 0x3563FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3563F8u;
        // 0x3563fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3563F8u, 0x356400u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x356400u;
label_356400:
    // 0x356400: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x356400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_356404:
    // 0x356404: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_356408:
    if (ctx->pc == 0x356408u) {
        ctx->pc = 0x356408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356404u;
        // 0x356408: 0x8e0627e4  lw          $a2, 0x27E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35640Cu;
        goto label_35640c;
    }
    ctx->pc = 0x356404u;
    {
        const bool branch_taken_0x356404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x356408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356404u;
        // 0x356408: 0x8e0627e4  lw          $a2, 0x27E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356404) {
            ctx->pc = 0x35641Cu;
            goto label_35641c;
        }
    }
    ctx->pc = 0x35640Cu;
label_35640c:
    // 0x35640c: 0xc0d5936  jal         func_3564D8
label_356410:
    if (ctx->pc == 0x356410u) {
        ctx->pc = 0x356414u;
        goto label_356414;
    }
    ctx->pc = 0x35640Cu;
    SET_GPR_U32(ctx, 31, 0x356414u);
    ctx->pc = 0x3564D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3564D8u, 0x35640Cu, 0x356414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356414u;
label_356414:
    // 0x356414: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x356414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_356418:
    // 0x356418: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x356418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_35641c:
    // 0x35641c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x35641cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_356420:
    // 0x356420: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x356420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_356424:
    // 0x356424: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x356424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_356428:
    // 0x356428: 0xac442b04  sw          $a0, 0x2B04($v0)
    ctx->pc = 0x356428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11012), GPR_U32(ctx, 4));
label_35642c:
    // 0x35642c: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x35642cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_356430:
    // 0x356430: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x356430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_356434:
    // 0x356434: 0x40f809  jalr        $v0
label_356438:
    if (ctx->pc == 0x356438u) {
        ctx->pc = 0x356438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356434u;
        // 0x356438: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35643Cu;
        goto label_35643c;
    }
    ctx->pc = 0x356434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35643Cu);
        ctx->pc = 0x356438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356434u;
        // 0x356438: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356434u, 0x35643Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35643Cu;
label_35643c:
    // 0x35643c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35643cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_356440:
    // 0x356440: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x356440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_356444:
    // 0x356444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x356444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_356448:
    // 0x356448: 0x3e00008  jr          $ra
label_35644c:
    if (ctx->pc == 0x35644Cu) {
        ctx->pc = 0x35644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356448u;
        // 0x35644c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356450u;
        goto label_fallthrough_0x356448;
    }
    ctx->pc = 0x356448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356448u;
        // 0x35644c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x356448:
    ctx->pc = 0x356450u;
}
