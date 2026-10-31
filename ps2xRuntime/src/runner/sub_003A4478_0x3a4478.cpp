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

// Function: sub_003A4478
// Address: 0x3a4478 - 0x3a44c8
void sub_003A4478_0x3a4478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4478_0x3a4478");
#endif

    switch (ctx->pc) {
        case 0x3a4494u: goto label_3a4494;
        default: break;
    }

    ctx->pc = 0x3a4478u;

    // 0x3a4478: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a4478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a447c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a447cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a4480: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a4480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a4484: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A4484u;
    {
        const bool branch_taken_0x3a4484 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4484u;
        // 0x3a4488: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4484) {
            ctx->pc = 0x3A449Cu;
            goto label_3a449c;
        }
    }
    ctx->pc = 0x3A448Cu;
    // 0x3a448c: 0xc0e910a  jal         func_3A4428
    ctx->pc = 0x3A448Cu;
    SET_GPR_U32(ctx, 31, 0x3A4494u);
    ctx->pc = 0x3A4428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4428u, 0x3A448Cu, 0x3A4494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4494u;
label_3a4494:
    // 0x3a4494: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3A4494u;
    {
        const bool branch_taken_0x3a4494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4494u;
        // 0x3a4498: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4494) {
            ctx->pc = 0x3A44B0u;
            goto label_3a44b0;
        }
    }
    ctx->pc = 0x3A449Cu;
label_3a449c:
    // 0x3a449c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a449cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a44a0: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x3a44a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x3a44a4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a44a4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x3a44a8: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x3a44a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x3a44ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a44acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a44b0:
    // 0x3a44b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a44b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a44b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a44b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a44b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A44B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A44BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A44B8u;
        // 0x3a44bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A44B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A44C0u;
    // 0x3a44c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a44c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a44c4: 0x0  nop
    ctx->pc = 0x3a44c4u;
    // NOP
    ctx->pc = 0x3a44c8u;
}
