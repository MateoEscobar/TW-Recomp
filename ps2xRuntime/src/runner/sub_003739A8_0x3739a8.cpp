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

// Function: sub_003739A8
// Address: 0x3739a8 - 0x373a20
void sub_003739A8_0x3739a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003739A8_0x3739a8");
#endif

    switch (ctx->pc) {
        case 0x3739d0u: goto label_3739d0;
        case 0x3739d8u: goto label_3739d8;
        case 0x3739f0u: goto label_3739f0;
        case 0x3739f8u: goto label_3739f8;
        case 0x373a04u: goto label_373a04;
        default: break;
    }

    ctx->pc = 0x3739a8u;

    // 0x3739a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3739a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3739ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3739acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3739b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3739b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3739b4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3739b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3739b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3739b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3739bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3739bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3739c0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3739c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3739c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3739c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3739c8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3739C8u;
    SET_GPR_U32(ctx, 31, 0x3739D0u);
    ctx->pc = 0x3739CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3739C8u;
    // 0x3739cc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3739C8u, 0x3739D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3739D0u;
label_3739d0:
    // 0x3739d0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3739D0u;
    SET_GPR_U32(ctx, 31, 0x3739D8u);
    ctx->pc = 0x3739D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3739D0u;
    // 0x3739d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3739D0u, 0x3739D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3739D8u;
label_3739d8:
    // 0x3739d8: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x3739d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3739dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3739dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3739e0: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x3739e0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x3739e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3739e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3739e8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3739E8u;
    SET_GPR_U32(ctx, 31, 0x3739F0u);
    ctx->pc = 0x3739ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3739E8u;
    // 0x3739ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3739E8u, 0x3739F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3739F0u;
label_3739f0:
    // 0x3739f0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3739F0u;
    SET_GPR_U32(ctx, 31, 0x3739F8u);
    ctx->pc = 0x3739F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3739F0u;
    // 0x3739f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3739F0u, 0x3739F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3739F8u;
label_3739f8:
    // 0x3739f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3739f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3739fc: 0xc05aa44  jal         func_16A910
    ctx->pc = 0x3739FCu;
    SET_GPR_U32(ctx, 31, 0x373A04u);
    ctx->pc = 0x373A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3739FCu;
    // 0x373a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A910u, 0x3739FCu, 0x373A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373A04u;
label_373a04:
    // 0x373a04: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x373a04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x373a08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x373a08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373a0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x373a0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x373a10: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x373a10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373a14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373a18: 0x3e00008  jr          $ra
    ctx->pc = 0x373A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373A18u;
        // 0x373a1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373A20u;
}
