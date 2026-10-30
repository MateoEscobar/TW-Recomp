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

// Function: sub_00395F88
// Address: 0x395f88 - 0x396008
void sub_00395F88_0x395f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395F88_0x395f88");
#endif

    switch (ctx->pc) {
        case 0x395fb0u: goto label_395fb0;
        case 0x395fc4u: goto label_395fc4;
        case 0x395fe8u: goto label_395fe8;
        default: break;
    }

    ctx->pc = 0x395f88u;

    // 0x395f88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x395f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x395f8c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x395f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x395f90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x395f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395f94: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x395f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x395f98: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x395f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x395f9c: 0x260400f8  addiu       $a0, $s0, 0xF8
    ctx->pc = 0x395f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
    // 0x395fa0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x395fa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395fa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x395fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x395fa8: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x395FA8u;
    SET_GPR_U32(ctx, 31, 0x395FB0u);
    ctx->pc = 0x395FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395FA8u;
    // 0x395fac: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x395FA8u, 0x395FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395FB0u;
label_395fb0:
    // 0x395fb0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x395FB0u;
    {
        const bool branch_taken_0x395fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x395FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395FB0u;
        // 0x395fb4: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395fb0) {
            ctx->pc = 0x395FC4u;
            goto label_395fc4;
        }
    }
    ctx->pc = 0x395FB8u;
    // 0x395fb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x395fb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395fbc: 0xc0440c6  jal         func_110318
    ctx->pc = 0x395FBCu;
    SET_GPR_U32(ctx, 31, 0x395FC4u);
    ctx->pc = 0x395FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395FBCu;
    // 0x395fc0: 0x8e0500f8  lw          $a1, 0xF8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x395FBCu, 0x395FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395FC4u;
label_395fc4:
    // 0x395fc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x395fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x395fc8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x395fc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x395fcc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x395fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395fd0: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x395fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
    // 0x395fd4: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x395fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x395fd8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x395fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x395fdc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x395fdcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x395fe0: 0xc043f74  jal         func_10FDD0
    ctx->pc = 0x395FE0u;
    SET_GPR_U32(ctx, 31, 0x395FE8u);
    ctx->pc = 0x395FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395FE0u;
    // 0x395fe4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x395FE0u, 0x395FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395FE8u;
label_395fe8:
    // 0x395fe8: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x395fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
    // 0x395fec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x395fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x395ff0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x395ff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x395ff4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x395ff4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x395ff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x395ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x395FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395FFCu;
        // 0x396000: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396004u;
    // 0x396004: 0x0  nop
    ctx->pc = 0x396004u;
    // NOP
    ctx->pc = 0x396008u;
}
