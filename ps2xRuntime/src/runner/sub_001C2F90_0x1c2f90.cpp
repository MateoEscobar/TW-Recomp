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

// Function: sub_001C2F90
// Address: 0x1c2f90 - 0x1c3088
void sub_001C2F90_0x1c2f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2F90_0x1c2f90");
#endif

    switch (ctx->pc) {
        case 0x1c2fd8u: goto label_1c2fd8;
        case 0x1c2ff0u: goto label_1c2ff0;
        case 0x1c3004u: goto label_1c3004;
        case 0x1c3014u: goto label_1c3014;
        case 0x1c3020u: goto label_1c3020;
        case 0x1c302cu: goto label_1c302c;
        default: break;
    }

    ctx->pc = 0x1c2f90u;

    // 0x1c2f90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1c2f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1c2f94: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1c2f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1c2f98: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1c2f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1c2f9c: 0x24950444  addiu       $s5, $a0, 0x444
    ctx->pc = 0x1c2f9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 1092));
    // 0x1c2fa0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1c2fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1c2fa4: 0x24900650  addiu       $s0, $a0, 0x650
    ctx->pc = 0x1c2fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1616));
    // 0x1c2fa8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1c2fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1c2fac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c2facu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2fb0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c2fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1c2fb4: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x1c2fb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2fb8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1c2fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1c2fbc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c2fbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2fc0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1c2fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x1c2fc4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c2fc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2fc8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1c2fc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1c2fcc: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1c2fccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2fd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2fd4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1c2fd4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1c2fd8:
    // 0x1c2fd8: 0x8e02fffc  lw          $v0, -0x4($s0)
    ctx->pc = 0x1c2fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x1c2fdc: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C2FDCu;
    {
        const bool branch_taken_0x1c2fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2fdc) {
            ctx->pc = 0x1C2FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2FDCu;
            // 0x1c2fe0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3040u;
            goto label_1c3040;
        }
    }
    ctx->pc = 0x1C2FE4u;
    // 0x1c2fe4: 0xae05fdf0  sw          $a1, -0x210($s0)
    ctx->pc = 0x1c2fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294966768), GPR_U32(ctx, 5));
    // 0x1c2fe8: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1C2FE8u;
    SET_GPR_U32(ctx, 31, 0x1C2FF0u);
    ctx->pc = 0x1C2FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2FE8u;
    // 0x1c2fec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1C2FE8u, 0x1C2FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2FF0u;
label_1c2ff0:
    // 0x1c2ff0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1c2ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1c2ff4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ff8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1c2ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1c2ffc: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1C2FFCu;
    SET_GPR_U32(ctx, 31, 0x1C3004u);
    ctx->pc = 0x1C3000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2FFCu;
    // 0x1c3000: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1C2FFCu, 0x1C3004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3004u;
label_1c3004:
    // 0x1c3004: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c3004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3008: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c3008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c300c: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1C300Cu;
    SET_GPR_U32(ctx, 31, 0x1C3014u);
    ctx->pc = 0x1C3010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C300Cu;
    // 0x1c3010: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1C300Cu, 0x1C3014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3014u;
label_1c3014:
    // 0x1c3014: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c3014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3018: 0xc07089c  jal         func_1C2270
    ctx->pc = 0x1C3018u;
    SET_GPR_U32(ctx, 31, 0x1C3020u);
    ctx->pc = 0x1C301Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3018u;
    // 0x1c301c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2270u, 0x1C3018u, 0x1C3020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3020u;
label_1c3020:
    // 0x1c3020: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c3020u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c3024: 0xc0708ac  jal         func_1C22B0
    ctx->pc = 0x1C3024u;
    SET_GPR_U32(ctx, 31, 0x1C302Cu);
    ctx->pc = 0x1C3028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3024u;
    // 0x1c3028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22B0u, 0x1C3024u, 0x1C302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C302Cu;
label_1c302c:
    // 0x1c302c: 0xae16fffc  sw          $s6, -0x4($s0)
    ctx->pc = 0x1c302cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), GPR_U32(ctx, 22));
    // 0x1c3030: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1c3030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3034: 0xae00fff4  sw          $zero, -0xC($s0)
    ctx->pc = 0x1c3034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967284), GPR_U32(ctx, 0));
    // 0x1c3038: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C3038u;
    {
        const bool branch_taken_0x1c3038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3038u;
        // 0x1c303c: 0xae00fff8  sw          $zero, -0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294967288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3038) {
            ctx->pc = 0x1C3058u;
            goto label_1c3058;
        }
    }
    ctx->pc = 0x1C3040u;
label_1c3040:
    // 0x1c3040: 0x26100a50  addiu       $s0, $s0, 0xA50
    ctx->pc = 0x1c3040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
    // 0x1c3044: 0x26520a50  addiu       $s2, $s2, 0xA50
    ctx->pc = 0x1c3044u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2640));
    // 0x1c3048: 0x2e820005  sltiu       $v0, $s4, 0x5
    ctx->pc = 0x1c3048u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1c304c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1C304Cu;
    {
        const bool branch_taken_0x1c304c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C304Cu;
        // 0x1c3050: 0x26730a50  addiu       $s3, $s3, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c304c) {
            ctx->pc = 0x1C2FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2fd8;
        }
    }
    ctx->pc = 0x1C3054u;
    // 0x1c3054: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c3054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c3058:
    // 0x1c3058: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1c3058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c305c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1c305cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c3060: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1c3060u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c3064: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c3064u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c3068: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1c3068u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c306c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1c306cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3070: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1c3070u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c3074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3078: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1c3078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c307c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C307Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C307Cu;
        // 0x1c3080: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C307Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3084u;
    // 0x1c3084: 0x0  nop
    ctx->pc = 0x1c3084u;
    // NOP
    ctx->pc = 0x1c3088u;
}
