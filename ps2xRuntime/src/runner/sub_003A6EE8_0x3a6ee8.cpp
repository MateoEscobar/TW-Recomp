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

// Function: sub_003A6EE8
// Address: 0x3a6ee8 - 0x3a6f68
void sub_003A6EE8_0x3a6ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6EE8_0x3a6ee8");
#endif

    switch (ctx->pc) {
        case 0x3a6f10u: goto label_3a6f10;
        case 0x3a6f58u: goto label_3a6f58;
        default: break;
    }

    ctx->pc = 0x3a6ee8u;

    // 0x3a6ee8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a6ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a6eec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3a6eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x3a6ef0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a6ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a6ef4: 0x2463deb8  addiu       $v1, $v1, -0x2148
    ctx->pc = 0x3a6ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958776));
    // 0x3a6ef8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3a6ef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6efc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a6efcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6f00: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3a6f00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a6f04: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3a6f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6f08: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3a6f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x3a6f0c: 0x0  nop
    ctx->pc = 0x3a6f0cu;
    // NOP
label_3a6f10:
    // 0x3a6f10: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a6f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a6f14: 0x8c8201d4  lw          $v0, 0x1D4($a0)
    ctx->pc = 0x3a6f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x3a6f18: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3A6F18u;
    {
        const bool branch_taken_0x3a6f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6F18u;
        // 0x3a6f1c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6f18) {
            ctx->pc = 0x3A6F5Cu;
            goto label_3a6f5c;
        }
    }
    ctx->pc = 0x3A6F20u;
    // 0x3a6f20: 0x8c8201e8  lw          $v0, 0x1E8($a0)
    ctx->pc = 0x3a6f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x3a6f24: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A6F24u;
    {
        const bool branch_taken_0x3a6f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6F24u;
        // 0x3a6f28: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6f24) {
            ctx->pc = 0x3A6F5Cu;
            goto label_3a6f5c;
        }
    }
    ctx->pc = 0x3A6F2Cu;
    // 0x3a6f2c: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x3a6f2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a6f30: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3A6F30u;
    {
        const bool branch_taken_0x3a6f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6F30u;
        // 0x3a6f34: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6f30) {
            ctx->pc = 0x3A6F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6f10;
        }
    }
    ctx->pc = 0x3A6F38u;
    // 0x3a6f38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a6f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a6f3c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a6f3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a6f40: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a6f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a6f44: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x3a6f44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x3a6f48: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3a6f48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a6f4c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3a6f4cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3a6f50: 0xc043f74  jal         func_10FDD0
    ctx->pc = 0x3A6F50u;
    SET_GPR_U32(ctx, 31, 0x3A6F58u);
    ctx->pc = 0x3A6F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6F50u;
    // 0x3a6f54: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x3A6F50u, 0x3A6F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6F58u;
label_3a6f58:
    // 0x3a6f58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a6f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a6f5c:
    // 0x3a6f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6F5Cu;
        // 0x3a6f60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6F64u;
    // 0x3a6f64: 0x0  nop
    ctx->pc = 0x3a6f64u;
    // NOP
    ctx->pc = 0x3a6f68u;
}
