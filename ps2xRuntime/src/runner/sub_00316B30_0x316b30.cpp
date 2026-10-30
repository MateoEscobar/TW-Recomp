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

// Function: sub_00316B30
// Address: 0x316b30 - 0x316bd0
void sub_00316B30_0x316b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316B30_0x316b30");
#endif

    switch (ctx->pc) {
        case 0x316b64u: goto label_316b64;
        case 0x316b78u: goto label_316b78;
        case 0x316ba0u: goto label_316ba0;
        case 0x316bacu: goto label_316bac;
        default: break;
    }

    ctx->pc = 0x316b30u;

    // 0x316b30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x316b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x316b34: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x316b34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x316b38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x316b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x316b3c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x316b3cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x316b40: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x316b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x316b44: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x316b44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316b48: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x316b48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x316b4c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x316b4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316b50: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x316b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x316b54: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x316b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x316b58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x316b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x316b5c: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x316B5Cu;
    SET_GPR_U32(ctx, 31, 0x316B64u);
    ctx->pc = 0x316B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316B5Cu;
    // 0x316b60: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x316B5Cu, 0x316B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316B64u;
label_316b64:
    // 0x316b64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x316b64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316b68: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x316B68u;
    {
        const bool branch_taken_0x316b68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x316B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316B68u;
        // 0x316b6c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316b68) {
            ctx->pc = 0x316BB0u;
            goto label_316bb0;
        }
    }
    ctx->pc = 0x316B70u;
    // 0x316b70: 0xc0c1956  jal         func_306558
    ctx->pc = 0x316B70u;
    SET_GPR_U32(ctx, 31, 0x316B78u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x316B70u, 0x316B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316B78u;
label_316b78:
    // 0x316b78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316b78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316b7c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x316B7Cu;
    {
        const bool branch_taken_0x316b7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x316B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316B7Cu;
        // 0x316b80: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316b7c) {
            ctx->pc = 0x316BA0u;
            goto label_316ba0;
        }
    }
    ctx->pc = 0x316B84u;
    // 0x316b84: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x316b84u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x316b88: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x316b88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x316b8c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x316b8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316b90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x316b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316b94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x316b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316b98: 0xc0c42f8  jal         func_310BE0
    ctx->pc = 0x316B98u;
    SET_GPR_U32(ctx, 31, 0x316BA0u);
    ctx->pc = 0x316B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316B98u;
    // 0x316b9c: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x310BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310BE0u, 0x316B98u, 0x316BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316BA0u;
label_316ba0:
    // 0x316ba0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x316ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316ba4: 0xc059590  jal         func_165640
    ctx->pc = 0x316BA4u;
    SET_GPR_U32(ctx, 31, 0x316BACu);
    ctx->pc = 0x316BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316BA4u;
    // 0x316ba8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x316BA4u, 0x316BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316BACu;
label_316bac:
    // 0x316bac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x316bacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_316bb0:
    // 0x316bb0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x316bb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x316bb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x316bb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x316bb8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x316bb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316bbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316bc0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x316bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x316bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x316BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316BC4u;
        // 0x316bc8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316BCCu;
    // 0x316bcc: 0x0  nop
    ctx->pc = 0x316bccu;
    // NOP
    ctx->pc = 0x316bd0u;
}
