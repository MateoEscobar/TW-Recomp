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

// Function: sub_0038E6C0
// Address: 0x38e6c0 - 0x38e738
void sub_0038E6C0_0x38e6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E6C0_0x38e6c0");
#endif

    switch (ctx->pc) {
        case 0x38e6c0u: goto label_38e6c0;
        case 0x38e6c4u: goto label_38e6c4;
        case 0x38e6c8u: goto label_38e6c8;
        case 0x38e6ccu: goto label_38e6cc;
        case 0x38e6d0u: goto label_38e6d0;
        case 0x38e6d4u: goto label_38e6d4;
        case 0x38e6d8u: goto label_38e6d8;
        case 0x38e6dcu: goto label_38e6dc;
        case 0x38e6e0u: goto label_38e6e0;
        case 0x38e6e4u: goto label_38e6e4;
        case 0x38e6e8u: goto label_38e6e8;
        case 0x38e6ecu: goto label_38e6ec;
        case 0x38e6f0u: goto label_38e6f0;
        case 0x38e6f4u: goto label_38e6f4;
        case 0x38e6f8u: goto label_38e6f8;
        case 0x38e6fcu: goto label_38e6fc;
        case 0x38e700u: goto label_38e700;
        case 0x38e704u: goto label_38e704;
        case 0x38e708u: goto label_38e708;
        case 0x38e70cu: goto label_38e70c;
        case 0x38e710u: goto label_38e710;
        case 0x38e714u: goto label_38e714;
        case 0x38e718u: goto label_38e718;
        case 0x38e71cu: goto label_38e71c;
        case 0x38e720u: goto label_38e720;
        case 0x38e724u: goto label_38e724;
        case 0x38e728u: goto label_38e728;
        case 0x38e72cu: goto label_38e72c;
        case 0x38e730u: goto label_38e730;
        case 0x38e734u: goto label_38e734;
        default: break;
    }

    ctx->pc = 0x38e6c0u;

label_38e6c0:
    // 0x38e6c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38e6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_38e6c4:
    // 0x38e6c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x38e6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_38e6c8:
    // 0x38e6c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38e6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38e6cc:
    // 0x38e6cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38e6ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38e6d0:
    // 0x38e6d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38e6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38e6d4:
    // 0x38e6d4: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x38e6d4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_38e6d8:
    // 0x38e6d8: 0x8e22bd30  lw          $v0, -0x42D0($s1)
    ctx->pc = 0x38e6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950192)));
label_38e6dc:
    // 0x38e6dc: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x38e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_38e6e0:
    // 0x38e6e0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_38e6e4:
    if (ctx->pc == 0x38E6E4u) {
        ctx->pc = 0x38E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E6E0u;
        // 0x38e6e4: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E6E8u;
        goto label_38e6e8;
    }
    ctx->pc = 0x38E6E0u;
    {
        const bool branch_taken_0x38e6e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E6E0u;
        // 0x38e6e4: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e6e0) {
            ctx->pc = 0x38E718u;
            goto label_38e718;
        }
    }
    ctx->pc = 0x38E6E8u;
label_38e6e8:
    // 0x38e6e8: 0xc0e4060  jal         func_390180
label_38e6ec:
    if (ctx->pc == 0x38E6ECu) {
        ctx->pc = 0x38E6F0u;
        goto label_38e6f0;
    }
    ctx->pc = 0x38E6E8u;
    SET_GPR_U32(ctx, 31, 0x38E6F0u);
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x38E6E8u, 0x38E6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E6F0u;
label_38e6f0:
    // 0x38e6f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38e6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38e6f4:
    // 0x38e6f4: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_38e6f8:
    if (ctx->pc == 0x38E6F8u) {
        ctx->pc = 0x38E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E6F4u;
        // 0x38e6f8: 0x8e22bd30  lw          $v0, -0x42D0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E6FCu;
        goto label_38e6fc;
    }
    ctx->pc = 0x38E6F4u;
    {
        const bool branch_taken_0x38e6f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E6F4u;
        // 0x38e6f8: 0x8e22bd30  lw          $v0, -0x42D0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e6f4) {
            ctx->pc = 0x38E714u;
            goto label_38e714;
        }
    }
    ctx->pc = 0x38E6FCu;
label_38e6fc:
    // 0x38e6fc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x38e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_38e700:
    // 0x38e700: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x38e700u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_38e704:
    // 0x38e704: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x38e704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_38e708:
    // 0x38e708: 0x60f809  jalr        $v1
label_38e70c:
    if (ctx->pc == 0x38E70Cu) {
        ctx->pc = 0x38E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E708u;
        // 0x38e70c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E710u;
        goto label_38e710;
    }
    ctx->pc = 0x38E708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38E710u);
        ctx->pc = 0x38E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E708u;
        // 0x38e70c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E708u, 0x38E710u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38E710u;
label_38e710:
    // 0x38e710: 0x8e22bd30  lw          $v0, -0x42D0($s1)
    ctx->pc = 0x38e710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950192)));
label_38e714:
    // 0x38e714: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x38e714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_38e718:
    // 0x38e718: 0xc0e3af4  jal         func_38EBD0
label_38e71c:
    if (ctx->pc == 0x38E71Cu) {
        ctx->pc = 0x38E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E718u;
        // 0x38e71c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E720u;
        goto label_38e720;
    }
    ctx->pc = 0x38E718u;
    SET_GPR_U32(ctx, 31, 0x38E720u);
    ctx->pc = 0x38E71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E718u;
    // 0x38e71c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EBD0u, 0x38E718u, 0x38E720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E720u;
label_38e720:
    // 0x38e720: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x38e720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38e724:
    // 0x38e724: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38e724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38e728:
    // 0x38e728: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38e728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38e72c:
    // 0x38e72c: 0x3e00008  jr          $ra
label_38e730:
    if (ctx->pc == 0x38E730u) {
        ctx->pc = 0x38E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E72Cu;
        // 0x38e730: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E734u;
        goto label_38e734;
    }
    ctx->pc = 0x38E72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E72Cu;
        // 0x38e730: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E734u;
label_38e734:
    // 0x38e734: 0x0  nop
    ctx->pc = 0x38e734u;
    // NOP
    ctx->pc = 0x38e738u;
}
