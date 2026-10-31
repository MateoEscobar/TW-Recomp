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

// Function: sub_0022AA78
// Address: 0x22aa78 - 0x22aae8
void sub_0022AA78_0x22aa78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AA78_0x22aa78");
#endif

    switch (ctx->pc) {
        case 0x22aa9cu: goto label_22aa9c;
        default: break;
    }

    ctx->pc = 0x22aa78u;

    // 0x22aa78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22aa78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22aa7c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22aa7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x22aa80: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22aa80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x22aa84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22aa84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22aa88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x22aa8c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x22aa8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22aa90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22aa94: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x22AA94u;
    SET_GPR_U32(ctx, 31, 0x22AA9Cu);
    ctx->pc = 0x22AA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AA94u;
    // 0x22aa98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x22AA94u, 0x22AA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA9Cu;
label_22aa9c:
    // 0x22aa9c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x22aa9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aaa0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22AAA0u;
    {
        const bool branch_taken_0x22aaa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AAA0u;
        // 0x22aaa4: 0xa0710019  sb          $s1, 0x19($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 25), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aaa0) {
            ctx->pc = 0x22AAB0u;
            goto label_22aab0;
        }
    }
    ctx->pc = 0x22AAA8u;
    // 0x22aaa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22aaac: 0xa062001b  sb          $v0, 0x1B($v1)
    ctx->pc = 0x22aaacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27), (uint8_t)GPR_U32(ctx, 2));
label_22aab0:
    // 0x22aab0: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x22aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x22aab4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x22aab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x22aab8: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x22aab8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22aabc: 0x824401b0  lb          $a0, 0x1B0($s2)
    ctx->pc = 0x22aabcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x22aac0: 0x2463d810  addiu       $v1, $v1, -0x27F0
    ctx->pc = 0x22aac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957072));
    // 0x22aac4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22aac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22aac8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22aac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22aacc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x22aaccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22aad0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22aad4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22aad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22aad8: 0xa4440042  sh          $a0, 0x42($v0)
    ctx->pc = 0x22aad8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 66), (uint16_t)GPR_U32(ctx, 4));
    // 0x22aadc: 0x3e00008  jr          $ra
    ctx->pc = 0x22AADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AADCu;
        // 0x22aae0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AAE4u;
    // 0x22aae4: 0x0  nop
    ctx->pc = 0x22aae4u;
    // NOP
    ctx->pc = 0x22aae8u;
}
