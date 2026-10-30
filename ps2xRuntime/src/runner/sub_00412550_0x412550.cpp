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

// Function: sub_00412550
// Address: 0x412550 - 0x4125b8
void sub_00412550_0x412550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00412550_0x412550");
#endif

    switch (ctx->pc) {
        case 0x412550u: goto label_412550;
        case 0x412554u: goto label_412554;
        case 0x412558u: goto label_412558;
        case 0x41255cu: goto label_41255c;
        case 0x412560u: goto label_412560;
        case 0x412564u: goto label_412564;
        case 0x412568u: goto label_412568;
        case 0x41256cu: goto label_41256c;
        case 0x412570u: goto label_412570;
        case 0x412574u: goto label_412574;
        case 0x412578u: goto label_412578;
        case 0x41257cu: goto label_41257c;
        case 0x412580u: goto label_412580;
        case 0x412584u: goto label_412584;
        case 0x412588u: goto label_412588;
        case 0x41258cu: goto label_41258c;
        case 0x412590u: goto label_412590;
        case 0x412594u: goto label_412594;
        case 0x412598u: goto label_412598;
        case 0x41259cu: goto label_41259c;
        case 0x4125a0u: goto label_4125a0;
        case 0x4125a4u: goto label_4125a4;
        case 0x4125a8u: goto label_4125a8;
        case 0x4125acu: goto label_4125ac;
        case 0x4125b0u: goto label_4125b0;
        case 0x4125b4u: goto label_4125b4;
        default: break;
    }

    ctx->pc = 0x412550u;

label_412550:
    // 0x412550: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x412550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_412554:
    // 0x412554: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x412554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_412558:
    // 0x412558: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x412558u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_41255c:
    // 0x41255c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41255cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_412560:
    // 0x412560: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x412560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_412564:
    // 0x412564: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x412564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_412568:
    // 0x412568: 0x8e06cdb4  lw          $a2, -0x324C($s0)
    ctx->pc = 0x412568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_41256c:
    // 0x41256c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x41256cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_412570:
    // 0x412570: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x412570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_412574:
    // 0x412574: 0x84440178  lh          $a0, 0x178($v0)
    ctx->pc = 0x412574u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 376)));
label_412578:
    // 0x412578: 0x8c43017c  lw          $v1, 0x17C($v0)
    ctx->pc = 0x412578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 380)));
label_41257c:
    // 0x41257c: 0x60f809  jalr        $v1
label_412580:
    if (ctx->pc == 0x412580u) {
        ctx->pc = 0x412580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41257Cu;
        // 0x412580: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412584u;
        goto label_412584;
    }
    ctx->pc = 0x41257Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x412584u);
        ctx->pc = 0x412580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41257Cu;
        // 0x412580: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41257Cu, 0x412584u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x412584u;
label_412584:
    // 0x412584: 0x8e06cdb4  lw          $a2, -0x324C($s0)
    ctx->pc = 0x412584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954420)));
label_412588:
    // 0x412588: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x412588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_41258c:
    // 0x41258c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x41258cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_412590:
    // 0x412590: 0x84440158  lh          $a0, 0x158($v0)
    ctx->pc = 0x412590u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 344)));
label_412594:
    // 0x412594: 0x8c43015c  lw          $v1, 0x15C($v0)
    ctx->pc = 0x412594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
label_412598:
    // 0x412598: 0x60f809  jalr        $v1
label_41259c:
    if (ctx->pc == 0x41259Cu) {
        ctx->pc = 0x41259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412598u;
        // 0x41259c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4125A0u;
        goto label_4125a0;
    }
    ctx->pc = 0x412598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4125A0u);
        ctx->pc = 0x41259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412598u;
        // 0x41259c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412598u, 0x4125A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4125A0u;
label_4125a0:
    // 0x4125a0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4125a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4125a4:
    // 0x4125a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4125a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4125a8:
    // 0x4125a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4125a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4125ac:
    // 0x4125ac: 0x3e00008  jr          $ra
label_4125b0:
    if (ctx->pc == 0x4125B0u) {
        ctx->pc = 0x4125B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4125ACu;
        // 0x4125b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4125B4u;
        goto label_4125b4;
    }
    ctx->pc = 0x4125ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4125B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4125ACu;
        // 0x4125b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4125ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4125B4u;
label_4125b4:
    // 0x4125b4: 0x0  nop
    ctx->pc = 0x4125b4u;
    // NOP
    ctx->pc = 0x4125b8u;
}
