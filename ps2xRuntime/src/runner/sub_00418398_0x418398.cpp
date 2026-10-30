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

// Function: sub_00418398
// Address: 0x418398 - 0x4183d8
void sub_00418398_0x418398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418398_0x418398");
#endif

    ctx->pc = 0x418398u;

    // 0x418398: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x418398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x41839c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x41839Cu;
    {
        const bool branch_taken_0x41839c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4183A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41839Cu;
        // 0x4183a0: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41839c) {
            ctx->pc = 0x4183B0u;
            goto label_4183b0;
        }
    }
    ctx->pc = 0x4183A4u;
    // 0x4183a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4183a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4183a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4183A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4183A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4183B0u;
label_4183b0:
    // 0x4183b0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x4183b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x4183b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x4183b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x4183b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4183b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4183bc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4183bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4183c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4183c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4183c4: 0x0  nop
    ctx->pc = 0x4183c4u;
    // NOP
    // 0x4183c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4183c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4183cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4183CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4183D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4183CCu;
        // 0x4183d0: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4183CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4183D4u;
    // 0x4183d4: 0x0  nop
    ctx->pc = 0x4183d4u;
    // NOP
    ctx->pc = 0x4183d8u;
}
