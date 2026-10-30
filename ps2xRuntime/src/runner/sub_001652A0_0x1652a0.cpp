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

// Function: sub_001652A0
// Address: 0x1652a0 - 0x1652e8
void sub_001652A0_0x1652a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001652A0_0x1652a0");
#endif

    switch (ctx->pc) {
        case 0x1652a0u: goto label_1652a0;
        case 0x1652a4u: goto label_1652a4;
        case 0x1652a8u: goto label_1652a8;
        case 0x1652acu: goto label_1652ac;
        case 0x1652b0u: goto label_1652b0;
        case 0x1652b4u: goto label_1652b4;
        case 0x1652b8u: goto label_1652b8;
        case 0x1652bcu: goto label_1652bc;
        case 0x1652c0u: goto label_1652c0;
        case 0x1652c4u: goto label_1652c4;
        case 0x1652c8u: goto label_1652c8;
        case 0x1652ccu: goto label_1652cc;
        case 0x1652d0u: goto label_1652d0;
        case 0x1652d4u: goto label_1652d4;
        case 0x1652d8u: goto label_1652d8;
        case 0x1652dcu: goto label_1652dc;
        case 0x1652e0u: goto label_1652e0;
        case 0x1652e4u: goto label_1652e4;
        default: break;
    }

    ctx->pc = 0x1652a0u;

label_1652a0:
    // 0x1652a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1652a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1652a4:
    // 0x1652a4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1652a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1652a8:
    // 0x1652a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1652a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1652ac:
    // 0x1652ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1652acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1652b0:
    // 0x1652b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1652b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1652b4:
    // 0x1652b4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1652b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1652b8:
    // 0x1652b8: 0x844300a8  lh          $v1, 0xA8($v0)
    ctx->pc = 0x1652b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1652bc:
    // 0x1652bc: 0x8c4600ac  lw          $a2, 0xAC($v0)
    ctx->pc = 0x1652bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1652c0:
    // 0x1652c0: 0xc0f809  jalr        $a2
label_1652c4:
    if (ctx->pc == 0x1652C4u) {
        ctx->pc = 0x1652C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1652C0u;
        // 0x1652c4: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1652C8u;
        goto label_1652c8;
    }
    ctx->pc = 0x1652C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1652C8u);
        ctx->pc = 0x1652C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1652C0u;
        // 0x1652c4: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1652C0u, 0x1652C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1652C8u;
label_1652c8:
    // 0x1652c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1652c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1652cc:
    // 0x1652cc: 0xc0594ba  jal         func_1652E8
label_1652d0:
    if (ctx->pc == 0x1652D0u) {
        ctx->pc = 0x1652D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1652CCu;
        // 0x1652d0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1652D4u;
        goto label_1652d4;
    }
    ctx->pc = 0x1652CCu;
    SET_GPR_U32(ctx, 31, 0x1652D4u);
    ctx->pc = 0x1652D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1652CCu;
    // 0x1652d0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1652E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1652E8u, 0x1652CCu, 0x1652D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1652D4u;
label_1652d4:
    // 0x1652d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1652d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1652d8:
    // 0x1652d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1652d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1652dc:
    // 0x1652dc: 0x3e00008  jr          $ra
label_1652e0:
    if (ctx->pc == 0x1652E0u) {
        ctx->pc = 0x1652E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1652DCu;
        // 0x1652e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1652E4u;
        goto label_1652e4;
    }
    ctx->pc = 0x1652DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1652E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1652DCu;
        // 0x1652e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1652DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1652E4u;
label_1652e4:
    // 0x1652e4: 0x0  nop
    ctx->pc = 0x1652e4u;
    // NOP
    ctx->pc = 0x1652e8u;
}
