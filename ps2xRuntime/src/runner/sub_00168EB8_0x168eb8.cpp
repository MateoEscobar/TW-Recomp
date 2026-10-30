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

// Function: sub_00168EB8
// Address: 0x168eb8 - 0x168f08
void sub_00168EB8_0x168eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168EB8_0x168eb8");
#endif

    switch (ctx->pc) {
        case 0x168ed8u: goto label_168ed8;
        default: break;
    }

    ctx->pc = 0x168eb8u;

    // 0x168eb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x168eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x168ebc: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x168ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x168ec0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x168ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x168ec4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x168ec8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x168ec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ecc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168ed0: 0xc05a2a8  jal         func_168AA0
    ctx->pc = 0x168ED0u;
    SET_GPR_U32(ctx, 31, 0x168ED8u);
    ctx->pc = 0x168ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168ED0u;
    // 0x168ed4: 0x68c03  sra         $s1, $a2, 16 (Delay Slot)
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168AA0u, 0x168ED0u, 0x168ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168ED8u;
label_168ed8:
    // 0x168ed8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x168ed8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168edc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x168edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x168ee0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168EE0u;
    {
        const bool branch_taken_0x168ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x168EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168EE0u;
        // 0x168ee4: 0x24020130  addiu       $v0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ee0) {
            ctx->pc = 0x168EF4u;
            goto label_168ef4;
        }
    }
    ctx->pc = 0x168EE8u;
    // 0x168ee8: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x168ee8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x168eec: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x168eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x168ef0: 0xa451069a  sh          $s1, 0x69A($v0)
    ctx->pc = 0x168ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1690), (uint16_t)GPR_U32(ctx, 17));
label_168ef4:
    // 0x168ef4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x168ef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168ef8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168ef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168efc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168f00: 0x3e00008  jr          $ra
    ctx->pc = 0x168F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F00u;
        // 0x168f04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168F08u;
}
