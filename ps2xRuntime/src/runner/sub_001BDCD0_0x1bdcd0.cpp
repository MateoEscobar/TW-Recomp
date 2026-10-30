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

// Function: sub_001BDCD0
// Address: 0x1bdcd0 - 0x1bdd38
void sub_001BDCD0_0x1bdcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDCD0_0x1bdcd0");
#endif

    switch (ctx->pc) {
        case 0x1bdcf4u: goto label_1bdcf4;
        case 0x1bdd04u: goto label_1bdd04;
        case 0x1bdd1cu: goto label_1bdd1c;
        default: break;
    }

    ctx->pc = 0x1bdcd0u;

    // 0x1bdcd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bdcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bdcd4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bdcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bdcd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bdcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bdcdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bdcdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdce0: 0x8e020584  lw          $v0, 0x584($s0)
    ctx->pc = 0x1bdce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1412)));
    // 0x1bdce4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BDCE4u;
    {
        const bool branch_taken_0x1bdce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCE4u;
        // 0x1bdce8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdce4) {
            ctx->pc = 0x1BDD0Cu;
            goto label_1bdd0c;
        }
    }
    ctx->pc = 0x1BDCECu;
    // 0x1bdcec: 0xc06f704  jal         func_1BDC10
    ctx->pc = 0x1BDCECu;
    SET_GPR_U32(ctx, 31, 0x1BDCF4u);
    ctx->pc = 0x1BDCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDCECu;
    // 0x1bdcf0: 0xae020584  sw          $v0, 0x584($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1412), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC10u, 0x1BDCECu, 0x1BDCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDCF4u;
label_1bdcf4:
    // 0x1bdcf4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bdcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1bdcf8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1bdcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bdcfc: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x1BDCFCu;
    SET_GPR_U32(ctx, 31, 0x1BDD04u);
    ctx->pc = 0x1BDD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDCFCu;
    // 0x1bdd00: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1BDCFCu, 0x1BDD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDD04u;
label_1bdd04:
    // 0x1bdd04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BDD04u;
    {
        const bool branch_taken_0x1bdd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD04u;
        // 0x1bdd08: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd04) {
            ctx->pc = 0x1BDD28u;
            goto label_1bdd28;
        }
    }
    ctx->pc = 0x1BDD0Cu;
label_1bdd0c:
    // 0x1bdd0c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bdd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1bdd10: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1bdd10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1bdd14: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x1BDD14u;
    SET_GPR_U32(ctx, 31, 0x1BDD1Cu);
    ctx->pc = 0x1BDD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDD14u;
    // 0x1bdd18: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1BDD14u, 0x1BDD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDD1Cu;
label_1bdd1c:
    // 0x1bdd1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bdd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdd20: 0xae0306a8  sw          $v1, 0x6A8($s0)
    ctx->pc = 0x1bdd20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1704), GPR_U32(ctx, 3));
    // 0x1bdd24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bdd24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bdd28:
    // 0x1bdd28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bdd28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdd2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD2Cu;
        // 0x1bdd30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDD2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDD34u;
    // 0x1bdd34: 0x0  nop
    ctx->pc = 0x1bdd34u;
    // NOP
    ctx->pc = 0x1bdd38u;
}
