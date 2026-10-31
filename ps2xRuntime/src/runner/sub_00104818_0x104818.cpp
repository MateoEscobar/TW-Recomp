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

// Function: sub_00104818
// Address: 0x104818 - 0x1048a0
void sub_00104818_0x104818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104818_0x104818");
#endif

    switch (ctx->pc) {
        case 0x104818u: goto label_104818;
        case 0x10481cu: goto label_10481c;
        case 0x104820u: goto label_104820;
        case 0x104824u: goto label_104824;
        case 0x104828u: goto label_104828;
        case 0x10482cu: goto label_10482c;
        case 0x104830u: goto label_104830;
        case 0x104834u: goto label_104834;
        case 0x104838u: goto label_104838;
        case 0x10483cu: goto label_10483c;
        case 0x104840u: goto label_104840;
        case 0x104844u: goto label_104844;
        case 0x104848u: goto label_104848;
        case 0x10484cu: goto label_10484c;
        case 0x104850u: goto label_104850;
        case 0x104854u: goto label_104854;
        case 0x104858u: goto label_104858;
        case 0x10485cu: goto label_10485c;
        case 0x104860u: goto label_104860;
        case 0x104864u: goto label_104864;
        case 0x104868u: goto label_104868;
        case 0x10486cu: goto label_10486c;
        case 0x104870u: goto label_104870;
        case 0x104874u: goto label_104874;
        case 0x104878u: goto label_104878;
        case 0x10487cu: goto label_10487c;
        case 0x104880u: goto label_104880;
        case 0x104884u: goto label_104884;
        case 0x104888u: goto label_104888;
        case 0x10488cu: goto label_10488c;
        case 0x104890u: goto label_104890;
        case 0x104894u: goto label_104894;
        case 0x104898u: goto label_104898;
        case 0x10489cu: goto label_10489c;
        default: break;
    }

    ctx->pc = 0x104818u;

label_104818:
    // 0x104818: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x104818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_10481c:
    // 0x10481c: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x10481cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
label_104820:
    // 0x104820: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x104820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_104824:
    // 0x104824: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x104824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_104828:
    // 0x104828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x104828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10482c:
    // 0x10482c: 0x24a545e0  addiu       $a1, $a1, 0x45E0
    ctx->pc = 0x10482cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17888));
label_104830:
    // 0x104830: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x104830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_104834:
    // 0x104834: 0xc0510d2  jal         func_144348
label_104838:
    if (ctx->pc == 0x104838u) {
        ctx->pc = 0x104838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104834u;
        // 0x104838: 0x3c100059  lui         $s0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10483Cu;
        goto label_10483c;
    }
    ctx->pc = 0x104834u;
    SET_GPR_U32(ctx, 31, 0x10483Cu);
    ctx->pc = 0x104838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104834u;
    // 0x104838: 0x3c100059  lui         $s0, 0x59 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144348u, 0x104834u, 0x10483Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10483Cu;
label_10483c:
    // 0x10483c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10483cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_104840:
    // 0x104840: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x104840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_104844:
    // 0x104844: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x104844u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_104848:
    // 0x104848: 0x3c080054  lui         $t0, 0x54
    ctx->pc = 0x104848u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)84 << 16));
label_10484c:
    // 0x10484c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x10484cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_104850:
    // 0x104850: 0x24090a6c  addiu       $t1, $zero, 0xA6C
    ctx->pc = 0x104850u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2668));
label_104854:
    // 0x104854: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x104854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_104858:
    // 0x104858: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x104858u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10485c:
    // 0x10485c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x10485cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_104860:
    // 0x104860: 0x25086818  addiu       $t0, $t0, 0x6818
    ctx->pc = 0x104860u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 26648));
label_104864:
    // 0x104864: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x104864u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_104868:
    // 0x104868: 0x24a56808  addiu       $a1, $a1, 0x6808
    ctx->pc = 0x104868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26632));
label_10486c:
    // 0x10486c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x10486cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_104870:
    // 0x104870: 0x24060088  addiu       $a2, $zero, 0x88
    ctx->pc = 0x104870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_104874:
    // 0x104874: 0x40f809  jalr        $v0
label_104878:
    if (ctx->pc == 0x104878u) {
        ctx->pc = 0x104878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104874u;
        // 0x104878: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10487Cu;
        goto label_10487c;
    }
    ctx->pc = 0x104874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10487Cu);
        ctx->pc = 0x104878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104874u;
        // 0x104878: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104874u, 0x10487Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10487Cu;
label_10487c:
    // 0x10487c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10487cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104880:
    // 0x104880: 0xc040448  jal         func_101120
label_104884:
    if (ctx->pc == 0x104884u) {
        ctx->pc = 0x104884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104880u;
        // 0x104884: 0xae027200  sw          $v0, 0x7200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 29184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104888u;
        goto label_104888;
    }
    ctx->pc = 0x104880u;
    SET_GPR_U32(ctx, 31, 0x104888u);
    ctx->pc = 0x104884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104880u;
    // 0x104884: 0xae027200  sw          $v0, 0x7200($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 29184), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101120u, 0x104880u, 0x104888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104888u;
label_104888:
    // 0x104888: 0x8e027200  lw          $v0, 0x7200($s0)
    ctx->pc = 0x104888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29184)));
label_10488c:
    // 0x10488c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10488cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_104890:
    // 0x104890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x104890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_104894:
    // 0x104894: 0x3e00008  jr          $ra
label_104898:
    if (ctx->pc == 0x104898u) {
        ctx->pc = 0x104898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104894u;
        // 0x104898: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10489Cu;
        goto label_10489c;
    }
    ctx->pc = 0x104894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104894u;
        // 0x104898: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10489Cu;
label_10489c:
    // 0x10489c: 0x0  nop
    ctx->pc = 0x10489cu;
    // NOP
    ctx->pc = 0x1048a0u;
}
