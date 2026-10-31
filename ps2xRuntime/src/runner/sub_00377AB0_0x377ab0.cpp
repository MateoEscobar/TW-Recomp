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

// Function: sub_00377AB0
// Address: 0x377ab0 - 0x377b20
void sub_00377AB0_0x377ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377AB0_0x377ab0");
#endif

    switch (ctx->pc) {
        case 0x377ad0u: goto label_377ad0;
        case 0x377ad8u: goto label_377ad8;
        case 0x377aecu: goto label_377aec;
        case 0x377af8u: goto label_377af8;
        case 0x377b04u: goto label_377b04;
        default: break;
    }

    ctx->pc = 0x377ab0u;

    // 0x377ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x377ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x377ab4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x377ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377ab8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x377ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x377abc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x377abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377ac0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x377ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x377ac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x377ac8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377AC8u;
    SET_GPR_U32(ctx, 31, 0x377AD0u);
    ctx->pc = 0x377ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377AC8u;
    // 0x377acc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377AC8u, 0x377AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377AD0u;
label_377ad0:
    // 0x377ad0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x377AD0u;
    SET_GPR_U32(ctx, 31, 0x377AD8u);
    ctx->pc = 0x377AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377AD0u;
    // 0x377ad4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x377AD0u, 0x377AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377AD8u;
label_377ad8:
    // 0x377ad8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x377ad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377adc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x377adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377ae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x377ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377ae4: 0xc102488  jal         func_409220
    ctx->pc = 0x377AE4u;
    SET_GPR_U32(ctx, 31, 0x377AECu);
    ctx->pc = 0x377AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377AE4u;
    // 0x377ae8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x377AE4u, 0x377AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377AECu;
label_377aec:
    // 0x377aec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x377aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377af0: 0xc0e5e0e  jal         func_397838
    ctx->pc = 0x377AF0u;
    SET_GPR_U32(ctx, 31, 0x377AF8u);
    ctx->pc = 0x377AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377AF0u;
    // 0x377af4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397838u, 0x377AF0u, 0x377AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377AF8u;
label_377af8:
    // 0x377af8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x377af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377afc: 0xc102562  jal         func_409588
    ctx->pc = 0x377AFCu;
    SET_GPR_U32(ctx, 31, 0x377B04u);
    ctx->pc = 0x377B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377AFCu;
    // 0x377b00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x377AFCu, 0x377B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377B04u;
label_377b04:
    // 0x377b04: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x377b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377b08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x377b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377b0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x377b0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377b10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x377b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377b14: 0x3e00008  jr          $ra
    ctx->pc = 0x377B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377B14u;
        // 0x377b18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377B1Cu;
    // 0x377b1c: 0x0  nop
    ctx->pc = 0x377b1cu;
    // NOP
    ctx->pc = 0x377b20u;
}
