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

// Function: sub_002FB578
// Address: 0x2fb578 - 0x2fb5c0
void sub_002FB578_0x2fb578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB578_0x2fb578");
#endif

    switch (ctx->pc) {
        case 0x2fb59cu: goto label_2fb59c;
        default: break;
    }

    ctx->pc = 0x2fb578u;

    // 0x2fb578: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fb578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fb57c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fb57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fb580: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fb580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fb584: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2fb584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb588: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FB588u;
    {
        const bool branch_taken_0x2fb588 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB588u;
        // 0x2fb58c: 0xac900018  sw          $s0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb588) {
            ctx->pc = 0x2FB5A8u;
            goto label_2fb5a8;
        }
    }
    ctx->pc = 0x2FB590u;
    // 0x2fb590: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fb590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fb594: 0xc088e30  jal         func_2238C0
    ctx->pc = 0x2FB594u;
    SET_GPR_U32(ctx, 31, 0x2FB59Cu);
    ctx->pc = 0x2FB598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB594u;
    // 0x2fb598: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238C0u, 0x2FB594u, 0x2FB59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB59Cu;
label_2fb59c:
    // 0x2fb59c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2fb59cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb5a0: 0x10700002  beq         $v1, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FB5A0u;
    {
        const bool branch_taken_0x2fb5a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x2FB5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB5A0u;
        // 0x2fb5a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb5a0) {
            ctx->pc = 0x2FB5ACu;
            goto label_2fb5ac;
        }
    }
    ctx->pc = 0x2FB5A8u;
label_2fb5a8:
    // 0x2fb5a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fb5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fb5ac:
    // 0x2fb5ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fb5acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fb5b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fb5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB5B4u;
        // 0x2fb5b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB5BCu;
    // 0x2fb5bc: 0x0  nop
    ctx->pc = 0x2fb5bcu;
    // NOP
    ctx->pc = 0x2fb5c0u;
}
