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

// Function: sub_00175380
// Address: 0x175380 - 0x1753d8
void sub_00175380_0x175380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175380_0x175380");
#endif

    switch (ctx->pc) {
        case 0x17539cu: goto label_17539c;
        case 0x1753b0u: goto label_1753b0;
        case 0x1753c0u: goto label_1753c0;
        default: break;
    }

    ctx->pc = 0x175380u;

    // 0x175380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x175380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x175384: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x175384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x175388: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17538c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17538cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x175390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175394: 0xc05d45e  jal         func_175178
    ctx->pc = 0x175394u;
    SET_GPR_U32(ctx, 31, 0x17539Cu);
    ctx->pc = 0x175398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175394u;
    // 0x175398: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175178u, 0x175394u, 0x17539Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17539Cu;
label_17539c:
    // 0x17539c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17539cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1753a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1753a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1753a4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1753a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1753a8: 0xc05d45e  jal         func_175178
    ctx->pc = 0x1753A8u;
    SET_GPR_U32(ctx, 31, 0x1753B0u);
    ctx->pc = 0x1753ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1753A8u;
    // 0x1753ac: 0xac5102bc  sw          $s1, 0x2BC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 700), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175178u, 0x1753A8u, 0x1753B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1753B0u;
label_1753b0:
    // 0x1753b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1753b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1753b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1753b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1753b8: 0xc05d460  jal         func_175180
    ctx->pc = 0x1753B8u;
    SET_GPR_U32(ctx, 31, 0x1753C0u);
    ctx->pc = 0x1753BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1753B8u;
    // 0x1753bc: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x175180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175180u, 0x1753B8u, 0x1753C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1753C0u;
label_1753c0:
    // 0x1753c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1753c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1753c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1753c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1753c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1753c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1753cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1753CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1753D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1753CCu;
        // 0x1753d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1753CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1753D4u;
    // 0x1753d4: 0x0  nop
    ctx->pc = 0x1753d4u;
    // NOP
    ctx->pc = 0x1753d8u;
}
