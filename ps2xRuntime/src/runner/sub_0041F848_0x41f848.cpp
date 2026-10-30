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

// Function: sub_0041F848
// Address: 0x41f848 - 0x41f8b0
void sub_0041F848_0x41f848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041F848_0x41f848");
#endif

    switch (ctx->pc) {
        case 0x41f874u: goto label_41f874;
        case 0x41f88cu: goto label_41f88c;
        default: break;
    }

    ctx->pc = 0x41f848u;

    // 0x41f848: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41f848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x41f84c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x41f84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41f850: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x41f850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x41f854: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41f854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f858: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41f858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f85c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41f85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x41f860: 0x26110164  addiu       $s1, $s0, 0x164
    ctx->pc = 0x41f860u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
    // 0x41f864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41f864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41f868: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41f868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f86c: 0xc052910  jal         func_14A440
    ctx->pc = 0x41F86Cu;
    SET_GPR_U32(ctx, 31, 0x41F874u);
    ctx->pc = 0x41F870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F86Cu;
    // 0x41f870: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A440u, 0x41F86Cu, 0x41F874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F874u;
label_41f874:
    // 0x41f874: 0x8e02017c  lw          $v0, 0x17C($s0)
    ctx->pc = 0x41f874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x41f878: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x41F878u;
    {
        const bool branch_taken_0x41f878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F878u;
        // 0x41f87c: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f878) {
            ctx->pc = 0x41F894u;
            goto label_41f894;
        }
    }
    ctx->pc = 0x41F880u;
    // 0x41f880: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41f880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f884: 0xc052cc4  jal         func_14B310
    ctx->pc = 0x41F884u;
    SET_GPR_U32(ctx, 31, 0x41F88Cu);
    ctx->pc = 0x41F888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F884u;
    // 0x41f888: 0x24a5b4c8  addiu       $a1, $a1, -0x4B38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B310u, 0x41F884u, 0x41F88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F88Cu;
label_41f88c:
    // 0x41f88c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x41F88Cu;
    {
        const bool branch_taken_0x41f88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F88Cu;
        // 0x41f890: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f88c) {
            ctx->pc = 0x41F898u;
            goto label_41f898;
        }
    }
    ctx->pc = 0x41F894u;
label_41f894:
    // 0x41f894: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x41f894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41f898:
    // 0x41f898: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41f898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41f89c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41f89cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41f8a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41f8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41f8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x41F8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F8A4u;
        // 0x41f8a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41F8ACu;
    // 0x41f8ac: 0x0  nop
    ctx->pc = 0x41f8acu;
    // NOP
    ctx->pc = 0x41f8b0u;
}
