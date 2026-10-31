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

// Function: sub_00323F10
// Address: 0x323f10 - 0x323f90
void sub_00323F10_0x323f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323F10_0x323f10");
#endif

    switch (ctx->pc) {
        case 0x323f5cu: goto label_323f5c;
        default: break;
    }

    ctx->pc = 0x323f10u;

    // 0x323f10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x323f14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x323f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x323f18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x323f1c: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x323F1Cu;
    {
        const bool branch_taken_0x323f1c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x323F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323F1Cu;
        // 0x323f20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323f1c) {
            ctx->pc = 0x323F3Cu;
            goto label_323f3c;
        }
    }
    ctx->pc = 0x323F24u;
    // 0x323f24: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x323f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x323f28: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x323f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x323f2c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x323f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x323f30: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x323f30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323f34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x323F34u;
    {
        const bool branch_taken_0x323f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323F34u;
        // 0x323f38: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323f34) {
            ctx->pc = 0x323F4Cu;
            goto label_323f4c;
        }
    }
    ctx->pc = 0x323F3Cu;
label_323f3c:
    // 0x323f3c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x323f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323f40: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x323f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x323f44: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x323f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x323f48: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x323f48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_323f4c:
    // 0x323f4c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x323f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x323f50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323f54: 0xc0cc862  jal         func_332188
    ctx->pc = 0x323F54u;
    SET_GPR_U32(ctx, 31, 0x323F5Cu);
    ctx->pc = 0x323F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323F54u;
    // 0x323f58: 0x24c6ffe0  addiu       $a2, $a2, -0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332188u, 0x323F54u, 0x323F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323F5Cu;
label_323f5c:
    // 0x323f5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x323f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323f60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323f64: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x323f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x323f68: 0xdc647ff0  ld          $a0, 0x7FF0($v1)
    ctx->pc = 0x323f68u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 32752)));
    // 0x323f6c: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x323f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x323f70: 0xdc657ff8  ld          $a1, 0x7FF8($v1)
    ctx->pc = 0x323f70u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 32760)));
    // 0x323f74: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x323f74u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x323f78: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x323f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323f7c: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x323f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x323f80: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x323f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x323f84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x323f84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323f88: 0x3e00008  jr          $ra
    ctx->pc = 0x323F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323F88u;
        // 0x323f8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323F90u;
}
