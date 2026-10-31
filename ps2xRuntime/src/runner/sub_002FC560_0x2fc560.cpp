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

// Function: sub_002FC560
// Address: 0x2fc560 - 0x2fc5c0
void sub_002FC560_0x2fc560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC560_0x2fc560");
#endif

    switch (ctx->pc) {
        case 0x2fc598u: goto label_2fc598;
        case 0x2fc5a8u: goto label_2fc5a8;
        default: break;
    }

    ctx->pc = 0x2fc560u;

    // 0x2fc560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fc560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fc564: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2fc564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2fc568: 0x31a7c  dsll32      $v1, $v1, 9
    ctx->pc = 0x2fc568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 9));
    // 0x2fc56c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2fc56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2fc570: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fc570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fc574: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fc574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc578: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc57c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2fc57cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc580: 0xde020048  ld          $v0, 0x48($s0)
    ctx->pc = 0x2fc580u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2fc584: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2fc584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fc588: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2fc588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2fc58c: 0x248400a0  addiu       $a0, $a0, 0xA0
    ctx->pc = 0x2fc58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x2fc590: 0xc0a2442  jal         func_289108
    ctx->pc = 0x2FC590u;
    SET_GPR_U32(ctx, 31, 0x2FC598u);
    ctx->pc = 0x2FC594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC590u;
    // 0x2fc594: 0xfe020048  sd          $v0, 0x48($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289108u, 0x2FC590u, 0x2FC598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC598u;
label_2fc598:
    // 0x2fc598: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2fc598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fc59c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fc59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc5a0: 0xc0a6a88  jal         func_29AA20
    ctx->pc = 0x2FC5A0u;
    SET_GPR_U32(ctx, 31, 0x2FC5A8u);
    ctx->pc = 0x2FC5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC5A0u;
    // 0x2fc5a4: 0x248400e0  addiu       $a0, $a0, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AA20u, 0x2FC5A0u, 0x2FC5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC5A8u;
label_2fc5a8:
    // 0x2fc5a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2fc5a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fc5ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fc5acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc5b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC5B4u;
        // 0x2fc5b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC5BCu;
    // 0x2fc5bc: 0x0  nop
    ctx->pc = 0x2fc5bcu;
    // NOP
    ctx->pc = 0x2fc5c0u;
}
