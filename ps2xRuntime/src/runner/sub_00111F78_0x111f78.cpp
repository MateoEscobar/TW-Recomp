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

// Function: sub_00111F78
// Address: 0x111f78 - 0x1120a0
void sub_00111F78_0x111f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111F78_0x111f78");
#endif

    switch (ctx->pc) {
        case 0x111fbcu: goto label_111fbc;
        case 0x111fd0u: goto label_111fd0;
        case 0x112000u: goto label_112000;
        case 0x112008u: goto label_112008;
        case 0x11201cu: goto label_11201c;
        case 0x112044u: goto label_112044;
        case 0x112050u: goto label_112050;
        case 0x112060u: goto label_112060;
        case 0x112070u: goto label_112070;
        default: break;
    }

    ctx->pc = 0x111f78u;

    // 0x111f78: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x111f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x111f7c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x111f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x111f80: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x111f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x111f84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x111f84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f88: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x111f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x111f8c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x111f8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f90: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x111f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x111f94: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x111f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f98: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x111f98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x111f9c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x111f9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111fa0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x111fa0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x111fa4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x111fa4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x111fa8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x111fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x111fac: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x111facu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x111fb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x111fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x111fb4: 0xc044832  jal         func_1120C8
    ctx->pc = 0x111FB4u;
    SET_GPR_U32(ctx, 31, 0x111FBCu);
    ctx->pc = 0x111FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111FB4u;
    // 0x111fb8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1120C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1120C8u, 0x111FB4u, 0x111FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111FBCu;
label_111fbc:
    // 0x111fbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x111fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111fc0: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x111FC0u;
    {
        const bool branch_taken_0x111fc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x111FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111FC0u;
        // 0x111fc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111fc0) {
            ctx->pc = 0x112078u;
            goto label_112078;
        }
    }
    ctx->pc = 0x111FC8u;
    // 0x111fc8: 0xc044bb8  jal         func_112EE0
    ctx->pc = 0x111FC8u;
    SET_GPR_U32(ctx, 31, 0x111FD0u);
    ctx->pc = 0x111FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111FC8u;
    // 0x111fcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112EE0u, 0x111FC8u, 0x111FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111FD0u;
label_111fd0:
    // 0x111fd0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x111fd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x111fd4: 0xae1200a4  sw          $s2, 0xA4($s0)
    ctx->pc = 0x111fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 18));
    // 0x111fd8: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x111FD8u;
    {
        const bool branch_taken_0x111fd8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x111FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111FD8u;
        // 0x111fdc: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x111fd8) {
            ctx->pc = 0x111FF4u;
            goto label_111ff4;
        }
    }
    ctx->pc = 0x111FE0u;
    // 0x111fe0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x111fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x111fe4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111fe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111fe8: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x111fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x111fec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x111FECu;
    {
        const bool branch_taken_0x111fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111FECu;
        // 0x111ff0: 0xe600006c  swc1        $f0, 0x6C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x111fec) {
            ctx->pc = 0x111FF8u;
            goto label_111ff8;
        }
    }
    ctx->pc = 0x111FF4u;
label_111ff4:
    // 0x111ff4: 0xe615006c  swc1        $f21, 0x6C($s0)
    ctx->pc = 0x111ff4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
label_111ff8:
    // 0x111ff8: 0xc0e4060  jal         func_390180
    ctx->pc = 0x111FF8u;
    SET_GPR_U32(ctx, 31, 0x112000u);
    ctx->pc = 0x111FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111FF8u;
    // 0x111ffc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x111FF8u, 0x112000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112000u;
label_112000:
    // 0x112000: 0xc08a61a  jal         func_229868
    ctx->pc = 0x112000u;
    SET_GPR_U32(ctx, 31, 0x112008u);
    ctx->pc = 0x112004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112000u;
    // 0x112004: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x112000u, 0x112008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112008u;
label_112008:
    // 0x112008: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x112008u;
    {
        const bool branch_taken_0x112008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112008) {
            ctx->pc = 0x11200Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112008u;
            // 0x11200c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112020u;
            goto label_112020;
        }
    }
    ctx->pc = 0x112010u;
    // 0x112010: 0x9045016c  lbu         $a1, 0x16C($v0)
    ctx->pc = 0x112010u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 364)));
    // 0x112014: 0xc046cfe  jal         func_11B3F8
    ctx->pc = 0x112014u;
    SET_GPR_U32(ctx, 31, 0x11201Cu);
    ctx->pc = 0x112018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112014u;
    // 0x112018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B3F8u, 0x112014u, 0x11201Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11201Cu;
label_11201c:
    // 0x11201c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11201cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_112020:
    // 0x112020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112024: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x112024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x112028: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x112028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
    // 0x11202c: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x11202cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x112030: 0x7e0300c0  sq          $v1, 0xC0($s0)
    ctx->pc = 0x112030u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 192), GPR_VEC(ctx, 3));
    // 0x112034: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x112034u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x112038: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x112038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x11203c: 0xc04685c  jal         func_11A170
    ctx->pc = 0x11203Cu;
    SET_GPR_U32(ctx, 31, 0x112044u);
    ctx->pc = 0x112040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11203Cu;
    // 0x112040: 0x7e0200d0  sq          $v0, 0xD0($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 208), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A170u, 0x11203Cu, 0x112044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112044u;
label_112044:
    // 0x112044: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x112044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x112048: 0xc043cbc  jal         func_10F2F0
    ctx->pc = 0x112048u;
    SET_GPR_U32(ctx, 31, 0x112050u);
    ctx->pc = 0x11204Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112048u;
    // 0x11204c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2F0u, 0x112048u, 0x112050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112050u;
label_112050:
    // 0x112050: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112050u;
    {
        const bool branch_taken_0x112050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112050u;
        // 0x112054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112050) {
            ctx->pc = 0x112068u;
            goto label_112068;
        }
    }
    ctx->pc = 0x112058u;
    // 0x112058: 0xc046c4a  jal         func_11B128
    ctx->pc = 0x112058u;
    SET_GPR_U32(ctx, 31, 0x112060u);
    ctx->pc = 0x11205Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112058u;
    // 0x11205c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B128u, 0x112058u, 0x112060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112060u;
label_112060:
    // 0x112060: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x112060u;
    {
        const bool branch_taken_0x112060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112060u;
        // 0x112064: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112060) {
            ctx->pc = 0x112074u;
            goto label_112074;
        }
    }
    ctx->pc = 0x112068u;
label_112068:
    // 0x112068: 0xc046c4a  jal         func_11B128
    ctx->pc = 0x112068u;
    SET_GPR_U32(ctx, 31, 0x112070u);
    ctx->pc = 0x11206Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112068u;
    // 0x11206c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B128u, 0x112068u, 0x112070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112070u;
label_112070:
    // 0x112070: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x112070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_112074:
    // 0x112074: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x112074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_112078:
    // 0x112078: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x112078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11207c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x11207cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x112080: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x112080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x112084: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x112084u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x112088: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x112088u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11208c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11208cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112090: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x112090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x112094: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x112094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x112098: 0x3e00008  jr          $ra
    ctx->pc = 0x112098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112098u;
        // 0x11209c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1120A0u;
}
