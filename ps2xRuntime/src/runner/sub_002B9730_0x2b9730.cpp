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

// Function: sub_002B9730
// Address: 0x2b9730 - 0x2b97c0
void sub_002B9730_0x2b9730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9730_0x2b9730");
#endif

    switch (ctx->pc) {
        case 0x2b9758u: goto label_2b9758;
        case 0x2b9768u: goto label_2b9768;
        case 0x2b9770u: goto label_2b9770;
        case 0x2b978cu: goto label_2b978c;
        default: break;
    }

    ctx->pc = 0x2b9730u;

    // 0x2b9730: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b9730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b9734: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b9734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2b9738: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b9738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b973c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b973cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9740: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2b9740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2b9744: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b9744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9748: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b9748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b974c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2b974cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9750: 0xc08a096  jal         func_228258
    ctx->pc = 0x2B9750u;
    SET_GPR_U32(ctx, 31, 0x2B9758u);
    ctx->pc = 0x2B9754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9750u;
    // 0x2b9754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x2B9750u, 0x2B9758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9758u;
label_2b9758:
    // 0x2b9758: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B9758u;
    {
        const bool branch_taken_0x2b9758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9758u;
        // 0x2b975c: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9758) {
            ctx->pc = 0x2B97A0u;
            goto label_2b97a0;
        }
    }
    ctx->pc = 0x2B9760u;
    // 0x2b9760: 0xc0e40a2  jal         func_390288
    ctx->pc = 0x2B9760u;
    SET_GPR_U32(ctx, 31, 0x2B9768u);
    ctx->pc = 0x2B9764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9760u;
    // 0x2b9764: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2B9760u, 0x2B9768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9768u;
label_2b9768:
    // 0x2b9768: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x2B9768u;
    SET_GPR_U32(ctx, 31, 0x2B9770u);
    ctx->pc = 0x2B976Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9768u;
    // 0x2b976c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2B9768u, 0x2B9770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9770u;
label_2b9770:
    // 0x2b9770: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x2b9770u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x2b9774: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2b9774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2b9778: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x2b9778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
    // 0x2b977c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b977cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9780: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2b9780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2b9784: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2B9784u;
    SET_GPR_U32(ctx, 31, 0x2B978Cu);
    ctx->pc = 0x2B9788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9784u;
    // 0x2b9788: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2B9784u, 0x2B978Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B978Cu;
label_2b978c:
    // 0x2b978c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x2b978cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9790: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b9790u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b9794: 0x0  nop
    ctx->pc = 0x2b9794u;
    // NOP
    // 0x2b9798: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2B9798u;
    {
        const bool branch_taken_0x2b9798 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9798u;
        // 0x2b979c: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9798) {
            ctx->pc = 0x2B97A8u;
            goto label_2b97a8;
        }
    }
    ctx->pc = 0x2B97A0u;
label_2b97a0:
    // 0x2b97a0: 0x8c4319e8  lw          $v1, 0x19E8($v0)
    ctx->pc = 0x2b97a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6632)));
    // 0x2b97a4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2b97a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2b97a8:
    // 0x2b97a8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b97a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b97ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b97acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b97b0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2b97b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b97b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b97b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b97b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B97B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B97BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B97B8u;
        // 0x2b97bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B97B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B97C0u;
}
