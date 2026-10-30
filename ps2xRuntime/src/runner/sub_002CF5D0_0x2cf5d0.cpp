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

// Function: sub_002CF5D0
// Address: 0x2cf5d0 - 0x2cf690
void sub_002CF5D0_0x2cf5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF5D0_0x2cf5d0");
#endif

    switch (ctx->pc) {
        case 0x2cf5d0u: goto label_2cf5d0;
        case 0x2cf5d4u: goto label_2cf5d4;
        case 0x2cf5d8u: goto label_2cf5d8;
        case 0x2cf5dcu: goto label_2cf5dc;
        case 0x2cf5e0u: goto label_2cf5e0;
        case 0x2cf5e4u: goto label_2cf5e4;
        case 0x2cf5e8u: goto label_2cf5e8;
        case 0x2cf5ecu: goto label_2cf5ec;
        case 0x2cf5f0u: goto label_2cf5f0;
        case 0x2cf5f4u: goto label_2cf5f4;
        case 0x2cf5f8u: goto label_2cf5f8;
        case 0x2cf5fcu: goto label_2cf5fc;
        case 0x2cf600u: goto label_2cf600;
        case 0x2cf604u: goto label_2cf604;
        case 0x2cf608u: goto label_2cf608;
        case 0x2cf60cu: goto label_2cf60c;
        case 0x2cf610u: goto label_2cf610;
        case 0x2cf614u: goto label_2cf614;
        case 0x2cf618u: goto label_2cf618;
        case 0x2cf61cu: goto label_2cf61c;
        case 0x2cf620u: goto label_2cf620;
        case 0x2cf624u: goto label_2cf624;
        case 0x2cf628u: goto label_2cf628;
        case 0x2cf62cu: goto label_2cf62c;
        case 0x2cf630u: goto label_2cf630;
        case 0x2cf634u: goto label_2cf634;
        case 0x2cf638u: goto label_2cf638;
        case 0x2cf63cu: goto label_2cf63c;
        case 0x2cf640u: goto label_2cf640;
        case 0x2cf644u: goto label_2cf644;
        case 0x2cf648u: goto label_2cf648;
        case 0x2cf64cu: goto label_2cf64c;
        case 0x2cf650u: goto label_2cf650;
        case 0x2cf654u: goto label_2cf654;
        case 0x2cf658u: goto label_2cf658;
        case 0x2cf65cu: goto label_2cf65c;
        case 0x2cf660u: goto label_2cf660;
        case 0x2cf664u: goto label_2cf664;
        case 0x2cf668u: goto label_2cf668;
        case 0x2cf66cu: goto label_2cf66c;
        case 0x2cf670u: goto label_2cf670;
        case 0x2cf674u: goto label_2cf674;
        case 0x2cf678u: goto label_2cf678;
        case 0x2cf67cu: goto label_2cf67c;
        case 0x2cf680u: goto label_2cf680;
        case 0x2cf684u: goto label_2cf684;
        case 0x2cf688u: goto label_2cf688;
        case 0x2cf68cu: goto label_2cf68c;
        default: break;
    }

    ctx->pc = 0x2cf5d0u;

label_2cf5d0:
    // 0x2cf5d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cf5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2cf5d4:
    // 0x2cf5d4: 0x3c05fffb  lui         $a1, 0xFFFB
    ctx->pc = 0x2cf5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65531 << 16));
label_2cf5d8:
    // 0x2cf5d8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2cf5d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_2cf5dc:
    // 0x2cf5dc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2cf5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2cf5e0:
    // 0x2cf5e0: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x2cf5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_2cf5e4:
    // 0x2cf5e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2cf5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2cf5e8:
    // 0x2cf5e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2cf5e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf5ec:
    // 0x2cf5ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2cf5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2cf5f0:
    // 0x2cf5f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cf5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2cf5f4:
    // 0x2cf5f4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2cf5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cf5f8:
    // 0x2cf5f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cf5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cf5fc:
    // 0x2cf5fc: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x2cf5fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
label_2cf600:
    // 0x2cf600: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2cf600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_2cf604:
    // 0x2cf604: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x2cf604u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
label_2cf608:
    // 0x2cf608: 0x8cc5bd30  lw          $a1, -0x42D0($a2)
    ctx->pc = 0x2cf608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294950192)));
