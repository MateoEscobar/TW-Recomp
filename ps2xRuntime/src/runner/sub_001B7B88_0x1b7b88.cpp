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

// Function: sub_001B7B88
// Address: 0x1b7b88 - 0x1b7c10
void sub_001B7B88_0x1b7b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7B88_0x1b7b88");
#endif

    switch (ctx->pc) {
        case 0x1b7bacu: goto label_1b7bac;
        case 0x1b7bf4u: goto label_1b7bf4;
        default: break;
    }

    ctx->pc = 0x1b7b88u;

    // 0x1b7b88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b7b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b7b8c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1b7b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b7b90: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b7b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b7b94: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b7b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b7b98: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1b7b98u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1b7b9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b7b9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7ba0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b7ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b7ba4: 0xc060a30  jal         func_1828C0
    ctx->pc = 0x1B7BA4u;
    SET_GPR_U32(ctx, 31, 0x1B7BACu);
    ctx->pc = 0x1B7BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7BA4u;
    // 0x1b7ba8: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1828C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1828C0u, 0x1B7BA4u, 0x1B7BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7BACu;
label_1b7bac:
    // 0x1b7bac: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1b7bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b7bb0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b7bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1b7bb4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1b7bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1b7bb8: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x1b7bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
    // 0x1b7bbc: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x1b7bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    // 0x1b7bc0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b7bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7bc4: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1b7bc4u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x5116C0u));
    // 0x1b7bc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b7bc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7bcc: 0x3c01464b  lui         $at, 0x464B
    ctx->pc = 0x1b7bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17995 << 16));
    // 0x1b7bd0: 0x34212000  ori         $at, $at, 0x2000
    ctx->pc = 0x1b7bd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8192);
    // 0x1b7bd4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b7bd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b7bd8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b7bd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7bdc: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x1b7bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x1b7be0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b7be0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7be4: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1b7be4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b7be8: 0x27ab0010  addiu       $t3, $sp, 0x10
    ctx->pc = 0x1b7be8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b7bec: 0xc062bb0  jal         func_18AEC0
    ctx->pc = 0x1B7BECu;
    SET_GPR_U32(ctx, 31, 0x1B7BF4u);
    ctx->pc = 0x1B7BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7BECu;
    // 0x1b7bf0: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x1B7BECu, 0x1B7BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7BF4u;
label_1b7bf4:
    // 0x1b7bf4: 0xae22046c  sw          $v0, 0x46C($s1)
    ctx->pc = 0x1b7bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1132), GPR_U32(ctx, 2));
    // 0x1b7bf8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b7bf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7bfc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b7bfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7c00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b7c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7c04: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C04u;
        // 0x1b7c08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7C0Cu;
    // 0x1b7c0c: 0x0  nop
    ctx->pc = 0x1b7c0cu;
    // NOP
    ctx->pc = 0x1b7c10u;
}
