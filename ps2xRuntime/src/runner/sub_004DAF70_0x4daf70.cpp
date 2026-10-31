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

// Function: sub_004DAF70
// Address: 0x4daf70 - 0x4dafb8
void sub_004DAF70_0x4daf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DAF70_0x4daf70");
#endif

    switch (ctx->pc) {
        case 0x4daf84u: goto label_4daf84;
        default: break;
    }

    ctx->pc = 0x4daf70u;

    // 0x4daf70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4daf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4daf74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4daf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4daf78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4daf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4daf7c: 0xc136b98  jal         func_4DAE60
    ctx->pc = 0x4DAF7Cu;
    SET_GPR_U32(ctx, 31, 0x4DAF84u);
    ctx->pc = 0x4DAF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DAF7Cu;
    // 0x4daf80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE60u, 0x4DAF7Cu, 0x4DAF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DAF84u;
label_4daf84:
    // 0x4daf84: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4daf84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4daf88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4daf88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4daf8c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4DAF8Cu;
    {
        const bool branch_taken_0x4daf8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4DAF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAF8Cu;
        // 0x4daf90: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4daf8c) {
            ctx->pc = 0x4DAFA4u;
            goto label_4dafa4;
        }
    }
    ctx->pc = 0x4DAF94u;
    // 0x4daf94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4daf94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4daf98: 0x8c44bd30  lw          $a0, -0x42D0($v0)
    ctx->pc = 0x4daf98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x4daf9c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4daf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4dafa0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x4dafa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_4dafa4:
    // 0x4dafa4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4dafa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4dafa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dafa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dafac: 0x3e00008  jr          $ra
    ctx->pc = 0x4DAFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DAFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAFACu;
        // 0x4dafb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DAFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DAFB4u;
    // 0x4dafb4: 0x0  nop
    ctx->pc = 0x4dafb4u;
    // NOP
    ctx->pc = 0x4dafb8u;
}
