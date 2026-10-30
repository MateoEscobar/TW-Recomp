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

// Function: sub_002345F8
// Address: 0x2345f8 - 0x2346a0
void sub_002345F8_0x2345f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002345F8_0x2345f8");
#endif

    switch (ctx->pc) {
        case 0x2345f8u: goto label_2345f8;
        case 0x2345fcu: goto label_2345fc;
        case 0x234600u: goto label_234600;
        case 0x234604u: goto label_234604;
        case 0x234608u: goto label_234608;
        case 0x23460cu: goto label_23460c;
        case 0x234610u: goto label_234610;
        case 0x234614u: goto label_234614;
        case 0x234618u: goto label_234618;
        case 0x23461cu: goto label_23461c;
        case 0x234620u: goto label_234620;
        case 0x234624u: goto label_234624;
        case 0x234628u: goto label_234628;
        case 0x23462cu: goto label_23462c;
        case 0x234630u: goto label_234630;
        case 0x234634u: goto label_234634;
        case 0x234638u: goto label_234638;
        case 0x23463cu: goto label_23463c;
        case 0x234640u: goto label_234640;
        case 0x234644u: goto label_234644;
        case 0x234648u: goto label_234648;
        case 0x23464cu: goto label_23464c;
        case 0x234650u: goto label_234650;
        case 0x234654u: goto label_234654;
        case 0x234658u: goto label_234658;
        case 0x23465cu: goto label_23465c;
        case 0x234660u: goto label_234660;
        case 0x234664u: goto label_234664;
        case 0x234668u: goto label_234668;
        case 0x23466cu: goto label_23466c;
        case 0x234670u: goto label_234670;
        case 0x234674u: goto label_234674;
        case 0x234678u: goto label_234678;
        case 0x23467cu: goto label_23467c;
        case 0x234680u: goto label_234680;
        case 0x234684u: goto label_234684;
        case 0x234688u: goto label_234688;
        case 0x23468cu: goto label_23468c;
        case 0x234690u: goto label_234690;
        case 0x234694u: goto label_234694;
        case 0x234698u: goto label_234698;
        case 0x23469cu: goto label_23469c;
        default: break;
    }

    ctx->pc = 0x2345f8u;

label_2345f8:
    // 0x2345f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2345f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2345fc:
    // 0x2345fc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2345fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_234600:
    // 0x234600: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x234600u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_234604:
    // 0x234604: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x234604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_234608:
    // 0x234608: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x234608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_23460c:
    // 0x23460c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23460cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_234610:
    // 0x234610: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_234614:
    // 0x234614: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x234614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_234618:
    // 0x234618: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x234618u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_23461c:
    // 0x23461c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23461cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_234620:
    // 0x234620: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x234620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_234624:
    // 0x234624: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x234624u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_234628:
    // 0x234628: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x234628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_23462c:
    // 0x23462c: 0x40f809  jalr        $v0
label_234630:
    if (ctx->pc == 0x234630u) {
        ctx->pc = 0x234630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23462Cu;
        // 0x234630: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234634u;
        goto label_234634;
    }
    ctx->pc = 0x23462Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x234634u);
        ctx->pc = 0x234630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23462Cu;
        // 0x234630: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23462Cu, 0x234634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234634u;
label_234634:
    // 0x234634: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x234634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_234638:
    // 0x234638: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x234638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_23463c:
    // 0x23463c: 0xac62023c  sw          $v0, 0x23C($v1)
    ctx->pc = 0x23463cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 572), GPR_U32(ctx, 2));
label_234640:
    // 0x234640: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x234640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234644:
    // 0x234644: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x234644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_234648:
    // 0x234648: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x234648u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_23464c:
    // 0x23464c: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x23464cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_234650:
    // 0x234650: 0x40f809  jalr        $v0
label_234654:
    if (ctx->pc == 0x234654u) {
        ctx->pc = 0x234654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234650u;
        // 0x234654: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234658u;
        goto label_234658;
    }
    ctx->pc = 0x234650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x234658u);
        ctx->pc = 0x234654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234650u;
        // 0x234654: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234650u, 0x234658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234658u;
label_234658:
    // 0x234658: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x234658u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_23465c:
    // 0x23465c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x23465cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_234660:
    // 0x234660: 0xac620234  sw          $v0, 0x234($v1)
    ctx->pc = 0x234660u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 564), GPR_U32(ctx, 2));
label_234664:
    // 0x234664: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x234664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_234668:
    // 0x234668: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x234668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_23466c:
    // 0x23466c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x23466cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_234670:
    // 0x234670: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x234670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_234674:
    // 0x234674: 0x40f809  jalr        $v0
label_234678:
    if (ctx->pc == 0x234678u) {
        ctx->pc = 0x234678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234674u;
        // 0x234678: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23467Cu;
        goto label_23467c;
    }
    ctx->pc = 0x234674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23467Cu);
        ctx->pc = 0x234678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234674u;
        // 0x234678: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234674u, 0x23467Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23467Cu;
label_23467c:
    // 0x23467c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x23467cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_234680:
    // 0x234680: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x234680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_234684:
    // 0x234684: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x234684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_234688:
    // 0x234688: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x234688u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23468c:
    // 0x23468c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23468cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234690:
    // 0x234690: 0xac620238  sw          $v0, 0x238($v1)
    ctx->pc = 0x234690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 568), GPR_U32(ctx, 2));
label_234694:
    // 0x234694: 0x3e00008  jr          $ra
label_234698:
    if (ctx->pc == 0x234698u) {
        ctx->pc = 0x234698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234694u;
        // 0x234698: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23469Cu;
        goto label_23469c;
    }
    ctx->pc = 0x234694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234694u;
        // 0x234698: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23469Cu;
label_23469c:
    // 0x23469c: 0x0  nop
    ctx->pc = 0x23469cu;
    // NOP
    ctx->pc = 0x2346a0u;
}
