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

// Function: sub_001A2918
// Address: 0x1a2918 - 0x1a29c0
void sub_001A2918_0x1a2918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2918_0x1a2918");
#endif

    switch (ctx->pc) {
        case 0x1a2954u: goto label_1a2954;
        case 0x1a29a0u: goto label_1a29a0;
        default: break;
    }

    ctx->pc = 0x1a2918u;

    // 0x1a2918: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a2918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a291c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a291cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2920: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a2920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a2924: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a2924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1a2928: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a2928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a292c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a292cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2930: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a2930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a2934: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a2934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a2938: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1a2938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1a293c: 0x14a2001a  bne         $a1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A293Cu;
    {
        const bool branch_taken_0x1a293c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A2940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A293Cu;
        // 0x1a2940: 0xae2500c4  sw          $a1, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a293c) {
            ctx->pc = 0x1A29A8u;
            goto label_1a29a8;
        }
    }
    ctx->pc = 0x1A2944u;
    // 0x1a2944: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1a2944u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1a2948: 0x962500ca  lhu         $a1, 0xCA($s1)
    ctx->pc = 0x1a2948u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 202)));
    // 0x1a294c: 0xc060a30  jal         func_1828C0
    ctx->pc = 0x1A294Cu;
    SET_GPR_U32(ctx, 31, 0x1A2954u);
    ctx->pc = 0x1A2950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A294Cu;
    // 0x1a2950: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1828C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1828C0u, 0x1A294Cu, 0x1A2954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2954u;
label_1a2954:
    // 0x1a2954: 0x922400f9  lbu         $a0, 0xF9($s1)
    ctx->pc = 0x1a2954u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 249)));
    // 0x1a2958: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1a2958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a295c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a295cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a2960: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2964: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x1a2964u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2968: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1a2968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1a296c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a296cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2970: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1a2970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1a2974: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a2974u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2978: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a2978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1a297c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a297cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2980: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1a2980u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1a2984: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1a2984u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2988: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1a2988u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1a298c: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x1a298cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    // 0x1a2990: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1a2990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a2994: 0x8e2900fc  lw          $t1, 0xFC($s1)
    ctx->pc = 0x1a2994u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x1a2998: 0xc062bb0  jal         func_18AEC0
    ctx->pc = 0x1A2998u;
    SET_GPR_U32(ctx, 31, 0x1A29A0u);
    ctx->pc = 0x1A299Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2998u;
    // 0x1a299c: 0xc62c00e4  lwc1        $f12, 0xE4($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x1A2998u, 0x1A29A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A29A0u;
label_1a29a0:
    // 0x1a29a0: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x1a29a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
    // 0x1a29a4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1a29a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1a29a8:
    // 0x1a29a8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a29a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a29ac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a29acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a29b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a29b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a29b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A29B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A29B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29B4u;
        // 0x1a29b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A29B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A29BCu;
    // 0x1a29bc: 0x0  nop
    ctx->pc = 0x1a29bcu;
    // NOP
    ctx->pc = 0x1a29c0u;
}
