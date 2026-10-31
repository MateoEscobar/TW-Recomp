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

// Function: sub_0020A5C0
// Address: 0x20a5c0 - 0x20a6c8
void sub_0020A5C0_0x20a5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A5C0_0x20a5c0");
#endif

    switch (ctx->pc) {
        case 0x20a5c0u: goto label_20a5c0;
        case 0x20a5c4u: goto label_20a5c4;
        case 0x20a5c8u: goto label_20a5c8;
        case 0x20a5ccu: goto label_20a5cc;
        case 0x20a5d0u: goto label_20a5d0;
        case 0x20a5d4u: goto label_20a5d4;
        case 0x20a5d8u: goto label_20a5d8;
        case 0x20a5dcu: goto label_20a5dc;
        case 0x20a5e0u: goto label_20a5e0;
        case 0x20a5e4u: goto label_20a5e4;
        case 0x20a5e8u: goto label_20a5e8;
        case 0x20a5ecu: goto label_20a5ec;
        case 0x20a5f0u: goto label_20a5f0;
        case 0x20a5f4u: goto label_20a5f4;
        case 0x20a5f8u: goto label_20a5f8;
        case 0x20a5fcu: goto label_20a5fc;
        case 0x20a600u: goto label_20a600;
        case 0x20a604u: goto label_20a604;
        case 0x20a608u: goto label_20a608;
        case 0x20a60cu: goto label_20a60c;
        case 0x20a610u: goto label_20a610;
        case 0x20a614u: goto label_20a614;
        case 0x20a618u: goto label_20a618;
        case 0x20a61cu: goto label_20a61c;
        case 0x20a620u: goto label_20a620;
        case 0x20a624u: goto label_20a624;
        case 0x20a628u: goto label_20a628;
        case 0x20a62cu: goto label_20a62c;
        case 0x20a630u: goto label_20a630;
        case 0x20a634u: goto label_20a634;
        case 0x20a638u: goto label_20a638;
        case 0x20a63cu: goto label_20a63c;
        case 0x20a640u: goto label_20a640;
        case 0x20a644u: goto label_20a644;
        case 0x20a648u: goto label_20a648;
        case 0x20a64cu: goto label_20a64c;
        case 0x20a650u: goto label_20a650;
        case 0x20a654u: goto label_20a654;
        case 0x20a658u: goto label_20a658;
        case 0x20a65cu: goto label_20a65c;
        case 0x20a660u: goto label_20a660;
        case 0x20a664u: goto label_20a664;
        case 0x20a668u: goto label_20a668;
        case 0x20a66cu: goto label_20a66c;
        case 0x20a670u: goto label_20a670;
        case 0x20a674u: goto label_20a674;
        case 0x20a678u: goto label_20a678;
        case 0x20a67cu: goto label_20a67c;
        case 0x20a680u: goto label_20a680;
        case 0x20a684u: goto label_20a684;
        case 0x20a688u: goto label_20a688;
        case 0x20a68cu: goto label_20a68c;
        case 0x20a690u: goto label_20a690;
        case 0x20a694u: goto label_20a694;
        case 0x20a698u: goto label_20a698;
        case 0x20a69cu: goto label_20a69c;
        case 0x20a6a0u: goto label_20a6a0;
        case 0x20a6a4u: goto label_20a6a4;
        case 0x20a6a8u: goto label_20a6a8;
        case 0x20a6acu: goto label_20a6ac;
        case 0x20a6b0u: goto label_20a6b0;
        case 0x20a6b4u: goto label_20a6b4;
        case 0x20a6b8u: goto label_20a6b8;
        case 0x20a6bcu: goto label_20a6bc;
        case 0x20a6c0u: goto label_20a6c0;
        case 0x20a6c4u: goto label_20a6c4;
        default: break;
    }

    ctx->pc = 0x20a5c0u;

label_20a5c0:
    // 0x20a5c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20a5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_20a5c4:
    // 0x20a5c4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x20a5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_20a5c8:
    // 0x20a5c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20a5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20a5cc:
    // 0x20a5cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20a5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20a5d0:
    // 0x20a5d0: 0xc06a38c  jal         func_1A8E30
label_20a5d4:
    if (ctx->pc == 0x20A5D4u) {
        ctx->pc = 0x20A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A5D0u;
        // 0x20a5d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A5D8u;
        goto label_20a5d8;
    }
    ctx->pc = 0x20A5D0u;
    SET_GPR_U32(ctx, 31, 0x20A5D8u);
    ctx->pc = 0x20A5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A5D0u;
    // 0x20a5d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x20A5D0u, 0x20A5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A5D8u;
label_20a5d8:
    // 0x20a5d8: 0x26110078  addiu       $s1, $s0, 0x78
    ctx->pc = 0x20a5d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_20a5dc:
    // 0x20a5dc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x20a5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_20a5e0:
    // 0x20a5e0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x20a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_20a5e4:
    // 0x20a5e4: 0x24638778  addiu       $v1, $v1, -0x7888
    ctx->pc = 0x20a5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936440));
label_20a5e8:
    // 0x20a5e8: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x20a5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_20a5ec:
    // 0x20a5ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x20a5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_20a5f0:
    // 0x20a5f0: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x20a5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_20a5f4:
    // 0x20a5f4: 0x24428510  addiu       $v0, $v0, -0x7AF0
    ctx->pc = 0x20a5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935824));
