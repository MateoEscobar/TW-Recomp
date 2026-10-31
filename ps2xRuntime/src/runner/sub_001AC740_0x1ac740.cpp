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

// Function: sub_001AC740
// Address: 0x1ac740 - 0x1ac7d0
void sub_001AC740_0x1ac740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC740_0x1ac740");
#endif

    switch (ctx->pc) {
        case 0x1ac740u: goto label_1ac740;
        case 0x1ac744u: goto label_1ac744;
        case 0x1ac748u: goto label_1ac748;
        case 0x1ac74cu: goto label_1ac74c;
        case 0x1ac750u: goto label_1ac750;
        case 0x1ac754u: goto label_1ac754;
        case 0x1ac758u: goto label_1ac758;
        case 0x1ac75cu: goto label_1ac75c;
        case 0x1ac760u: goto label_1ac760;
        case 0x1ac764u: goto label_1ac764;
        case 0x1ac768u: goto label_1ac768;
        case 0x1ac76cu: goto label_1ac76c;
        case 0x1ac770u: goto label_1ac770;
        case 0x1ac774u: goto label_1ac774;
        case 0x1ac778u: goto label_1ac778;
        case 0x1ac77cu: goto label_1ac77c;
        case 0x1ac780u: goto label_1ac780;
        case 0x1ac784u: goto label_1ac784;
        case 0x1ac788u: goto label_1ac788;
        case 0x1ac78cu: goto label_1ac78c;
        case 0x1ac790u: goto label_1ac790;
        case 0x1ac794u: goto label_1ac794;
        case 0x1ac798u: goto label_1ac798;
        case 0x1ac79cu: goto label_1ac79c;
        case 0x1ac7a0u: goto label_1ac7a0;
        case 0x1ac7a4u: goto label_1ac7a4;
        case 0x1ac7a8u: goto label_1ac7a8;
        case 0x1ac7acu: goto label_1ac7ac;
        case 0x1ac7b0u: goto label_1ac7b0;
        case 0x1ac7b4u: goto label_1ac7b4;
        case 0x1ac7b8u: goto label_1ac7b8;
        case 0x1ac7bcu: goto label_1ac7bc;
        case 0x1ac7c0u: goto label_1ac7c0;
        case 0x1ac7c4u: goto label_1ac7c4;
        case 0x1ac7c8u: goto label_1ac7c8;
        case 0x1ac7ccu: goto label_1ac7cc;
        default: break;
    }

    ctx->pc = 0x1ac740u;

label_1ac740:
    // 0x1ac740: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ac740u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ac744:
    // 0x1ac744: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ac744u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ac748:
    // 0x1ac748: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ac748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1ac74c:
    // 0x1ac74c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1ac74cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ac750:
    // 0x1ac750: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ac750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1ac754:
    // 0x1ac754: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1ac754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1ac758:
    // 0x1ac758: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ac758u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac75c:
    // 0x1ac75c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1ac760:
    if (ctx->pc == 0x1AC760u) {
        ctx->pc = 0x1AC760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC75Cu;
        // 0x1ac760: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC764u;
        goto label_1ac764;
    }
    ctx->pc = 0x1AC75Cu;
    {
        const bool branch_taken_0x1ac75c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AC760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC75Cu;
        // 0x1ac760: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac75c) {
            ctx->pc = 0x1AC774u;
            goto label_1ac774;
        }
    }
    ctx->pc = 0x1AC764u;
label_1ac764:
    // 0x1ac764: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ac764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ac768:
    // 0x1ac768: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ac768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ac76c:
    // 0x1ac76c: 0x0  nop
    ctx->pc = 0x1ac76cu;
    // NOP
label_1ac770:
    // 0x1ac770: 0x46006029  min.s       $f0, $f12, $f0
    ctx->pc = 0x1ac770u;
    ctx->f[0] = std::min(ctx->f[12], ctx->f[0]);
label_1ac774:
    // 0x1ac774: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x1ac774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
label_1ac778:
    // 0x1ac778: 0x26220080  addiu       $v0, $s1, 0x80
    ctx->pc = 0x1ac778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_1ac77c:
    // 0x1ac77c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1ac77cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ac780:
    // 0x1ac780: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1ac780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1ac784:
    // 0x1ac784: 0x1203000c  beq         $s0, $v1, . + 4 + (0xC << 2)
label_1ac788:
    if (ctx->pc == 0x1AC788u) {
        ctx->pc = 0x1AC788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC784u;
        // 0x1ac788: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC78Cu;
        goto label_1ac78c;
    }
    ctx->pc = 0x1AC784u;
    {
        const bool branch_taken_0x1ac784 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AC788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC784u;
        // 0x1ac788: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac784) {
            ctx->pc = 0x1AC7B8u;
            goto label_1ac7b8;
        }
    }
    ctx->pc = 0x1AC78Cu;
label_1ac78c:
    // 0x1ac78c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1ac78cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ac790:
    // 0x1ac790: 0xc62c0050  lwc1        $f12, 0x50($s1)
    ctx->pc = 0x1ac790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ac794:
    // 0x1ac794: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1ac794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1ac798:
    // 0x1ac798: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ac798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ac79c:
    // 0x1ac79c: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x1ac79cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1ac7a0:
    // 0x1ac7a0: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x1ac7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1ac7a4:
    // 0x1ac7a4: 0x60f809  jalr        $v1
label_1ac7a8:
    if (ctx->pc == 0x1AC7A8u) {
        ctx->pc = 0x1AC7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7A4u;
        // 0x1ac7a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC7ACu;
        goto label_1ac7ac;
    }
    ctx->pc = 0x1AC7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AC7ACu);
        ctx->pc = 0x1AC7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7A4u;
        // 0x1ac7a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC7A4u, 0x1AC7ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC7ACu;
label_1ac7ac:
    // 0x1ac7ac: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1ac7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1ac7b0:
    // 0x1ac7b0: 0x5602fff7  bnel        $s0, $v0, . + 4 + (-0x9 << 2)
label_1ac7b4:
    if (ctx->pc == 0x1AC7B4u) {
        ctx->pc = 0x1AC7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7B0u;
        // 0x1ac7b4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC7B8u;
        goto label_1ac7b8;
    }
    ctx->pc = 0x1AC7B0u;
    {
        const bool branch_taken_0x1ac7b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ac7b0) {
            ctx->pc = 0x1AC7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC7B0u;
            // 0x1ac7b4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac790;
        }
    }
    ctx->pc = 0x1AC7B8u;
label_1ac7b8:
    // 0x1ac7b8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ac7b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ac7bc:
    // 0x1ac7bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ac7bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ac7c0:
    // 0x1ac7c0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ac7c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac7c4:
    // 0x1ac7c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ac7c8:
    // 0x1ac7c8: 0x3e00008  jr          $ra
label_1ac7cc:
    if (ctx->pc == 0x1AC7CCu) {
        ctx->pc = 0x1AC7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7C8u;
        // 0x1ac7cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC7D0u;
        goto label_fallthrough_0x1ac7c8;
    }
    ctx->pc = 0x1AC7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC7C8u;
        // 0x1ac7cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ac7c8:
    ctx->pc = 0x1AC7D0u;
}
