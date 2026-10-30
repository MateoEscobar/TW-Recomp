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

// Function: sub_002077B8
// Address: 0x2077b8 - 0x2078c0
void sub_002077B8_0x2077b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002077B8_0x2077b8");
#endif

    switch (ctx->pc) {
        case 0x2077b8u: goto label_2077b8;
        case 0x2077bcu: goto label_2077bc;
        case 0x2077c0u: goto label_2077c0;
        case 0x2077c4u: goto label_2077c4;
        case 0x2077c8u: goto label_2077c8;
        case 0x2077ccu: goto label_2077cc;
        case 0x2077d0u: goto label_2077d0;
        case 0x2077d4u: goto label_2077d4;
        case 0x2077d8u: goto label_2077d8;
        case 0x2077dcu: goto label_2077dc;
        case 0x2077e0u: goto label_2077e0;
        case 0x2077e4u: goto label_2077e4;
        case 0x2077e8u: goto label_2077e8;
        case 0x2077ecu: goto label_2077ec;
        case 0x2077f0u: goto label_2077f0;
        case 0x2077f4u: goto label_2077f4;
        case 0x2077f8u: goto label_2077f8;
        case 0x2077fcu: goto label_2077fc;
        case 0x207800u: goto label_207800;
        case 0x207804u: goto label_207804;
        case 0x207808u: goto label_207808;
        case 0x20780cu: goto label_20780c;
        case 0x207810u: goto label_207810;
        case 0x207814u: goto label_207814;
        case 0x207818u: goto label_207818;
        case 0x20781cu: goto label_20781c;
        case 0x207820u: goto label_207820;
        case 0x207824u: goto label_207824;
        case 0x207828u: goto label_207828;
        case 0x20782cu: goto label_20782c;
        case 0x207830u: goto label_207830;
        case 0x207834u: goto label_207834;
        case 0x207838u: goto label_207838;
        case 0x20783cu: goto label_20783c;
        case 0x207840u: goto label_207840;
        case 0x207844u: goto label_207844;
        case 0x207848u: goto label_207848;
        case 0x20784cu: goto label_20784c;
        case 0x207850u: goto label_207850;
        case 0x207854u: goto label_207854;
        case 0x207858u: goto label_207858;
        case 0x20785cu: goto label_20785c;
        case 0x207860u: goto label_207860;
        case 0x207864u: goto label_207864;
        case 0x207868u: goto label_207868;
        case 0x20786cu: goto label_20786c;
        case 0x207870u: goto label_207870;
        case 0x207874u: goto label_207874;
        case 0x207878u: goto label_207878;
        case 0x20787cu: goto label_20787c;
        case 0x207880u: goto label_207880;
        case 0x207884u: goto label_207884;
        case 0x207888u: goto label_207888;
        case 0x20788cu: goto label_20788c;
        case 0x207890u: goto label_207890;
        case 0x207894u: goto label_207894;
        case 0x207898u: goto label_207898;
        case 0x20789cu: goto label_20789c;
        case 0x2078a0u: goto label_2078a0;
        case 0x2078a4u: goto label_2078a4;
        case 0x2078a8u: goto label_2078a8;
        case 0x2078acu: goto label_2078ac;
        case 0x2078b0u: goto label_2078b0;
        case 0x2078b4u: goto label_2078b4;
        case 0x2078b8u: goto label_2078b8;
        case 0x2078bcu: goto label_2078bc;
        default: break;
    }

    ctx->pc = 0x2077b8u;

label_2077b8:
    // 0x2077b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2077b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2077bc:
    // 0x2077bc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2077bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2077c0:
    // 0x2077c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2077c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2077c4:
    // 0x2077c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2077c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2077c8:
    // 0x2077c8: 0xc06a38c  jal         func_1A8E30
label_2077cc:
    if (ctx->pc == 0x2077CCu) {
        ctx->pc = 0x2077CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2077C8u;
        // 0x2077cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2077D0u;
        goto label_2077d0;
    }
    ctx->pc = 0x2077C8u;
    SET_GPR_U32(ctx, 31, 0x2077D0u);
    ctx->pc = 0x2077CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2077C8u;
    // 0x2077cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x2077C8u, 0x2077D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2077D0u;
label_2077d0:
    // 0x2077d0: 0x26110078  addiu       $s1, $s0, 0x78
    ctx->pc = 0x2077d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_2077d4:
    // 0x2077d4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2077d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2077d8:
    // 0x2077d8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2077d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_2077dc:
    // 0x2077dc: 0x24638778  addiu       $v1, $v1, -0x7888
    ctx->pc = 0x2077dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936440));
label_2077e0:
    // 0x2077e0: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x2077e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_2077e4:
    // 0x2077e4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2077e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2077e8:
    // 0x2077e8: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2077e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_2077ec:
    // 0x2077ec: 0x24428510  addiu       $v0, $v0, -0x7AF0
    ctx->pc = 0x2077ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935824));
