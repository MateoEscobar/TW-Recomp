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

// Function: sub_00107F10
// Address: 0x107f10 - 0x107f60
void sub_00107F10_0x107f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107F10_0x107f10");
#endif

    switch (ctx->pc) {
        case 0x107f10u: goto label_107f10;
        case 0x107f14u: goto label_107f14;
        case 0x107f18u: goto label_107f18;
        case 0x107f1cu: goto label_107f1c;
        case 0x107f20u: goto label_107f20;
        case 0x107f24u: goto label_107f24;
        case 0x107f28u: goto label_107f28;
        case 0x107f2cu: goto label_107f2c;
        case 0x107f30u: goto label_107f30;
        case 0x107f34u: goto label_107f34;
        case 0x107f38u: goto label_107f38;
        case 0x107f3cu: goto label_107f3c;
        case 0x107f40u: goto label_107f40;
        case 0x107f44u: goto label_107f44;
        case 0x107f48u: goto label_107f48;
        case 0x107f4cu: goto label_107f4c;
        case 0x107f50u: goto label_107f50;
        case 0x107f54u: goto label_107f54;
        case 0x107f58u: goto label_107f58;
        case 0x107f5cu: goto label_107f5c;
        default: break;
    }

    ctx->pc = 0x107f10u;

label_107f10:
    // 0x107f10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x107f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_107f14:
    // 0x107f14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x107f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_107f18:
    // 0x107f18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_107f1c:
    // 0x107f1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x107f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_107f20:
    // 0x107f20: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x107f20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_107f24:
    // 0x107f24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x107f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_107f28:
    // 0x107f28: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x107f28u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_107f2c:
    // 0x107f2c: 0xc05d4e0  jal         func_175380
label_107f30:
    if (ctx->pc == 0x107F30u) {
        ctx->pc = 0x107F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F2Cu;
        // 0x107f30: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107F34u;
        goto label_107f34;
    }
    ctx->pc = 0x107F2Cu;
    SET_GPR_U32(ctx, 31, 0x107F34u);
    ctx->pc = 0x107F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107F2Cu;
    // 0x107f30: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175380u, 0x107F2Cu, 0x107F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107F34u;
label_107f34:
    // 0x107f34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x107f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_107f38:
    // 0x107f38: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x107f38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_107f3c:
    // 0x107f3c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x107f3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_107f40:
    // 0x107f40: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x107f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_107f44:
    // 0x107f44: 0x60f809  jalr        $v1
label_107f48:
    if (ctx->pc == 0x107F48u) {
        ctx->pc = 0x107F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F44u;
        // 0x107f48: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107F4Cu;
        goto label_107f4c;
    }
    ctx->pc = 0x107F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x107F4Cu);
        ctx->pc = 0x107F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F44u;
        // 0x107f48: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107F44u, 0x107F4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107F4Cu;
label_107f4c:
    // 0x107f4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x107f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_107f50:
    // 0x107f50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_107f54:
    // 0x107f54: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x107f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_107f58:
    // 0x107f58: 0x3e00008  jr          $ra
label_107f5c:
    if (ctx->pc == 0x107F5Cu) {
        ctx->pc = 0x107F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F58u;
        // 0x107f5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107F60u;
        goto label_fallthrough_0x107f58;
    }
    ctx->pc = 0x107F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F58u;
        // 0x107f5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x107f58:
    ctx->pc = 0x107F60u;
}
