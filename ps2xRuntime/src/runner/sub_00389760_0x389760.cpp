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

// Function: sub_00389760
// Address: 0x389760 - 0x3897b0
void sub_00389760_0x389760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389760_0x389760");
#endif

    switch (ctx->pc) {
        case 0x389788u: goto label_389788;
        case 0x389798u: goto label_389798;
        case 0x3897a0u: goto label_3897a0;
        default: break;
    }

    ctx->pc = 0x389760u;

    // 0x389760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x389760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x389764: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x389764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x389768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x389768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38976c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38976cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389770: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x389770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x389774: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x389774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x389778: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x389778u;
    {
        const bool branch_taken_0x389778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x389778) {
            ctx->pc = 0x38977Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x389778u;
            // 0x38977c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3897A4u;
            goto label_3897a4;
        }
    }
    ctx->pc = 0x389780u;
    // 0x389780: 0xc0e85ae  jal         func_3A16B8
    ctx->pc = 0x389780u;
    SET_GPR_U32(ctx, 31, 0x389788u);
    ctx->pc = 0x3A16B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A16B8u, 0x389780u, 0x389788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389788u;
label_389788:
    // 0x389788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x389788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38978c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38978cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389790: 0xc0e26d0  jal         func_389B40
    ctx->pc = 0x389790u;
    SET_GPR_U32(ctx, 31, 0x389798u);
    ctx->pc = 0x389794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389790u;
    // 0x389794: 0xa2021308  sb          $v0, 0x1308($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 4872), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389B40u, 0x389790u, 0x389798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389798u;
label_389798:
    // 0x389798: 0xc0e1de0  jal         func_387780
    ctx->pc = 0x389798u;
    SET_GPR_U32(ctx, 31, 0x3897A0u);
    ctx->pc = 0x38979Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389798u;
    // 0x38979c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387780u, 0x389798u, 0x3897A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3897A0u;
label_3897a0:
    // 0x3897a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3897a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3897a4:
    // 0x3897a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3897a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3897a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3897A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3897ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3897A8u;
        // 0x3897ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3897A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3897B0u;
}
