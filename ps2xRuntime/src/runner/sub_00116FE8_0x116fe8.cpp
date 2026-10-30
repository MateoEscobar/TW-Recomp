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

// Function: sub_00116FE8
// Address: 0x116fe8 - 0x1170e8
void sub_00116FE8_0x116fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116FE8_0x116fe8");
#endif

    switch (ctx->pc) {
        case 0x117038u: goto label_117038;
        case 0x11705cu: goto label_11705c;
        case 0x11707cu: goto label_11707c;
        case 0x11708cu: goto label_11708c;
        case 0x1170a4u: goto label_1170a4;
        case 0x1170b0u: goto label_1170b0;
        default: break;
    }

    ctx->pc = 0x116fe8u;

    // 0x116fe8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x116fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x116fec: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x116fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x116ff0: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x116ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x116ff4: 0x34424070  ori         $v0, $v0, 0x4070
    ctx->pc = 0x116ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16496);
    // 0x116ff8: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x116ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x116ffc: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x116ffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x117000: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x117000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x117004: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x117004u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x117008: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x117008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x11700c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x11700cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117010: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x117010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x117014: 0x3c070055  lui         $a3, 0x55
    ctx->pc = 0x117014u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)85 << 16));
    // 0x117018: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x117018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x11701c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11701cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117020: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x117020u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x117024: 0x3c12006f  lui         $s2, 0x6F
    ctx->pc = 0x117024u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
    // 0x117028: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x117028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11702c: 0x3c130055  lui         $s3, 0x55
    ctx->pc = 0x11702cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)85 << 16));
    // 0x117030: 0x3c14005e  lui         $s4, 0x5E
    ctx->pc = 0x117030u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)94 << 16));
    // 0x117034: 0x0  nop
    ctx->pc = 0x117034u;
    // NOP
label_117038:
    // 0x117038: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x117038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11703c: 0x54a2001e  bnel        $a1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x11703Cu;
    {
        const bool branch_taken_0x11703c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x11703c) {
            ctx->pc = 0x117040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11703Cu;
            // 0x117040: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1170B8u;
            goto label_1170b8;
        }
    }
    ctx->pc = 0x117044u;
    // 0x117044: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x117044u;
    {
        const bool branch_taken_0x117044 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x117044) {
            ctx->pc = 0x117064u;
            goto label_117064;
        }
    }
    ctx->pc = 0x11704Cu;
    // 0x11704c: 0x24e581f0  addiu       $a1, $a3, -0x7E10
    ctx->pc = 0x11704cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935024));
    // 0x117050: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x117050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117054: 0xc10c4de  jal         func_431378
    ctx->pc = 0x117054u;
    SET_GPR_U32(ctx, 31, 0x11705Cu);
    ctx->pc = 0x117058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117054u;
    // 0x117058: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x117054u, 0x11705Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11705Cu;
label_11705c:
    // 0x11705c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11705Cu;
    {
        const bool branch_taken_0x11705c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11705Cu;
        // 0x117060: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11705c) {
            ctx->pc = 0x117080u;
            goto label_117080;
        }
    }
    ctx->pc = 0x117064u;
label_117064:
    // 0x117064: 0x54a40006  bnel        $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x117064u;
    {
        const bool branch_taken_0x117064 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x117064) {
            ctx->pc = 0x117068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117064u;
            // 0x117068: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117080u;
            goto label_117080;
        }
    }
    ctx->pc = 0x11706Cu;
    // 0x11706c: 0x24c581f8  addiu       $a1, $a2, -0x7E08
    ctx->pc = 0x11706cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935032));
    // 0x117070: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x117070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117074: 0xc10c4de  jal         func_431378
    ctx->pc = 0x117074u;
    SET_GPR_U32(ctx, 31, 0x11707Cu);
    ctx->pc = 0x117078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117074u;
    // 0x117078: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x117074u, 0x11707Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11707Cu;
label_11707c:
    // 0x11707c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x11707cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_117080:
    // 0x117080: 0x2644b8b0  addiu       $a0, $s2, -0x4750
    ctx->pc = 0x117080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294949040));
    // 0x117084: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x117084u;
    SET_GPR_U32(ctx, 31, 0x11708Cu);
    ctx->pc = 0x117088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117084u;
    // 0x117088: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x117084u, 0x11708Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11708Cu;
label_11708c:
    // 0x11708c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11708cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117090: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x117090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x117094: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x117094u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117098: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x117098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11709c: 0xc10ca04  jal         func_432810
    ctx->pc = 0x11709Cu;
    SET_GPR_U32(ctx, 31, 0x1170A4u);
    ctx->pc = 0x1170A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11709Cu;
    // 0x1170a0: 0x26668270  addiu       $a2, $s3, -0x7D90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x11709Cu, 0x1170A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1170A4u;
label_1170a4:
    // 0x1170a4: 0x268491e0  addiu       $a0, $s4, -0x6E20
    ctx->pc = 0x1170a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294939104));
    // 0x1170a8: 0xc050fda  jal         func_143F68
    ctx->pc = 0x1170A8u;
    SET_GPR_U32(ctx, 31, 0x1170B0u);
    ctx->pc = 0x1170ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1170A8u;
    // 0x1170ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x1170A8u, 0x1170B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1170B0u;
label_1170b0:
    // 0x1170b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1170B0u;
    {
        const bool branch_taken_0x1170b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1170B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170B0u;
        // 0x1170b4: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1170b0) {
            ctx->pc = 0x1170CCu;
            goto label_1170cc;
        }
    }
    ctx->pc = 0x1170B8u;
label_1170b8:
    // 0x1170b8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1170b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1170bc: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1170BCu;
    {
        const bool branch_taken_0x1170bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1170C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170BCu;
        // 0x1170c0: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1170bc) {
            ctx->pc = 0x117038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117038;
        }
    }
    ctx->pc = 0x1170C4u;
    // 0x1170c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1170c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1170c8: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1170c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1170cc:
    // 0x1170cc: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1170ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1170d0: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1170d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1170d4: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1170d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1170d8: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x1170d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1170dc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1170dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1170e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1170E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1170E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1170E0u;
        // 0x1170e4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1170E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1170E8u;
}
