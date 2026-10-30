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

// Function: sub_004DDED8
// Address: 0x4dded8 - 0x4ddf58
void sub_004DDED8_0x4dded8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DDED8_0x4dded8");
#endif

    switch (ctx->pc) {
        case 0x4ddf28u: goto label_4ddf28;
        case 0x4ddf40u: goto label_4ddf40;
        default: break;
    }

    ctx->pc = 0x4dded8u;

    // 0x4dded8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4dded8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4ddedc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4ddedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4ddee0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ddee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4ddee4: 0x24428730  addiu       $v0, $v0, -0x78D0
    ctx->pc = 0x4ddee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936368));
    // 0x4ddee8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4ddee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4ddeec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ddeecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ddef0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4ddef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4ddef4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4ddef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x4ddef8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ddef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ddefc: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x4ddefcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
    // 0x4ddf00: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x4ddf00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x4ddf04: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x4ddf04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x4ddf08: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4ddf08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ddf0c: 0x2463dad0  addiu       $v1, $v1, -0x2530
    ctx->pc = 0x4ddf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957776));
    // 0x4ddf10: 0x24c6db80  addiu       $a2, $a2, -0x2480
    ctx->pc = 0x4ddf10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957952));
    // 0x4ddf14: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x4ddf14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x4ddf18: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x4ddf18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x4ddf1c: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x4ddf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x4ddf20: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x4DDF20u;
    SET_GPR_U32(ctx, 31, 0x4DDF28u);
    ctx->pc = 0x4DDF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DDF20u;
    // 0x4ddf24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4DDF20u, 0x4DDF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DDF28u;
label_4ddf28:
    // 0x4ddf28: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4ddf28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4ddf2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ddf2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ddf30: 0x2442a9c8  addiu       $v0, $v0, -0x5638
    ctx->pc = 0x4ddf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945224));
    // 0x4ddf34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4ddf34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ddf38: 0xc0557d2  jal         func_155F48
    ctx->pc = 0x4DDF38u;
    SET_GPR_U32(ctx, 31, 0x4DDF40u);
    ctx->pc = 0x4DDF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DDF38u;
    // 0x4ddf3c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155F48u, 0x4DDF38u, 0x4DDF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DDF40u;
label_4ddf40:
    // 0x4ddf40: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4ddf40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ddf44: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ddf44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ddf48: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4ddf48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ddf4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ddf4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ddf50: 0x3e00008  jr          $ra
    ctx->pc = 0x4DDF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DDF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DDF50u;
        // 0x4ddf54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DDF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DDF58u;
}
