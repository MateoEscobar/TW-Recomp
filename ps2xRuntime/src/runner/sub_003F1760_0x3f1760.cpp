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

// Function: sub_003F1760
// Address: 0x3f1760 - 0x3f17e0
void sub_003F1760_0x3f1760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1760_0x3f1760");
#endif

    switch (ctx->pc) {
        case 0x3f1760u: goto label_3f1760;
        case 0x3f1764u: goto label_3f1764;
        case 0x3f1768u: goto label_3f1768;
        case 0x3f176cu: goto label_3f176c;
        case 0x3f1770u: goto label_3f1770;
        case 0x3f1774u: goto label_3f1774;
        case 0x3f1778u: goto label_3f1778;
        case 0x3f177cu: goto label_3f177c;
        case 0x3f1780u: goto label_3f1780;
        case 0x3f1784u: goto label_3f1784;
        case 0x3f1788u: goto label_3f1788;
        case 0x3f178cu: goto label_3f178c;
        case 0x3f1790u: goto label_3f1790;
        case 0x3f1794u: goto label_3f1794;
        case 0x3f1798u: goto label_3f1798;
        case 0x3f179cu: goto label_3f179c;
        case 0x3f17a0u: goto label_3f17a0;
        case 0x3f17a4u: goto label_3f17a4;
        case 0x3f17a8u: goto label_3f17a8;
        case 0x3f17acu: goto label_3f17ac;
        case 0x3f17b0u: goto label_3f17b0;
        case 0x3f17b4u: goto label_3f17b4;
        case 0x3f17b8u: goto label_3f17b8;
        case 0x3f17bcu: goto label_3f17bc;
        case 0x3f17c0u: goto label_3f17c0;
        case 0x3f17c4u: goto label_3f17c4;
        case 0x3f17c8u: goto label_3f17c8;
        case 0x3f17ccu: goto label_3f17cc;
        case 0x3f17d0u: goto label_3f17d0;
        case 0x3f17d4u: goto label_3f17d4;
        case 0x3f17d8u: goto label_3f17d8;
        case 0x3f17dcu: goto label_3f17dc;
        default: break;
    }

    ctx->pc = 0x3f1760u;

label_3f1760:
    // 0x3f1760: 0x27bdfbd0  addiu       $sp, $sp, -0x430
    ctx->pc = 0x3f1760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966224));
label_3f1764:
    // 0x3f1764: 0x7fb00420  sq          $s0, 0x420($sp)
    ctx->pc = 0x3f1764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 16));
label_3f1768:
    // 0x3f1768: 0xffbf0410  sd          $ra, 0x410($sp)
    ctx->pc = 0x3f1768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
label_3f176c:
    // 0x3f176c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3f176cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f1770:
    // 0x3f1770: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f1770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f1774:
    // 0x3f1774: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_3f1778:
    if (ctx->pc == 0x3F1778u) {
        ctx->pc = 0x3F1778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1774u;
        // 0x3f1778: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F177Cu;
        goto label_3f177c;
    }
    ctx->pc = 0x3F1774u;
    {
        const bool branch_taken_0x3f1774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1774u;
        // 0x3f1778: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1774) {
            ctx->pc = 0x3F17C8u;
            goto label_3f17c8;
        }
    }
    ctx->pc = 0x3F177Cu;
label_3f177c:
    // 0x3f177c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3f177cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f1780:
    // 0x3f1780: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3f1780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3f1784:
    // 0x3f1784: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3f1784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3f1788:
    // 0x3f1788: 0x0  nop
    ctx->pc = 0x3f1788u;
    // NOP
label_3f178c:
    // 0x3f178c: 0x0  nop
    ctx->pc = 0x3f178cu;
    // NOP
label_3f1790:
    // 0x3f1790: 0x0  nop
    ctx->pc = 0x3f1790u;
    // NOP
label_3f1794:
    // 0x3f1794: 0x0  nop
    ctx->pc = 0x3f1794u;
    // NOP
label_3f1798:
    // 0x3f1798: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3f179c:
    if (ctx->pc == 0x3F179Cu) {
        ctx->pc = 0x3F179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1798u;
        // 0x3f179c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F17A0u;
        goto label_3f17a0;
    }
    ctx->pc = 0x3F1798u;
    {
        const bool branch_taken_0x3f1798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3F179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1798u;
        // 0x3f179c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1798) {
            ctx->pc = 0x3F1788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f1788;
        }
    }
    ctx->pc = 0x3F17A0u;
label_3f17a0:
    // 0x3f17a0: 0xc138ddc  jal         func_4E3770
label_3f17a4:
    if (ctx->pc == 0x3F17A4u) {
        ctx->pc = 0x3F17A8u;
        goto label_3f17a8;
    }
    ctx->pc = 0x3F17A0u;
    SET_GPR_U32(ctx, 31, 0x3F17A8u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3F17A0u, 0x3F17A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F17A8u;
label_3f17a8:
    // 0x3f17a8: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x3f17a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f17ac:
    // 0x3f17ac: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x3f17acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3f17b0:
    // 0x3f17b0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3f17b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f17b4:
    // 0x3f17b4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3f17b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3f17b8:
    // 0x3f17b8: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3f17b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3f17bc:
    // 0x3f17bc: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3f17bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3f17c0:
    // 0x3f17c0: 0x60f809  jalr        $v1
label_3f17c4:
    if (ctx->pc == 0x3F17C4u) {
        ctx->pc = 0x3F17C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F17C0u;
        // 0x3f17c4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F17C8u;
        goto label_3f17c8;
    }
    ctx->pc = 0x3F17C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3F17C8u);
        ctx->pc = 0x3F17C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F17C0u;
        // 0x3f17c4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F17C0u, 0x3F17C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F17C8u;
label_3f17c8:
    // 0x3f17c8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x3f17c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_3f17cc:
    // 0x3f17cc: 0x7bb00420  lq          $s0, 0x420($sp)
    ctx->pc = 0x3f17ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3f17d0:
    // 0x3f17d0: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x3f17d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_3f17d4:
    // 0x3f17d4: 0x3e00008  jr          $ra
label_3f17d8:
    if (ctx->pc == 0x3F17D8u) {
        ctx->pc = 0x3F17D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F17D4u;
        // 0x3f17d8: 0x27bd0430  addiu       $sp, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F17DCu;
        goto label_3f17dc;
    }
    ctx->pc = 0x3F17D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F17D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F17D4u;
        // 0x3f17d8: 0x27bd0430  addiu       $sp, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F17D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F17DCu;
label_3f17dc:
    // 0x3f17dc: 0x0  nop
    ctx->pc = 0x3f17dcu;
    // NOP
    ctx->pc = 0x3f17e0u;
}
