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

// Function: sub_002E1760
// Address: 0x2e1760 - 0x2e1850
void sub_002E1760_0x2e1760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1760_0x2e1760");
#endif

    switch (ctx->pc) {
        case 0x2e17bcu: goto label_2e17bc;
        case 0x2e17c4u: goto label_2e17c4;
        case 0x2e17d4u: goto label_2e17d4;
        case 0x2e17dcu: goto label_2e17dc;
        case 0x2e1810u: goto label_2e1810;
        case 0x2e181cu: goto label_2e181c;
        default: break;
    }

    ctx->pc = 0x2e1760u;

    // 0x2e1760: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2e1760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2e1764: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e1764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e1768: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2e1768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2e176c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e176cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1770: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e1770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e1774: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e1774u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1778: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2e1778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2e177c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2e177cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1780: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2e1780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2e1784: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2e1784u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1788: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x2e1788u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2e178c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2e178cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1790: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x2e1790u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2e1794: 0x46007dc6  mov.s       $f23, $f15
    ctx->pc = 0x2e1794u;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
    // 0x2e1798: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x2e1798u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2e179c: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x2e179cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x2e17a0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2e17a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2e17a4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2e17a4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2e17a8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2e17a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2e17ac: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2e17acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2e17b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e17b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e17b4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2E17B4u;
    SET_GPR_U32(ctx, 31, 0x2E17BCu);
    ctx->pc = 0x2E17B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E17B4u;
    // 0x2e17b8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2E17B4u, 0x2E17BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E17BCu;
label_2e17bc:
    // 0x2e17bc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2E17BCu;
    SET_GPR_U32(ctx, 31, 0x2E17C4u);
    ctx->pc = 0x2E17C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E17BCu;
    // 0x2e17c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2E17BCu, 0x2E17C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E17C4u;
label_2e17c4:
    // 0x2e17c4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E17C4u;
    {
        const bool branch_taken_0x2e17c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E17C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E17C4u;
        // 0x2e17c8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e17c4) {
            ctx->pc = 0x2E1820u;
            goto label_2e1820;
        }
    }
    ctx->pc = 0x2E17CCu;
    // 0x2e17cc: 0xc087502  jal         func_21D408
    ctx->pc = 0x2E17CCu;
    SET_GPR_U32(ctx, 31, 0x2E17D4u);
    ctx->pc = 0x2E17D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E17CCu;
    // 0x2e17d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2E17CCu, 0x2E17D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E17D4u;
label_2e17d4:
    // 0x2e17d4: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2E17D4u;
    SET_GPR_U32(ctx, 31, 0x2E17DCu);
    ctx->pc = 0x2E17D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E17D4u;
    // 0x2e17d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2E17D4u, 0x2E17DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E17DCu;
label_2e17dc:
    // 0x2e17dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e17dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e17e0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E17E0u;
    {
        const bool branch_taken_0x2e17e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E17E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E17E0u;
        // 0x2e17e4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e17e0) {
            ctx->pc = 0x2E1810u;
            goto label_2e1810;
        }
    }
    ctx->pc = 0x2E17E8u;
    // 0x2e17e8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2e17e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e17ec: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2e17ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e17f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e17f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e17f4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2e17f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2e17f8: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x2e17f8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x2e17fc: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x2e17fcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x2e1800: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2e1800u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e1804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1808: 0xc0b8614  jal         func_2E1850
    ctx->pc = 0x2E1808u;
    SET_GPR_U32(ctx, 31, 0x2E1810u);
    ctx->pc = 0x2E180Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1808u;
    // 0x2e180c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1850u, 0x2E1808u, 0x2E1810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1810u;
label_2e1810:
    // 0x2e1810: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e1810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1814: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2E1814u;
    SET_GPR_U32(ctx, 31, 0x2E181Cu);
    ctx->pc = 0x2E1818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1814u;
    // 0x2e1818: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2E1814u, 0x2E181Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E181Cu;
label_2e181c:
    // 0x2e181c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2e181cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2e1820:
    // 0x2e1820: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2e1820u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e1824: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2e1824u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e1828: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e1828u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e182c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2e182cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e1830: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2e1830u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1834: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e1834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1838: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x2e1838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2e183c: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x2e183cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e1840: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x2e1840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e1844: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2e1844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e1848: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1848u;
        // 0x2e184c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1850u;
}
