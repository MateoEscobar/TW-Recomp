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

// Function: sub_003D3458
// Address: 0x3d3458 - 0x3d34e0
void sub_003D3458_0x3d3458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D3458_0x3d3458");
#endif

    switch (ctx->pc) {
        case 0x3d3458u: goto label_3d3458;
        case 0x3d345cu: goto label_3d345c;
        case 0x3d3460u: goto label_3d3460;
        case 0x3d3464u: goto label_3d3464;
        case 0x3d3468u: goto label_3d3468;
        case 0x3d346cu: goto label_3d346c;
        case 0x3d3470u: goto label_3d3470;
        case 0x3d3474u: goto label_3d3474;
        case 0x3d3478u: goto label_3d3478;
        case 0x3d347cu: goto label_3d347c;
        case 0x3d3480u: goto label_3d3480;
        case 0x3d3484u: goto label_3d3484;
        case 0x3d3488u: goto label_3d3488;
        case 0x3d348cu: goto label_3d348c;
        case 0x3d3490u: goto label_3d3490;
        case 0x3d3494u: goto label_3d3494;
        case 0x3d3498u: goto label_3d3498;
        case 0x3d349cu: goto label_3d349c;
        case 0x3d34a0u: goto label_3d34a0;
        case 0x3d34a4u: goto label_3d34a4;
        case 0x3d34a8u: goto label_3d34a8;
        case 0x3d34acu: goto label_3d34ac;
        case 0x3d34b0u: goto label_3d34b0;
        case 0x3d34b4u: goto label_3d34b4;
        case 0x3d34b8u: goto label_3d34b8;
        case 0x3d34bcu: goto label_3d34bc;
        case 0x3d34c0u: goto label_3d34c0;
        case 0x3d34c4u: goto label_3d34c4;
        case 0x3d34c8u: goto label_3d34c8;
        case 0x3d34ccu: goto label_3d34cc;
        case 0x3d34d0u: goto label_3d34d0;
        case 0x3d34d4u: goto label_3d34d4;
        case 0x3d34d8u: goto label_3d34d8;
        case 0x3d34dcu: goto label_3d34dc;
        default: break;
    }

    ctx->pc = 0x3d3458u;

label_3d3458:
    // 0x3d3458: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d3458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d345c:
    // 0x3d345c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3d345cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3d3460:
    // 0x3d3460: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d3460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d3464:
    // 0x3d3464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d3464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d3468:
    // 0x3d3468: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d3468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d346c:
    // 0x3d346c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d346cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d3470:
    // 0x3d3470: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3d3470u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d3474:
    // 0x3d3474: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d3474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d3478:
    // 0x3d3478: 0x40f809  jalr        $v0
label_3d347c:
    if (ctx->pc == 0x3D347Cu) {
        ctx->pc = 0x3D347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3478u;
        // 0x3d347c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3480u;
        goto label_3d3480;
    }
    ctx->pc = 0x3D3478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D3480u);
        ctx->pc = 0x3D347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3478u;
        // 0x3d347c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3478u, 0x3D3480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D3480u;
label_3d3480:
    // 0x3d3480: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d3480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d3484:
    // 0x3d3484: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3d3484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3d3488:
    // 0x3d3488: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_3d348c:
    if (ctx->pc == 0x3D348Cu) {
        ctx->pc = 0x3D348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3488u;
        // 0x3d348c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3490u;
        goto label_3d3490;
    }
    ctx->pc = 0x3D3488u;
    {
        const bool branch_taken_0x3d3488 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3488u;
        // 0x3d348c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3488) {
            ctx->pc = 0x3D3498u;
            goto label_3d3498;
        }
    }
    ctx->pc = 0x3D3490u;
label_3d3490:
    // 0x3d3490: 0x5622000e  bnel        $s1, $v0, . + 4 + (0xE << 2)
label_3d3494:
    if (ctx->pc == 0x3D3494u) {
        ctx->pc = 0x3D3494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3490u;
        // 0x3d3494: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3498u;
        goto label_3d3498;
    }
    ctx->pc = 0x3D3490u;
    {
        const bool branch_taken_0x3d3490 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d3490) {
            ctx->pc = 0x3D3494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3490u;
            // 0x3d3494: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D34CCu;
            goto label_3d34cc;
        }
    }
    ctx->pc = 0x3D3498u;
label_3d3498:
    // 0x3d3498: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x3d3498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3d349c:
    // 0x3d349c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3d34a0:
    if (ctx->pc == 0x3D34A0u) {
        ctx->pc = 0x3D34A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D349Cu;
        // 0x3d34a0: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D34A4u;
        goto label_3d34a4;
    }
    ctx->pc = 0x3D349Cu;
    {
        const bool branch_taken_0x3d349c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d349c) {
            ctx->pc = 0x3D34A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D349Cu;
            // 0x3d34a0: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D34B4u;
            goto label_3d34b4;
        }
    }
    ctx->pc = 0x3D34A4u;
label_3d34a4:
    // 0x3d34a4: 0xc0e95f6  jal         func_3A57D8
label_3d34a8:
    if (ctx->pc == 0x3D34A8u) {
        ctx->pc = 0x3D34ACu;
        goto label_3d34ac;
    }
    ctx->pc = 0x3D34A4u;
    SET_GPR_U32(ctx, 31, 0x3D34ACu);
    ctx->pc = 0x3A57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57D8u, 0x3D34A4u, 0x3D34ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D34ACu;
label_3d34ac:
    // 0x3d34ac: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x3d34acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_3d34b0:
    // 0x3d34b0: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x3d34b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3d34b4:
    // 0x3d34b4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3d34b8:
    if (ctx->pc == 0x3D34B8u) {
        ctx->pc = 0x3D34B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D34B4u;
        // 0x3d34b8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D34BCu;
        goto label_3d34bc;
    }
    ctx->pc = 0x3D34B4u;
    {
        const bool branch_taken_0x3d34b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d34b4) {
            ctx->pc = 0x3D34B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D34B4u;
            // 0x3d34b8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D34CCu;
            goto label_3d34cc;
        }
    }
    ctx->pc = 0x3D34BCu;
label_3d34bc:
    // 0x3d34bc: 0xc0e95f6  jal         func_3A57D8
label_3d34c0:
    if (ctx->pc == 0x3D34C0u) {
        ctx->pc = 0x3D34C4u;
        goto label_3d34c4;
    }
    ctx->pc = 0x3D34BCu;
    SET_GPR_U32(ctx, 31, 0x3D34C4u);
    ctx->pc = 0x3A57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57D8u, 0x3D34BCu, 0x3D34C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D34C4u;
label_3d34c4:
    // 0x3d34c4: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x3d34c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_3d34c8:
    // 0x3d34c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3d34c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d34cc:
    // 0x3d34cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d34ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d34d0:
    // 0x3d34d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d34d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d34d4:
    // 0x3d34d4: 0x3e00008  jr          $ra
label_3d34d8:
    if (ctx->pc == 0x3D34D8u) {
        ctx->pc = 0x3D34D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D34D4u;
        // 0x3d34d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D34DCu;
        goto label_3d34dc;
    }
    ctx->pc = 0x3D34D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D34D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D34D4u;
        // 0x3d34d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D34D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D34DCu;
label_3d34dc:
    // 0x3d34dc: 0x0  nop
    ctx->pc = 0x3d34dcu;
    // NOP
    ctx->pc = 0x3d34e0u;
}
