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

// Function: sub_004E4768
// Address: 0x4e4768 - 0x4e47e8
void sub_004E4768_0x4e4768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4768_0x4e4768");
#endif

    switch (ctx->pc) {
        case 0x4e4768u: goto label_4e4768;
        case 0x4e476cu: goto label_4e476c;
        case 0x4e4770u: goto label_4e4770;
        case 0x4e4774u: goto label_4e4774;
        case 0x4e4778u: goto label_4e4778;
        case 0x4e477cu: goto label_4e477c;
        case 0x4e4780u: goto label_4e4780;
        case 0x4e4784u: goto label_4e4784;
        case 0x4e4788u: goto label_4e4788;
        case 0x4e478cu: goto label_4e478c;
        case 0x4e4790u: goto label_4e4790;
        case 0x4e4794u: goto label_4e4794;
        case 0x4e4798u: goto label_4e4798;
        case 0x4e479cu: goto label_4e479c;
        case 0x4e47a0u: goto label_4e47a0;
        case 0x4e47a4u: goto label_4e47a4;
        case 0x4e47a8u: goto label_4e47a8;
        case 0x4e47acu: goto label_4e47ac;
        case 0x4e47b0u: goto label_4e47b0;
        case 0x4e47b4u: goto label_4e47b4;
        case 0x4e47b8u: goto label_4e47b8;
        case 0x4e47bcu: goto label_4e47bc;
        case 0x4e47c0u: goto label_4e47c0;
        case 0x4e47c4u: goto label_4e47c4;
        case 0x4e47c8u: goto label_4e47c8;
        case 0x4e47ccu: goto label_4e47cc;
        case 0x4e47d0u: goto label_4e47d0;
        case 0x4e47d4u: goto label_4e47d4;
        case 0x4e47d8u: goto label_4e47d8;
        case 0x4e47dcu: goto label_4e47dc;
        case 0x4e47e0u: goto label_4e47e0;
        case 0x4e47e4u: goto label_4e47e4;
        default: break;
    }

    ctx->pc = 0x4e4768u;

label_4e4768:
    // 0x4e4768: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e4768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e476c:
    // 0x4e476c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e476cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e4770:
    // 0x4e4770: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e4770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e4774:
    // 0x4e4774: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e4774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e4778:
    // 0x4e4778: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e4778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e477c:
    // 0x4e477c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e477cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e4780:
    // 0x4e4780: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e4780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e4784:
    // 0x4e4784: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4e4788:
    if (ctx->pc == 0x4E4788u) {
        ctx->pc = 0x4E4788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4784u;
        // 0x4e4788: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E478Cu;
        goto label_4e478c;
    }
    ctx->pc = 0x4E4784u;
    {
        const bool branch_taken_0x4e4784 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4784u;
        // 0x4e4788: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4784) {
            ctx->pc = 0x4E47CCu;
            goto label_4e47cc;
        }
    }
    ctx->pc = 0x4E478Cu;
label_4e478c:
    // 0x4e478c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e478cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e4790:
    // 0x4e4790: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4e4790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e4794:
    // 0x4e4794: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4e4794u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4e4798:
    // 0x4e4798: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4e4798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4e479c:
    // 0x4e479c: 0x60f809  jalr        $v1
label_4e47a0:
    if (ctx->pc == 0x4E47A0u) {
        ctx->pc = 0x4E47A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E479Cu;
        // 0x4e47a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E47A4u;
        goto label_4e47a4;
    }
    ctx->pc = 0x4E479Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E47A4u);
        ctx->pc = 0x4E47A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E479Cu;
        // 0x4e47a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E479Cu, 0x4E47A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E47A4u;
label_4e47a4:
    // 0x4e47a4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e47a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e47a8:
    // 0x4e47a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e47a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e47ac:
    // 0x4e47ac: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e47acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e47b0:
    // 0x4e47b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e47b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e47b4:
    // 0x4e47b4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e47b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e47b8:
    // 0x4e47b8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e47b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e47bc:
    // 0x4e47bc: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e47bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e47c0:
    // 0x4e47c0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e47c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e47c4:
    // 0x4e47c4: 0x60f809  jalr        $v1
label_4e47c8:
    if (ctx->pc == 0x4E47C8u) {
        ctx->pc = 0x4E47C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E47C4u;
        // 0x4e47c8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E47CCu;
        goto label_4e47cc;
    }
    ctx->pc = 0x4E47C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E47CCu);
        ctx->pc = 0x4E47C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E47C4u;
        // 0x4e47c8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E47C4u, 0x4E47CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E47CCu;
label_4e47cc:
    // 0x4e47cc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e47ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e47d0:
    // 0x4e47d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e47d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e47d4:
    // 0x4e47d4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e47d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e47d8:
    // 0x4e47d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e47d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e47dc:
    // 0x4e47dc: 0x3e00008  jr          $ra
label_4e47e0:
    if (ctx->pc == 0x4E47E0u) {
        ctx->pc = 0x4E47E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E47DCu;
        // 0x4e47e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E47E4u;
        goto label_4e47e4;
    }
    ctx->pc = 0x4E47DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E47E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E47DCu;
        // 0x4e47e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E47DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E47E4u;
label_4e47e4:
    // 0x4e47e4: 0x0  nop
    ctx->pc = 0x4e47e4u;
    // NOP
    ctx->pc = 0x4e47e8u;
}
