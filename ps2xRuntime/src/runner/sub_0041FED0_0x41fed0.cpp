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

// Function: sub_0041FED0
// Address: 0x41fed0 - 0x41ff50
void sub_0041FED0_0x41fed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041FED0_0x41fed0");
#endif

    switch (ctx->pc) {
        case 0x41ff04u: goto label_41ff04;
        case 0x41ff1cu: goto label_41ff1c;
        default: break;
    }

    ctx->pc = 0x41fed0u;

    // 0x41fed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41fed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x41fed4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41fed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x41fed8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x41fed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x41fedc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41fedcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fee0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41fee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41fee4: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x41fee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x41fee8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x41FEE8u;
    {
        const bool branch_taken_0x41fee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FEE8u;
        // 0x41feec: 0x26300148  addiu       $s0, $s1, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fee8) {
            ctx->pc = 0x41FF34u;
            goto label_41ff34;
        }
    }
    ctx->pc = 0x41FEF0u;
    // 0x41fef0: 0xae20018c  sw          $zero, 0x18C($s1)
    ctx->pc = 0x41fef0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 396), GPR_U32(ctx, 0));
    // 0x41fef4: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x41fef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x41fef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41fef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fefc: 0xc0529d6  jal         func_14A758
    ctx->pc = 0x41FEFCu;
    SET_GPR_U32(ctx, 31, 0x41FF04u);
    ctx->pc = 0x41FF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FEFCu;
    // 0x41ff00: 0x24a5b548  addiu       $a1, $a1, -0x4AB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A758u, 0x41FEFCu, 0x41FF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FF04u;
label_41ff04:
    // 0x41ff04: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x41ff04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x41ff08: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x41ff08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x41ff0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41ff0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41ff10: 0x24a5b510  addiu       $a1, $a1, -0x4AF0
    ctx->pc = 0x41ff10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948112));
    // 0x41ff14: 0xc052cf4  jal         func_14B3D0
    ctx->pc = 0x41FF14u;
    SET_GPR_U32(ctx, 31, 0x41FF1Cu);
    ctx->pc = 0x41FF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FF14u;
    // 0x41ff18: 0x24c6b570  addiu       $a2, $a2, -0x4A90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B3D0u, 0x41FF14u, 0x41FF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FF1Cu;
label_41ff1c:
    // 0x41ff1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x41FF1Cu;
    {
        const bool branch_taken_0x41ff1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FF1Cu;
        // 0x41ff20: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ff1c) {
            ctx->pc = 0x41FF34u;
            goto label_41ff34;
        }
    }
    ctx->pc = 0x41FF24u;
    // 0x41ff24: 0xae200188  sw          $zero, 0x188($s1)
    ctx->pc = 0x41ff24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 392), GPR_U32(ctx, 0));
    // 0x41ff28: 0xae220184  sw          $v0, 0x184($s1)
    ctx->pc = 0x41ff28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 2));
    // 0x41ff2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x41FF2Cu;
    {
        const bool branch_taken_0x41ff2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FF2Cu;
        // 0x41ff30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ff2c) {
            ctx->pc = 0x41FF38u;
            goto label_41ff38;
        }
    }
    ctx->pc = 0x41FF34u;
label_41ff34:
    // 0x41ff34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x41ff34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41ff38:
    // 0x41ff38: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41ff38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41ff3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41ff3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41ff40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41ff40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41ff44: 0x3e00008  jr          $ra
    ctx->pc = 0x41FF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41FF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FF44u;
        // 0x41ff48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41FF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41FF4Cu;
    // 0x41ff4c: 0x0  nop
    ctx->pc = 0x41ff4cu;
    // NOP
    ctx->pc = 0x41ff50u;
}
