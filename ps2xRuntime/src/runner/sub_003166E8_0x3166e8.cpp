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

// Function: sub_003166E8
// Address: 0x3166e8 - 0x3167b8
void sub_003166E8_0x3166e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003166E8_0x3166e8");
#endif

    switch (ctx->pc) {
        case 0x316734u: goto label_316734;
        case 0x316748u: goto label_316748;
        case 0x31677cu: goto label_31677c;
        case 0x316788u: goto label_316788;
        default: break;
    }

    ctx->pc = 0x3166e8u;

    // 0x3166e8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3166e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3166ec: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3166ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3166f0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3166f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3166f4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x3166f4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x3166f8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3166f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3166fc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3166fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316700: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x316700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x316704: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x316704u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316708: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x316708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x31670c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x31670cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316710: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x316710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x316714: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x316714u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316718: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x316718u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x31671c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x31671cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316720: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x316720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x316724: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x316724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x316728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x316728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31672c: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x31672Cu;
    SET_GPR_U32(ctx, 31, 0x316734u);
    ctx->pc = 0x316730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31672Cu;
    // 0x316730: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x31672Cu, 0x316734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316734u;
label_316734:
    // 0x316734: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x316734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316738: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x316738u;
    {
        const bool branch_taken_0x316738 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316738u;
        // 0x31673c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316738) {
            ctx->pc = 0x31678Cu;
            goto label_31678c;
        }
    }
    ctx->pc = 0x316740u;
    // 0x316740: 0xc0c1956  jal         func_306558
    ctx->pc = 0x316740u;
    SET_GPR_U32(ctx, 31, 0x316748u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x316740u, 0x316748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316748u;
label_316748:
    // 0x316748: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31674c: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x31674Cu;
    {
        const bool branch_taken_0x31674c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x316750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31674Cu;
        // 0x316750: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31674c) {
            ctx->pc = 0x31677Cu;
            goto label_31677c;
        }
    }
    ctx->pc = 0x316754u;
    // 0x316754: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x316754u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x316758: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x316758u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x31675c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x31675cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316760: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x316760u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316764: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x316764u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316768: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x316768u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31676c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31676cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316770: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x316770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316774: 0xc0c6c9a  jal         func_31B268
    ctx->pc = 0x316774u;
    SET_GPR_U32(ctx, 31, 0x31677Cu);
    ctx->pc = 0x316778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316774u;
    // 0x316778: 0x354affff  ori         $t2, $t2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B268u, 0x316774u, 0x31677Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31677Cu;
label_31677c:
    // 0x31677c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31677cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316780: 0xc059590  jal         func_165640
    ctx->pc = 0x316780u;
    SET_GPR_U32(ctx, 31, 0x316788u);
    ctx->pc = 0x316784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316780u;
    // 0x316784: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x316780u, 0x316788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316788u;
label_316788:
    // 0x316788: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x316788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_31678c:
    // 0x31678c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x31678cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x316790: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x316790u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x316794: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x316794u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x316798: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x316798u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31679c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x31679cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3167a0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3167a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3167a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3167a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3167a8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x3167a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3167ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3167ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3167B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3167ACu;
        // 0x3167b0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3167ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3167B4u;
    // 0x3167b4: 0x0  nop
    ctx->pc = 0x3167b4u;
    // NOP
    ctx->pc = 0x3167b8u;
}