label_2cf60c:
    // 0x2cf60c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2cf60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cf610:
    // 0x2cf610: 0xac450128  sw          $a1, 0x128($v0)
    ctx->pc = 0x2cf610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 5));
label_2cf614:
    // 0x2cf614: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x2cf614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2cf618:
    // 0x2cf618: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_2cf61c:
    if (ctx->pc == 0x2CF61Cu) {
        ctx->pc = 0x2CF61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF618u;
        // 0x2cf61c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF620u;
        goto label_2cf620;
    }
    ctx->pc = 0x2CF618u;
    {
        const bool branch_taken_0x2cf618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF618u;
        // 0x2cf61c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf618) {
            ctx->pc = 0x2CF678u;
            goto label_2cf678;
        }
    }
    ctx->pc = 0x2CF620u;
label_2cf620:
    // 0x2cf620: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x2cf620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2cf624:
    // 0x2cf624: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2cf628:
    if (ctx->pc == 0x2CF628u) {
        ctx->pc = 0x2CF628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF624u;
        // 0x2cf628: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF62Cu;
        goto label_2cf62c;
    }
    ctx->pc = 0x2CF624u;
    {
        const bool branch_taken_0x2cf624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF624u;
        // 0x2cf628: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf624) {
            ctx->pc = 0x2CF678u;
            goto label_2cf678;
        }
    }
    ctx->pc = 0x2CF62Cu;
label_2cf62c:
    // 0x2cf62c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2cf62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cf630:
    // 0x2cf630: 0x8c512b04  lw          $s1, 0x2B04($v0)
    ctx->pc = 0x2cf630u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_2cf634:
    // 0x2cf634: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2cf634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cf638:
    // 0x2cf638: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2cf638u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cf63c:
    // 0x2cf63c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2cf63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2cf640:
    // 0x2cf640: 0x86050098  lh          $a1, 0x98($s0)
    ctx->pc = 0x2cf640u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
label_2cf644:
    // 0x2cf644: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cf644u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cf648:
    // 0x2cf648: 0x26100098  addiu       $s0, $s0, 0x98
    ctx->pc = 0x2cf648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
label_2cf64c:
    // 0x2cf64c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cf64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cf650:
    // 0x2cf650: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x2cf650u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_2cf654:
    // 0x2cf654: 0x40f809  jalr        $v0
label_2cf658:
    if (ctx->pc == 0x2CF658u) {
        ctx->pc = 0x2CF658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF654u;
        // 0x2cf658: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF65Cu;
        goto label_2cf65c;
    }
    ctx->pc = 0x2CF654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CF65Cu);
        ctx->pc = 0x2CF658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF654u;
        // 0x2cf658: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF654u, 0x2CF65Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CF65Cu;
label_2cf65c:
    // 0x2cf65c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2cf65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2cf660:
    // 0x2cf660: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cf660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cf664:
    // 0x2cf664: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x2cf664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2cf668:
    // 0x2cf668: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2cf668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cf66c:
    // 0x2cf66c: 0x60f809  jalr        $v1
label_2cf670:
    if (ctx->pc == 0x2CF670u) {
        ctx->pc = 0x2CF670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF66Cu;
        // 0x2cf670: 0x240701f4  addiu       $a3, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF674u;
        goto label_2cf674;
    }
    ctx->pc = 0x2CF66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2CF674u);
        ctx->pc = 0x2CF670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF66Cu;
        // 0x2cf670: 0x240701f4  addiu       $a3, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF66Cu, 0x2CF674u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CF674u;
label_2cf674:
    // 0x2cf674: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2cf674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2cf678:
    // 0x2cf678: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2cf678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cf67c:
    // 0x2cf67c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2cf67cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cf680:
    // 0x2cf680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cf680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cf684:
    // 0x2cf684: 0x3e00008  jr          $ra
label_2cf688:
    if (ctx->pc == 0x2CF688u) {
        ctx->pc = 0x2CF688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF684u;
        // 0x2cf688: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CF68Cu;
        goto label_2cf68c;
    }
    ctx->pc = 0x2CF684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF684u;
        // 0x2cf688: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF68Cu;
label_2cf68c:
    // 0x2cf68c: 0x0  nop
    ctx->pc = 0x2cf68cu;
    // NOP
    ctx->pc = 0x2cf690u;
}
