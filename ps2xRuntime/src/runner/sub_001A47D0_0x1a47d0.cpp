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

// Function: sub_001A47D0
// Address: 0x1a47d0 - 0x1a4890
void sub_001A47D0_0x1a47d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A47D0_0x1a47d0");
#endif

    switch (ctx->pc) {
        case 0x1a47d0u: goto label_1a47d0;
        case 0x1a47d4u: goto label_1a47d4;
        case 0x1a47d8u: goto label_1a47d8;
        case 0x1a47dcu: goto label_1a47dc;
        case 0x1a47e0u: goto label_1a47e0;
        case 0x1a47e4u: goto label_1a47e4;
        case 0x1a47e8u: goto label_1a47e8;
        case 0x1a47ecu: goto label_1a47ec;
        case 0x1a47f0u: goto label_1a47f0;
        case 0x1a47f4u: goto label_1a47f4;
        case 0x1a47f8u: goto label_1a47f8;
        case 0x1a47fcu: goto label_1a47fc;
        case 0x1a4800u: goto label_1a4800;
        case 0x1a4804u: goto label_1a4804;
        case 0x1a4808u: goto label_1a4808;
        case 0x1a480cu: goto label_1a480c;
        case 0x1a4810u: goto label_1a4810;
        case 0x1a4814u: goto label_1a4814;
        case 0x1a4818u: goto label_1a4818;
        case 0x1a481cu: goto label_1a481c;
        case 0x1a4820u: goto label_1a4820;
        case 0x1a4824u: goto label_1a4824;
        case 0x1a4828u: goto label_1a4828;
        case 0x1a482cu: goto label_1a482c;
        case 0x1a4830u: goto label_1a4830;
        case 0x1a4834u: goto label_1a4834;
        case 0x1a4838u: goto label_1a4838;
        case 0x1a483cu: goto label_1a483c;
        case 0x1a4840u: goto label_1a4840;
        case 0x1a4844u: goto label_1a4844;
        case 0x1a4848u: goto label_1a4848;
        case 0x1a484cu: goto label_1a484c;
        case 0x1a4850u: goto label_1a4850;
        case 0x1a4854u: goto label_1a4854;
        case 0x1a4858u: goto label_1a4858;
        case 0x1a485cu: goto label_1a485c;
        case 0x1a4860u: goto label_1a4860;
        case 0x1a4864u: goto label_1a4864;
        case 0x1a4868u: goto label_1a4868;
        case 0x1a486cu: goto label_1a486c;
        case 0x1a4870u: goto label_1a4870;
        case 0x1a4874u: goto label_1a4874;
        case 0x1a4878u: goto label_1a4878;
        case 0x1a487cu: goto label_1a487c;
        case 0x1a4880u: goto label_1a4880;
        case 0x1a4884u: goto label_1a4884;
        case 0x1a4888u: goto label_1a4888;
        case 0x1a488cu: goto label_1a488c;
        default: break;
    }

    ctx->pc = 0x1a47d0u;

label_1a47d0:
    // 0x1a47d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a47d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a47d4:
    // 0x1a47d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1a47d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1a47d8:
    // 0x1a47d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a47d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1a47dc:
    // 0x1a47dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a47dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a47e0:
    // 0x1a47e0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1a47e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1a47e4:
    // 0x1a47e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a47e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a47e8:
    // 0x1a47e8: 0xc06ec94  jal         func_1BB250
label_1a47ec:
    if (ctx->pc == 0x1A47ECu) {
        ctx->pc = 0x1A47ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A47E8u;
        // 0x1a47ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A47F0u;
        goto label_1a47f0;
    }
    ctx->pc = 0x1A47E8u;
    SET_GPR_U32(ctx, 31, 0x1A47F0u);
    ctx->pc = 0x1A47ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A47E8u;
    // 0x1a47ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1A47E8u, 0x1A47F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A47F0u;
label_1a47f0:
    // 0x1a47f0: 0xc10c3ac  jal         func_430EB0
label_1a47f4:
    if (ctx->pc == 0x1A47F4u) {
        ctx->pc = 0x1A47F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A47F0u;
        // 0x1a47f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A47F8u;
        goto label_1a47f8;
    }
    ctx->pc = 0x1A47F0u;
    SET_GPR_U32(ctx, 31, 0x1A47F8u);
    ctx->pc = 0x1A47F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A47F0u;
    // 0x1a47f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1A47F0u, 0x1A47F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A47F8u;
