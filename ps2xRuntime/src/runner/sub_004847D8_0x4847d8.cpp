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

// Function: sub_004847D8
// Address: 0x4847d8 - 0x484910
void sub_004847D8_0x4847d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004847D8_0x4847d8");
#endif

    switch (ctx->pc) {
        case 0x4847d8u: goto label_4847d8;
        case 0x4847dcu: goto label_4847dc;
        case 0x4847e0u: goto label_4847e0;
        case 0x4847e4u: goto label_4847e4;
        case 0x4847e8u: goto label_4847e8;
        case 0x4847ecu: goto label_4847ec;
        case 0x4847f0u: goto label_4847f0;
        case 0x4847f4u: goto label_4847f4;
        case 0x4847f8u: goto label_4847f8;
        case 0x4847fcu: goto label_4847fc;
        case 0x484800u: goto label_484800;
        case 0x484804u: goto label_484804;
        case 0x484808u: goto label_484808;
        case 0x48480cu: goto label_48480c;
        case 0x484810u: goto label_484810;
        case 0x484814u: goto label_484814;
        case 0x484818u: goto label_484818;
        case 0x48481cu: goto label_48481c;
        case 0x484820u: goto label_484820;
        case 0x484824u: goto label_484824;
        case 0x484828u: goto label_484828;
        case 0x48482cu: goto label_48482c;
        case 0x484830u: goto label_484830;
        case 0x484834u: goto label_484834;
        case 0x484838u: goto label_484838;
        case 0x48483cu: goto label_48483c;
        case 0x484840u: goto label_484840;
        case 0x484844u: goto label_484844;
        case 0x484848u: goto label_484848;
        case 0x48484cu: goto label_48484c;
        case 0x484850u: goto label_484850;
        case 0x484854u: goto label_484854;
        case 0x484858u: goto label_484858;
        case 0x48485cu: goto label_48485c;
        case 0x484860u: goto label_484860;
        case 0x484864u: goto label_484864;
        case 0x484868u: goto label_484868;
        case 0x48486cu: goto label_48486c;
        case 0x484870u: goto label_484870;
        case 0x484874u: goto label_484874;
        case 0x484878u: goto label_484878;
        case 0x48487cu: goto label_48487c;
        case 0x484880u: goto label_484880;
        case 0x484884u: goto label_484884;
        case 0x484888u: goto label_484888;
        case 0x48488cu: goto label_48488c;
        case 0x484890u: goto label_484890;
        case 0x484894u: goto label_484894;
        case 0x484898u: goto label_484898;
        case 0x48489cu: goto label_48489c;
        case 0x4848a0u: goto label_4848a0;
        case 0x4848a4u: goto label_4848a4;
        case 0x4848a8u: goto label_4848a8;
        case 0x4848acu: goto label_4848ac;
        case 0x4848b0u: goto label_4848b0;
        case 0x4848b4u: goto label_4848b4;
        case 0x4848b8u: goto label_4848b8;
        case 0x4848bcu: goto label_4848bc;
        case 0x4848c0u: goto label_4848c0;
        case 0x4848c4u: goto label_4848c4;
        case 0x4848c8u: goto label_4848c8;
        case 0x4848ccu: goto label_4848cc;
        case 0x4848d0u: goto label_4848d0;
        case 0x4848d4u: goto label_4848d4;
        case 0x4848d8u: goto label_4848d8;
        case 0x4848dcu: goto label_4848dc;
        case 0x4848e0u: goto label_4848e0;
        case 0x4848e4u: goto label_4848e4;
        case 0x4848e8u: goto label_4848e8;
        case 0x4848ecu: goto label_4848ec;
        case 0x4848f0u: goto label_4848f0;
        case 0x4848f4u: goto label_4848f4;
        case 0x4848f8u: goto label_4848f8;
        case 0x4848fcu: goto label_4848fc;
        case 0x484900u: goto label_484900;
        case 0x484904u: goto label_484904;
        case 0x484908u: goto label_484908;
        case 0x48490cu: goto label_48490c;
        default: break;
    }

    ctx->pc = 0x4847d8u;

label_4847d8:
    // 0x4847d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4847d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4847dc:
    // 0x4847dc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4847dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4847e0:
    // 0x4847e0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4847e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4847e4:
    // 0x4847e4: 0x8f828968  lw          $v0, -0x7698($gp)
    ctx->pc = 0x4847e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_4847e8:
    // 0x4847e8: 0x2470ad18  addiu       $s0, $v1, -0x52E8
    ctx->pc = 0x4847e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_4847ec:
    // 0x4847ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4847ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4847f0:
    // 0x4847f0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4847f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4847f4:
    // 0x4847f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4847f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4847f8:
    // 0x4847f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4847f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4847fc:
    // 0x4847fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4847fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_484800:
    // 0x484800: 0x8c440210  lw          $a0, 0x210($v0)
    ctx->pc = 0x484800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
