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

// Function: sub_00446770
// Address: 0x446770 - 0x446850
void sub_00446770_0x446770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00446770_0x446770");
#endif

    switch (ctx->pc) {
        case 0x4467acu: goto label_4467ac;
        case 0x44680cu: goto label_44680c;
        case 0x446814u: goto label_446814;
        default: break;
    }

    ctx->pc = 0x446770u;

    // 0x446770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x446770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x446774: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x446774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x446778: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x446778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x44677c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44677cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x446780: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x446780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446784: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x446784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x446788: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x446788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x44678c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x44678Cu;
    {
        const bool branch_taken_0x44678c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x446790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44678Cu;
        // 0x446790: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44678c) {
            ctx->pc = 0x4467B8u;
            goto label_4467b8;
        }
    }
    ctx->pc = 0x446794u;
    // 0x446794: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x446794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x446798: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x446798u;
    {
        const bool branch_taken_0x446798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446798u;
        // 0x44679c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446798) {
            ctx->pc = 0x4467B8u;
            goto label_4467b8;
        }
    }
    ctx->pc = 0x4467A0u;
    // 0x4467a0: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4467a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x4467a4: 0xc111f76  jal         func_447DD8
    ctx->pc = 0x4467A4u;
    SET_GPR_U32(ctx, 31, 0x4467ACu);
    ctx->pc = 0x4467A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4467A4u;
    // 0x4467a8: 0x24a5e078  addiu       $a1, $a1, -0x1F88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447DD8u, 0x4467A4u, 0x4467ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4467ACu;
label_4467ac:
    // 0x4467ac: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x4467acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x4467b0: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x4467b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x4467b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4467b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4467b8:
    // 0x4467b8: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4467B8u;
    {
        const bool branch_taken_0x4467b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4467BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4467B8u;
        // 0x4467bc: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4467b8) {
            ctx->pc = 0x4467F4u;
            goto label_4467f4;
        }
    }
    ctx->pc = 0x4467C0u;
    // 0x4467c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4467C0u;
    {
        const bool branch_taken_0x4467c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4467C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4467C0u;
        // 0x4467c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4467c0) {
            ctx->pc = 0x4467D8u;
            goto label_4467d8;
        }
    }
    ctx->pc = 0x4467C8u;
    // 0x4467c8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4467C8u;
    {
        const bool branch_taken_0x4467c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4467CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4467C8u;
        // 0x4467cc: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4467c8) {
            ctx->pc = 0x4467ECu;
            goto label_4467ec;
        }
    }
    ctx->pc = 0x4467D0u;
    // 0x4467d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4467D0u;
    {
        const bool branch_taken_0x4467d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4467D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4467D0u;
        // 0x4467d4: 0x8e1101d0  lw          $s1, 0x1D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4467d0) {
            ctx->pc = 0x446800u;
            goto label_446800;
        }
    }
    ctx->pc = 0x4467D8u;
label_4467d8:
    // 0x4467d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4467d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4467dc: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4467DCu;
    {
        const bool branch_taken_0x4467dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4467E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4467DCu;
        // 0x4467e0: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4467dc) {
            ctx->pc = 0x4467FCu;
            goto label_4467fc;
        }
    }
    ctx->pc = 0x4467E4u;
    // 0x4467e4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4467E4u;
    {
        const bool branch_taken_0x4467e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4467E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4467E4u;
        // 0x4467e8: 0x8e1101d0  lw          $s1, 0x1D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4467e4) {
            ctx->pc = 0x44680Cu;
            goto label_44680c;
        }
    }
    ctx->pc = 0x4467ECu;
label_4467ec:
    // 0x4467ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4467ECu;
    {
        const bool branch_taken_0x4467ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4467F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4467ECu;
        // 0x4467f0: 0x8e1101e0  lw          $s1, 0x1E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4467ec) {
            ctx->pc = 0x44680Cu;
            goto label_44680c;
        }
    }
    ctx->pc = 0x4467F4u;
label_4467f4:
    // 0x4467f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4467F4u;
    {
        const bool branch_taken_0x4467f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4467F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4467F4u;
        // 0x4467f8: 0x8e1101f0  lw          $s1, 0x1F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4467f4) {
            ctx->pc = 0x44680Cu;
            goto label_44680c;
        }
    }
    ctx->pc = 0x4467FCu;
label_4467fc:
    // 0x4467fc: 0x8e1101d0  lw          $s1, 0x1D0($s0)
    ctx->pc = 0x4467fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
label_446800:
    // 0x446800: 0x24a5e098  addiu       $a1, $a1, -0x1F68
    ctx->pc = 0x446800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959256));
    // 0x446804: 0xc111f76  jal         func_447DD8
    ctx->pc = 0x446804u;
    SET_GPR_U32(ctx, 31, 0x44680Cu);
    ctx->pc = 0x446808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x446804u;
    // 0x446808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447DD8u, 0x446804u, 0x44680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44680Cu;
label_44680c:
    // 0x44680c: 0xc1123fe  jal         func_448FF8
    ctx->pc = 0x44680Cu;
    SET_GPR_U32(ctx, 31, 0x446814u);
    ctx->pc = 0x446810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44680Cu;
    // 0x446810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x448FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x448FF8u, 0x44680Cu, 0x446814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446814u;
label_446814:
    // 0x446814: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x446814u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446818: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x446818u;
    {
        const bool branch_taken_0x446818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446818u;
        // 0x44681c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446818) {
            ctx->pc = 0x446824u;
            goto label_446824;
        }
    }
    ctx->pc = 0x446820u;
    // 0x446820: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x446820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_446824:
    // 0x446824: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x446824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x446828: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x446828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44682c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x44682cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x446830: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x446830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x446834: 0x3e00008  jr          $ra
    ctx->pc = 0x446834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x446838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446834u;
        // 0x446838: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x446834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44683Cu;
    // 0x44683c: 0x0  nop
    ctx->pc = 0x44683cu;
    // NOP
    // 0x446840: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x446840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x446844: 0x0  nop
    ctx->pc = 0x446844u;
    // NOP
    // 0x446848: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x446848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x44684c: 0x0  nop
    ctx->pc = 0x44684cu;
    // NOP
    ctx->pc = 0x446850u;
}
