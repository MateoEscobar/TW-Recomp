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

// Function: sub_00316BD0
// Address: 0x316bd0 - 0x316ca0
void sub_00316BD0_0x316bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316BD0_0x316bd0");
#endif

    switch (ctx->pc) {
        case 0x316c1cu: goto label_316c1c;
        case 0x316c30u: goto label_316c30;
        case 0x316c64u: goto label_316c64;
        case 0x316c70u: goto label_316c70;
        default: break;
    }

    ctx->pc = 0x316bd0u;

    // 0x316bd0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x316bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x316bd4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x316bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x316bd8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x316bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x316bdc: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x316bdcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x316be0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x316be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x316be4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x316be4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316be8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x316be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x316bec: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x316becu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316bf0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x316bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x316bf4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x316bf4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316bf8: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x316bf8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x316bfc: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x316bfcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316c00: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x316c00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x316c04: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x316c04u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x316c08: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x316c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x316c0c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x316c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x316c10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x316c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x316c14: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x316C14u;
    SET_GPR_U32(ctx, 31, 0x316C1Cu);
    ctx->pc = 0x316C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316C14u;
    // 0x316c18: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x316C14u, 0x316C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316C1Cu;
label_316c1c:
    // 0x316c1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x316c1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316c20: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x316C20u;
    {
        const bool branch_taken_0x316c20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x316C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C20u;
        // 0x316c24: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316c20) {
            ctx->pc = 0x316C74u;
            goto label_316c74;
        }
    }
    ctx->pc = 0x316C28u;
    // 0x316c28: 0xc0c1956  jal         func_306558
    ctx->pc = 0x316C28u;
    SET_GPR_U32(ctx, 31, 0x316C30u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x316C28u, 0x316C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316C30u;
label_316c30:
    // 0x316c30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316c30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316c34: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x316C34u;
    {
        const bool branch_taken_0x316c34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x316C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C34u;
        // 0x316c38: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316c34) {
            ctx->pc = 0x316C64u;
            goto label_316c64;
        }
    }
    ctx->pc = 0x316C3Cu;
    // 0x316c3c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x316c3cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x316c40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x316c40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x316c44: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x316c44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316c48: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x316c48u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x316c4c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x316c4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316c50: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x316c50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316c54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x316c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316c58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x316c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316c5c: 0xc0c6250  jal         func_318940
    ctx->pc = 0x316C5Cu;
    SET_GPR_U32(ctx, 31, 0x316C64u);
    ctx->pc = 0x316C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316C5Cu;
    // 0x316c60: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318940u, 0x316C5Cu, 0x316C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316C64u;
label_316c64:
    // 0x316c64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x316c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316c68: 0xc059590  jal         func_165640
    ctx->pc = 0x316C68u;
    SET_GPR_U32(ctx, 31, 0x316C70u);
    ctx->pc = 0x316C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316C68u;
    // 0x316c6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x316C68u, 0x316C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316C70u;
label_316c70:
    // 0x316c70: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x316c70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_316c74:
    // 0x316c74: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x316c74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x316c78: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x316c78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x316c7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x316c7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x316c80: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x316c80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x316c84: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x316c84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316c88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316c8c: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x316c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x316c90: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x316c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x316c94: 0x3e00008  jr          $ra
    ctx->pc = 0x316C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C94u;
        // 0x316c98: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316C9Cu;
    // 0x316c9c: 0x0  nop
    ctx->pc = 0x316c9cu;
    // NOP
    ctx->pc = 0x316ca0u;
}
