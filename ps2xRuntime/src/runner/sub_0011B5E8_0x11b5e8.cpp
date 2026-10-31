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

// Function: sub_0011B5E8
// Address: 0x11b5e8 - 0x11b660
void sub_0011B5E8_0x11b5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B5E8_0x11b5e8");
#endif

    switch (ctx->pc) {
        case 0x11b604u: goto label_11b604;
        case 0x11b62cu: goto label_11b62c;
        case 0x11b648u: goto label_11b648;
        default: break;
    }

    ctx->pc = 0x11b5e8u;

    // 0x11b5e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11b5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11b5ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11b5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x11b5f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11b5f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b5f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11b5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11b5f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b5fc: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x11B5FCu;
    SET_GPR_U32(ctx, 31, 0x11B604u);
    ctx->pc = 0x11B600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B5FCu;
    // 0x11b600: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x11B5FCu, 0x11B604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B604u;
label_11b604:
    // 0x11b604: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x11B604u;
    {
        const bool branch_taken_0x11b604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b604) {
            ctx->pc = 0x11B608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B604u;
            // 0x11b608: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B64Cu;
            goto label_11b64c;
        }
    }
    ctx->pc = 0x11B60Cu;
    // 0x11b60c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x11b60cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11b610: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x11b610u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11b614: 0x54510006  bnel        $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B614u;
    {
        const bool branch_taken_0x11b614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x11b614) {
            ctx->pc = 0x11B618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B614u;
            // 0x11b618: 0x92020001  lbu         $v0, 0x1($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B630u;
            goto label_11b630;
        }
    }
    ctx->pc = 0x11B61Cu;
    // 0x11b61c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b620: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b624: 0xc046dd0  jal         func_11B740
    ctx->pc = 0x11B624u;
    SET_GPR_U32(ctx, 31, 0x11B62Cu);
    ctx->pc = 0x11B628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B624u;
    // 0x11b628: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B740u, 0x11B624u, 0x11B62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B62Cu;
label_11b62c:
    // 0x11b62c: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x11b62cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_11b630:
    // 0x11b630: 0x54510006  bnel        $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B630u;
    {
        const bool branch_taken_0x11b630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x11b630) {
            ctx->pc = 0x11B634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B630u;
            // 0x11b634: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B64Cu;
            goto label_11b64c;
        }
    }
    ctx->pc = 0x11B638u;
    // 0x11b638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b63c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11b63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b640: 0xc046dd0  jal         func_11B740
    ctx->pc = 0x11B640u;
    SET_GPR_U32(ctx, 31, 0x11B648u);
    ctx->pc = 0x11B644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B640u;
    // 0x11b644: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B740u, 0x11B640u, 0x11B648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B648u;
label_11b648:
    // 0x11b648: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x11b648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11b64c:
    // 0x11b64c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11b64cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b654: 0x3e00008  jr          $ra
    ctx->pc = 0x11B654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B654u;
        // 0x11b658: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B65Cu;
    // 0x11b65c: 0x0  nop
    ctx->pc = 0x11b65cu;
    // NOP
    ctx->pc = 0x11b660u;
}
