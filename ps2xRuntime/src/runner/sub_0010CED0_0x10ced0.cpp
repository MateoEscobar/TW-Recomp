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

// Function: sub_0010CED0
// Address: 0x10ced0 - 0x10cf58
void sub_0010CED0_0x10ced0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CED0_0x10ced0");
#endif

    switch (ctx->pc) {
        case 0x10cf3cu: goto label_10cf3c;
        default: break;
    }

    ctx->pc = 0x10ced0u;

    // 0x10ced0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10ced0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10ced4: 0xe0682d  daddu       $t5, $a3, $zero
    ctx->pc = 0x10ced4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ced8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x10ced8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x10cedc: 0x100702d  daddu       $t6, $t0, $zero
    ctx->pc = 0x10cedcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cee0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10cee0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cee4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x10cee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x10cee8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x10cee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x10ceec: 0x120782d  daddu       $t7, $t1, $zero
    ctx->pc = 0x10ceecu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cef0: 0x8fac0060  lw          $t4, 0x60($sp)
    ctx->pc = 0x10cef0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10cef4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10cef4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cef8: 0x93a20068  lbu         $v0, 0x68($sp)
    ctx->pc = 0x10cef8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x10cefc: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x10cefcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf00: 0x83a30070  lb          $v1, 0x70($sp)
    ctx->pc = 0x10cf00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10cf04: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x10cf04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x10cf08: 0xafab0000  sw          $t3, 0x0($sp)
    ctx->pc = 0x10cf08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
    // 0x10cf0c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x10cf0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf10: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10cf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10cf14: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x10cf14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf18: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x10cf18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf1c: 0xafac0008  sw          $t4, 0x8($sp)
    ctx->pc = 0x10cf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 12));
    // 0x10cf20: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x10cf20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x10cf24: 0x24a56cd0  addiu       $a1, $a1, 0x6CD0
    ctx->pc = 0x10cf24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27856));
    // 0x10cf28: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x10cf28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x10cf2c: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x10cf2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf30: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x10cf30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf34: 0xc0433d6  jal         func_10CF58
    ctx->pc = 0x10CF34u;
    SET_GPR_U32(ctx, 31, 0x10CF3Cu);
    ctx->pc = 0x10CF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CF34u;
    // 0x10cf38: 0x1e0502d  daddu       $t2, $t7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF58u, 0x10CF34u, 0x10CF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CF3Cu;
label_10cf3c:
    // 0x10cf3c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x10cf3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10cf40: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x10cf40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10cf44: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x10cf44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10cf48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10cf48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10cf4c: 0x3e00008  jr          $ra
    ctx->pc = 0x10CF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CF4Cu;
        // 0x10cf50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CF54u;
    // 0x10cf54: 0x0  nop
    ctx->pc = 0x10cf54u;
    // NOP
    ctx->pc = 0x10cf58u;
}
