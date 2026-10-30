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

// Function: sub_0037B8A8
// Address: 0x37b8a8 - 0x37b910
void sub_0037B8A8_0x37b8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B8A8_0x37b8a8");
#endif

    switch (ctx->pc) {
        case 0x37b8c8u: goto label_37b8c8;
        case 0x37b8d0u: goto label_37b8d0;
        case 0x37b8e8u: goto label_37b8e8;
        case 0x37b8f4u: goto label_37b8f4;
        default: break;
    }

    ctx->pc = 0x37b8a8u;

    // 0x37b8a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37b8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37b8ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37b8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b8b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37b8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37b8b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37b8b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b8b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37b8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37b8bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b8c0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37B8C0u;
    SET_GPR_U32(ctx, 31, 0x37B8C8u);
    ctx->pc = 0x37B8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B8C0u;
    // 0x37b8c4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37B8C0u, 0x37B8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B8C8u;
label_37b8c8:
    // 0x37b8c8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37B8C8u;
    SET_GPR_U32(ctx, 31, 0x37B8D0u);
    ctx->pc = 0x37B8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B8C8u;
    // 0x37b8cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37B8C8u, 0x37B8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B8D0u;
label_37b8d0:
    // 0x37b8d0: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x37b8d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37b8d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37b8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b8d8: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x37b8d8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x37b8dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37b8dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b8e0: 0xc1024c6  jal         func_409318
    ctx->pc = 0x37B8E0u;
    SET_GPR_U32(ctx, 31, 0x37B8E8u);
    ctx->pc = 0x37B8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B8E0u;
    // 0x37b8e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x37B8E0u, 0x37B8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B8E8u;
label_37b8e8:
    // 0x37b8e8: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x37b8e8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37b8ec: 0xc106b4a  jal         func_41AD28
    ctx->pc = 0x37B8ECu;
    SET_GPR_U32(ctx, 31, 0x37B8F4u);
    ctx->pc = 0x37B8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B8ECu;
    // 0x37b8f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41AD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41AD28u, 0x37B8ECu, 0x37B8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B8F4u;
label_37b8f4:
    // 0x37b8f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37b8f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37b8f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37b8f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b8fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37b8fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b900: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b904: 0x3e00008  jr          $ra
    ctx->pc = 0x37B904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B904u;
        // 0x37b908: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B90Cu;
    // 0x37b90c: 0x0  nop
    ctx->pc = 0x37b90cu;
    // NOP
    ctx->pc = 0x37b910u;
}
