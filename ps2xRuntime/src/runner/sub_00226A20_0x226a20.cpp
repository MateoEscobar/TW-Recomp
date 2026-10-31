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

// Function: sub_00226A20
// Address: 0x226a20 - 0x226aa0
void sub_00226A20_0x226a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226A20_0x226a20");
#endif

    switch (ctx->pc) {
        case 0x226a5cu: goto label_226a5c;
        default: break;
    }

    ctx->pc = 0x226a20u;

    // 0x226a20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x226a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x226a24: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x226a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x226a28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x226a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x226a2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x226a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226a30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x226a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x226a34: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x226a34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x226a38: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x226a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
    // 0x226a3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x226a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226a40: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x226a40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x226a44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226a48: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x226a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x226a4c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x226a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x226a50: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x226a50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x226a54: 0xc087408  jal         func_21D020
    ctx->pc = 0x226A54u;
    SET_GPR_U32(ctx, 31, 0x226A5Cu);
    ctx->pc = 0x226A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226A54u;
    // 0x226a58: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x226A54u, 0x226A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226A5Cu;
label_226a5c:
    // 0x226a5c: 0x3c013e23  lui         $at, 0x3E23
    ctx->pc = 0x226a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15907 << 16));
    // 0x226a60: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x226a60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x226a64: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x226a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x226a68: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x226a68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226a6c: 0xc60204e8  lwc1        $f2, 0x4E8($s0)
    ctx->pc = 0x226a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x226a70: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x226a70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x226a74: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x226a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226a78: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x226a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x226a7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x226a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226a80: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x226a80u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x226a84: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x226a84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x226a88: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x226a88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x226a8c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x226a8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226a90: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x226a90u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    // 0x226a94: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x226a94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226a98: 0x3e00008  jr          $ra
    ctx->pc = 0x226A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226A98u;
        // 0x226a9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226AA0u;
}
