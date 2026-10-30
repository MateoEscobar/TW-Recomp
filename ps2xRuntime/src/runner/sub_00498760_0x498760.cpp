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

// Function: sub_00498760
// Address: 0x498760 - 0x4987b8
void sub_00498760_0x498760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00498760_0x498760");
#endif

    switch (ctx->pc) {
        case 0x498798u: goto label_498798;
        default: break;
    }

    ctx->pc = 0x498760u;

    // 0x498760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x498760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x498764: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x498764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x498768: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x498768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x49876c: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x49876Cu;
    {
        const bool branch_taken_0x49876c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x498770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49876Cu;
        // 0x498770: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49876c) {
            ctx->pc = 0x4987A4u;
            goto label_4987a4;
        }
    }
    ctx->pc = 0x498774u;
    // 0x498774: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x498774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x498778: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x498778u;
    {
        const bool branch_taken_0x498778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498778u;
        // 0x49877c: 0x8f838a20  lw          $v1, -0x75E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498778) {
            ctx->pc = 0x4987A4u;
            goto label_4987a4;
        }
    }
    ctx->pc = 0x498780u;
    // 0x498780: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x498780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498784: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x498784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x498788: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x498788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49878c: 0x94620014  lhu         $v0, 0x14($v1)
    ctx->pc = 0x49878cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x498790: 0xc11ef62  jal         func_47BD88
    ctx->pc = 0x498790u;
    SET_GPR_U32(ctx, 31, 0x498798u);
    ctx->pc = 0x498794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498790u;
    // 0x498794: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BD88u, 0x498790u, 0x498798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498798u;
label_498798:
    // 0x498798: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x498798u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x49879c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x49879Cu;
    {
        const bool branch_taken_0x49879c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4987A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49879Cu;
        // 0x4987a0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49879c) {
            ctx->pc = 0x4987A8u;
            goto label_4987a8;
        }
    }
    ctx->pc = 0x4987A4u;
label_4987a4:
    // 0x4987a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4987a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4987a8:
    // 0x4987a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4987a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4987ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4987acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4987b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4987B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4987B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4987B0u;
        // 0x4987b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4987B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4987B8u;
}
