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

// Function: sub_0032CF70
// Address: 0x32cf70 - 0x32cff8
void sub_0032CF70_0x32cf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032CF70_0x32cf70");
#endif

    switch (ctx->pc) {
        case 0x32cfb4u: goto label_32cfb4;
        default: break;
    }

    ctx->pc = 0x32cf70u;

    // 0x32cf70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32cf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32cf74: 0x3c090057  lui         $t1, 0x57
    ctx->pc = 0x32cf74u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)87 << 16));
    // 0x32cf78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32cf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32cf7c: 0x3c0a7fff  lui         $t2, 0x7FFF
    ctx->pc = 0x32cf7cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32767 << 16));
    // 0x32cf80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32cf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32cf84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32cf84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cf88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32cf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x32cf8c: 0x25295c40  addiu       $t1, $t1, 0x5C40
    ctx->pc = 0x32cf8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 23616));
    // 0x32cf90: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x32cf90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32cf94: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x32cf94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x32cf98: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x32cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x32cf9c: 0x354afffd  ori         $t2, $t2, 0xFFFD
    ctx->pc = 0x32cf9cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65533);
    // 0x32cfa0: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x32cfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x32cfa4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x32cfa4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32cfa8: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x32cfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x32cfac: 0xc0cb1ac  jal         func_32C6B0
    ctx->pc = 0x32CFACu;
    SET_GPR_U32(ctx, 31, 0x32CFB4u);
    ctx->pc = 0x32CFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CFACu;
    // 0x32cfb0: 0x86060032  lh          $a2, 0x32($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C6B0u, 0x32CFACu, 0x32CFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CFB4u;
label_32cfb4:
    // 0x32cfb4: 0x86040032  lh          $a0, 0x32($s0)
    ctx->pc = 0x32cfb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x32cfb8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x32cfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x32cfbc: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x32cfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x32cfc0: 0x832818  mult        $a1, $a0, $v1
    ctx->pc = 0x32cfc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x32cfc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32cfc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32cfc8: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x32cfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x32cfcc: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x32cfccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x32cfd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32cfd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32cfd4: 0x96030032  lhu         $v1, 0x32($s0)
    ctx->pc = 0x32cfd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x32cfd8: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x32cfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32cfdc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32cfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32cfe0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x32cfe0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x32cfe4: 0xa6030032  sh          $v1, 0x32($s0)
    ctx->pc = 0x32cfe4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 3));
    // 0x32cfe8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32cfe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32cfec: 0x3e00008  jr          $ra
    ctx->pc = 0x32CFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CFECu;
        // 0x32cff0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CFF4u;
    // 0x32cff4: 0x0  nop
    ctx->pc = 0x32cff4u;
    // NOP
    ctx->pc = 0x32cff8u;
}
