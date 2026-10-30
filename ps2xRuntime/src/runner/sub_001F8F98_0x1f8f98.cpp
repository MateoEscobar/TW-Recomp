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

// Function: sub_001F8F98
// Address: 0x1f8f98 - 0x1f9068
void sub_001F8F98_0x1f8f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8F98_0x1f8f98");
#endif

    switch (ctx->pc) {
        case 0x1f8f98u: goto label_1f8f98;
        case 0x1f8f9cu: goto label_1f8f9c;
        case 0x1f8fa0u: goto label_1f8fa0;
        case 0x1f8fa4u: goto label_1f8fa4;
        case 0x1f8fa8u: goto label_1f8fa8;
        case 0x1f8facu: goto label_1f8fac;
        case 0x1f8fb0u: goto label_1f8fb0;
        case 0x1f8fb4u: goto label_1f8fb4;
        case 0x1f8fb8u: goto label_1f8fb8;
        case 0x1f8fbcu: goto label_1f8fbc;
        case 0x1f8fc0u: goto label_1f8fc0;
        case 0x1f8fc4u: goto label_1f8fc4;
        case 0x1f8fc8u: goto label_1f8fc8;
        case 0x1f8fccu: goto label_1f8fcc;
        case 0x1f8fd0u: goto label_1f8fd0;
        case 0x1f8fd4u: goto label_1f8fd4;
        case 0x1f8fd8u: goto label_1f8fd8;
        case 0x1f8fdcu: goto label_1f8fdc;
        case 0x1f8fe0u: goto label_1f8fe0;
        case 0x1f8fe4u: goto label_1f8fe4;
        case 0x1f8fe8u: goto label_1f8fe8;
        case 0x1f8fecu: goto label_1f8fec;
        case 0x1f8ff0u: goto label_1f8ff0;
        case 0x1f8ff4u: goto label_1f8ff4;
        case 0x1f8ff8u: goto label_1f8ff8;
        case 0x1f8ffcu: goto label_1f8ffc;
        case 0x1f9000u: goto label_1f9000;
        case 0x1f9004u: goto label_1f9004;
        case 0x1f9008u: goto label_1f9008;
        case 0x1f900cu: goto label_1f900c;
        case 0x1f9010u: goto label_1f9010;
        case 0x1f9014u: goto label_1f9014;
        case 0x1f9018u: goto label_1f9018;
        case 0x1f901cu: goto label_1f901c;
        case 0x1f9020u: goto label_1f9020;
        case 0x1f9024u: goto label_1f9024;
        case 0x1f9028u: goto label_1f9028;
        case 0x1f902cu: goto label_1f902c;
        case 0x1f9030u: goto label_1f9030;
        case 0x1f9034u: goto label_1f9034;
        case 0x1f9038u: goto label_1f9038;
        case 0x1f903cu: goto label_1f903c;
        case 0x1f9040u: goto label_1f9040;
        case 0x1f9044u: goto label_1f9044;
        case 0x1f9048u: goto label_1f9048;
        case 0x1f904cu: goto label_1f904c;
        case 0x1f9050u: goto label_1f9050;
        case 0x1f9054u: goto label_1f9054;
        case 0x1f9058u: goto label_1f9058;
        case 0x1f905cu: goto label_1f905c;
        case 0x1f9060u: goto label_1f9060;
        case 0x1f9064u: goto label_1f9064;
        default: break;
    }

    ctx->pc = 0x1f8f98u;

label_1f8f98:
    // 0x1f8f98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f8f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1f8f9c:
    // 0x1f8f9c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1f8f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1f8fa0:
    // 0x1f8fa0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f8fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1f8fa4:
    // 0x1f8fa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f8fa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f8fa8:
    // 0x1f8fa8: 0x8e0500a0  lw          $a1, 0xA0($s0)
    ctx->pc = 0x1f8fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_1f8fac:
    // 0x1f8fac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f8facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f8fb0:
    // 0x1f8fb0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f8fb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f8fb4:
    // 0x1f8fb4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f8fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f8fb8:
    // 0x1f8fb8: 0x60f809  jalr        $v1
label_1f8fbc:
    if (ctx->pc == 0x1F8FBCu) {
        ctx->pc = 0x1F8FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8FB8u;
        // 0x1f8fbc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8FC0u;
        goto label_1f8fc0;
    }
    ctx->pc = 0x1F8FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F8FC0u);
        ctx->pc = 0x1F8FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8FB8u;
        // 0x1f8fbc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8FB8u, 0x1F8FC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F8FC0u;
