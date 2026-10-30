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

// Function: sub_00354C80
// Address: 0x354c80 - 0x354d28
void sub_00354C80_0x354c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354C80_0x354c80");
#endif

    switch (ctx->pc) {
        case 0x354d10u: goto label_354d10;
        default: break;
    }

    ctx->pc = 0x354c80u;

    // 0x354c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x354c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x354c84: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x354c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x354c88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x354c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x354c8c: 0x24424960  addiu       $v0, $v0, 0x4960
    ctx->pc = 0x354c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18784));
    // 0x354c90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x354c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x354c94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x354c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354c98: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x354c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x354c9c: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x354c9cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x354ca0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x354ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x354ca4: 0x250816c0  addiu       $t0, $t0, 0x16C0
    ctx->pc = 0x354ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5824));
    // 0x354ca8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x354ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x354cac: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x354cacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x354cb0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x354cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x354cb4: 0x24e71780  addiu       $a3, $a3, 0x1780
    ctx->pc = 0x354cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6016));
    // 0x354cb8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x354cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x354cbc: 0x26040034  addiu       $a0, $s0, 0x34
    ctx->pc = 0x354cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x354cc0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x354cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x354cc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x354cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354cc8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x354cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x354ccc: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x354cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x354cd0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x354cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x354cd4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x354cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x354cd8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x354cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x354cdc: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x354cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x354ce0: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x354ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x354ce4: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x354ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x354ce8: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x354ce8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5116C0u));
    // 0x354cec: 0x7e020040  sq          $v0, 0x40($s0)
    ctx->pc = 0x354cecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
    // 0x354cf0: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x354cf0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x511780u));
    // 0x354cf4: 0x7e030050  sq          $v1, 0x50($s0)
    ctx->pc = 0x354cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 3));
    // 0x354cf8: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x354cf8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5116C0u));
    // 0x354cfc: 0x7e020060  sq          $v0, 0x60($s0)
    ctx->pc = 0x354cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 2));
    // 0x354d00: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x354d00u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x511780u));
    // 0x354d04: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x354d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x354d08: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x354D08u;
    SET_GPR_U32(ctx, 31, 0x354D10u);
    ctx->pc = 0x354D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354D08u;
    // 0x354d0c: 0x7e030070  sq          $v1, 0x70($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x354D08u, 0x354D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354D10u;
label_354d10:
    // 0x354d10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x354d10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354d14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x354d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354d18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x354d18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x354d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x354D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354D1Cu;
        // 0x354d20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354D24u;
    // 0x354d24: 0x0  nop
    ctx->pc = 0x354d24u;
    // NOP
    ctx->pc = 0x354d28u;
}
