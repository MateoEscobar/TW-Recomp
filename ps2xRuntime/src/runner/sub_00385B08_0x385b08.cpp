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

// Function: sub_00385B08
// Address: 0x385b08 - 0x385b90
void sub_00385B08_0x385b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385B08_0x385b08");
#endif

    switch (ctx->pc) {
        case 0x385b3cu: goto label_385b3c;
        case 0x385b44u: goto label_385b44;
        case 0x385b70u: goto label_385b70;
        default: break;
    }

    ctx->pc = 0x385b08u;

    // 0x385b08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x385b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x385b0c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x385b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x385b10: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x385b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x385b14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x385b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385b18: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x385b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x385b1c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x385b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385b20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x385b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x385b24: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x385b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385b28: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x385b28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x385b2c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x385b2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385b30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x385b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x385b34: 0xc0e4060  jal         func_390180
    ctx->pc = 0x385B34u;
    SET_GPR_U32(ctx, 31, 0x385B3Cu);
    ctx->pc = 0x385B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385B34u;
    // 0x385b38: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x385B34u, 0x385B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385B3Cu;
label_385b3c:
    // 0x385b3c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x385B3Cu;
    SET_GPR_U32(ctx, 31, 0x385B44u);
    ctx->pc = 0x385B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385B3Cu;
    // 0x385b40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x385B3Cu, 0x385B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385B44u;
label_385b44:
    // 0x385b44: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x385B44u;
    {
        const bool branch_taken_0x385b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385B44u;
        // 0x385b48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385b44) {
            ctx->pc = 0x385B70u;
            goto label_385b70;
        }
    }
    ctx->pc = 0x385B4Cu;
    // 0x385b4c: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x385b4cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
    // 0x385b50: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x385b50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x385b54: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x385b54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385b58: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x385b58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385b5c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x385b5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385b60: 0x254a16c0  addiu       $t2, $t2, 0x16C0
    ctx->pc = 0x385b60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 5824));
    // 0x385b64: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x385b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385b68: 0xc0e498e  jal         func_392638
    ctx->pc = 0x385B68u;
    SET_GPR_U32(ctx, 31, 0x385B70u);
    ctx->pc = 0x385B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385B68u;
    // 0x385b6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392638u, 0x385B68u, 0x385B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385B70u;
label_385b70:
    // 0x385b70: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x385b70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x385b74: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x385b74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x385b78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x385b78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x385b7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x385b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x385b80: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x385b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x385b84: 0x3e00008  jr          $ra
    ctx->pc = 0x385B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385B84u;
        // 0x385b88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385B8Cu;
    // 0x385b8c: 0x0  nop
    ctx->pc = 0x385b8cu;
    // NOP
    ctx->pc = 0x385b90u;
}