label_2077f0:
    // 0x2077f0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2077f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2077f4:
    // 0x2077f4: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2077f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_2077f8:
    // 0x2077f8: 0x2463cc88  addiu       $v1, $v1, -0x3378
    ctx->pc = 0x2077f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954120));
label_2077fc:
    // 0x2077fc: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2077fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_207800:
    // 0x207800: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x207800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_207804:
    // 0x207804: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x207804u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_207808:
    // 0x207808: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x207808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20780c:
    // 0x20780c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x20780cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_207810:
    // 0x207810: 0x3c080056  lui         $t0, 0x56
    ctx->pc = 0x207810u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)86 << 16));
label_207814:
    // 0x207814: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x207814u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_207818:
    // 0x207818: 0x3c0a0056  lui         $t2, 0x56
    ctx->pc = 0x207818u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)86 << 16));
label_20781c:
    // 0x20781c: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x20781cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_207820:
    // 0x207820: 0x24a58b20  addiu       $a1, $a1, -0x74E0
    ctx->pc = 0x207820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937376));
label_207824:
    // 0x207824: 0x8c4cb9c0  lw          $t4, -0x4640($v0)
    ctx->pc = 0x207824u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_207828:
    // 0x207828: 0x25088b28  addiu       $t0, $t0, -0x74D8
    ctx->pc = 0x207828u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294937384));
label_20782c:
    // 0x20782c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x20782cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_207830:
    // 0x207830: 0x254a8b50  addiu       $t2, $t2, -0x74B0
    ctx->pc = 0x207830u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294937424));
label_207834:
    // 0x207834: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x207834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_207838:
    // 0x207838: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x207838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20783c:
    // 0x20783c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x20783cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_207840:
    // 0x207840: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x207840u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_207844:
    // 0x207844: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x207844u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207848:
    // 0x207848: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x207848u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_20784c:
    // 0x20784c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x20784cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_207850:
    // 0x207850: 0x40f809  jalr        $v0
label_207854:
    if (ctx->pc == 0x207854u) {
        ctx->pc = 0x207854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207850u;
        // 0x207854: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207858u;
        goto label_207858;
    }
    ctx->pc = 0x207850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207858u);
        ctx->pc = 0x207854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207850u;
        // 0x207854: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207850u, 0x207858u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207858u;
label_207858:
    // 0x207858: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x207858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_20785c:
    // 0x20785c: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x20785cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
label_207860:
    // 0x207860: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x207860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_207864:
    // 0x207864: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x207864u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_207868:
    // 0x207868: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x207868u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
label_20786c:
    // 0x20786c: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x20786cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_207870:
    // 0x207870: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x207870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_207874:
    // 0x207874: 0x24e7e028  addiu       $a3, $a3, -0x1FD8
    ctx->pc = 0x207874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959144));
label_207878:
    // 0x207878: 0x24c6e050  addiu       $a2, $a2, -0x1FB0
    ctx->pc = 0x207878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959184));
label_20787c:
    // 0x20787c: 0x24a5e080  addiu       $a1, $a1, -0x1F80
    ctx->pc = 0x20787cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959232));
label_207880:
    // 0x207880: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x207880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_207884:
    // 0x207884: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x207884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_207888:
    // 0x207888: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x207888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20788c:
    // 0x20788c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x20788cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_207890:
    // 0x207890: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x207890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_207894:
    // 0x207894: 0xac630008  sw          $v1, 0x8($v1)
    ctx->pc = 0x207894u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 3));
label_207898:
    // 0x207898: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x207898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20789c:
    // 0x20789c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20789cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2078a0:
    // 0x2078a0: 0xac84000c  sw          $a0, 0xC($a0)
    ctx->pc = 0x2078a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 4));
label_2078a4:
    // 0x2078a4: 0xae07006c  sw          $a3, 0x6C($s0)
    ctx->pc = 0x2078a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 7));
label_2078a8:
    // 0x2078a8: 0xae060088  sw          $a2, 0x88($s0)
    ctx->pc = 0x2078a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 6));
label_2078ac:
    // 0x2078ac: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2078acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_2078b0:
    // 0x2078b0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2078b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2078b4:
    // 0x2078b4: 0x3e00008  jr          $ra
label_2078b8:
    if (ctx->pc == 0x2078B8u) {
        ctx->pc = 0x2078B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2078B4u;
        // 0x2078b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2078BCu;
        goto label_2078bc;
    }
    ctx->pc = 0x2078B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2078B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2078B4u;
        // 0x2078b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2078B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2078BCu;
label_2078bc:
    // 0x2078bc: 0x0  nop
    ctx->pc = 0x2078bcu;
    // NOP
    ctx->pc = 0x2078c0u;
}
