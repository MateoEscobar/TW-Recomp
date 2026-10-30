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

// Function: sub_0016B618
// Address: 0x16b618 - 0x16b678
void sub_0016B618_0x16b618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B618_0x16b618");
#endif

    switch (ctx->pc) {
        case 0x16b63cu: goto label_16b63c;
        case 0x16b648u: goto label_16b648;
        default: break;
    }

    ctx->pc = 0x16b618u;

    // 0x16b618: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16b618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16b61c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b620: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16b620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16b624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b628: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16B628u;
    {
        const bool branch_taken_0x16b628 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16B62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B628u;
        // 0x16b62c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b628) {
            ctx->pc = 0x16B650u;
            goto label_16b650;
        }
    }
    ctx->pc = 0x16B630u;
    // 0x16b630: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16b630u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16b634: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16B634u;
    SET_GPR_U32(ctx, 31, 0x16B63Cu);
    ctx->pc = 0x16B638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B634u;
    // 0x16b638: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16B634u, 0x16B63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B63Cu;
label_16b63c:
    // 0x16b63c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16b63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b640: 0xc05a2d6  jal         func_168B58
    ctx->pc = 0x16B640u;
    SET_GPR_U32(ctx, 31, 0x16B648u);
    ctx->pc = 0x16B644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B640u;
    // 0x16b644: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168B58u, 0x16B640u, 0x16B648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B648u;
label_16b648:
    // 0x16b648: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16B648u;
    {
        const bool branch_taken_0x16b648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B648u;
        // 0x16b64c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b648) {
            ctx->pc = 0x16B658u;
            goto label_16b658;
        }
    }
    ctx->pc = 0x16B650u;
label_16b650:
    // 0x16b650: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16b650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b654: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16b654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16b658:
    // 0x16b658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b65c: 0x3e00008  jr          $ra
    ctx->pc = 0x16B65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B65Cu;
        // 0x16b660: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B664u;
    // 0x16b664: 0x0  nop
    ctx->pc = 0x16b664u;
    // NOP
    // 0x16b668: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x16b668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16b66c: 0x0  nop
    ctx->pc = 0x16b66cu;
    // NOP
    // 0x16b670: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x16b670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16b674: 0x0  nop
    ctx->pc = 0x16b674u;
    // NOP
    ctx->pc = 0x16b678u;
}
