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

// Function: sub_00292B10
// Address: 0x292b10 - 0x292bc8
void sub_00292B10_0x292b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292B10_0x292b10");
#endif

    switch (ctx->pc) {
        case 0x292b40u: goto label_292b40;
        case 0x292b48u: goto label_292b48;
        case 0x292b58u: goto label_292b58;
        case 0x292b6cu: goto label_292b6c;
        case 0x292b9cu: goto label_292b9c;
        case 0x292ba8u: goto label_292ba8;
        default: break;
    }

    ctx->pc = 0x292b10u;

    // 0x292b10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x292b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x292b14: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x292b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x292b18: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x292b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x292b1c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x292b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x292b20: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x292b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x292b24: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x292b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292b28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x292b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x292b2c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x292b2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292b30: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x292b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x292b34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x292b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x292b38: 0xc0e4060  jal         func_390180
    ctx->pc = 0x292B38u;
    SET_GPR_U32(ctx, 31, 0x292B40u);
    ctx->pc = 0x292B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292B38u;
    // 0x292b3c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x292B38u, 0x292B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B40u;
label_292b40:
    // 0x292b40: 0xc08a61a  jal         func_229868
    ctx->pc = 0x292B40u;
    SET_GPR_U32(ctx, 31, 0x292B48u);
    ctx->pc = 0x292B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292B40u;
    // 0x292b44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x292B40u, 0x292B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B48u;
label_292b48:
    // 0x292b48: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x292B48u;
    {
        const bool branch_taken_0x292b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B48u;
        // 0x292b4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292b48) {
            ctx->pc = 0x292BA8u;
            goto label_292ba8;
        }
    }
    ctx->pc = 0x292B50u;
    // 0x292b50: 0xc08750a  jal         func_21D428
    ctx->pc = 0x292B50u;
    SET_GPR_U32(ctx, 31, 0x292B58u);
    ctx->pc = 0x292B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292B50u;
    // 0x292b54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x292B50u, 0x292B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B58u;
label_292b58:
    // 0x292b58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x292b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292b5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x292b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292b60: 0x92110270  lbu         $s1, 0x270($s0)
    ctx->pc = 0x292b60u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x292b64: 0xc0a576c  jal         func_295DB0
    ctx->pc = 0x292B64u;
    SET_GPR_U32(ctx, 31, 0x292B6Cu);
    ctx->pc = 0x292B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292B64u;
    // 0x292b68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DB0u, 0x292B64u, 0x292B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B6Cu;
label_292b6c:
    // 0x292b6c: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x292b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x292b70: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x292b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292b74: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x292b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292b78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x292b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292b7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x292b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x292b80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x292b80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x292b84: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x292b84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292b88: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x292b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x292b8c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x292b8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x292b90: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x292b90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x292b94: 0xc0a57b2  jal         func_295EC8
    ctx->pc = 0x292B94u;
    SET_GPR_U32(ctx, 31, 0x292B9Cu);
    ctx->pc = 0x292B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292B94u;
    // 0x292b98: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295EC8u, 0x292B94u, 0x292B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B9Cu;
label_292b9c:
    // 0x292b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x292b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292ba0: 0xc0a576c  jal         func_295DB0
    ctx->pc = 0x292BA0u;
    SET_GPR_U32(ctx, 31, 0x292BA8u);
    ctx->pc = 0x292BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292BA0u;
    // 0x292ba4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DB0u, 0x292BA0u, 0x292BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292BA8u;
label_292ba8:
    // 0x292ba8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x292ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x292bac: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x292bacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x292bb0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x292bb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x292bb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x292bb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292bb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x292bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x292BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292BBCu;
        // 0x292bc0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292BC4u;
    // 0x292bc4: 0x0  nop
    ctx->pc = 0x292bc4u;
    // NOP
    ctx->pc = 0x292bc8u;
}
