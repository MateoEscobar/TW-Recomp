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

// Function: sub_00361030
// Address: 0x361030 - 0x3610a8
void sub_00361030_0x361030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361030_0x361030");
#endif

    switch (ctx->pc) {
        case 0x361058u: goto label_361058;
        case 0x361060u: goto label_361060;
        case 0x361074u: goto label_361074;
        case 0x36107cu: goto label_36107c;
        case 0x361088u: goto label_361088;
        default: break;
    }

    ctx->pc = 0x361030u;

    // 0x361030: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x361030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x361034: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x361034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361038: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x361038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36103c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36103cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x361040: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x361040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361044: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x361044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361048: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x361048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36104c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36104cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x361050: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361050u;
    SET_GPR_U32(ctx, 31, 0x361058u);
    ctx->pc = 0x361054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361050u;
    // 0x361054: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361050u, 0x361058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361058u;
label_361058:
    // 0x361058: 0xc10b108  jal         func_42C420
    ctx->pc = 0x361058u;
    SET_GPR_U32(ctx, 31, 0x361060u);
    ctx->pc = 0x36105Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361058u;
    // 0x36105c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x361058u, 0x361060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361060u;
label_361060:
    // 0x361060: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x361060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361064: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x361064u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x361068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36106c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36106Cu;
    SET_GPR_U32(ctx, 31, 0x361074u);
    ctx->pc = 0x361070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36106Cu;
    // 0x361070: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36106Cu, 0x361074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361074u;
label_361074:
    // 0x361074: 0xc10b108  jal         func_42C420
    ctx->pc = 0x361074u;
    SET_GPR_U32(ctx, 31, 0x36107Cu);
    ctx->pc = 0x361078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361074u;
    // 0x361078: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x361074u, 0x36107Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36107Cu;
label_36107c:
    // 0x36107c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36107cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361080: 0xc0b03d6  jal         func_2C0F58
    ctx->pc = 0x361080u;
    SET_GPR_U32(ctx, 31, 0x361088u);
    ctx->pc = 0x361084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361080u;
    // 0x361084: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0F58u, 0x361080u, 0x361088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361088u;
label_361088:
    // 0x361088: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x361088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36108c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36108cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361090: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x361090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x361094: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x361094u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x361098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x361098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36109c: 0x3e00008  jr          $ra
    ctx->pc = 0x36109Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3610A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36109Cu;
        // 0x3610a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36109Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3610A4u;
    // 0x3610a4: 0x0  nop
    ctx->pc = 0x3610a4u;
    // NOP
    ctx->pc = 0x3610a8u;
}
