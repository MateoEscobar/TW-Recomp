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

// Function: sub_00227CD8
// Address: 0x227cd8 - 0x227d28
void sub_00227CD8_0x227cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227CD8_0x227cd8");
#endif

    switch (ctx->pc) {
        case 0x227cf8u: goto label_227cf8;
        case 0x227d08u: goto label_227d08;
        default: break;
    }

    ctx->pc = 0x227cd8u;

    // 0x227cd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x227cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x227cdc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x227cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x227ce0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x227ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x227ce4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x227ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x227ce8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227ce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227cec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227cf0: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x227CF0u;
    SET_GPR_U32(ctx, 31, 0x227CF8u);
    ctx->pc = 0x227CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227CF0u;
    // 0x227cf4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x227CF0u, 0x227CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227CF8u;
label_227cf8:
    // 0x227cf8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x227CF8u;
    {
        const bool branch_taken_0x227cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CF8u;
        // 0x227cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227cf8) {
            ctx->pc = 0x227D0Cu;
            goto label_227d0c;
        }
    }
    ctx->pc = 0x227D00u;
    // 0x227d00: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x227D00u;
    SET_GPR_U32(ctx, 31, 0x227D08u);
    ctx->pc = 0x227D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227D00u;
    // 0x227d04: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x227D00u, 0x227D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227D08u;
label_227d08:
    // 0x227d08: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x227d08u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_227d0c:
    // 0x227d0c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x227d0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227d10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x227d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227d14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x227d14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227d18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x227D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D1Cu;
        // 0x227d20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227D24u;
    // 0x227d24: 0x0  nop
    ctx->pc = 0x227d24u;
    // NOP
    ctx->pc = 0x227d28u;
}
