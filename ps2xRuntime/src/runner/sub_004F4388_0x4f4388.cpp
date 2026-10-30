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

// Function: sub_004F4388
// Address: 0x4f4388 - 0x4f43e8
void sub_004F4388_0x4f4388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4388_0x4f4388");
#endif

    switch (ctx->pc) {
        case 0x4f4388u: goto label_4f4388;
        case 0x4f438cu: goto label_4f438c;
        case 0x4f4390u: goto label_4f4390;
        case 0x4f4394u: goto label_4f4394;
        case 0x4f4398u: goto label_4f4398;
        case 0x4f439cu: goto label_4f439c;
        case 0x4f43a0u: goto label_4f43a0;
        case 0x4f43a4u: goto label_4f43a4;
        case 0x4f43a8u: goto label_4f43a8;
        case 0x4f43acu: goto label_4f43ac;
        case 0x4f43b0u: goto label_4f43b0;
        case 0x4f43b4u: goto label_4f43b4;
        case 0x4f43b8u: goto label_4f43b8;
        case 0x4f43bcu: goto label_4f43bc;
        case 0x4f43c0u: goto label_4f43c0;
        case 0x4f43c4u: goto label_4f43c4;
        case 0x4f43c8u: goto label_4f43c8;
        case 0x4f43ccu: goto label_4f43cc;
        case 0x4f43d0u: goto label_4f43d0;
        case 0x4f43d4u: goto label_4f43d4;
        case 0x4f43d8u: goto label_4f43d8;
        case 0x4f43dcu: goto label_4f43dc;
        case 0x4f43e0u: goto label_4f43e0;
        case 0x4f43e4u: goto label_4f43e4;
        default: break;
    }

    ctx->pc = 0x4f4388u;

label_4f4388:
    // 0x4f4388: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f4388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4f438c:
    // 0x4f438c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4f438cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4f4390:
    // 0x4f4390: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f4390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f4394:
    // 0x4f4394: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4f4394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f4398:
    // 0x4f4398: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f4398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f439c:
    // 0x4f439c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_4f43a0:
    if (ctx->pc == 0x4F43A0u) {
        ctx->pc = 0x4F43A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F439Cu;
        // 0x4f43a0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F43A4u;
        goto label_4f43a4;
    }
    ctx->pc = 0x4F439Cu;
    {
        const bool branch_taken_0x4f439c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F43A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F439Cu;
        // 0x4f43a0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f439c) {
            ctx->pc = 0x4F43D4u;
            goto label_4f43d4;
        }
    }
    ctx->pc = 0x4F43A4u;
label_4f43a4:
    // 0x4f43a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4f43a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f43a8:
    // 0x4f43a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4f43a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f43ac:
    // 0x4f43ac: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4f43acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4f43b0:
    // 0x4f43b0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4f43b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4f43b4:
    // 0x4f43b4: 0x60f809  jalr        $v1
label_4f43b8:
    if (ctx->pc == 0x4F43B8u) {
        ctx->pc = 0x4F43B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F43B4u;
        // 0x4f43b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F43BCu;
        goto label_4f43bc;
    }
    ctx->pc = 0x4F43B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F43BCu);
        ctx->pc = 0x4F43B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F43B4u;
        // 0x4f43b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F43B4u, 0x4F43BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F43BCu;
label_4f43bc:
    // 0x4f43bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4f43bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4f43c0:
    // 0x4f43c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f43c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f43c4:
    // 0x4f43c4: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x4f43c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_4f43c8:
    // 0x4f43c8: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x4f43c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_4f43cc:
    // 0x4f43cc: 0x60f809  jalr        $v1
label_4f43d0:
    if (ctx->pc == 0x4F43D0u) {
        ctx->pc = 0x4F43D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F43CCu;
        // 0x4f43d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F43D4u;
        goto label_4f43d4;
    }
    ctx->pc = 0x4F43CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F43D4u);
        ctx->pc = 0x4F43D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F43CCu;
        // 0x4f43d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F43CCu, 0x4F43D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F43D4u;
label_4f43d4:
    // 0x4f43d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4f43d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f43d8:
    // 0x4f43d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f43d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f43dc:
    // 0x4f43dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f43dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f43e0:
    // 0x4f43e0: 0x3e00008  jr          $ra
label_4f43e4:
    if (ctx->pc == 0x4F43E4u) {
        ctx->pc = 0x4F43E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F43E0u;
        // 0x4f43e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F43E8u;
        goto label_fallthrough_0x4f43e0;
    }
    ctx->pc = 0x4F43E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F43E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F43E0u;
        // 0x4f43e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F43E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4f43e0:
    ctx->pc = 0x4F43E8u;
}
