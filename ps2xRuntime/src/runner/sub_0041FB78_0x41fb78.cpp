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

// Function: sub_0041FB78
// Address: 0x41fb78 - 0x41fbb8
void sub_0041FB78_0x41fb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041FB78_0x41fb78");
#endif

    switch (ctx->pc) {
        case 0x41fba8u: goto label_41fba8;
        default: break;
    }

    ctx->pc = 0x41fb78u;

    // 0x41fb78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41fb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41fb7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x41fb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x41fb80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41fb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41fb84: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x41fb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x41fb88: 0x8c84010c  lw          $a0, 0x10C($a0)
    ctx->pc = 0x41fb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
    // 0x41fb8c: 0x248303ff  addiu       $v1, $a0, 0x3FF
    ctx->pc = 0x41fb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1023));
    // 0x41fb90: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x41fb90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x41fb94: 0x248407fe  addiu       $a0, $a0, 0x7FE
    ctx->pc = 0x41fb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2046));
    // 0x41fb98: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x41fb98u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x41fb9c: 0x42283  sra         $a0, $a0, 10
    ctx->pc = 0x41fb9cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 10));
    // 0x41fba0: 0xc0cdd68  jal         func_3375A0
    ctx->pc = 0x41FBA0u;
    SET_GPR_U32(ctx, 31, 0x41FBA8u);
    ctx->pc = 0x41FBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FBA0u;
    // 0x41fba4: 0x24840053  addiu       $a0, $a0, 0x53 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 83));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3375A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3375A0u, 0x41FBA0u, 0x41FBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FBA8u;
label_41fba8:
    // 0x41fba8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41fba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41fbac: 0x3e00008  jr          $ra
    ctx->pc = 0x41FBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FBACu;
        // 0x41fbb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41FBACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41FBB4u;
    // 0x41fbb4: 0x0  nop
    ctx->pc = 0x41fbb4u;
    // NOP
    ctx->pc = 0x41fbb8u;
}