label_484804:
    // 0x484804: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_484808:
    if (ctx->pc == 0x484808u) {
        ctx->pc = 0x484808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484804u;
        // 0x484808: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48480Cu;
        goto label_48480c;
    }
    ctx->pc = 0x484804u;
    {
        const bool branch_taken_0x484804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x484808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484804u;
        // 0x484808: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484804) {
            ctx->pc = 0x484828u;
            goto label_484828;
        }
    }
    ctx->pc = 0x48480Cu;
label_48480c:
    // 0x48480c: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x48480cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_484810:
    // 0x484810: 0x60f809  jalr        $v1
label_484814:
    if (ctx->pc == 0x484814u) {
        ctx->pc = 0x484818u;
        goto label_484818;
    }
    ctx->pc = 0x484810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x484818u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484810u, 0x484818u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x484818u;
label_484818:
    // 0x484818: 0x8f828968  lw          $v0, -0x7698($gp)
    ctx->pc = 0x484818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_48481c:
    // 0x48481c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x48481cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_484820:
    // 0x484820: 0xac400214  sw          $zero, 0x214($v0)
    ctx->pc = 0x484820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 532), GPR_U32(ctx, 0));
label_484824:
    // 0x484824: 0xac400210  sw          $zero, 0x210($v0)
    ctx->pc = 0x484824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 528), GPR_U32(ctx, 0));
label_484828:
    // 0x484828: 0x8f828968  lw          $v0, -0x7698($gp)
    ctx->pc = 0x484828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_48482c:
    // 0x48482c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x48482cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_484830:
    // 0x484830: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x484830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_484834:
    // 0x484834: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
label_484838:
    if (ctx->pc == 0x484838u) {
        ctx->pc = 0x484838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484834u;
        // 0x484838: 0x8f848968  lw          $a0, -0x7698($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48483Cu;
        goto label_48483c;
    }
    ctx->pc = 0x484834u;
    {
        const bool branch_taken_0x484834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x484834) {
            ctx->pc = 0x484838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x484834u;
            // 0x484838: 0x8f848968  lw          $a0, -0x7698($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48487Cu;
            goto label_48487c;
        }
    }
    ctx->pc = 0x48483Cu;
label_48483c:
    // 0x48483c: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x48483cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_484840:
    // 0x484840: 0x60f809  jalr        $v1
label_484844:
    if (ctx->pc == 0x484844u) {
        ctx->pc = 0x484848u;
        goto label_484848;
    }
    ctx->pc = 0x484840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x484848u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484840u, 0x484848u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x484848u;
label_484848:
    // 0x484848: 0x8f828968  lw          $v0, -0x7698($gp)
    ctx->pc = 0x484848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_48484c:
    // 0x48484c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x48484cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_484850:
    // 0x484850: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x484850u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_484854:
    // 0x484854: 0x10000008  b           . + 4 + (0x8 << 2)
label_484858:
    if (ctx->pc == 0x484858u) {
        ctx->pc = 0x484858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484854u;
        // 0x484858: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48485Cu;
        goto label_48485c;
    }
    ctx->pc = 0x484854u;
    {
        const bool branch_taken_0x484854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x484858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484854u;
        // 0x484858: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484854) {
            ctx->pc = 0x484878u;
            goto label_484878;
        }
    }
    ctx->pc = 0x48485Cu;
label_48485c:
    // 0x48485c: 0x0  nop
    ctx->pc = 0x48485cu;
    // NOP
label_484860:
    // 0x484860: 0x8c440218  lw          $a0, 0x218($v0)
    ctx->pc = 0x484860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
label_484864:
    // 0x484864: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x484864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_484868:
    // 0x484868: 0xac43021c  sw          $v1, 0x21C($v0)
    ctx->pc = 0x484868u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 3));
label_48486c:
    // 0x48486c: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x48486cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_484870:
    // 0x484870: 0x40f809  jalr        $v0
label_484874:
    if (ctx->pc == 0x484874u) {
        ctx->pc = 0x484878u;
        goto label_484878;
    }
    ctx->pc = 0x484870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x484878u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484870u, 0x484878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x484878u;
label_484878:
    // 0x484878: 0x8f848968  lw          $a0, -0x7698($gp)
    ctx->pc = 0x484878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_48487c:
    // 0x48487c: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x48487cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_484880:
    // 0x484880: 0x8c43021c  lw          $v1, 0x21C($v0)
    ctx->pc = 0x484880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
label_484884:
    // 0x484884: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
