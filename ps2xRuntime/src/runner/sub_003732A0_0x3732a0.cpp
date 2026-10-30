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

// Function: sub_003732A0
// Address: 0x3732a0 - 0x373308
void sub_003732A0_0x3732a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003732A0_0x3732a0");
#endif

    switch (ctx->pc) {
        case 0x3732c0u: goto label_3732c0;
        case 0x3732c8u: goto label_3732c8;
        case 0x3732e0u: goto label_3732e0;
        case 0x3732ecu: goto label_3732ec;
        default: break;
    }

    ctx->pc = 0x3732a0u;

    // 0x3732a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3732a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3732a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3732a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3732a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3732a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3732ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3732acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3732b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3732b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3732b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3732b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3732b8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3732B8u;
    SET_GPR_U32(ctx, 31, 0x3732C0u);
    ctx->pc = 0x3732BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3732B8u;
    // 0x3732bc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3732B8u, 0x3732C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3732C0u;
label_3732c0:
    // 0x3732c0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3732C0u;
    SET_GPR_U32(ctx, 31, 0x3732C8u);
    ctx->pc = 0x3732C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3732C0u;
    // 0x3732c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3732C0u, 0x3732C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3732C8u;
label_3732c8:
    // 0x3732c8: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x3732c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3732cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3732ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3732d0: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x3732d0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x3732d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3732d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3732d8: 0xc1024c6  jal         func_409318
    ctx->pc = 0x3732D8u;
    SET_GPR_U32(ctx, 31, 0x3732E0u);
    ctx->pc = 0x3732DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3732D8u;
    // 0x3732dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x3732D8u, 0x3732E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3732E0u;
label_3732e0:
    // 0x3732e0: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x3732e0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3732e4: 0xc05a898  jal         func_16A260
    ctx->pc = 0x3732E4u;
    SET_GPR_U32(ctx, 31, 0x3732ECu);
    ctx->pc = 0x3732E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3732E4u;
    // 0x3732e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A260u, 0x3732E4u, 0x3732ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3732ECu;
label_3732ec:
    // 0x3732ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3732ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3732f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3732f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3732f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3732f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3732f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3732f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3732fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3732FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3732FCu;
        // 0x373300: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3732FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373304u;
    // 0x373304: 0x0  nop
    ctx->pc = 0x373304u;
    // NOP
    ctx->pc = 0x373308u;
}
