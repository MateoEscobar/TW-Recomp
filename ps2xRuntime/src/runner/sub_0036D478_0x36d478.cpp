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

// Function: sub_0036D478
// Address: 0x36d478 - 0x36d4e0
void sub_0036D478_0x36d478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D478_0x36d478");
#endif

    switch (ctx->pc) {
        case 0x36d498u: goto label_36d498;
        case 0x36d4acu: goto label_36d4ac;
        case 0x36d4bcu: goto label_36d4bc;
        case 0x36d4c4u: goto label_36d4c4;
        default: break;
    }

    ctx->pc = 0x36d478u;

    // 0x36d478: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36d478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36d47c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36d47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d480: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x36d480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x36d484: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x36d484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36d488: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36d488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d48c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36d48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36d490: 0xc10311e  jal         func_40C478
    ctx->pc = 0x36D490u;
    SET_GPR_U32(ctx, 31, 0x36D498u);
    ctx->pc = 0x36D494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D490u;
    // 0x36d494: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x36D490u, 0x36D498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D498u;
label_36d498:
    // 0x36d498: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36D498u;
    {
        const bool branch_taken_0x36d498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36D49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D498u;
        // 0x36d49c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d498) {
            ctx->pc = 0x36D4B0u;
            goto label_36d4b0;
        }
    }
    ctx->pc = 0x36D4A0u;
    // 0x36d4a0: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x36d4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x36d4a4: 0xc10241a  jal         func_409068
    ctx->pc = 0x36D4A4u;
    SET_GPR_U32(ctx, 31, 0x36D4ACu);
    ctx->pc = 0x36D4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D4A4u;
    // 0x36d4a8: 0x24a59118  addiu       $a1, $a1, -0x6EE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x36D4A4u, 0x36D4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D4ACu;
label_36d4ac:
    // 0x36d4ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36d4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36d4b0:
    // 0x36d4b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36d4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d4b4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36D4B4u;
    SET_GPR_U32(ctx, 31, 0x36D4BCu);
    ctx->pc = 0x36D4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D4B4u;
    // 0x36d4b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36D4B4u, 0x36D4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D4BCu;
label_36d4bc:
    // 0x36d4bc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36D4BCu;
    SET_GPR_U32(ctx, 31, 0x36D4C4u);
    ctx->pc = 0x36D4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D4BCu;
    // 0x36d4c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36D4BCu, 0x36D4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D4C4u;
label_36d4c4:
    // 0x36d4c4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36d4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36d4c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x36d4c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d4cc: 0xac62bd30  sw          $v0, -0x42D0($v1)
    ctx->pc = 0x36d4ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6EBD30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6EBD30u, _value); } while (0);
    // 0x36d4d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36d4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d4d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36d4d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x36D4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D4D8u;
        // 0x36d4dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D4E0u;
}
