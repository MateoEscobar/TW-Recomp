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

// Function: sub_003709B8
// Address: 0x3709b8 - 0x370a30
void sub_003709B8_0x3709b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003709B8_0x3709b8");
#endif

    switch (ctx->pc) {
        case 0x3709e0u: goto label_3709e0;
        case 0x3709e8u: goto label_3709e8;
        case 0x3709fcu: goto label_3709fc;
        case 0x370a04u: goto label_370a04;
        case 0x370a10u: goto label_370a10;
        default: break;
    }

    ctx->pc = 0x3709b8u;

    // 0x3709b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3709b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3709bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3709bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3709c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3709c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3709c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3709c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3709c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3709c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3709cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3709ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3709d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3709d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3709d4: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x3709d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3709d8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3709D8u;
    SET_GPR_U32(ctx, 31, 0x3709E0u);
    ctx->pc = 0x3709DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3709D8u;
    // 0x3709dc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3709D8u, 0x3709E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3709E0u;
label_3709e0:
    // 0x3709e0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3709E0u;
    SET_GPR_U32(ctx, 31, 0x3709E8u);
    ctx->pc = 0x3709E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3709E0u;
    // 0x3709e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3709E0u, 0x3709E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3709E8u;
label_3709e8:
    // 0x3709e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3709e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3709ec: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3709ecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3709f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3709f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3709f4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3709F4u;
    SET_GPR_U32(ctx, 31, 0x3709FCu);
    ctx->pc = 0x3709F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3709F4u;
    // 0x3709f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3709F4u, 0x3709FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3709FCu;
label_3709fc:
    // 0x3709fc: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3709FCu;
    SET_GPR_U32(ctx, 31, 0x370A04u);
    ctx->pc = 0x370A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3709FCu;
    // 0x370a00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3709FCu, 0x370A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370A04u;
label_370a04:
    // 0x370a04: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x370a04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x370a08: 0xc06d030  jal         func_1B40C0
    ctx->pc = 0x370A08u;
    SET_GPR_U32(ctx, 31, 0x370A10u);
    ctx->pc = 0x370A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370A08u;
    // 0x370a0c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B40C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40C0u, 0x370A08u, 0x370A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370A10u;
label_370a10:
    // 0x370a10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x370a10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x370a14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x370a14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370a18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x370a18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370a1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370a20: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x370a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x370a24: 0x3e00008  jr          $ra
    ctx->pc = 0x370A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370A24u;
        // 0x370a28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370A2Cu;
    // 0x370a2c: 0x0  nop
    ctx->pc = 0x370a2cu;
    // NOP
    ctx->pc = 0x370a30u;
}
