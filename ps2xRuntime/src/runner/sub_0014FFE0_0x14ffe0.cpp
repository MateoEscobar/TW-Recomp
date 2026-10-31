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

// Function: sub_0014FFE0
// Address: 0x14ffe0 - 0x150028
void sub_0014FFE0_0x14ffe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014FFE0_0x14ffe0");
#endif

    switch (ctx->pc) {
        case 0x14fff4u: goto label_14fff4;
        case 0x14fffcu: goto label_14fffc;
        case 0x150008u: goto label_150008;
        case 0x150010u: goto label_150010;
        case 0x150018u: goto label_150018;
        default: break;
    }

    ctx->pc = 0x14ffe0u;

    // 0x14ffe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14ffe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14ffe4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14ffe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14ffe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ffe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ffec: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x14FFECu;
    SET_GPR_U32(ctx, 31, 0x14FFF4u);
    ctx->pc = 0x14FFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FFECu;
    // 0x14fff0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x14FFECu, 0x14FFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FFF4u;
label_14fff4:
    // 0x14fff4: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x14FFF4u;
    SET_GPR_U32(ctx, 31, 0x14FFFCu);
    ctx->pc = 0x14FFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FFF4u;
    // 0x14fff8: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x14FFF4u, 0x14FFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FFFCu;
label_14fffc:
    // 0x14fffc: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x14fffcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x150000: 0xc053722  jal         func_14DC88
    ctx->pc = 0x150000u;
    SET_GPR_U32(ctx, 31, 0x150008u);
    ctx->pc = 0x150004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150000u;
    // 0x150004: 0x102403  sra         $a0, $s0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x150000u, 0x150008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150008u;
label_150008:
    // 0x150008: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x150008u;
    SET_GPR_U32(ctx, 31, 0x150010u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x150008u, 0x150010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150010u;
label_150010:
    // 0x150010: 0xc05471c  jal         func_151C70
    ctx->pc = 0x150010u;
    SET_GPR_U32(ctx, 31, 0x150018u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x150010u, 0x150018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150018u;
label_150018:
    // 0x150018: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x150018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15001c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15001cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150020: 0x3e00008  jr          $ra
    ctx->pc = 0x150020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150020u;
        // 0x150024: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150028u;
}
