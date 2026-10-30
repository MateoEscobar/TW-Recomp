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

// Function: sub_003ED5A0
// Address: 0x3ed5a0 - 0x3ed610
void sub_003ED5A0_0x3ed5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ED5A0_0x3ed5a0");
#endif

    switch (ctx->pc) {
        case 0x3ed5a0u: goto label_3ed5a0;
        case 0x3ed5a4u: goto label_3ed5a4;
        case 0x3ed5a8u: goto label_3ed5a8;
        case 0x3ed5acu: goto label_3ed5ac;
        case 0x3ed5b0u: goto label_3ed5b0;
        case 0x3ed5b4u: goto label_3ed5b4;
        case 0x3ed5b8u: goto label_3ed5b8;
        case 0x3ed5bcu: goto label_3ed5bc;
        case 0x3ed5c0u: goto label_3ed5c0;
        case 0x3ed5c4u: goto label_3ed5c4;
        case 0x3ed5c8u: goto label_3ed5c8;
        case 0x3ed5ccu: goto label_3ed5cc;
        case 0x3ed5d0u: goto label_3ed5d0;
        case 0x3ed5d4u: goto label_3ed5d4;
        case 0x3ed5d8u: goto label_3ed5d8;
        case 0x3ed5dcu: goto label_3ed5dc;
        case 0x3ed5e0u: goto label_3ed5e0;
        case 0x3ed5e4u: goto label_3ed5e4;
        case 0x3ed5e8u: goto label_3ed5e8;
        case 0x3ed5ecu: goto label_3ed5ec;
        case 0x3ed5f0u: goto label_3ed5f0;
        case 0x3ed5f4u: goto label_3ed5f4;
        case 0x3ed5f8u: goto label_3ed5f8;
        case 0x3ed5fcu: goto label_3ed5fc;
        case 0x3ed600u: goto label_3ed600;
        case 0x3ed604u: goto label_3ed604;
        case 0x3ed608u: goto label_3ed608;
        case 0x3ed60cu: goto label_3ed60c;
        default: break;
    }

    ctx->pc = 0x3ed5a0u;

label_3ed5a0:
    // 0x3ed5a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ed5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3ed5a4:
    // 0x3ed5a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3ed5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3ed5a8:
    // 0x3ed5a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ed5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ed5ac:
    // 0x3ed5ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ed5acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ed5b0:
    // 0x3ed5b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ed5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3ed5b4:
    // 0x3ed5b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ed5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ed5b8:
    // 0x3ed5b8: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3ed5b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ed5bc:
    // 0x3ed5bc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ed5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ed5c0:
    // 0x3ed5c0: 0x40f809  jalr        $v0
label_3ed5c4:
    if (ctx->pc == 0x3ED5C4u) {
        ctx->pc = 0x3ED5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED5C0u;
        // 0x3ed5c4: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED5C8u;
        goto label_3ed5c8;
    }
    ctx->pc = 0x3ED5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ED5C8u);
        ctx->pc = 0x3ED5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED5C0u;
        // 0x3ed5c4: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED5C0u, 0x3ED5C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ED5C8u;
label_3ed5c8:
    // 0x3ed5c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ed5c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ed5cc:
    // 0x3ed5cc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3ed5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3ed5d0:
    // 0x3ed5d0: 0x1602000b  bne         $s0, $v0, . + 4 + (0xB << 2)
label_3ed5d4:
    if (ctx->pc == 0x3ED5D4u) {
        ctx->pc = 0x3ED5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED5D0u;
        // 0x3ed5d4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED5D8u;
        goto label_3ed5d8;
    }
    ctx->pc = 0x3ED5D0u;
    {
        const bool branch_taken_0x3ed5d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3ED5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED5D0u;
        // 0x3ed5d4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed5d0) {
            ctx->pc = 0x3ED600u;
            goto label_3ed600;
        }
    }
    ctx->pc = 0x3ED5D8u;
label_3ed5d8:
    // 0x3ed5d8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3ed5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ed5dc:
    // 0x3ed5dc: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
label_3ed5e0:
    if (ctx->pc == 0x3ED5E0u) {
        ctx->pc = 0x3ED5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED5DCu;
        // 0x3ed5e0: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED5E4u;
        goto label_3ed5e4;
    }
    ctx->pc = 0x3ED5DCu;
    {
        const bool branch_taken_0x3ed5dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed5dc) {
            ctx->pc = 0x3ED5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ED5DCu;
            // 0x3ed5e0: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ED604u;
            goto label_3ed604;
        }
    }
    ctx->pc = 0x3ED5E4u;
label_3ed5e4:
    // 0x3ed5e4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3ed5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3ed5e8:
    // 0x3ed5e8: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3ed5e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3ed5ec:
    // 0x3ed5ec: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3ed5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3ed5f0:
    // 0x3ed5f0: 0x60f809  jalr        $v1
label_3ed5f4:
    if (ctx->pc == 0x3ED5F4u) {
        ctx->pc = 0x3ED5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED5F0u;
        // 0x3ed5f4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED5F8u;
        goto label_3ed5f8;
    }
    ctx->pc = 0x3ED5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3ED5F8u);
        ctx->pc = 0x3ED5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED5F0u;
        // 0x3ed5f4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED5F0u, 0x3ED5F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ED5F8u;
label_3ed5f8:
    // 0x3ed5f8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3ed5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3ed5fc:
    // 0x3ed5fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3ed5fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ed600:
    // 0x3ed600: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ed600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ed604:
    // 0x3ed604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ed604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ed608:
    // 0x3ed608: 0x3e00008  jr          $ra
label_3ed60c:
    if (ctx->pc == 0x3ED60Cu) {
        ctx->pc = 0x3ED60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED608u;
        // 0x3ed60c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED610u;
        goto label_fallthrough_0x3ed608;
    }
    ctx->pc = 0x3ED608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED608u;
        // 0x3ed60c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ed608:
    ctx->pc = 0x3ED610u;
}
