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

// Function: sub_0028F1E8
// Address: 0x28f1e8 - 0x28f240
void sub_0028F1E8_0x28f1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F1E8_0x28f1e8");
#endif

    switch (ctx->pc) {
        case 0x28f224u: goto label_28f224;
        case 0x28f22cu: goto label_28f22c;
        default: break;
    }

    ctx->pc = 0x28f1e8u;

    // 0x28f1e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28f1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28f1ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28f1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28f1f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28f1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28f1f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28f1f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f1f8: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x28f1f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x28f1fc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F1FCu;
    {
        const bool branch_taken_0x28f1fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F1FCu;
        // 0x28f200: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f1fc) {
            ctx->pc = 0x28F210u;
            goto label_28f210;
        }
    }
    ctx->pc = 0x28F204u;
    // 0x28f204: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x28f204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28f208: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28F208u;
    {
        const bool branch_taken_0x28f208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F208u;
        // 0x28f20c: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f208) {
            ctx->pc = 0x28F214u;
            goto label_28f214;
        }
    }
    ctx->pc = 0x28F210u;
label_28f210:
    // 0x28f210: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28f210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f214:
    // 0x28f214: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F214u;
    {
        const bool branch_taken_0x28f214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f214) {
            ctx->pc = 0x28F224u;
            goto label_28f224;
        }
    }
    ctx->pc = 0x28F21Cu;
    // 0x28f21c: 0xc0a7ba8  jal         func_29EEA0
    ctx->pc = 0x28F21Cu;
    SET_GPR_U32(ctx, 31, 0x28F224u);
    ctx->pc = 0x29EEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EEA0u, 0x28F21Cu, 0x28F224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F224u;
label_28f224:
    // 0x28f224: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x28F224u;
    SET_GPR_U32(ctx, 31, 0x28F22Cu);
    ctx->pc = 0x28F228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F224u;
    // 0x28f228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x28F224u, 0x28F22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F22Cu;
label_28f22c:
    // 0x28f22c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28f22cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f234: 0x3e00008  jr          $ra
    ctx->pc = 0x28F234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F234u;
        // 0x28f238: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F23Cu;
    // 0x28f23c: 0x0  nop
    ctx->pc = 0x28f23cu;
    // NOP
    ctx->pc = 0x28f240u;
}
