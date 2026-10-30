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

// Function: sub_0035F890
// Address: 0x35f890 - 0x35f8f8
void sub_0035F890_0x35f890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F890_0x35f890");
#endif

    switch (ctx->pc) {
        case 0x35f8b0u: goto label_35f8b0;
        case 0x35f8b8u: goto label_35f8b8;
        case 0x35f8d0u: goto label_35f8d0;
        case 0x35f8dcu: goto label_35f8dc;
        default: break;
    }

    ctx->pc = 0x35f890u;

    // 0x35f890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35f890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35f894: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35f894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35f898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35f89c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35f89cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f8a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35f8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35f8a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35f8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35f8a8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F8A8u;
    SET_GPR_U32(ctx, 31, 0x35F8B0u);
    ctx->pc = 0x35F8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F8A8u;
    // 0x35f8ac: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F8A8u, 0x35F8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F8B0u;
label_35f8b0:
    // 0x35f8b0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35F8B0u;
    SET_GPR_U32(ctx, 31, 0x35F8B8u);
    ctx->pc = 0x35F8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F8B0u;
    // 0x35f8b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35F8B0u, 0x35F8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F8B8u;
label_35f8b8:
    // 0x35f8b8: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x35f8b8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35f8bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35f8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f8c0: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x35f8c0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x35f8c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35f8c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f8c8: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35F8C8u;
    SET_GPR_U32(ctx, 31, 0x35F8D0u);
    ctx->pc = 0x35F8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F8C8u;
    // 0x35f8cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35F8C8u, 0x35F8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F8D0u;
label_35f8d0:
    // 0x35f8d0: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x35f8d0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35f8d4: 0xc05af3c  jal         func_16BCF0
    ctx->pc = 0x35F8D4u;
    SET_GPR_U32(ctx, 31, 0x35F8DCu);
    ctx->pc = 0x35F8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F8D4u;
    // 0x35f8d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BCF0u, 0x35F8D4u, 0x35F8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F8DCu;
label_35f8dc:
    // 0x35f8dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35f8dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f8e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35f8e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f8e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35f8e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f8e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35f8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x35F8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F8ECu;
        // 0x35f8f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F8F4u;
    // 0x35f8f4: 0x0  nop
    ctx->pc = 0x35f8f4u;
    // NOP
    ctx->pc = 0x35f8f8u;
}
