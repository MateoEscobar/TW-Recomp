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

// Function: sub_00315E48
// Address: 0x315e48 - 0x315ee8
void sub_00315E48_0x315e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315E48_0x315e48");
#endif

    switch (ctx->pc) {
        case 0x315e7cu: goto label_315e7c;
        case 0x315e90u: goto label_315e90;
        case 0x315eb8u: goto label_315eb8;
        case 0x315ec4u: goto label_315ec4;
        default: break;
    }

    ctx->pc = 0x315e48u;

    // 0x315e48: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x315e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x315e4c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x315e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x315e50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x315e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x315e54: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x315e54u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x315e58: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x315e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x315e5c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x315e5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315e60: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x315e60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x315e64: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x315e64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315e68: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x315e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x315e6c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x315e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x315e70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x315e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x315e74: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x315E74u;
    SET_GPR_U32(ctx, 31, 0x315E7Cu);
    ctx->pc = 0x315E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315E74u;
    // 0x315e78: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x315E74u, 0x315E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315E7Cu;
label_315e7c:
    // 0x315e7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x315e7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315e80: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x315E80u;
    {
        const bool branch_taken_0x315e80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x315E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E80u;
        // 0x315e84: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315e80) {
            ctx->pc = 0x315EC8u;
            goto label_315ec8;
        }
    }
    ctx->pc = 0x315E88u;
    // 0x315e88: 0xc0c1956  jal         func_306558
    ctx->pc = 0x315E88u;
    SET_GPR_U32(ctx, 31, 0x315E90u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x315E88u, 0x315E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315E90u;
label_315e90:
    // 0x315e90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x315e90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315e94: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x315E94u;
    {
        const bool branch_taken_0x315e94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x315E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E94u;
        // 0x315e98: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315e94) {
            ctx->pc = 0x315EB8u;
            goto label_315eb8;
        }
    }
    ctx->pc = 0x315E9Cu;
    // 0x315e9c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x315e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x315ea0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x315ea0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x315ea4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x315ea4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315ea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x315ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315eac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x315eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315eb0: 0xc0c7b24  jal         func_31EC90
    ctx->pc = 0x315EB0u;
    SET_GPR_U32(ctx, 31, 0x315EB8u);
    ctx->pc = 0x315EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315EB0u;
    // 0x315eb4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EC90u, 0x315EB0u, 0x315EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315EB8u;
label_315eb8:
    // 0x315eb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x315eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315ebc: 0xc059590  jal         func_165640
    ctx->pc = 0x315EBCu;
    SET_GPR_U32(ctx, 31, 0x315EC4u);
    ctx->pc = 0x315EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315EBCu;
    // 0x315ec0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x315EBCu, 0x315EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315EC4u;
label_315ec4:
    // 0x315ec4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x315ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_315ec8:
    // 0x315ec8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x315ec8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x315ecc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x315eccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x315ed0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x315ed0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x315ed4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315ed8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x315ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x315edc: 0x3e00008  jr          $ra
    ctx->pc = 0x315EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315EDCu;
        // 0x315ee0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315EE4u;
    // 0x315ee4: 0x0  nop
    ctx->pc = 0x315ee4u;
    // NOP
    ctx->pc = 0x315ee8u;
}
