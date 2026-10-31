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

// Function: sub_001C8710
// Address: 0x1c8710 - 0x1c87f0
void sub_001C8710_0x1c8710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8710_0x1c8710");
#endif

    switch (ctx->pc) {
        case 0x1c8744u: goto label_1c8744;
        case 0x1c8768u: goto label_1c8768;
        case 0x1c87c4u: goto label_1c87c4;
        default: break;
    }

    ctx->pc = 0x1c8710u;

    // 0x1c8710: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1c8710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1c8714: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1c8714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1c8718: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1c8718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x1c871c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c871cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8720: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1c8720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x1c8724: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x1c8724u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c8728: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1c8728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1c872c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c872cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8730: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x1c8730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x1c8734: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c8734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8738: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1c8738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c873c: 0xc139eec  jal         func_4E7BB0
    ctx->pc = 0x1C873Cu;
    SET_GPR_U32(ctx, 31, 0x1C8744u);
    ctx->pc = 0x1C8740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C873Cu;
    // 0x1c8740: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7BB0u, 0x1C873Cu, 0x1C8744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8744u;
label_1c8744:
    // 0x1c8744: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x1c8744u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c8748: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1c8748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c874c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c874cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c8750: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1C8750u;
    {
        const bool branch_taken_0x1c8750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C8754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8750u;
        // 0x1c8754: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8750) {
            ctx->pc = 0x1C87D4u;
            goto label_1c87d4;
        }
    }
    ctx->pc = 0x1C8758u;
    // 0x1c8758: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c8758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c875c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c875cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8760: 0xc139d26  jal         func_4E7498
    ctx->pc = 0x1C8760u;
    SET_GPR_U32(ctx, 31, 0x1C8768u);
    ctx->pc = 0x1C8764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8760u;
    // 0x1c8764: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7498u, 0x1C8760u, 0x1C8768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8768u;
label_1c8768:
    // 0x1c8768: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c8768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c876c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c876cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8770: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1c8770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8774: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8774u;
    {
        const bool branch_taken_0x1c8774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C8778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8774u;
        // 0x1c8778: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8774) {
            ctx->pc = 0x1C8790u;
            goto label_1c8790;
        }
    }
    ctx->pc = 0x1C877Cu;
    // 0x1c877c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1c877cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1c8780: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1c8780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c8784: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1c8784u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c8788: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C8788u;
    {
        const bool branch_taken_0x1c8788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8788) {
            ctx->pc = 0x1C8794u;
            goto label_1c8794;
        }
    }
    ctx->pc = 0x1C8790u;
label_1c8790:
    // 0x1c8790: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c8790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8794:
    // 0x1c8794: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C8794u;
    {
        const bool branch_taken_0x1c8794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8794u;
        // 0x1c8798: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8794) {
            ctx->pc = 0x1C87CCu;
            goto label_1c87cc;
        }
    }
    ctx->pc = 0x1C879Cu;
    // 0x1c879c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c879cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c87a0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1c87a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c87a4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1c87a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c87a8: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x1c87a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x1c87ac: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x1c87acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c87b0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c87b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c87b4: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x1c87b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    // 0x1c87b8: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x1c87b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x1c87bc: 0xc139e80  jal         func_4E7A00
    ctx->pc = 0x1C87BCu;
    SET_GPR_U32(ctx, 31, 0x1C87C4u);
    ctx->pc = 0x1C87C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C87BCu;
    // 0x1c87c0: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7A00u, 0x1C87BCu, 0x1C87C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C87C4u;
label_1c87c4:
    // 0x1c87c4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c87c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c87c8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1c87c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1c87cc:
    // 0x1c87cc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c87ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c87d0: 0x8c520014  lw          $s2, 0x14($v0)
    ctx->pc = 0x1c87d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1c87d4:
    // 0x1c87d4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1c87d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c87d8: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1c87d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c87dc: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1c87dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c87e0: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1c87e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c87e4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1c87e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c87e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C87E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C87ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C87E8u;
        // 0x1c87ec: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C87E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C87F0u;
}
