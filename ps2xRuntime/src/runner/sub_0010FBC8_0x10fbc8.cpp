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

// Function: sub_0010FBC8
// Address: 0x10fbc8 - 0x10fc30
void sub_0010FBC8_0x10fbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FBC8_0x10fbc8");
#endif

    switch (ctx->pc) {
        case 0x10fc0cu: goto label_10fc0c;
        default: break;
    }

    ctx->pc = 0x10fbc8u;

    // 0x10fbc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10fbc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10fbcc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10fbccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10fbd0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x10fbd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fbd4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x10fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x10fbd8: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x10fbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
    // 0x10fbdc: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x10fbdcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x10fbe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10fbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10fbe4: 0x8c45bd30  lw          $a1, -0x42D0($v0)
    ctx->pc = 0x10fbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x10fbe8: 0x24e7b930  addiu       $a3, $a3, -0x46D0
    ctx->pc = 0x10fbe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949168));
    // 0x10fbec: 0x906883bd  lbu         $t0, -0x7C43($v1)
    ctx->pc = 0x10fbecu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x5483BDu));
    // 0x10fbf0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x10fbf0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x10fbf4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10fbf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fbf8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x10fbf8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fbfc: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x10fbfcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10fc00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10fc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10fc04: 0xc04477a  jal         func_111DE8
    ctx->pc = 0x10FC04u;
    SET_GPR_U32(ctx, 31, 0x10FC0Cu);
    ctx->pc = 0x10FC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FC04u;
    // 0x10fc08: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x111DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111DE8u, 0x10FC04u, 0x10FC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FC0Cu;
label_10fc0c:
    // 0x10fc0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FC0Cu;
    {
        const bool branch_taken_0x10fc0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC0Cu;
        // 0x10fc10: 0x3c03005a  lui         $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fc0c) {
            ctx->pc = 0x10FC1Cu;
            goto label_10fc1c;
        }
    }
    ctx->pc = 0x10FC14u;
    // 0x10fc14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10FC14u;
    {
        const bool branch_taken_0x10fc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC14u;
        // 0x10fc18: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fc14) {
            ctx->pc = 0x10FC20u;
            goto label_10fc20;
        }
    }
    ctx->pc = 0x10FC1Cu;
label_10fc1c:
    // 0x10fc1c: 0x8c628690  lw          $v0, -0x7970($v1)
    ctx->pc = 0x10fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936208)));
label_10fc20:
    // 0x10fc20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10fc20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fc24: 0x3e00008  jr          $ra
    ctx->pc = 0x10FC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC24u;
        // 0x10fc28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FC24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FC2Cu;
    // 0x10fc2c: 0x0  nop
    ctx->pc = 0x10fc2cu;
    // NOP
    ctx->pc = 0x10fc30u;
}
