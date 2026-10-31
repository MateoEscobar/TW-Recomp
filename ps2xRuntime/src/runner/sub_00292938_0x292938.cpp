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

// Function: sub_00292938
// Address: 0x292938 - 0x2929a8
void sub_00292938_0x292938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292938_0x292938");
#endif

    switch (ctx->pc) {
        case 0x292960u: goto label_292960;
        case 0x292968u: goto label_292968;
        case 0x29297cu: goto label_29297c;
        case 0x292988u: goto label_292988;
        default: break;
    }

    ctx->pc = 0x292938u;

    // 0x292938: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x292938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29293c: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x29293cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x292940: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x292940u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x292944: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x292944u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x292948: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x292948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x29294c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x29294cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x292950: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x292950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x292954: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x292954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x292958: 0xc0e4060  jal         func_390180
    ctx->pc = 0x292958u;
    SET_GPR_U32(ctx, 31, 0x292960u);
    ctx->pc = 0x29295Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292958u;
    // 0x29295c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x292958u, 0x292960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292960u;
label_292960:
    // 0x292960: 0xc08a61a  jal         func_229868
    ctx->pc = 0x292960u;
    SET_GPR_U32(ctx, 31, 0x292968u);
    ctx->pc = 0x292964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292960u;
    // 0x292964: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x292960u, 0x292968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292968u;
label_292968:
    // 0x292968: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x292968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29296c: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x29296Cu;
    {
        const bool branch_taken_0x29296c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29296c) {
            ctx->pc = 0x292970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29296Cu;
            // 0x292970: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292990u;
            goto label_292990;
        }
    }
    ctx->pc = 0x292974u;
    // 0x292974: 0xc087502  jal         func_21D408
    ctx->pc = 0x292974u;
    SET_GPR_U32(ctx, 31, 0x29297Cu);
    ctx->pc = 0x292978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292974u;
    // 0x292978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x292974u, 0x29297Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29297Cu;
label_29297c:
    // 0x29297c: 0xe454013c  swc1        $f20, 0x13C($v0)
    ctx->pc = 0x29297cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 316), bits); }
    // 0x292980: 0xc087502  jal         func_21D408
    ctx->pc = 0x292980u;
    SET_GPR_U32(ctx, 31, 0x292988u);
    ctx->pc = 0x292984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292980u;
    // 0x292984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x292980u, 0x292988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292988u;
label_292988:
    // 0x292988: 0xe4550140  swc1        $f21, 0x140($v0)
    ctx->pc = 0x292988u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 320), bits); }
    // 0x29298c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x29298cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_292990:
    // 0x292990: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x292990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292994: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x292994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x292998: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x292998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29299c: 0x3e00008  jr          $ra
    ctx->pc = 0x29299Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2929A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29299Cu;
        // 0x2929a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29299Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2929A4u;
    // 0x2929a4: 0x0  nop
    ctx->pc = 0x2929a4u;
    // NOP
    ctx->pc = 0x2929a8u;
}
