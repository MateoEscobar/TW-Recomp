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

// Function: sub_002365F0
// Address: 0x2365f0 - 0x236698
void sub_002365F0_0x2365f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002365F0_0x2365f0");
#endif

    switch (ctx->pc) {
        case 0x2365f0u: goto label_2365f0;
        case 0x2365f4u: goto label_2365f4;
        case 0x2365f8u: goto label_2365f8;
        case 0x2365fcu: goto label_2365fc;
        case 0x236600u: goto label_236600;
        case 0x236604u: goto label_236604;
        case 0x236608u: goto label_236608;
        case 0x23660cu: goto label_23660c;
        case 0x236610u: goto label_236610;
        case 0x236614u: goto label_236614;
        case 0x236618u: goto label_236618;
        case 0x23661cu: goto label_23661c;
        case 0x236620u: goto label_236620;
        case 0x236624u: goto label_236624;
        case 0x236628u: goto label_236628;
        case 0x23662cu: goto label_23662c;
        case 0x236630u: goto label_236630;
        case 0x236634u: goto label_236634;
        case 0x236638u: goto label_236638;
        case 0x23663cu: goto label_23663c;
        case 0x236640u: goto label_236640;
        case 0x236644u: goto label_236644;
        case 0x236648u: goto label_236648;
        case 0x23664cu: goto label_23664c;
        case 0x236650u: goto label_236650;
        case 0x236654u: goto label_236654;
        case 0x236658u: goto label_236658;
        case 0x23665cu: goto label_23665c;
        case 0x236660u: goto label_236660;
        case 0x236664u: goto label_236664;
        case 0x236668u: goto label_236668;
        case 0x23666cu: goto label_23666c;
        case 0x236670u: goto label_236670;
        case 0x236674u: goto label_236674;
        case 0x236678u: goto label_236678;
        case 0x23667cu: goto label_23667c;
        case 0x236680u: goto label_236680;
        case 0x236684u: goto label_236684;
        case 0x236688u: goto label_236688;
        case 0x23668cu: goto label_23668c;
        case 0x236690u: goto label_236690;
        case 0x236694u: goto label_236694;
        default: break;
    }

    ctx->pc = 0x2365f0u;

label_2365f0:
    // 0x2365f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2365f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2365f4:
    // 0x2365f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2365f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2365f8:
    // 0x2365f8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2365f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2365fc:
    // 0x2365fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2365fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_236600:
    // 0x236600: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x236600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_236604:
    // 0x236604: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x236604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_236608:
    // 0x236608: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x236608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23660c:
    // 0x23660c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x23660cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236610:
    // 0x236610: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x236610u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_236614:
    // 0x236614: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x236614u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_236618:
    // 0x236618: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x236618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_23661c:
    // 0x23661c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x23661cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_236620:
    // 0x236620: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x236620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_236624:
    // 0x236624: 0x40f809  jalr        $v0
label_236628:
    if (ctx->pc == 0x236628u) {
        ctx->pc = 0x236628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236624u;
        // 0x236628: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23662Cu;
        goto label_23662c;
    }
    ctx->pc = 0x236624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23662Cu);
        ctx->pc = 0x236628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236624u;
        // 0x236628: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236624u, 0x23662Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23662Cu;
label_23662c:
    // 0x23662c: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x23662cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_236630:
    // 0x236630: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x236630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_236634:
    // 0x236634: 0xac620288  sw          $v0, 0x288($v1)
    ctx->pc = 0x236634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 648), GPR_U32(ctx, 2));
label_236638:
    // 0x236638: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x236638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23663c:
    // 0x23663c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x23663cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_236640:
    // 0x236640: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x236640u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_236644:
    // 0x236644: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x236644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_236648:
    // 0x236648: 0x40f809  jalr        $v0
label_23664c:
    if (ctx->pc == 0x23664Cu) {
        ctx->pc = 0x23664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236648u;
        // 0x23664c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236650u;
        goto label_236650;
    }
    ctx->pc = 0x236648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x236650u);
        ctx->pc = 0x23664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236648u;
        // 0x23664c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236648u, 0x236650u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236650u;
label_236650:
    // 0x236650: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x236650u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_236654:
    // 0x236654: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x236654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_236658:
    // 0x236658: 0xac620284  sw          $v0, 0x284($v1)
    ctx->pc = 0x236658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 644), GPR_U32(ctx, 2));
label_23665c:
    // 0x23665c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23665cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_236660:
    // 0x236660: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x236660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_236664:
    // 0x236664: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x236664u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_236668:
    // 0x236668: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x236668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_23666c:
    // 0x23666c: 0x40f809  jalr        $v0
label_236670:
    if (ctx->pc == 0x236670u) {
        ctx->pc = 0x236670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23666Cu;
        // 0x236670: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236674u;
        goto label_236674;
    }
    ctx->pc = 0x23666Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x236674u);
        ctx->pc = 0x236670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23666Cu;
        // 0x236670: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23666Cu, 0x236674u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236674u;
label_236674:
    // 0x236674: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x236674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_236678:
    // 0x236678: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x236678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23667c:
    // 0x23667c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x23667cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_236680:
    // 0x236680: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x236680u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_236684:
    // 0x236684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236688:
    // 0x236688: 0xac620280  sw          $v0, 0x280($v1)
    ctx->pc = 0x236688u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 640), GPR_U32(ctx, 2));
label_23668c:
    // 0x23668c: 0x3e00008  jr          $ra
label_236690:
    if (ctx->pc == 0x236690u) {
        ctx->pc = 0x236690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23668Cu;
        // 0x236690: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236694u;
        goto label_236694;
    }
    ctx->pc = 0x23668Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23668Cu;
        // 0x236690: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23668Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236694u;
label_236694:
    // 0x236694: 0x0  nop
    ctx->pc = 0x236694u;
    // NOP
    ctx->pc = 0x236698u;
}
