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

// Function: sub_004DDFA0
// Address: 0x4ddfa0 - 0x4de020
void sub_004DDFA0_0x4ddfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DDFA0_0x4ddfa0");
#endif

    switch (ctx->pc) {
        case 0x4ddff0u: goto label_4ddff0;
        case 0x4de008u: goto label_4de008;
        default: break;
    }

    ctx->pc = 0x4ddfa0u;

    // 0x4ddfa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ddfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4ddfa4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4ddfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4ddfa8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ddfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4ddfac: 0x24428828  addiu       $v0, $v0, -0x77D8
    ctx->pc = 0x4ddfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936616));
    // 0x4ddfb0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4ddfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4ddfb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ddfb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ddfb8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4ddfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4ddfbc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4ddfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x4ddfc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ddfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ddfc4: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x4ddfc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
    // 0x4ddfc8: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x4ddfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x4ddfcc: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x4ddfccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x4ddfd0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4ddfd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ddfd4: 0x2463cef0  addiu       $v1, $v1, -0x3110
    ctx->pc = 0x4ddfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954736));
    // 0x4ddfd8: 0x24c6cfa0  addiu       $a2, $a2, -0x3060
    ctx->pc = 0x4ddfd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954912));
    // 0x4ddfdc: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x4ddfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x4ddfe0: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x4ddfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x4ddfe4: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x4ddfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x4ddfe8: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x4DDFE8u;
    SET_GPR_U32(ctx, 31, 0x4DDFF0u);
    ctx->pc = 0x4DDFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DDFE8u;
    // 0x4ddfec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4DDFE8u, 0x4DDFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DDFF0u;
label_4ddff0:
    // 0x4ddff0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4ddff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4ddff4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ddff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ddff8: 0x2442a9c8  addiu       $v0, $v0, -0x5638
    ctx->pc = 0x4ddff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945224));
    // 0x4ddffc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4ddffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de000: 0xc0557d2  jal         func_155F48
    ctx->pc = 0x4DE000u;
    SET_GPR_U32(ctx, 31, 0x4DE008u);
    ctx->pc = 0x4DE004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE000u;
    // 0x4de004: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155F48u, 0x4DE000u, 0x4DE008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE008u;
label_4de008:
    // 0x4de008: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4de008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4de00c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4de00cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4de010: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4de010u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4de014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4de014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4de018: 0x3e00008  jr          $ra
    ctx->pc = 0x4DE018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DE01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE018u;
        // 0x4de01c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DE020u;
}