label_20a5f8:
    // 0x20a5f8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x20a5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_20a5fc:
    // 0x20a5fc: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x20a5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_20a600:
    // 0x20a600: 0x2463cc88  addiu       $v1, $v1, -0x3378
    ctx->pc = 0x20a600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954120));
label_20a604:
    // 0x20a604: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x20a604u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_20a608:
    // 0x20a608: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x20a608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_20a60c:
    // 0x20a60c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x20a60cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_20a610:
    // 0x20a610: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x20a610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20a614:
    // 0x20a614: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x20a614u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_20a618:
    // 0x20a618: 0x3c080056  lui         $t0, 0x56
    ctx->pc = 0x20a618u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)86 << 16));
label_20a61c:
    // 0x20a61c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x20a61cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_20a620:
    // 0x20a620: 0x3c0a0056  lui         $t2, 0x56
    ctx->pc = 0x20a620u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)86 << 16));
label_20a624:
    // 0x20a624: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x20a624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_20a628:
    // 0x20a628: 0x24a59008  addiu       $a1, $a1, -0x6FF8
    ctx->pc = 0x20a628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938632));
label_20a62c:
    // 0x20a62c: 0x8c4cb9c0  lw          $t4, -0x4640($v0)
    ctx->pc = 0x20a62cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_20a630:
    // 0x20a630: 0x25089010  addiu       $t0, $t0, -0x6FF0
    ctx->pc = 0x20a630u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294938640));
label_20a634:
    // 0x20a634: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x20a634u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_20a638:
    // 0x20a638: 0x254a9038  addiu       $t2, $t2, -0x6FC8
    ctx->pc = 0x20a638u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294938680));
label_20a63c:
    // 0x20a63c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x20a63cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_20a640:
    // 0x20a640: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x20a640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20a644:
    // 0x20a644: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x20a644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_20a648:
    // 0x20a648: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x20a648u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_20a64c:
    // 0x20a64c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20a64cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a650:
    // 0x20a650: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x20a650u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_20a654:
    // 0x20a654: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x20a654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_20a658:
    // 0x20a658: 0x40f809  jalr        $v0
label_20a65c:
    if (ctx->pc == 0x20A65Cu) {
        ctx->pc = 0x20A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A658u;
        // 0x20a65c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A660u;
        goto label_20a660;
    }
    ctx->pc = 0x20A658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20A660u);
        ctx->pc = 0x20A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A658u;
        // 0x20a65c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A658u, 0x20A660u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A660u;
label_20a660:
    // 0x20a660: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x20a660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_20a664:
    // 0x20a664: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x20a664u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
label_20a668:
    // 0x20a668: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x20a668u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_20a66c:
    // 0x20a66c: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x20a66cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_20a670:
    // 0x20a670: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x20a670u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
label_20a674:
    // 0x20a674: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x20a674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_20a678:
    // 0x20a678: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x20a678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_20a67c:
    // 0x20a67c: 0x24e7e470  addiu       $a3, $a3, -0x1B90
    ctx->pc = 0x20a67cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960240));
label_20a680:
    // 0x20a680: 0x24c6e498  addiu       $a2, $a2, -0x1B68
    ctx->pc = 0x20a680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960280));
label_20a684:
    // 0x20a684: 0x24a5e4c8  addiu       $a1, $a1, -0x1B38
    ctx->pc = 0x20a684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960328));
label_20a688:
    // 0x20a688: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x20a688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20a68c:
    // 0x20a68c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20a68cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a690:
    // 0x20a690: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20a690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20a694:
    // 0x20a694: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x20a694u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_20a698:
    // 0x20a698: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x20a698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20a69c:
    // 0x20a69c: 0xac630008  sw          $v1, 0x8($v1)
    ctx->pc = 0x20a69cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 3));
label_20a6a0:
    // 0x20a6a0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x20a6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20a6a4:
    // 0x20a6a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20a6a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20a6a8:
    // 0x20a6a8: 0xac84000c  sw          $a0, 0xC($a0)
    ctx->pc = 0x20a6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 4));
label_20a6ac:
    // 0x20a6ac: 0xae07006c  sw          $a3, 0x6C($s0)
    ctx->pc = 0x20a6acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 7));
label_20a6b0:
    // 0x20a6b0: 0xae060088  sw          $a2, 0x88($s0)
    ctx->pc = 0x20a6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 6));
label_20a6b4:
    // 0x20a6b4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x20a6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_20a6b8:
    // 0x20a6b8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x20a6b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20a6bc:
    // 0x20a6bc: 0x3e00008  jr          $ra
label_20a6c0:
    if (ctx->pc == 0x20A6C0u) {
        ctx->pc = 0x20A6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A6BCu;
        // 0x20a6c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A6C4u;
        goto label_20a6c4;
    }
    ctx->pc = 0x20A6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A6BCu;
        // 0x20a6c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A6C4u;
label_20a6c4:
    // 0x20a6c4: 0x0  nop
    ctx->pc = 0x20a6c4u;
    // NOP
    ctx->pc = 0x20a6c8u;
}
