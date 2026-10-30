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

// Function: sub_00175188
// Address: 0x175188 - 0x1751c0
void sub_00175188_0x175188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175188_0x175188");
#endif

    switch (ctx->pc) {
        case 0x17519cu: goto label_17519c;
        default: break;
    }

    ctx->pc = 0x175188u;

    // 0x175188: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17518c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17518cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x175190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175194: 0xc05d45e  jal         func_175178
    ctx->pc = 0x175194u;
    SET_GPR_U32(ctx, 31, 0x17519Cu);
    ctx->pc = 0x175198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175194u;
    // 0x175198: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175178u, 0x175194u, 0x17519Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17519Cu;
label_17519c:
    // 0x17519c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17519cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1751a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1751a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1751a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1751a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1751a8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1751a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1751ac: 0x8e0202bc  lw          $v0, 0x2BC($s0)
    ctx->pc = 0x1751acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
    // 0x1751b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1751b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1751b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1751B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1751B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1751B4u;
        // 0x1751b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1751B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1751BCu;
    // 0x1751bc: 0x0  nop
    ctx->pc = 0x1751bcu;
    // NOP
    ctx->pc = 0x1751c0u;
}