label_484888:
    if (ctx->pc == 0x484888u) {
        ctx->pc = 0x484888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484884u;
        // 0x484888: 0x8c45021c  lw          $a1, 0x21C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48488Cu;
        goto label_48488c;
    }
    ctx->pc = 0x484884u;
    {
        const bool branch_taken_0x484884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x484884) {
            ctx->pc = 0x484888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x484884u;
            // 0x484888: 0x8c45021c  lw          $a1, 0x21C($v0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x484860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_484860;
        }
    }
    ctx->pc = 0x48488Cu;
label_48488c:
    // 0x48488c: 0x8f828968  lw          $v0, -0x7698($gp)
    ctx->pc = 0x48488cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_484890:
    // 0x484890: 0x2650ad18  addiu       $s0, $s2, -0x52E8
    ctx->pc = 0x484890u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294946072));
label_484894:
    // 0x484894: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x484894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_484898:
    // 0x484898: 0x8c440218  lw          $a0, 0x218($v0)
    ctx->pc = 0x484898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
label_48489c:
    // 0x48489c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_4848a0:
    if (ctx->pc == 0x4848A0u) {
        ctx->pc = 0x4848A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48489Cu;
        // 0x4848a0: 0x8f828968  lw          $v0, -0x7698($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4848A4u;
        goto label_4848a4;
    }
    ctx->pc = 0x48489Cu;
    {
        const bool branch_taken_0x48489c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4848A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48489Cu;
        // 0x4848a0: 0x8f828968  lw          $v0, -0x7698($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48489c) {
            ctx->pc = 0x4848BCu;
            goto label_4848bc;
        }
    }
    ctx->pc = 0x4848A4u;
label_4848a4:
    // 0x4848a4: 0xc11f74a  jal         func_47DD28
label_4848a8:
    if (ctx->pc == 0x4848A8u) {
        ctx->pc = 0x4848ACu;
        goto label_4848ac;
    }
    ctx->pc = 0x4848A4u;
    SET_GPR_U32(ctx, 31, 0x4848ACu);
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x4848A4u, 0x4848ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4848ACu;
label_4848ac:
    // 0x4848ac: 0x8f838968  lw          $v1, -0x7698($gp)
    ctx->pc = 0x4848acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_4848b0:
    // 0x4848b0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4848b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4848b4:
    // 0x4848b4: 0xac600218  sw          $zero, 0x218($v1)
    ctx->pc = 0x4848b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 536), GPR_U32(ctx, 0));
label_4848b8:
    // 0x4848b8: 0x8f828968  lw          $v0, -0x7698($gp)
    ctx->pc = 0x4848b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_4848bc:
    // 0x4848bc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4848bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4848c0:
    // 0x4848c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4848c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4848c4:
    // 0x4848c4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_4848c8:
    if (ctx->pc == 0x4848C8u) {
        ctx->pc = 0x4848CCu;
        goto label_4848cc;
    }
    ctx->pc = 0x4848C4u;
    {
        const bool branch_taken_0x4848c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4848c4) {
            ctx->pc = 0x4848E0u;
            goto label_4848e0;
        }
    }
    ctx->pc = 0x4848CCu;
label_4848cc:
    // 0x4848cc: 0xc11f74a  jal         func_47DD28
label_4848d0:
    if (ctx->pc == 0x4848D0u) {
        ctx->pc = 0x4848D4u;
        goto label_4848d4;
    }
    ctx->pc = 0x4848CCu;
    SET_GPR_U32(ctx, 31, 0x4848D4u);
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x4848CCu, 0x4848D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4848D4u;
label_4848d4:
    // 0x4848d4: 0x8f838968  lw          $v1, -0x7698($gp)
    ctx->pc = 0x4848d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_4848d8:
    // 0x4848d8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4848d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4848dc:
    // 0x4848dc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4848dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_4848e0:
    // 0x4848e0: 0x8f83896c  lw          $v1, -0x7694($gp)
    ctx->pc = 0x4848e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936940)));
label_4848e4:
    // 0x4848e4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4848e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4848e8:
    // 0x4848e8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4848e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4848ec:
    // 0x4848ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4848ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4848f0:
    // 0x4848f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4848f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4848f4:
    // 0x4848f4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4848f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4848f8:
    // 0x4848f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4848f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4848fc:
    // 0x4848fc: 0xaf83896c  sw          $v1, -0x7694($gp)
    ctx->pc = 0x4848fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936940), GPR_U32(ctx, 3));
label_484900:
    // 0x484900: 0x3e00008  jr          $ra
label_484904:
    if (ctx->pc == 0x484904u) {
        ctx->pc = 0x484904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484900u;
        // 0x484904: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484908u;
        goto label_484908;
    }
    ctx->pc = 0x484900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484900u;
        // 0x484904: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x484908u;
label_484908:
    // 0x484908: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x484908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_48490c:
    // 0x48490c: 0x0  nop
    ctx->pc = 0x48490cu;
    // NOP
    ctx->pc = 0x484910u;
}
