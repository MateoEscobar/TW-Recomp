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

// Function: sub_00373200
// Address: 0x373200 - 0x373238
void sub_00373200_0x373200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373200_0x373200");
#endif

    switch (ctx->pc) {
        case 0x373214u: goto label_373214;
        case 0x37321cu: goto label_37321c;
        case 0x373228u: goto label_373228;
        default: break;
    }

    ctx->pc = 0x373200u;

    // 0x373200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x373200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x373204: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x373204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37320c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37320Cu;
    SET_GPR_U32(ctx, 31, 0x373214u);
    ctx->pc = 0x373210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37320Cu;
    // 0x373210: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37320Cu, 0x373214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373214u;
label_373214:
    // 0x373214: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373214u;
    SET_GPR_U32(ctx, 31, 0x37321Cu);
    ctx->pc = 0x373218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373214u;
    // 0x373218: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373214u, 0x37321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37321Cu;
label_37321c:
    // 0x37321c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37321cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x373220: 0xc05a87a  jal         func_16A1E8
    ctx->pc = 0x373220u;
    SET_GPR_U32(ctx, 31, 0x373228u);
    ctx->pc = 0x373224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373220u;
    // 0x373224: 0x22403  sra         $a0, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A1E8u, 0x373220u, 0x373228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373228u;
label_373228:
    // 0x373228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37322c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37322cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373230: 0x3e00008  jr          $ra
    ctx->pc = 0x373230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373230u;
        // 0x373234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373238u;
}
