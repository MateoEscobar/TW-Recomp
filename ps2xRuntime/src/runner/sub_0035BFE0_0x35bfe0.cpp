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

// Function: sub_0035BFE0
// Address: 0x35bfe0 - 0x35c030
void sub_0035BFE0_0x35bfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035BFE0_0x35bfe0");
#endif

    switch (ctx->pc) {
        case 0x35bffcu: goto label_35bffc;
        case 0x35c004u: goto label_35c004;
        case 0x35c00cu: goto label_35c00c;
        case 0x35c018u: goto label_35c018;
        default: break;
    }

    ctx->pc = 0x35bfe0u;

    // 0x35bfe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35bfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35bfe4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35bfe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bfe8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35bfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35bfec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35bfecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35bff0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35bff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35bff4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35BFF4u;
    SET_GPR_U32(ctx, 31, 0x35BFFCu);
    ctx->pc = 0x35BFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BFF4u;
    // 0x35bff8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35BFF4u, 0x35BFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BFFCu;
label_35bffc:
    // 0x35bffc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35BFFCu;
    SET_GPR_U32(ctx, 31, 0x35C004u);
    ctx->pc = 0x35C000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BFFCu;
    // 0x35c000: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35BFFCu, 0x35C004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C004u;
label_35c004:
    // 0x35c004: 0xc08df6e  jal         func_237DB8
    ctx->pc = 0x35C004u;
    SET_GPR_U32(ctx, 31, 0x35C00Cu);
    ctx->pc = 0x35C008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C004u;
    // 0x35c008: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237DB8u, 0x35C004u, 0x35C00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C00Cu;
label_35c00c:
    // 0x35c00c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35c00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c010: 0xc102562  jal         func_409588
    ctx->pc = 0x35C010u;
    SET_GPR_U32(ctx, 31, 0x35C018u);
    ctx->pc = 0x35C014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C010u;
    // 0x35c014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x35C010u, 0x35C018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C018u;
label_35c018:
    // 0x35c018: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35c018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c01c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35c01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c020: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35c020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c024: 0x3e00008  jr          $ra
    ctx->pc = 0x35C024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C024u;
        // 0x35c028: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C02Cu;
    // 0x35c02c: 0x0  nop
    ctx->pc = 0x35c02cu;
    // NOP
    ctx->pc = 0x35c030u;
}
