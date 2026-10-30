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

// Function: sub_00113000
// Address: 0x113000 - 0x1130c8
void sub_00113000_0x113000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113000_0x113000");
#endif

    switch (ctx->pc) {
        case 0x113000u: goto label_113000;
        case 0x113004u: goto label_113004;
        case 0x113008u: goto label_113008;
        case 0x11300cu: goto label_11300c;
        case 0x113010u: goto label_113010;
        case 0x113014u: goto label_113014;
        case 0x113018u: goto label_113018;
        case 0x11301cu: goto label_11301c;
        case 0x113020u: goto label_113020;
        case 0x113024u: goto label_113024;
        case 0x113028u: goto label_113028;
        case 0x11302cu: goto label_11302c;
        case 0x113030u: goto label_113030;
        case 0x113034u: goto label_113034;
        case 0x113038u: goto label_113038;
        case 0x11303cu: goto label_11303c;
        case 0x113040u: goto label_113040;
        case 0x113044u: goto label_113044;
        case 0x113048u: goto label_113048;
        case 0x11304cu: goto label_11304c;
        case 0x113050u: goto label_113050;
        case 0x113054u: goto label_113054;
        case 0x113058u: goto label_113058;
        case 0x11305cu: goto label_11305c;
        case 0x113060u: goto label_113060;
        case 0x113064u: goto label_113064;
        case 0x113068u: goto label_113068;
        case 0x11306cu: goto label_11306c;
        case 0x113070u: goto label_113070;
        case 0x113074u: goto label_113074;
        case 0x113078u: goto label_113078;
        case 0x11307cu: goto label_11307c;
        case 0x113080u: goto label_113080;
        case 0x113084u: goto label_113084;
        case 0x113088u: goto label_113088;
        case 0x11308cu: goto label_11308c;
        case 0x113090u: goto label_113090;
        case 0x113094u: goto label_113094;
        case 0x113098u: goto label_113098;
        case 0x11309cu: goto label_11309c;
        case 0x1130a0u: goto label_1130a0;
        case 0x1130a4u: goto label_1130a4;
        case 0x1130a8u: goto label_1130a8;
        case 0x1130acu: goto label_1130ac;
        case 0x1130b0u: goto label_1130b0;
        case 0x1130b4u: goto label_1130b4;
        case 0x1130b8u: goto label_1130b8;
        case 0x1130bcu: goto label_1130bc;
        case 0x1130c0u: goto label_1130c0;
        case 0x1130c4u: goto label_1130c4;
        default: break;
    }

    ctx->pc = 0x113000u;

label_113000:
    // 0x113000: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x113000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_113004:
    // 0x113004: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x113004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_113008:
    // 0x113008: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x113008u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_11300c:
    // 0x11300c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x11300cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_113010:
    // 0x113010: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x113010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_113014:
    // 0x113014: 0x58600  sll         $s0, $a1, 24
    ctx->pc = 0x113014u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_113018:
    // 0x113018: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x113018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_11301c:
    // 0x11301c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x11301cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_113020:
    // 0x113020: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x113020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_113024:
    // 0x113024: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x113024u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_113028:
    // 0x113028: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11302c:
    // 0x11302c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x11302cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_113030:
    // 0x113030: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x113030u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_113034:
    // 0x113034: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x113034u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
label_113038:
    // 0x113038: 0x8e68bce4  lw          $t0, -0x431C($s3)
    ctx->pc = 0x113038u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950116)));
label_11303c:
    // 0x11303c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x11303cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_113040:
    // 0x113040: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x113040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_113044:
    // 0x113044: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x113044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_113048:
    // 0x113048: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x113048u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_11304c:
    // 0x11304c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11304cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_113050:
    // 0x113050: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x113050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113054:
    // 0x113054: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x113054u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_113058:
    // 0x113058: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x113058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_11305c:
    // 0x11305c: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x11305cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_113060:
    // 0x113060: 0x60f809  jalr        $v1
label_113064:
    if (ctx->pc == 0x113064u) {
        ctx->pc = 0x113064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113060u;
        // 0x113064: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113068u;
        goto label_113068;
    }
    ctx->pc = 0x113060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x113068u);
        ctx->pc = 0x113064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113060u;
        // 0x113064: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113060u, 0x113068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113068u;
label_113068:
    // 0x113068: 0x8e69bce4  lw          $t1, -0x431C($s3)
    ctx->pc = 0x113068u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950116)));
label_11306c:
    // 0x11306c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11306cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_113070:
    // 0x113070: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x113070u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_113074:
    // 0x113074: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x113074u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_113078:
    // 0x113078: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x113078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_11307c:
    // 0x11307c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11307cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_113080:
    // 0x113080: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x113080u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_113084:
    // 0x113084: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x113084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_113088:
    // 0x113088: 0x846400a0  lh          $a0, 0xA0($v1)
    ctx->pc = 0x113088u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_11308c:
    // 0x11308c: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x11308cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_113090:
    // 0x113090: 0x40f809  jalr        $v0
label_113094:
    if (ctx->pc == 0x113094u) {
        ctx->pc = 0x113094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113090u;
        // 0x113094: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113098u;
        goto label_113098;
    }
    ctx->pc = 0x113090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x113098u);
        ctx->pc = 0x113094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113090u;
        // 0x113094: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113090u, 0x113098u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113098u;
label_113098:
    // 0x113098: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x113098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11309c:
    // 0x11309c: 0xc044c46  jal         func_113118
label_1130a0:
    if (ctx->pc == 0x1130A0u) {
        ctx->pc = 0x1130A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11309Cu;
        // 0x1130a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1130A4u;
        goto label_1130a4;
    }
    ctx->pc = 0x11309Cu;
    SET_GPR_U32(ctx, 31, 0x1130A4u);
    ctx->pc = 0x1130A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11309Cu;
    // 0x1130a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x113118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113118u, 0x11309Cu, 0x1130A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1130A4u;
label_1130a4:
    // 0x1130a4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1130a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1130a8:
    // 0x1130a8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1130a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1130ac:
    // 0x1130ac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1130acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1130b0:
    // 0x1130b0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1130b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1130b4:
    // 0x1130b4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1130b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1130b8:
    // 0x1130b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1130b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1130bc:
    // 0x1130bc: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1130bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1130c0:
    // 0x1130c0: 0x3e00008  jr          $ra
label_1130c4:
    if (ctx->pc == 0x1130C4u) {
        ctx->pc = 0x1130C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130C0u;
        // 0x1130c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1130C8u;
        goto label_fallthrough_0x1130c0;
    }
    ctx->pc = 0x1130C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1130C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130C0u;
        // 0x1130c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1130C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1130c0:
    ctx->pc = 0x1130C8u;
}
