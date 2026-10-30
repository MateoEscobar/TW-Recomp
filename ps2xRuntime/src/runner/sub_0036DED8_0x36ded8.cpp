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

// Function: sub_0036DED8
// Address: 0x36ded8 - 0x36df28
void sub_0036DED8_0x36ded8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DED8_0x36ded8");
#endif

    switch (ctx->pc) {
        case 0x36def4u: goto label_36def4;
        case 0x36defcu: goto label_36defc;
        case 0x36df04u: goto label_36df04;
        case 0x36df10u: goto label_36df10;
        default: break;
    }

    ctx->pc = 0x36ded8u;

    // 0x36ded8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36ded8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36dedc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36dedcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dee0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x36dee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x36dee4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36dee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36dee8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36dee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36deec: 0xc102488  jal         func_409220
    ctx->pc = 0x36DEECu;
    SET_GPR_U32(ctx, 31, 0x36DEF4u);
    ctx->pc = 0x36DEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DEECu;
    // 0x36def0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36DEECu, 0x36DEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DEF4u;
label_36def4:
    // 0x36def4: 0xc0e5de0  jal         func_397780
    ctx->pc = 0x36DEF4u;
    SET_GPR_U32(ctx, 31, 0x36DEFCu);
    ctx->pc = 0x36DEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DEF4u;
    // 0x36def8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397780u, 0x36DEF4u, 0x36DEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DEFCu;
label_36defc:
    // 0x36defc: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x36DEFCu;
    SET_GPR_U32(ctx, 31, 0x36DF04u);
    ctx->pc = 0x36DF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DEFCu;
    // 0x36df00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x36DEFCu, 0x36DF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DF04u;
label_36df04:
    // 0x36df04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36df04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36df08: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x36DF08u;
    SET_GPR_U32(ctx, 31, 0x36DF10u);
    ctx->pc = 0x36DF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DF08u;
    // 0x36df0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x36DF08u, 0x36DF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DF10u;
label_36df10:
    // 0x36df10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x36df10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36df14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36df14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36df18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36df18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36df1c: 0x3e00008  jr          $ra
    ctx->pc = 0x36DF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DF1Cu;
        // 0x36df20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DF24u;
    // 0x36df24: 0x0  nop
    ctx->pc = 0x36df24u;
    // NOP
    ctx->pc = 0x36df28u;
}
