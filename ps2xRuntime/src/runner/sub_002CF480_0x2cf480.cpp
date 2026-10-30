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

// Function: sub_002CF480
// Address: 0x2cf480 - 0x2cf530
void sub_002CF480_0x2cf480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF480_0x2cf480");
#endif

    switch (ctx->pc) {
        case 0x2cf4bcu: goto label_2cf4bc;
        case 0x2cf4c4u: goto label_2cf4c4;
        case 0x2cf4d4u: goto label_2cf4d4;
        case 0x2cf4dcu: goto label_2cf4dc;
        case 0x2cf500u: goto label_2cf500;
        case 0x2cf50cu: goto label_2cf50c;
        default: break;
    }

    ctx->pc = 0x2cf480u;

    // 0x2cf480: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2cf480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2cf484: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2cf484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2cf488: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2cf488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2cf48c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cf48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf490: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cf490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2cf494: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2cf494u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf498: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2cf498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2cf49c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2cf49cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf4a0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2cf4a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2cf4a4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2cf4a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf4a8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2cf4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2cf4ac: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2cf4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2cf4b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cf4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cf4b4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2CF4B4u;
    SET_GPR_U32(ctx, 31, 0x2CF4BCu);
    ctx->pc = 0x2CF4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF4B4u;
    // 0x2cf4b8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2CF4B4u, 0x2CF4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF4BCu;
label_2cf4bc:
    // 0x2cf4bc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2CF4BCu;
    SET_GPR_U32(ctx, 31, 0x2CF4C4u);
    ctx->pc = 0x2CF4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF4BCu;
    // 0x2cf4c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2CF4BCu, 0x2CF4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF4C4u;
label_2cf4c4:
    // 0x2cf4c4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CF4C4u;
    {
        const bool branch_taken_0x2cf4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF4C4u;
        // 0x2cf4c8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf4c4) {
            ctx->pc = 0x2CF510u;
            goto label_2cf510;
        }
    }
    ctx->pc = 0x2CF4CCu;
    // 0x2cf4cc: 0xc087502  jal         func_21D408
    ctx->pc = 0x2CF4CCu;
    SET_GPR_U32(ctx, 31, 0x2CF4D4u);
    ctx->pc = 0x2CF4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF4CCu;
    // 0x2cf4d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2CF4CCu, 0x2CF4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF4D4u;
label_2cf4d4:
    // 0x2cf4d4: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2CF4D4u;
    SET_GPR_U32(ctx, 31, 0x2CF4DCu);
    ctx->pc = 0x2CF4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF4D4u;
    // 0x2cf4d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2CF4D4u, 0x2CF4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF4DCu;
label_2cf4dc:
    // 0x2cf4dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cf4dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf4e0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CF4E0u;
    {
        const bool branch_taken_0x2cf4e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF4E0u;
        // 0x2cf4e4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf4e0) {
            ctx->pc = 0x2CF500u;
            goto label_2cf500;
        }
    }
    ctx->pc = 0x2CF4E8u;
    // 0x2cf4e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2cf4e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2cf4ec: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2cf4ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf4f0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2cf4f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf4f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cf4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf4f8: 0xc0b3d4c  jal         func_2CF530
    ctx->pc = 0x2CF4F8u;
    SET_GPR_U32(ctx, 31, 0x2CF500u);
    ctx->pc = 0x2CF4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF4F8u;
    // 0x2cf4fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF530u, 0x2CF4F8u, 0x2CF500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF500u;
label_2cf500:
    // 0x2cf500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cf500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf504: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2CF504u;
    SET_GPR_U32(ctx, 31, 0x2CF50Cu);
    ctx->pc = 0x2CF508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF504u;
    // 0x2cf508: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2CF504u, 0x2CF50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF50Cu;
label_2cf50c:
    // 0x2cf50c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2cf50cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2cf510:
    // 0x2cf510: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2cf510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cf514: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2cf514u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cf518: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cf518u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cf51c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2cf51cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf520: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cf520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf524: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2cf524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cf528: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF528u;
        // 0x2cf52c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF530u;
}
