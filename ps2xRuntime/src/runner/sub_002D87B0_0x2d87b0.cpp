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

// Function: sub_002D87B0
// Address: 0x2d87b0 - 0x2d8848
void sub_002D87B0_0x2d87b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D87B0_0x2d87b0");
#endif

    switch (ctx->pc) {
        case 0x2d87dcu: goto label_2d87dc;
        case 0x2d87e4u: goto label_2d87e4;
        case 0x2d87f4u: goto label_2d87f4;
        case 0x2d87fcu: goto label_2d87fc;
        case 0x2d8820u: goto label_2d8820;
        case 0x2d882cu: goto label_2d882c;
        default: break;
    }

    ctx->pc = 0x2d87b0u;

    // 0x2d87b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d87b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d87b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2d87b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2d87b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d87b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d87bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d87bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d87c0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2d87c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2d87c4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d87c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d87c8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2d87c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2d87cc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d87ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2d87d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d87d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d87d4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2D87D4u;
    SET_GPR_U32(ctx, 31, 0x2D87DCu);
    ctx->pc = 0x2D87D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D87D4u;
    // 0x2d87d8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2D87D4u, 0x2D87DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D87DCu;
label_2d87dc:
    // 0x2d87dc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2D87DCu;
    SET_GPR_U32(ctx, 31, 0x2D87E4u);
    ctx->pc = 0x2D87E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D87DCu;
    // 0x2d87e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2D87DCu, 0x2D87E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D87E4u;
label_2d87e4:
    // 0x2d87e4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D87E4u;
    {
        const bool branch_taken_0x2d87e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D87E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D87E4u;
        // 0x2d87e8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d87e4) {
            ctx->pc = 0x2D8830u;
            goto label_2d8830;
        }
    }
    ctx->pc = 0x2D87ECu;
    // 0x2d87ec: 0xc087502  jal         func_21D408
    ctx->pc = 0x2D87ECu;
    SET_GPR_U32(ctx, 31, 0x2D87F4u);
    ctx->pc = 0x2D87F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D87ECu;
    // 0x2d87f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2D87ECu, 0x2D87F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D87F4u;
label_2d87f4:
    // 0x2d87f4: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2D87F4u;
    SET_GPR_U32(ctx, 31, 0x2D87FCu);
    ctx->pc = 0x2D87F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D87F4u;
    // 0x2d87f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2D87F4u, 0x2D87FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D87FCu;
label_2d87fc:
    // 0x2d87fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d87fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8800: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8800u;
    {
        const bool branch_taken_0x2d8800 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8800u;
        // 0x2d8804: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8800) {
            ctx->pc = 0x2D8820u;
            goto label_2d8820;
        }
    }
    ctx->pc = 0x2D8808u;
    // 0x2d8808: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2d8808u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2d880c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d880cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d8810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d8810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8814: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d8814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8818: 0xc0b6212  jal         func_2D8848
    ctx->pc = 0x2D8818u;
    SET_GPR_U32(ctx, 31, 0x2D8820u);
    ctx->pc = 0x2D881Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8818u;
    // 0x2d881c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8848u, 0x2D8818u, 0x2D8820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8820u;
label_2d8820:
    // 0x2d8820: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d8820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8824: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2D8824u;
    SET_GPR_U32(ctx, 31, 0x2D882Cu);
    ctx->pc = 0x2D8828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8824u;
    // 0x2d8828: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2D8824u, 0x2D882Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D882Cu;
label_2d882c:
    // 0x2d882c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2d882cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d8830:
    // 0x2d8830: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d8830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8834: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d8834u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8838: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d8838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d883c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2d883cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d8840: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8840u;
        // 0x2d8844: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8848u;
}
