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

// Function: sub_00415D40
// Address: 0x415d40 - 0x415d90
void sub_00415D40_0x415d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00415D40_0x415d40");
#endif

    switch (ctx->pc) {
        case 0x415d78u: goto label_415d78;
        default: break;
    }

    ctx->pc = 0x415d40u;

    // 0x415d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x415d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x415d44: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x415d44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415d48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x415d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x415d4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x415d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x415d50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x415d50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415d54: 0x8e0200e0  lw          $v0, 0xE0($s0)
    ctx->pc = 0x415d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x415d58: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x415D58u;
    {
        const bool branch_taken_0x415d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x415D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415D58u;
        // 0x415d5c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415d58) {
            ctx->pc = 0x415D7Cu;
            goto label_415d7c;
        }
    }
    ctx->pc = 0x415D60u;
    // 0x415d60: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x415d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x415d64: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x415d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415d68: 0x8c44719c  lw          $a0, 0x719C($v0)
    ctx->pc = 0x415d68u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x59719Cu));
    // 0x415d6c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x415d6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415d70: 0xc105f28  jal         func_417CA0
    ctx->pc = 0x415D70u;
    SET_GPR_U32(ctx, 31, 0x415D78u);
    ctx->pc = 0x415D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415D70u;
    // 0x415d74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417CA0u, 0x415D70u, 0x415D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415D78u;
label_415d78:
    // 0x415d78: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x415d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
label_415d7c:
    // 0x415d7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x415d7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x415d80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x415d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x415d84: 0x3e00008  jr          $ra
    ctx->pc = 0x415D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415D84u;
        // 0x415d88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x415D8Cu;
    // 0x415d8c: 0x0  nop
    ctx->pc = 0x415d8cu;
    // NOP
    ctx->pc = 0x415d90u;
}
