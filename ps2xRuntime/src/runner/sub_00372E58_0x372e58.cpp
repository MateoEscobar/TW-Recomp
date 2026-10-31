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

// Function: sub_00372E58
// Address: 0x372e58 - 0x372f20
void sub_00372E58_0x372e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372E58_0x372e58");
#endif

    switch (ctx->pc) {
        case 0x372e88u: goto label_372e88;
        case 0x372e90u: goto label_372e90;
        case 0x372ea8u: goto label_372ea8;
        case 0x372eb0u: goto label_372eb0;
        case 0x372ec4u: goto label_372ec4;
        case 0x372eccu: goto label_372ecc;
        case 0x372ee0u: goto label_372ee0;
        case 0x372ee8u: goto label_372ee8;
        case 0x372efcu: goto label_372efc;
        default: break;
    }

    ctx->pc = 0x372e58u;

    // 0x372e58: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x372e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x372e5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x372e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372e60: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x372e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x372e64: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x372e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x372e68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x372e68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372e6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x372e6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372e70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x372e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x372e74: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x372e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x372e78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x372e78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372e7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x372e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x372e80: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372E80u;
    SET_GPR_U32(ctx, 31, 0x372E88u);
    ctx->pc = 0x372E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372E80u;
    // 0x372e84: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372E80u, 0x372E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372E88u;
label_372e88:
    // 0x372e88: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x372E88u;
    SET_GPR_U32(ctx, 31, 0x372E90u);
    ctx->pc = 0x372E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372E88u;
    // 0x372e8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x372E88u, 0x372E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372E90u;
label_372e90:
    // 0x372e90: 0x29600  sll         $s2, $v0, 24
    ctx->pc = 0x372e90u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x372e94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x372e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372e98: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x372e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x372e9c: 0x129603  sra         $s2, $s2, 24
    ctx->pc = 0x372e9cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 24));
    // 0x372ea0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372EA0u;
    SET_GPR_U32(ctx, 31, 0x372EA8u);
    ctx->pc = 0x372EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372EA0u;
    // 0x372ea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372EA0u, 0x372EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372EA8u;
label_372ea8:
    // 0x372ea8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x372EA8u;
    SET_GPR_U32(ctx, 31, 0x372EB0u);
    ctx->pc = 0x372EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372EA8u;
    // 0x372eac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x372EA8u, 0x372EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372EB0u;
label_372eb0:
    // 0x372eb0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x372eb0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x372eb4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x372eb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372eb8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x372eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x372ebc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372EBCu;
    SET_GPR_U32(ctx, 31, 0x372EC4u);
    ctx->pc = 0x372EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372EBCu;
    // 0x372ec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372EBCu, 0x372EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372EC4u;
label_372ec4:
    // 0x372ec4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x372EC4u;
    SET_GPR_U32(ctx, 31, 0x372ECCu);
    ctx->pc = 0x372EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372EC4u;
    // 0x372ec8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x372EC4u, 0x372ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372ECCu;
label_372ecc:
    // 0x372ecc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x372eccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372ed0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x372ed0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372ed4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x372ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372ed8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372ED8u;
    SET_GPR_U32(ctx, 31, 0x372EE0u);
    ctx->pc = 0x372EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372ED8u;
    // 0x372edc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372ED8u, 0x372EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372EE0u;
label_372ee0:
    // 0x372ee0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x372EE0u;
    SET_GPR_U32(ctx, 31, 0x372EE8u);
    ctx->pc = 0x372EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372EE0u;
    // 0x372ee4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x372EE0u, 0x372EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372EE8u;
label_372ee8:
    // 0x372ee8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x372ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372eec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x372eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372ef0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x372ef0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x372ef4: 0xc04500a  jal         func_114028
    ctx->pc = 0x372EF4u;
    SET_GPR_U32(ctx, 31, 0x372EFCu);
    ctx->pc = 0x372EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372EF4u;
    // 0x372ef8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114028u, 0x372EF4u, 0x372EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372EFCu;
label_372efc:
    // 0x372efc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x372efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x372f00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x372f00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372f04: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x372f04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x372f08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x372f08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x372f0c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x372f0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x372f10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x372f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372f14: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x372f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x372f18: 0x3e00008  jr          $ra
    ctx->pc = 0x372F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372F18u;
        // 0x372f1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372F20u;
}
