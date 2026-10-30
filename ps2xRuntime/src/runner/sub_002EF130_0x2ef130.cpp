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

// Function: sub_002EF130
// Address: 0x2ef130 - 0x2ef188
void sub_002EF130_0x2ef130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF130_0x2ef130");
#endif

    switch (ctx->pc) {
        case 0x2ef15cu: goto label_2ef15c;
        case 0x2ef174u: goto label_2ef174;
        default: break;
    }

    ctx->pc = 0x2ef130u;

    // 0x2ef130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ef130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ef134: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ef134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef138: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ef138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ef13c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ef13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef140: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ef140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ef144: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ef144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ef148: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x2ef148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2ef14c: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EF14Cu;
    {
        const bool branch_taken_0x2ef14c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EF150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF14Cu;
        // 0x2ef150: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef14c) {
            ctx->pc = 0x2EF174u;
            goto label_2ef174;
        }
    }
    ctx->pc = 0x2EF154u;
    // 0x2ef154: 0xc0bbc62  jal         func_2EF188
    ctx->pc = 0x2EF154u;
    SET_GPR_U32(ctx, 31, 0x2EF15Cu);
    ctx->pc = 0x2EF158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF154u;
    // 0x2ef158: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF188u, 0x2EF154u, 0x2EF15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF15Cu;
label_2ef15c:
    // 0x2ef15c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EF15Cu;
    {
        const bool branch_taken_0x2ef15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF15Cu;
        // 0x2ef160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef15c) {
            ctx->pc = 0x2EF174u;
            goto label_2ef174;
        }
    }
    ctx->pc = 0x2EF164u;
    // 0x2ef164: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ef164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef168: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ef168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef16c: 0xc0930a0  jal         func_24C280
    ctx->pc = 0x2EF16Cu;
    SET_GPR_U32(ctx, 31, 0x2EF174u);
    ctx->pc = 0x2EF170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF16Cu;
    // 0x2ef170: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C280u, 0x2EF16Cu, 0x2EF174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF174u;
label_2ef174:
    // 0x2ef174: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ef174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ef178: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ef178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ef17c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF17Cu;
        // 0x2ef180: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF184u;
    // 0x2ef184: 0x0  nop
    ctx->pc = 0x2ef184u;
    // NOP
    ctx->pc = 0x2ef188u;
}
