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

// Function: sub_002E56F0
// Address: 0x2e56f0 - 0x2e5770
void sub_002E56F0_0x2e56f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E56F0_0x2e56f0");
#endif

    switch (ctx->pc) {
        case 0x2e56f0u: goto label_2e56f0;
        case 0x2e56f4u: goto label_2e56f4;
        case 0x2e56f8u: goto label_2e56f8;
        case 0x2e56fcu: goto label_2e56fc;
        case 0x2e5700u: goto label_2e5700;
        case 0x2e5704u: goto label_2e5704;
        case 0x2e5708u: goto label_2e5708;
        case 0x2e570cu: goto label_2e570c;
        case 0x2e5710u: goto label_2e5710;
        case 0x2e5714u: goto label_2e5714;
        case 0x2e5718u: goto label_2e5718;
        case 0x2e571cu: goto label_2e571c;
        case 0x2e5720u: goto label_2e5720;
        case 0x2e5724u: goto label_2e5724;
        case 0x2e5728u: goto label_2e5728;
        case 0x2e572cu: goto label_2e572c;
        case 0x2e5730u: goto label_2e5730;
        case 0x2e5734u: goto label_2e5734;
        case 0x2e5738u: goto label_2e5738;
        case 0x2e573cu: goto label_2e573c;
        case 0x2e5740u: goto label_2e5740;
        case 0x2e5744u: goto label_2e5744;
        case 0x2e5748u: goto label_2e5748;
        case 0x2e574cu: goto label_2e574c;
        case 0x2e5750u: goto label_2e5750;
        case 0x2e5754u: goto label_2e5754;
        case 0x2e5758u: goto label_2e5758;
        case 0x2e575cu: goto label_2e575c;
        case 0x2e5760u: goto label_2e5760;
        case 0x2e5764u: goto label_2e5764;
        case 0x2e5768u: goto label_2e5768;
        case 0x2e576cu: goto label_2e576c;
        default: break;
    }

    ctx->pc = 0x2e56f0u;

label_2e56f0:
    // 0x2e56f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e56f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2e56f4:
    // 0x2e56f4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e56f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2e56f8:
    // 0x2e56f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e56f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2e56fc:
    // 0x2e56fc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2e56fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2e5700:
    // 0x2e5700: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e5700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e5704:
    // 0x2e5704: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e5704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e5708:
    // 0x2e5708: 0x24632190  addiu       $v1, $v1, 0x2190
    ctx->pc = 0x2e5708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8592));
label_2e570c:
    // 0x2e570c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e570cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2e5710:
    // 0x2e5710: 0xae070014  sw          $a3, 0x14($s0)
    ctx->pc = 0x2e5710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 7));
label_2e5714:
    // 0x2e5714: 0xae080018  sw          $t0, 0x18($s0)
    ctx->pc = 0x2e5714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 8));
label_2e5718:
    // 0x2e5718: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x2e5718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
label_2e571c:
    // 0x2e571c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2e571cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_2e5720:
    // 0x2e5720: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e5720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2e5724:
    // 0x2e5724: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2e5724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_2e5728:
    // 0x2e5728: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2e5728u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_2e572c:
    // 0x2e572c: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2e572cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_2e5730:
    // 0x2e5730: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2e5730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2e5734:
    // 0x2e5734: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2e5734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2e5738:
    // 0x2e5738: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e5738u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e573c:
    // 0x2e573c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e573cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e5740:
    // 0x2e5740: 0x40f809  jalr        $v0
label_2e5744:
    if (ctx->pc == 0x2E5744u) {
        ctx->pc = 0x2E5744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5740u;
        // 0x2e5744: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5748u;
        goto label_2e5748;
    }
    ctx->pc = 0x2E5740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E5748u);
        ctx->pc = 0x2E5744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5740u;
        // 0x2e5744: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5740u, 0x2E5748u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E5748u;
label_2e5748:
    // 0x2e5748: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2e5748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2e574c:
    // 0x2e574c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e574cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5750:
    // 0x2e5750: 0xc0d5068  jal         func_3541A0
label_2e5754:
    if (ctx->pc == 0x2E5754u) {
        ctx->pc = 0x2E5754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5750u;
        // 0x2e5754: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5758u;
        goto label_2e5758;
    }
    ctx->pc = 0x2E5750u;
    SET_GPR_U32(ctx, 31, 0x2E5758u);
    ctx->pc = 0x2E5754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5750u;
    // 0x2e5754: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3541A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3541A0u, 0x2E5750u, 0x2E5758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5758u;
label_2e5758:
    // 0x2e5758: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e5758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e575c:
    // 0x2e575c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e575cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e5760:
    // 0x2e5760: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e5760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e5764:
    // 0x2e5764: 0x3e00008  jr          $ra
label_2e5768:
    if (ctx->pc == 0x2E5768u) {
        ctx->pc = 0x2E5768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5764u;
        // 0x2e5768: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E576Cu;
        goto label_2e576c;
    }
    ctx->pc = 0x2E5764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5764u;
        // 0x2e5768: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E576Cu;
label_2e576c:
    // 0x2e576c: 0x0  nop
    ctx->pc = 0x2e576cu;
    // NOP
    ctx->pc = 0x2e5770u;
}
