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

// Function: sub_0011BDC0
// Address: 0x11bdc0 - 0x11be18
void sub_0011BDC0_0x11bdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BDC0_0x11bdc0");
#endif

    switch (ctx->pc) {
        case 0x11bde4u: goto label_11bde4;
        case 0x11bdecu: goto label_11bdec;
        case 0x11be00u: goto label_11be00;
        default: break;
    }

    ctx->pc = 0x11bdc0u;

    // 0x11bdc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11bdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11bdc4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x11bdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x11bdc8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11bdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11bdcc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11bdccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bdd0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11bdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11bdd4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x11bdd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bdd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11bdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11bddc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x11BDDCu;
    SET_GPR_U32(ctx, 31, 0x11BDE4u);
    ctx->pc = 0x11BDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BDDCu;
    // 0x11bde0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x11BDDCu, 0x11BDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BDE4u;
label_11bde4:
    // 0x11bde4: 0xc047a5e  jal         func_11E978
    ctx->pc = 0x11BDE4u;
    SET_GPR_U32(ctx, 31, 0x11BDECu);
    ctx->pc = 0x11BDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BDE4u;
    // 0x11bde8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E978u, 0x11BDE4u, 0x11BDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BDECu;
label_11bdec:
    // 0x11bdec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11BDECu;
    {
        const bool branch_taken_0x11bdec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BDECu;
        // 0x11bdf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bdec) {
            ctx->pc = 0x11BE00u;
            goto label_11be00;
        }
    }
    ctx->pc = 0x11BDF4u;
    // 0x11bdf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11bdf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bdf8: 0xc04d634  jal         func_1358D0
    ctx->pc = 0x11BDF8u;
    SET_GPR_U32(ctx, 31, 0x11BE00u);
    ctx->pc = 0x11BDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BDF8u;
    // 0x11bdfc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1358D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1358D0u, 0x11BDF8u, 0x11BE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE00u;
label_11be00:
    // 0x11be00: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11be00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11be04: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11be04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11be08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11be08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11be0c: 0x3e00008  jr          $ra
    ctx->pc = 0x11BE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE0Cu;
        // 0x11be10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BE0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BE14u;
    // 0x11be14: 0x0  nop
    ctx->pc = 0x11be14u;
    // NOP
    ctx->pc = 0x11be18u;
}
