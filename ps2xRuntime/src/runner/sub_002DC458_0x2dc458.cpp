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

// Function: sub_002DC458
// Address: 0x2dc458 - 0x2dc4f8
void sub_002DC458_0x2dc458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC458_0x2dc458");
#endif

    switch (ctx->pc) {
        case 0x2dc48cu: goto label_2dc48c;
        case 0x2dc494u: goto label_2dc494;
        case 0x2dc4a4u: goto label_2dc4a4;
        case 0x2dc4acu: goto label_2dc4ac;
        case 0x2dc4ccu: goto label_2dc4cc;
        case 0x2dc4d8u: goto label_2dc4d8;
        default: break;
    }

    ctx->pc = 0x2dc458u;

    // 0x2dc458: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2dc458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2dc45c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2dc45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2dc460: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2dc460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2dc464: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dc464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc468: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2dc468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2dc46c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2dc46cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc470: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2dc470u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2dc474: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2dc474u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc478: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2dc478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2dc47c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2dc47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2dc480: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dc480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dc484: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2DC484u;
    SET_GPR_U32(ctx, 31, 0x2DC48Cu);
    ctx->pc = 0x2DC488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC484u;
    // 0x2dc488: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2DC484u, 0x2DC48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC48Cu;
label_2dc48c:
    // 0x2dc48c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2DC48Cu;
    SET_GPR_U32(ctx, 31, 0x2DC494u);
    ctx->pc = 0x2DC490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC48Cu;
    // 0x2dc490: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2DC48Cu, 0x2DC494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC494u;
label_2dc494:
    // 0x2dc494: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DC494u;
    {
        const bool branch_taken_0x2dc494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC494u;
        // 0x2dc498: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc494) {
            ctx->pc = 0x2DC4DCu;
            goto label_2dc4dc;
        }
    }
    ctx->pc = 0x2DC49Cu;
    // 0x2dc49c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2DC49Cu;
    SET_GPR_U32(ctx, 31, 0x2DC4A4u);
    ctx->pc = 0x2DC4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC49Cu;
    // 0x2dc4a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2DC49Cu, 0x2DC4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC4A4u;
label_2dc4a4:
    // 0x2dc4a4: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2DC4A4u;
    SET_GPR_U32(ctx, 31, 0x2DC4ACu);
    ctx->pc = 0x2DC4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC4A4u;
    // 0x2dc4a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2DC4A4u, 0x2DC4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC4ACu;
label_2dc4ac:
    // 0x2dc4ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dc4acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc4b0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DC4B0u;
    {
        const bool branch_taken_0x2dc4b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC4B0u;
        // 0x2dc4b4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc4b0) {
            ctx->pc = 0x2DC4CCu;
            goto label_2dc4cc;
        }
    }
    ctx->pc = 0x2DC4B8u;
    // 0x2dc4b8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2dc4b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc4bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2dc4bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2dc4c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dc4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc4c4: 0xc0b713e  jal         func_2DC4F8
    ctx->pc = 0x2DC4C4u;
    SET_GPR_U32(ctx, 31, 0x2DC4CCu);
    ctx->pc = 0x2DC4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC4C4u;
    // 0x2dc4c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC4F8u, 0x2DC4C4u, 0x2DC4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC4CCu;
label_2dc4cc:
    // 0x2dc4cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dc4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc4d0: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2DC4D0u;
    SET_GPR_U32(ctx, 31, 0x2DC4D8u);
    ctx->pc = 0x2DC4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC4D0u;
    // 0x2dc4d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2DC4D0u, 0x2DC4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC4D8u;
label_2dc4d8:
    // 0x2dc4d8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2dc4d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2dc4dc:
    // 0x2dc4dc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2dc4dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dc4e0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2dc4e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dc4e4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2dc4e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc4e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dc4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc4ec: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2dc4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dc4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC4F0u;
        // 0x2dc4f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC4F8u;
}
