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

// Function: sub_00227EB0
// Address: 0x227eb0 - 0x227ef8
void sub_00227EB0_0x227eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227EB0_0x227eb0");
#endif

    switch (ctx->pc) {
        case 0x227ed8u: goto label_227ed8;
        default: break;
    }

    ctx->pc = 0x227eb0u;

    // 0x227eb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x227eb4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x227eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x227eb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227ebc: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x227ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x227ec0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x227EC0u;
    {
        const bool branch_taken_0x227ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227EC0u;
        // 0x227ec4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227ec0) {
            ctx->pc = 0x227EE0u;
            goto label_227ee0;
        }
    }
    ctx->pc = 0x227EC8u;
    // 0x227ec8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x227ec8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x227ecc: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x227eccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x227ed0: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x227ED0u;
    SET_GPR_U32(ctx, 31, 0x227ED8u);
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x227ED0u, 0x227ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227ED8u;
label_227ed8:
    // 0x227ed8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x227ED8u;
    {
        const bool branch_taken_0x227ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227ED8u;
        // 0x227edc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227ed8) {
            ctx->pc = 0x227EE8u;
            goto label_227ee8;
        }
    }
    ctx->pc = 0x227EE0u;
label_227ee0:
    // 0x227ee0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x227ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227ee4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x227ee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_227ee8:
    // 0x227ee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227eec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x227eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x227EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227EF0u;
        // 0x227ef4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227EF8u;
}
