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

// Function: sub_00367E80
// Address: 0x367e80 - 0x367ed0
void sub_00367E80_0x367e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367E80_0x367e80");
#endif

    switch (ctx->pc) {
        case 0x367e9cu: goto label_367e9c;
        case 0x367ea4u: goto label_367ea4;
        case 0x367eacu: goto label_367eac;
        case 0x367eb8u: goto label_367eb8;
        default: break;
    }

    ctx->pc = 0x367e80u;

    // 0x367e80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x367e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x367e84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x367e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367e88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x367e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x367e8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x367e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367e90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x367e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x367e94: 0xc102472  jal         func_4091C8
    ctx->pc = 0x367E94u;
    SET_GPR_U32(ctx, 31, 0x367E9Cu);
    ctx->pc = 0x367E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367E94u;
    // 0x367e98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x367E94u, 0x367E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367E9Cu;
label_367e9c:
    // 0x367e9c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x367E9Cu;
    SET_GPR_U32(ctx, 31, 0x367EA4u);
    ctx->pc = 0x367EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367E9Cu;
    // 0x367ea0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x367E9Cu, 0x367EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367EA4u;
label_367ea4:
    // 0x367ea4: 0xc0d5016  jal         func_354058
    ctx->pc = 0x367EA4u;
    SET_GPR_U32(ctx, 31, 0x367EACu);
    ctx->pc = 0x367EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367EA4u;
    // 0x367ea8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354058u, 0x367EA4u, 0x367EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367EACu;
label_367eac:
    // 0x367eac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x367eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367eb0: 0xc102562  jal         func_409588
    ctx->pc = 0x367EB0u;
    SET_GPR_U32(ctx, 31, 0x367EB8u);
    ctx->pc = 0x367EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367EB0u;
    // 0x367eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x367EB0u, 0x367EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367EB8u;
label_367eb8:
    // 0x367eb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x367eb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x367ebc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x367ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367ec0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x367ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x367EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367EC4u;
        // 0x367ec8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367ECCu;
    // 0x367ecc: 0x0  nop
    ctx->pc = 0x367eccu;
    // NOP
    ctx->pc = 0x367ed0u;
}
