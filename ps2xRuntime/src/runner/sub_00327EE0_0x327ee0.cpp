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

// Function: sub_00327EE0
// Address: 0x327ee0 - 0x327f88
void sub_00327EE0_0x327ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327EE0_0x327ee0");
#endif

    switch (ctx->pc) {
        case 0x327f18u: goto label_327f18;
        case 0x327f2cu: goto label_327f2c;
        default: break;
    }

    ctx->pc = 0x327ee0u;

    // 0x327ee0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x327ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x327ee4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x327ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x327ee8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x327ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x327eec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x327eecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327ef0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x327ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x327ef4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x327ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x327ef8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x327ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x327efc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x327efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x327f00: 0x8c900044  lw          $s0, 0x44($a0)
    ctx->pc = 0x327f00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x327f04: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x327f04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x327f08: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x327F08u;
    {
        const bool branch_taken_0x327f08 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x327F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F08u;
        // 0x327f0c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327f08) {
            ctx->pc = 0x327F64u;
            goto label_327f64;
        }
    }
    ctx->pc = 0x327F10u;
    // 0x327f10: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x327f10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x327f14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x327f14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_327f18:
    // 0x327f18: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x327f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x327f1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x327f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327f20: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x327f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x327f24: 0xc0cb224  jal         func_32C890
    ctx->pc = 0x327F24u;
    SET_GPR_U32(ctx, 31, 0x327F2Cu);
    ctx->pc = 0x327F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327F24u;
    // 0x327f28: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C890u, 0x327F24u, 0x327F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327F2Cu;
label_327f2c:
    // 0x327f2c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x327F2Cu;
    {
        const bool branch_taken_0x327f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x327f2c) {
            ctx->pc = 0x327F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327F2Cu;
            // 0x327f30: 0x86020006  lh          $v0, 0x6($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327F54u;
            goto label_327f54;
        }
    }
    ctx->pc = 0x327F34u;
    // 0x327f34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x327f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x327f38: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x327f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x327f3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x327f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x327f40: 0x54740004  bnel        $v1, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x327F40u;
    {
        const bool branch_taken_0x327f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x327f40) {
            ctx->pc = 0x327F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327F40u;
            // 0x327f44: 0x86020006  lh          $v0, 0x6($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327F54u;
            goto label_327f54;
        }
    }
    ctx->pc = 0x327F48u;
    // 0x327f48: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x327f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x327f4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x327F4Cu;
    {
        const bool branch_taken_0x327f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F4Cu;
        // 0x327f50: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327f4c) {
            ctx->pc = 0x327F68u;
            goto label_327f68;
        }
    }
    ctx->pc = 0x327F54u;
label_327f54:
    // 0x327f54: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x327f54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x327f58: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x327f58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x327f5c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x327F5Cu;
    {
        const bool branch_taken_0x327f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x327F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F5Cu;
        // 0x327f60: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327f5c) {
            ctx->pc = 0x327F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327f18;
        }
    }
    ctx->pc = 0x327F64u;
label_327f64:
    // 0x327f64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x327f64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_327f68:
    // 0x327f68: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x327f68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x327f6c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x327f6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x327f70: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x327f70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x327f74: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x327f74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x327f78: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x327f78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327f7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x327f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327f80: 0x3e00008  jr          $ra
    ctx->pc = 0x327F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F80u;
        // 0x327f84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327F88u;
}
