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

// Function: sub_00465AE8
// Address: 0x465ae8 - 0x465b50
void sub_00465AE8_0x465ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465AE8_0x465ae8");
#endif

    switch (ctx->pc) {
        case 0x465b1cu: goto label_465b1c;
        case 0x465b30u: goto label_465b30;
        default: break;
    }

    ctx->pc = 0x465ae8u;

    // 0x465ae8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x465ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x465aec: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x465aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x465af0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x465af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x465af4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x465af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x465af8: 0x2470e610  addiu       $s0, $v1, -0x19F0
    ctx->pc = 0x465af8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960656));
    // 0x465afc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x465afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x465b00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x465b00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465b04: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x465b04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x52E614u));
    // 0x465b08: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x465b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x465b0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x465B0Cu;
    {
        const bool branch_taken_0x465b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x465B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465B0Cu;
        // 0x465b10: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465b0c) {
            ctx->pc = 0x465B1Cu;
            goto label_465b1c;
        }
    }
    ctx->pc = 0x465B14u;
    // 0x465b14: 0xc119824  jal         func_466090
    ctx->pc = 0x465B14u;
    SET_GPR_U32(ctx, 31, 0x465B1Cu);
    ctx->pc = 0x466090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466090u, 0x465B14u, 0x465B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465B1Cu;
label_465b1c:
    // 0x465b1c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x465b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x465b20: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x465B20u;
    {
        const bool branch_taken_0x465b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x465B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465B20u;
        // 0x465b24: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465b20) {
            ctx->pc = 0x465B38u;
            goto label_465b38;
        }
    }
    ctx->pc = 0x465B28u;
    // 0x465b28: 0xc11f74a  jal         func_47DD28
    ctx->pc = 0x465B28u;
    SET_GPR_U32(ctx, 31, 0x465B30u);
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x465B28u, 0x465B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465B30u;
label_465b30:
    // 0x465b30: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x465b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x465b34: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x465b34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_465b38:
    // 0x465b38: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x465b38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x465b3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x465b3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x465b40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x465b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x465b44: 0x3e00008  jr          $ra
    ctx->pc = 0x465B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x465B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465B44u;
        // 0x465b48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x465B4Cu;
    // 0x465b4c: 0x0  nop
    ctx->pc = 0x465b4cu;
    // NOP
    ctx->pc = 0x465b50u;
}
