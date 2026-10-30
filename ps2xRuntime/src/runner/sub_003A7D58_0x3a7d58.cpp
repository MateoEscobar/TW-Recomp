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

// Function: sub_003A7D58
// Address: 0x3a7d58 - 0x3a7da8
void sub_003A7D58_0x3a7d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7D58_0x3a7d58");
#endif

    switch (ctx->pc) {
        case 0x3a7d78u: goto label_3a7d78;
        case 0x3a7d90u: goto label_3a7d90;
        default: break;
    }

    ctx->pc = 0x3a7d58u;

    // 0x3a7d58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a7d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a7d5c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x3a7d5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3a7d60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a7d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a7d64: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x3a7d64u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x3a7d68: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3a7d68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a7d6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a7d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7d70: 0xc0e94a0  jal         func_3A5280
    ctx->pc = 0x3A7D70u;
    SET_GPR_U32(ctx, 31, 0x3A7D78u);
    ctx->pc = 0x3A7D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7D70u;
    // 0x3a7d74: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3A7D70u, 0x3A7D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7D78u;
label_3a7d78:
    // 0x3a7d78: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3a7d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3a7d7c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A7D7Cu;
    {
        const bool branch_taken_0x3a7d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a7d7c) {
            ctx->pc = 0x3A7D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7D7Cu;
            // 0x3a7d80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7D94u;
            goto label_3a7d94;
        }
    }
    ctx->pc = 0x3A7D84u;
    // 0x3a7d84: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a7d84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3a7d88: 0xc0e947e  jal         func_3A51F8
    ctx->pc = 0x3A7D88u;
    SET_GPR_U32(ctx, 31, 0x3A7D90u);
    ctx->pc = 0x3A7D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7D88u;
    // 0x3a7d8c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F8u, 0x3A7D88u, 0x3A7D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7D90u;
label_3a7d90:
    // 0x3a7d90: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3a7d90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3a7d94:
    // 0x3a7d94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a7d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a7d98: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x3a7d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3a7d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7D9Cu;
        // 0x3a7da0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7DA4u;
    // 0x3a7da4: 0x0  nop
    ctx->pc = 0x3a7da4u;
    // NOP
    ctx->pc = 0x3a7da8u;
}
