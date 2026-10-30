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

// Function: sub_00414480
// Address: 0x414480 - 0x4144d0
void sub_00414480_0x414480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414480_0x414480");
#endif

    switch (ctx->pc) {
        case 0x4144a0u: goto label_4144a0;
        case 0x4144a8u: goto label_4144a8;
        case 0x4144c0u: goto label_4144c0;
        default: break;
    }

    ctx->pc = 0x414480u;

    // 0x414480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x414480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x414484: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x414484u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x414488: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x414488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x41448c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41448cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x414490: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x414490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x414494: 0xae020170  sw          $v0, 0x170($s0)
    ctx->pc = 0x414494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 2));
    // 0x414498: 0xc0e1284  jal         func_384A10
    ctx->pc = 0x414498u;
    SET_GPR_U32(ctx, 31, 0x4144A0u);
    ctx->pc = 0x41449Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414498u;
    // 0x41449c: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384A10u, 0x414498u, 0x4144A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4144A0u;
label_4144a0:
    // 0x4144a0: 0xc105134  jal         func_4144D0
    ctx->pc = 0x4144A0u;
    SET_GPR_U32(ctx, 31, 0x4144A8u);
    ctx->pc = 0x4144A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4144A0u;
    // 0x4144a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4144D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4144D0u, 0x4144A0u, 0x4144A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4144A8u;
label_4144a8:
    // 0x4144a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4144a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4144ac: 0xae000174  sw          $zero, 0x174($s0)
    ctx->pc = 0x4144acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 0));
    // 0x4144b0: 0xae000178  sw          $zero, 0x178($s0)
    ctx->pc = 0x4144b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 0));
    // 0x4144b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4144b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4144b8: 0xc13d71e  jal         func_4F5C78
    ctx->pc = 0x4144B8u;
    SET_GPR_U32(ctx, 31, 0x4144C0u);
    ctx->pc = 0x4144BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4144B8u;
    // 0x4144bc: 0xae02017c  sw          $v0, 0x17C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5C78u, 0x4144B8u, 0x4144C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4144C0u;
label_4144c0:
    // 0x4144c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4144c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4144c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4144c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4144c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4144C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4144CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4144C8u;
        // 0x4144cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4144C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4144D0u;
}
