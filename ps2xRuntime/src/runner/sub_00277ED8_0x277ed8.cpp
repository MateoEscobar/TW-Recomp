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

// Function: sub_00277ED8
// Address: 0x277ed8 - 0x277f28
void sub_00277ED8_0x277ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277ED8_0x277ed8");
#endif

    switch (ctx->pc) {
        case 0x277ef8u: goto label_277ef8;
        case 0x277f08u: goto label_277f08;
        case 0x277f18u: goto label_277f18;
        default: break;
    }

    ctx->pc = 0x277ed8u;

    // 0x277ed8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x277ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x277edc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x277edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x277ee0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x277ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x277ee4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x277ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ee8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x277ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277eec: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x277eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x277ef0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x277EF0u;
    SET_GPR_U32(ctx, 31, 0x277EF8u);
    ctx->pc = 0x277EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277EF0u;
    // 0x277ef4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x277EF0u, 0x277EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277EF8u;
label_277ef8:
    // 0x277ef8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x277EF8u;
    {
        const bool branch_taken_0x277ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277EF8u;
        // 0x277efc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277ef8) {
            ctx->pc = 0x277F10u;
            goto label_277f10;
        }
    }
    ctx->pc = 0x277F00u;
    // 0x277f00: 0xc08b984  jal         func_22E610
    ctx->pc = 0x277F00u;
    SET_GPR_U32(ctx, 31, 0x277F08u);
    ctx->pc = 0x277F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277F00u;
    // 0x277f04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E610u, 0x277F00u, 0x277F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277F08u;
label_277f08:
    // 0x277f08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x277F08u;
    {
        const bool branch_taken_0x277f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277F08u;
        // 0x277f0c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277f08) {
            ctx->pc = 0x277F1Cu;
            goto label_277f1c;
        }
    }
    ctx->pc = 0x277F10u;
label_277f10:
    // 0x277f10: 0xc09e0ec  jal         func_2783B0
    ctx->pc = 0x277F10u;
    SET_GPR_U32(ctx, 31, 0x277F18u);
    ctx->pc = 0x277F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277F10u;
    // 0x277f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2783B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2783B0u, 0x277F10u, 0x277F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277F18u;
label_277f18:
    // 0x277f18: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x277f18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_277f1c:
    // 0x277f1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x277f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277f20: 0x3e00008  jr          $ra
    ctx->pc = 0x277F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277F20u;
        // 0x277f24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277F28u;
}
