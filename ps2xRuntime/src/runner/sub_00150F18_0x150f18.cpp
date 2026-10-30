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

// Function: sub_00150F18
// Address: 0x150f18 - 0x150fc8
void sub_00150F18_0x150f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150F18_0x150f18");
#endif

    switch (ctx->pc) {
        case 0x150f38u: goto label_150f38;
        case 0x150f40u: goto label_150f40;
        case 0x150f4cu: goto label_150f4c;
        case 0x150f54u: goto label_150f54;
        case 0x150f5cu: goto label_150f5c;
        default: break;
    }

    ctx->pc = 0x150f18u;

    // 0x150f18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x150f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x150f1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x150f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x150f20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x150f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150f24: 0x2e020030  sltiu       $v0, $s0, 0x30
    ctx->pc = 0x150f24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x150f28: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x150F28u;
    {
        const bool branch_taken_0x150f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F28u;
        // 0x150f2c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150f28) {
            ctx->pc = 0x150F64u;
            goto label_150f64;
        }
    }
    ctx->pc = 0x150F30u;
    // 0x150f30: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x150F30u;
    SET_GPR_U32(ctx, 31, 0x150F38u);
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x150F30u, 0x150F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150F38u;
label_150f38:
    // 0x150f38: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x150F38u;
    SET_GPR_U32(ctx, 31, 0x150F40u);
    ctx->pc = 0x150F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150F38u;
    // 0x150f3c: 0x2404003f  addiu       $a0, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x150F38u, 0x150F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150F40u;
label_150f40:
    // 0x150f40: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x150f40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x150f44: 0xc053722  jal         func_14DC88
    ctx->pc = 0x150F44u;
    SET_GPR_U32(ctx, 31, 0x150F4Cu);
    ctx->pc = 0x150F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150F44u;
    // 0x150f48: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x150F44u, 0x150F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150F4Cu;
label_150f4c:
    // 0x150f4c: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x150F4Cu;
    SET_GPR_U32(ctx, 31, 0x150F54u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x150F4Cu, 0x150F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150F54u;
label_150f54:
    // 0x150f54: 0xc05471c  jal         func_151C70
    ctx->pc = 0x150F54u;
    SET_GPR_U32(ctx, 31, 0x150F5Cu);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x150F54u, 0x150F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150F5Cu;
label_150f5c:
    // 0x150f5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x150F5Cu;
    {
        const bool branch_taken_0x150f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F5Cu;
        // 0x150f60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150f5c) {
            ctx->pc = 0x150F68u;
            goto label_150f68;
        }
    }
    ctx->pc = 0x150F64u;
label_150f64:
    // 0x150f64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x150f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_150f68:
    // 0x150f68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x150f68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150f6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150f70: 0x3e00008  jr          $ra
    ctx->pc = 0x150F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F70u;
        // 0x150f74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150F78u;
    // 0x150f78: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x150f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x150f7c: 0x0  nop
    ctx->pc = 0x150f7cu;
    // NOP
    // 0x150f80: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x150f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x150f84: 0x0  nop
    ctx->pc = 0x150f84u;
    // NOP
    // 0x150f88: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x150f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x150f8c: 0x0  nop
    ctx->pc = 0x150f8cu;
    // NOP
    // 0x150f90: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x150f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x150f94: 0x0  nop
    ctx->pc = 0x150f94u;
    // NOP
    // 0x150f98: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x150f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x150f9c: 0x0  nop
    ctx->pc = 0x150f9cu;
    // NOP
    // 0x150fa0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x150fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x150fa4: 0x0  nop
    ctx->pc = 0x150fa4u;
    // NOP
    // 0x150fa8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x150fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x150fac: 0x0  nop
    ctx->pc = 0x150facu;
    // NOP
    // 0x150fb0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x150fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x150fb4: 0x0  nop
    ctx->pc = 0x150fb4u;
    // NOP
    // 0x150fb8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x150fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x150fbc: 0x0  nop
    ctx->pc = 0x150fbcu;
    // NOP
    // 0x150fc0: 0xac890004  sw          $t1, 0x4($a0)
    ctx->pc = 0x150fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 9));
    // 0x150fc4: 0x0  nop
    ctx->pc = 0x150fc4u;
    // NOP
    ctx->pc = 0x150fc8u;
}