label_1a47f8:
    // 0x1a47f8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1a47f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1a47fc:
    // 0x1a47fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a47fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4800:
    // 0x1a4800: 0x8c6c27e4  lw          $t4, 0x27E4($v1)
    ctx->pc = 0x1a4800u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_1a4804:
    // 0x1a4804: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1a4804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1a4808:
    // 0x1a4808: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1a4808u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1a480c:
    // 0x1a480c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1a480cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a4810:
    // 0x1a4810: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1a4810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1a4814:
    // 0x1a4814: 0x240900a2  addiu       $t1, $zero, 0xA2
    ctx->pc = 0x1a4814u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
label_1a4818:
    // 0x1a4818: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a4818u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a481c:
    // 0x1a481c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1a481cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4820:
    // 0x1a4820: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1a4820u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1a4824:
    // 0x1a4824: 0x25083ea0  addiu       $t0, $t0, 0x3EA0
    ctx->pc = 0x1a4824u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16032));
label_1a4828:
    // 0x1a4828: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1a4828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1a482c:
    // 0x1a482c: 0x26460002  addiu       $a2, $s2, 0x2
    ctx->pc = 0x1a482cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_1a4830:
    // 0x1a4830: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x1a4830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
label_1a4834:
    // 0x1a4834: 0x40f809  jalr        $v0
label_1a4838:
    if (ctx->pc == 0x1A4838u) {
        ctx->pc = 0x1A4838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4834u;
        // 0x1a4838: 0x24a53ed0  addiu       $a1, $a1, 0x3ED0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A483Cu;
        goto label_1a483c;
    }
    ctx->pc = 0x1A4834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A483Cu);
        ctx->pc = 0x1A4838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4834u;
        // 0x1a4838: 0x24a53ed0  addiu       $a1, $a1, 0x3ED0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16080));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4834u, 0x1A483Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A483Cu;
label_1a483c:
    // 0x1a483c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a483cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4840:
    // 0x1a4840: 0xc10c3ac  jal         func_430EB0
label_1a4844:
    if (ctx->pc == 0x1A4844u) {
        ctx->pc = 0x1A4844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4840u;
        // 0x1a4844: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4848u;
        goto label_1a4848;
    }
    ctx->pc = 0x1A4840u;
    SET_GPR_U32(ctx, 31, 0x1A4848u);
    ctx->pc = 0x1A4844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4840u;
    // 0x1a4844: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1A4840u, 0x1A4848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4848u;
label_1a4848:
    // 0x1a4848: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x1a4848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_1a484c:
    // 0x1a484c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a484cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4850:
    // 0x1a4850: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a4850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a4854:
    // 0x1a4854: 0xc10c3ac  jal         func_430EB0
label_1a4858:
    if (ctx->pc == 0x1A4858u) {
        ctx->pc = 0x1A4858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4854u;
        // 0x1a4858: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A485Cu;
        goto label_1a485c;
    }
    ctx->pc = 0x1A4854u;
    SET_GPR_U32(ctx, 31, 0x1A485Cu);
    ctx->pc = 0x1A4858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4854u;
    // 0x1a4858: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1A4854u, 0x1A485Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A485Cu;
label_1a485c:
    // 0x1a485c: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x1a485cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_1a4860:
    // 0x1a4860: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a4860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4864:
    // 0x1a4864: 0xc10c4de  jal         func_431378
label_1a4868:
    if (ctx->pc == 0x1A4868u) {
        ctx->pc = 0x1A4868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4864u;
        // 0x1a4868: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A486Cu;
        goto label_1a486c;
    }
    ctx->pc = 0x1A4864u;
    SET_GPR_U32(ctx, 31, 0x1A486Cu);
    ctx->pc = 0x1A4868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4864u;
    // 0x1a4868: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1A4864u, 0x1A486Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A486Cu;
label_1a486c:
    // 0x1a486c: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x1a486cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_1a4870:
    // 0x1a4870: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1a4870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a4874:
    // 0x1a4874: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1a4874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1a4878:
    // 0x1a4878: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a4878u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a487c:
    // 0x1a487c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1a487cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4880:
    // 0x1a4880: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4884:
    // 0x1a4884: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1a4884u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1a4888:
    // 0x1a4888: 0x3e00008  jr          $ra
label_1a488c:
    if (ctx->pc == 0x1A488Cu) {
        ctx->pc = 0x1A488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4888u;
        // 0x1a488c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4890u;
        goto label_fallthrough_0x1a4888;
    }
    ctx->pc = 0x1A4888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4888u;
        // 0x1a488c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a4888:
    ctx->pc = 0x1A4890u;
}