label_1f8fc0:
    // 0x1f8fc0: 0x8e0600a0  lw          $a2, 0xA0($s0)
    ctx->pc = 0x1f8fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_1f8fc4:
    // 0x1f8fc4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f8fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1f8fc8:
    // 0x1f8fc8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f8fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f8fcc:
    // 0x1f8fcc: 0x84450018  lh          $a1, 0x18($v0)
    ctx->pc = 0x1f8fccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1f8fd0:
    // 0x1f8fd0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1f8fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1f8fd4:
    // 0x1f8fd4: 0x60f809  jalr        $v1
label_1f8fd8:
    if (ctx->pc == 0x1F8FD8u) {
        ctx->pc = 0x1F8FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8FD4u;
        // 0x1f8fd8: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8FDCu;
        goto label_1f8fdc;
    }
    ctx->pc = 0x1F8FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F8FDCu);
        ctx->pc = 0x1F8FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8FD4u;
        // 0x1f8fd8: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8FD4u, 0x1F8FDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F8FDCu;
label_1f8fdc:
    // 0x1f8fdc: 0x8e0600a0  lw          $a2, 0xA0($s0)
    ctx->pc = 0x1f8fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_1f8fe0:
    // 0x1f8fe0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f8fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1f8fe4:
    // 0x1f8fe4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f8fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f8fe8:
    // 0x1f8fe8: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x1f8fe8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1f8fec:
    // 0x1f8fec: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1f8fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1f8ff0:
    // 0x1f8ff0: 0x60f809  jalr        $v1
label_1f8ff4:
    if (ctx->pc == 0x1F8FF4u) {
        ctx->pc = 0x1F8FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8FF0u;
        // 0x1f8ff4: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8FF8u;
        goto label_1f8ff8;
    }
    ctx->pc = 0x1F8FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F8FF8u);
        ctx->pc = 0x1F8FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8FF0u;
        // 0x1f8ff4: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8FF0u, 0x1F8FF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F8FF8u;
label_1f8ff8:
    // 0x1f8ff8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f8ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1f8ffc:
    // 0x1f8ffc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f8ffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f9000:
    // 0x1f9000: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f9000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f9004:
    // 0x1f9004: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1f9004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9008:
    // 0x1f9008: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f9008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f900c:
    // 0x1f900c: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1f900cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_1f9010:
    // 0x1f9010: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1f9010u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1f9014:
    // 0x1f9014: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1f9014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1f9018:
    // 0x1f9018: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f9018u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1f901c:
    // 0x1f901c: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x1f901cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f9020:
    // 0x1f9020: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f9020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1f9024:
    // 0x1f9024: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f9024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1f9028:
    // 0x1f9028: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1f9028u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1f902c:
    // 0x1f902c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f902cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f9030:
    // 0x1f9030: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x1f9030u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1f9034:
    // 0x1f9034: 0x8e0700a0  lw          $a3, 0xA0($s0)
    ctx->pc = 0x1f9034u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_1f9038:
    // 0x1f9038: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1f9038u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_1f903c:
    // 0x1f903c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f903cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1f9040:
    // 0x1f9040: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1f9040u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1f9044:
    // 0x1f9044: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1f9044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1f9048:
    // 0x1f9048: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1f9048u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1f904c:
    // 0x1f904c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1f904cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1f9050:
    // 0x1f9050: 0x60f809  jalr        $v1
label_1f9054:
    if (ctx->pc == 0x1F9054u) {
        ctx->pc = 0x1F9054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9050u;
        // 0x1f9054: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9058u;
        goto label_1f9058;
    }
    ctx->pc = 0x1F9050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F9058u);
        ctx->pc = 0x1F9054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9050u;
        // 0x1f9054: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9050u, 0x1F9058u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F9058u;
label_1f9058:
    // 0x1f9058: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1f9058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f905c:
    // 0x1f905c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f905cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1f9060:
    // 0x1f9060: 0x3e00008  jr          $ra
label_1f9064:
    if (ctx->pc == 0x1F9064u) {
        ctx->pc = 0x1F9064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9060u;
        // 0x1f9064: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9068u;
        goto label_fallthrough_0x1f9060;
    }
    ctx->pc = 0x1F9060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9060u;
        // 0x1f9064: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f9060:
    ctx->pc = 0x1F9068u;
}
