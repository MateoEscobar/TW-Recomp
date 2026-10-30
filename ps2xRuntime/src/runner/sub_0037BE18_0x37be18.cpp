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

// Function: sub_0037BE18
// Address: 0x37be18 - 0x37be90
void sub_0037BE18_0x37be18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037BE18_0x37be18");
#endif

    switch (ctx->pc) {
        case 0x37be40u: goto label_37be40;
        case 0x37be48u: goto label_37be48;
        case 0x37be5cu: goto label_37be5c;
        case 0x37be64u: goto label_37be64;
        case 0x37be70u: goto label_37be70;
        default: break;
    }

    ctx->pc = 0x37be18u;

    // 0x37be18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37be18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37be1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37be1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37be20: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x37be20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37be24: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37be24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37be28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37be28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37be2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x37be2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37be30: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37be30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x37be34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37be34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37be38: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37BE38u;
    SET_GPR_U32(ctx, 31, 0x37BE40u);
    ctx->pc = 0x37BE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BE38u;
    // 0x37be3c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37BE38u, 0x37BE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BE40u;
label_37be40:
    // 0x37be40: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37BE40u;
    SET_GPR_U32(ctx, 31, 0x37BE48u);
    ctx->pc = 0x37BE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BE40u;
    // 0x37be44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37BE40u, 0x37BE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BE48u;
label_37be48:
    // 0x37be48: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x37be48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37be4c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37be4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37be50: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x37be50u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37be54: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37BE54u;
    SET_GPR_U32(ctx, 31, 0x37BE5Cu);
    ctx->pc = 0x37BE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BE54u;
    // 0x37be58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37BE54u, 0x37BE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BE5Cu;
label_37be5c:
    // 0x37be5c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37BE5Cu;
    SET_GPR_U32(ctx, 31, 0x37BE64u);
    ctx->pc = 0x37BE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BE5Cu;
    // 0x37be60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37BE5Cu, 0x37BE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BE64u;
label_37be64:
    // 0x37be64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37be64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37be68: 0xc10333a  jal         func_40CCE8
    ctx->pc = 0x37BE68u;
    SET_GPR_U32(ctx, 31, 0x37BE70u);
    ctx->pc = 0x37BE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BE68u;
    // 0x37be6c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CCE8u, 0x37BE68u, 0x37BE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BE70u;
label_37be70:
    // 0x37be70: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x37be70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37be74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37be74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37be78: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37be78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37be7c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x37be7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37be80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37be80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37be84: 0x3e00008  jr          $ra
    ctx->pc = 0x37BE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37BE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BE84u;
        // 0x37be88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37BE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37BE8Cu;
    // 0x37be8c: 0x0  nop
    ctx->pc = 0x37be8cu;
    // NOP
    ctx->pc = 0x37be90u;
}
