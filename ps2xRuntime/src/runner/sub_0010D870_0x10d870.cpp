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

// Function: sub_0010D870
// Address: 0x10d870 - 0x10d8e8
void sub_0010D870_0x10d870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D870_0x10d870");
#endif

    switch (ctx->pc) {
        case 0x10d89cu: goto label_10d89c;
        case 0x10d8a8u: goto label_10d8a8;
        default: break;
    }

    ctx->pc = 0x10d870u;

    // 0x10d870: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10d870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10d874: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x10d874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x10d878: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10d878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d87c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10d87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10d880: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x10d880u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x10d884: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x10d884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x10d888: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10d888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10d88c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10d88cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d890: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x10d890u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x10d894: 0xc050fda  jal         func_143F68
    ctx->pc = 0x10D894u;
    SET_GPR_U32(ctx, 31, 0x10D89Cu);
    ctx->pc = 0x10D898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D894u;
    // 0x10d898: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x10D894u, 0x10D89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D89Cu;
label_10d89c:
    // 0x10d89c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10d89cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d8a0: 0xc043b64  jal         func_10ED90
    ctx->pc = 0x10D8A0u;
    SET_GPR_U32(ctx, 31, 0x10D8A8u);
    ctx->pc = 0x10D8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D8A0u;
    // 0x10d8a4: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ED90u, 0x10D8A0u, 0x10D8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D8A8u;
label_10d8a8:
    // 0x10d8a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10d8a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d8ac: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x10D8ACu;
    {
        const bool branch_taken_0x10d8ac = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x10D8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D8ACu;
        // 0x10d8b0: 0x31900  sll         $v1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d8ac) {
            ctx->pc = 0x10D8D0u;
            goto label_10d8d0;
        }
    }
    ctx->pc = 0x10D8B4u;
    // 0x10d8b4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x10d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10d8b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10d8bc: 0xac51000c  sw          $s1, 0xC($v0)
    ctx->pc = 0x10d8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
    // 0x10d8c0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x10d8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10d8c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10d8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10d8c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10d8cc: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x10d8ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_10d8d0:
    // 0x10d8d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x10d8d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d8d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10d8d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d8d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10d8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d8dc: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x10d8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10d8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x10D8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D8E0u;
        // 0x10d8e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D8E8u;
}
