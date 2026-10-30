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

// Function: sub_0038F588
// Address: 0x38f588 - 0x38f5d8
void sub_0038F588_0x38f588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F588_0x38f588");
#endif

    switch (ctx->pc) {
        case 0x38f588u: goto label_38f588;
        case 0x38f58cu: goto label_38f58c;
        case 0x38f590u: goto label_38f590;
        case 0x38f594u: goto label_38f594;
        case 0x38f598u: goto label_38f598;
        case 0x38f59cu: goto label_38f59c;
        case 0x38f5a0u: goto label_38f5a0;
        case 0x38f5a4u: goto label_38f5a4;
        case 0x38f5a8u: goto label_38f5a8;
        case 0x38f5acu: goto label_38f5ac;
        case 0x38f5b0u: goto label_38f5b0;
        case 0x38f5b4u: goto label_38f5b4;
        case 0x38f5b8u: goto label_38f5b8;
        case 0x38f5bcu: goto label_38f5bc;
        case 0x38f5c0u: goto label_38f5c0;
        case 0x38f5c4u: goto label_38f5c4;
        case 0x38f5c8u: goto label_38f5c8;
        case 0x38f5ccu: goto label_38f5cc;
        case 0x38f5d0u: goto label_38f5d0;
        case 0x38f5d4u: goto label_38f5d4;
        default: break;
    }

    ctx->pc = 0x38f588u;

label_38f588:
    // 0x38f588: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38f588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38f58c:
    // 0x38f58c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38f58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_38f590:
    // 0x38f590: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38f590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38f594:
    // 0x38f594: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_38f598:
    if (ctx->pc == 0x38F598u) {
        ctx->pc = 0x38F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F594u;
        // 0x38f598: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F59Cu;
        goto label_38f59c;
    }
    ctx->pc = 0x38F594u;
    {
        const bool branch_taken_0x38f594 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F594u;
        // 0x38f598: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f594) {
            ctx->pc = 0x38F5A4u;
            goto label_38f5a4;
        }
    }
    ctx->pc = 0x38F59Cu;
label_38f59c:
    // 0x38f59c: 0x10000009  b           . + 4 + (0x9 << 2)
label_38f5a0:
    if (ctx->pc == 0x38F5A0u) {
        ctx->pc = 0x38F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F59Cu;
        // 0x38f5a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F5A4u;
        goto label_38f5a4;
    }
    ctx->pc = 0x38F59Cu;
    {
        const bool branch_taken_0x38f59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F59Cu;
        // 0x38f5a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f59c) {
            ctx->pc = 0x38F5C4u;
            goto label_38f5c4;
        }
    }
    ctx->pc = 0x38F5A4u;
label_38f5a4:
    // 0x38f5a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38f5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38f5a8:
    // 0x38f5a8: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x38f5a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_38f5ac:
    // 0x38f5ac: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x38f5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_38f5b0:
    // 0x38f5b0: 0x40f809  jalr        $v0
label_38f5b4:
    if (ctx->pc == 0x38F5B4u) {
        ctx->pc = 0x38F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F5B0u;
        // 0x38f5b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F5B8u;
        goto label_38f5b8;
    }
    ctx->pc = 0x38F5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38F5B8u);
        ctx->pc = 0x38F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F5B0u;
        // 0x38f5b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F5B0u, 0x38F5B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F5B8u;
label_38f5b8:
    // 0x38f5b8: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x38f5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_38f5bc:
    // 0x38f5bc: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x38f5bcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_38f5c0:
    // 0x38f5c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38f5c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38f5c4:
    // 0x38f5c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38f5c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38f5c8:
    // 0x38f5c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38f5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38f5cc:
    // 0x38f5cc: 0x3e00008  jr          $ra
label_38f5d0:
    if (ctx->pc == 0x38F5D0u) {
        ctx->pc = 0x38F5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F5CCu;
        // 0x38f5d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F5D4u;
        goto label_38f5d4;
    }
    ctx->pc = 0x38F5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F5CCu;
        // 0x38f5d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F5D4u;
label_38f5d4:
    // 0x38f5d4: 0x0  nop
    ctx->pc = 0x38f5d4u;
    // NOP
    ctx->pc = 0x38f5d8u;
}
