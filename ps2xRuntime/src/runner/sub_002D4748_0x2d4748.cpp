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

// Function: sub_002D4748
// Address: 0x2d4748 - 0x2d47d0
void sub_002D4748_0x2d4748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4748_0x2d4748");
#endif

    switch (ctx->pc) {
        case 0x2d4748u: goto label_2d4748;
        case 0x2d474cu: goto label_2d474c;
        case 0x2d4750u: goto label_2d4750;
        case 0x2d4754u: goto label_2d4754;
        case 0x2d4758u: goto label_2d4758;
        case 0x2d475cu: goto label_2d475c;
        case 0x2d4760u: goto label_2d4760;
        case 0x2d4764u: goto label_2d4764;
        case 0x2d4768u: goto label_2d4768;
        case 0x2d476cu: goto label_2d476c;
        case 0x2d4770u: goto label_2d4770;
        case 0x2d4774u: goto label_2d4774;
        case 0x2d4778u: goto label_2d4778;
        case 0x2d477cu: goto label_2d477c;
        case 0x2d4780u: goto label_2d4780;
        case 0x2d4784u: goto label_2d4784;
        case 0x2d4788u: goto label_2d4788;
        case 0x2d478cu: goto label_2d478c;
        case 0x2d4790u: goto label_2d4790;
        case 0x2d4794u: goto label_2d4794;
        case 0x2d4798u: goto label_2d4798;
        case 0x2d479cu: goto label_2d479c;
        case 0x2d47a0u: goto label_2d47a0;
        case 0x2d47a4u: goto label_2d47a4;
        case 0x2d47a8u: goto label_2d47a8;
        case 0x2d47acu: goto label_2d47ac;
        case 0x2d47b0u: goto label_2d47b0;
        case 0x2d47b4u: goto label_2d47b4;
        case 0x2d47b8u: goto label_2d47b8;
        case 0x2d47bcu: goto label_2d47bc;
        case 0x2d47c0u: goto label_2d47c0;
        case 0x2d47c4u: goto label_2d47c4;
        case 0x2d47c8u: goto label_2d47c8;
        case 0x2d47ccu: goto label_2d47cc;
        default: break;
    }

    ctx->pc = 0x2d4748u;

label_2d4748:
    // 0x2d4748: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d4748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2d474c:
    // 0x2d474c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d474cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2d4750:
    // 0x2d4750: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d4750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2d4754:
    // 0x2d4754: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d4754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d4758:
    // 0x2d4758: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d4758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2d475c:
    // 0x2d475c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d475cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d4760:
    // 0x2d4760: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d4760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d4764:
    // 0x2d4764: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2d4764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2d4768:
    // 0x2d4768: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_2d476c:
    if (ctx->pc == 0x2D476Cu) {
        ctx->pc = 0x2D476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4768u;
        // 0x2d476c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4770u;
        goto label_2d4770;
    }
    ctx->pc = 0x2D4768u;
    {
        const bool branch_taken_0x2d4768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4768u;
        // 0x2d476c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4768) {
            ctx->pc = 0x2D47B4u;
            goto label_2d47b4;
        }
    }
    ctx->pc = 0x2D4770u;
label_2d4770:
    // 0x2d4770: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2d4770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2d4774:
    // 0x2d4774: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2d4774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2d4778:
    // 0x2d4778: 0x8c512b04  lw          $s1, 0x2B04($v0)
    ctx->pc = 0x2d4778u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_2d477c:
    // 0x2d477c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2d477cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2d4780:
    // 0x2d4780: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2d4780u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d4784:
    // 0x2d4784: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2d4784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2d4788:
    // 0x2d4788: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2d4788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2d478c:
    // 0x2d478c: 0x86030098  lh          $v1, 0x98($s0)
    ctx->pc = 0x2d478cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
label_2d4790:
    // 0x2d4790: 0x26100098  addiu       $s0, $s0, 0x98
    ctx->pc = 0x2d4790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
label_2d4794:
    // 0x2d4794: 0x40f809  jalr        $v0
label_2d4798:
    if (ctx->pc == 0x2D4798u) {
        ctx->pc = 0x2D4798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4794u;
        // 0x2d4798: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D479Cu;
        goto label_2d479c;
    }
    ctx->pc = 0x2D4794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D479Cu);
        ctx->pc = 0x2D4798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4794u;
        // 0x2d4798: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4794u, 0x2D479Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D479Cu;
label_2d479c:
    // 0x2d479c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2d479cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d47a0:
    // 0x2d47a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d47a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d47a4:
    // 0x2d47a4: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x2d47a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2d47a8:
    // 0x2d47a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d47a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d47ac:
    // 0x2d47ac: 0x60f809  jalr        $v1
label_2d47b0:
    if (ctx->pc == 0x2D47B0u) {
        ctx->pc = 0x2D47B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D47ACu;
        // 0x2d47b0: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D47B4u;
        goto label_2d47b4;
    }
    ctx->pc = 0x2D47ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2D47B4u);
        ctx->pc = 0x2D47B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D47ACu;
        // 0x2d47b0: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D47ACu, 0x2D47B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D47B4u;
label_2d47b4:
    // 0x2d47b4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d47b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d47b8:
    // 0x2d47b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d47b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d47bc:
    // 0x2d47bc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d47bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d47c0:
    // 0x2d47c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d47c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d47c4:
    // 0x2d47c4: 0x3e00008  jr          $ra
label_2d47c8:
    if (ctx->pc == 0x2D47C8u) {
        ctx->pc = 0x2D47C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D47C4u;
        // 0x2d47c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D47CCu;
        goto label_2d47cc;
    }
    ctx->pc = 0x2D47C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D47C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D47C4u;
        // 0x2d47c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D47C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D47CCu;
label_2d47cc:
    // 0x2d47cc: 0x0  nop
    ctx->pc = 0x2d47ccu;
    // NOP
    ctx->pc = 0x2d47d0u;
}
