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

// Function: sub_002BE590
// Address: 0x2be590 - 0x2be640
void sub_002BE590_0x2be590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE590_0x2be590");
#endif

    switch (ctx->pc) {
        case 0x2be5b8u: goto label_2be5b8;
        case 0x2be5c0u: goto label_2be5c0;
        case 0x2be5d0u: goto label_2be5d0;
        case 0x2be5fcu: goto label_2be5fc;
        case 0x2be618u: goto label_2be618;
        case 0x2be624u: goto label_2be624;
        default: break;
    }

    ctx->pc = 0x2be590u;

    // 0x2be590: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2be590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2be594: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2be594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2be598: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2be598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2be59c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2be59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2be5a0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2be5a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2be5a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2be5a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be5a8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2be5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2be5ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2be5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2be5b0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2BE5B0u;
    SET_GPR_U32(ctx, 31, 0x2BE5B8u);
    ctx->pc = 0x2BE5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE5B0u;
    // 0x2be5b4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2BE5B0u, 0x2BE5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE5B8u;
label_2be5b8:
    // 0x2be5b8: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2BE5B8u;
    SET_GPR_U32(ctx, 31, 0x2BE5C0u);
    ctx->pc = 0x2BE5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE5B8u;
    // 0x2be5bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2BE5B8u, 0x2BE5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE5C0u;
label_2be5c0:
    // 0x2be5c0: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2BE5C0u;
    {
        const bool branch_taken_0x2be5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be5c0) {
            ctx->pc = 0x2BE5C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE5C0u;
            // 0x2be5c4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE628u;
            goto label_2be628;
        }
    }
    ctx->pc = 0x2BE5C8u;
    // 0x2be5c8: 0xc087502  jal         func_21D408
    ctx->pc = 0x2BE5C8u;
    SET_GPR_U32(ctx, 31, 0x2BE5D0u);
    ctx->pc = 0x2BE5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE5C8u;
    // 0x2be5cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2BE5C8u, 0x2BE5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE5D0u;
label_2be5d0:
    // 0x2be5d0: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2be5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2be5d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2be5d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be5d8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2be5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be5dc: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2be5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be5e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2be5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2be5e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2be5e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2be5e8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2be5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2be5ec: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2be5ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2be5f0: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x2be5f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2be5f4: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2BE5F4u;
    SET_GPR_U32(ctx, 31, 0x2BE5FCu);
    ctx->pc = 0x2BE5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE5F4u;
    // 0x2be5f8: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2BE5F4u, 0x2BE5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE5FCu;
label_2be5fc:
    // 0x2be5fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2be5fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be600: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BE600u;
    {
        const bool branch_taken_0x2be600 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE600u;
        // 0x2be604: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be600) {
            ctx->pc = 0x2BE618u;
            goto label_2be618;
        }
    }
    ctx->pc = 0x2BE608u;
    // 0x2be608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2be608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be60c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2be60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be610: 0xc0af990  jal         func_2BE640
    ctx->pc = 0x2BE610u;
    SET_GPR_U32(ctx, 31, 0x2BE618u);
    ctx->pc = 0x2BE614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE610u;
    // 0x2be614: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE640u, 0x2BE610u, 0x2BE618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE618u;
label_2be618:
    // 0x2be618: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be61c: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2BE61Cu;
    SET_GPR_U32(ctx, 31, 0x2BE624u);
    ctx->pc = 0x2BE620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE61Cu;
    // 0x2be620: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2BE61Cu, 0x2BE624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE624u;
label_2be624:
    // 0x2be624: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2be624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2be628:
    // 0x2be628: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2be628u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2be62c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2be62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2be630: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2be630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2be634: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE634u;
        // 0x2be638: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE63Cu;
    // 0x2be63c: 0x0  nop
    ctx->pc = 0x2be63cu;
    // NOP
    ctx->pc = 0x2be640u;
}
