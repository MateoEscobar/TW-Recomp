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

// Function: sub_0043E778
// Address: 0x43e778 - 0x43e7b0
void sub_0043E778_0x43e778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043E778_0x43e778");
#endif

    switch (ctx->pc) {
        case 0x43e790u: goto label_43e790;
        default: break;
    }

    ctx->pc = 0x43e778u;

    // 0x43e778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x43e778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x43e77c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x43e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x43e780: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x43E780u;
    {
        const bool branch_taken_0x43e780 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x43E784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E780u;
        // 0x43e784: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e780) {
            ctx->pc = 0x43E7A0u;
            goto label_43e7a0;
        }
    }
    ctx->pc = 0x43E788u;
    // 0x43e788: 0xc10f9a4  jal         func_43E690
    ctx->pc = 0x43E788u;
    SET_GPR_U32(ctx, 31, 0x43E790u);
    ctx->pc = 0x43E78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43E788u;
    // 0x43e78c: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43E690u, 0x43E788u, 0x43E790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43E790u;
label_43e790:
    // 0x43e790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43e790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43e794: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x43e794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x43e798: 0x810f9a4  j           func_43E690
    ctx->pc = 0x43E798u;
    ctx->pc = 0x43E79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43E798u;
    // 0x43e79c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43E690u;
    sub_0043E690_0x43e690(rdram, ctx, runtime); return;
    ctx->pc = 0x43E7A0u;
label_43e7a0:
    // 0x43e7a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43e7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43e7a4: 0x810f9a4  j           func_43E690
    ctx->pc = 0x43E7A4u;
    ctx->pc = 0x43E7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43E7A4u;
    // 0x43e7a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43E690u;
    sub_0043E690_0x43e690(rdram, ctx, runtime); return;
    ctx->pc = 0x43E7ACu;
    // 0x43e7ac: 0x0  nop
    ctx->pc = 0x43e7acu;
    // NOP
    ctx->pc = 0x43e7b0u;
}
