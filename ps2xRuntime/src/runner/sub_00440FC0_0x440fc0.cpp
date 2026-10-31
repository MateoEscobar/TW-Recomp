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

// Function: sub_00440FC0
// Address: 0x440fc0 - 0x441048
void sub_00440FC0_0x440fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00440FC0_0x440fc0");
#endif

    switch (ctx->pc) {
        case 0x440fd8u: goto label_440fd8;
        case 0x440fe0u: goto label_440fe0;
        case 0x441000u: goto label_441000;
        case 0x441014u: goto label_441014;
        case 0x441030u: goto label_441030;
        default: break;
    }

    ctx->pc = 0x440fc0u;

    // 0x440fc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x440fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x440fc4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x440fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x440fc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x440fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x440fcc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x440fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x440fd0: 0xc1103d2  jal         func_440F48
    ctx->pc = 0x440FD0u;
    SET_GPR_U32(ctx, 31, 0x440FD8u);
    ctx->pc = 0x440FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x440FD0u;
    // 0x440fd4: 0x3c110052  lui         $s1, 0x52 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)82 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x440F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x440F48u, 0x440FD0u, 0x440FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x440FD8u;
label_440fd8:
    // 0x440fd8: 0xc10f438  jal         func_43D0E0
    ctx->pc = 0x440FD8u;
    SET_GPR_U32(ctx, 31, 0x440FE0u);
    ctx->pc = 0x440FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x440FD8u;
    // 0x440fdc: 0x8e248ef8  lw          $a0, -0x7108($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294938360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0E0u, 0x440FD8u, 0x440FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x440FE0u;
label_440fe0:
    // 0x440fe0: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x440fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x440fe4: 0x24703400  addiu       $s0, $v1, 0x3400
    ctx->pc = 0x440fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 13312));
    // 0x440fe8: 0x26030200  addiu       $v1, $s0, 0x200
    ctx->pc = 0x440fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x440fec: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x440fecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x440ff0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x440FF0u;
    {
        const bool branch_taken_0x440ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x440FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440FF0u;
        // 0x440ff4: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440ff0) {
            ctx->pc = 0x441028u;
            goto label_441028;
        }
    }
    ctx->pc = 0x440FF8u;
    // 0x440ff8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x440ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x440ffc: 0x0  nop
    ctx->pc = 0x440ffcu;
    // NOP
label_441000:
    // 0x441000: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x441000u;
    {
        const bool branch_taken_0x441000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x441000) {
            ctx->pc = 0x441004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x441000u;
            // 0x441004: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44101Cu;
            goto label_44101c;
        }
    }
    ctx->pc = 0x441008u;
    // 0x441008: 0x8e248ef8  lw          $a0, -0x7108($s1)
    ctx->pc = 0x441008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294938360)));
    // 0x44100c: 0xc10f430  jal         func_43D0C0
    ctx->pc = 0x44100Cu;
    SET_GPR_U32(ctx, 31, 0x441014u);
    ctx->pc = 0x441010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44100Cu;
    // 0x441010: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0C0u, 0x44100Cu, 0x441014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x441014u;
label_441014:
    // 0x441014: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x441014u;
    {
        const bool branch_taken_0x441014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x441018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441014u;
        // 0x441018: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441014) {
            ctx->pc = 0x441034u;
            goto label_441034;
        }
    }
    ctx->pc = 0x44101Cu;
label_44101c:
    // 0x44101c: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x44101cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x441020: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x441020u;
    {
        const bool branch_taken_0x441020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x441020) {
            ctx->pc = 0x441024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x441020u;
            // 0x441024: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x441000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_441000;
        }
    }
    ctx->pc = 0x441028u;
label_441028:
    // 0x441028: 0xc10f430  jal         func_43D0C0
    ctx->pc = 0x441028u;
    SET_GPR_U32(ctx, 31, 0x441030u);
    ctx->pc = 0x44102Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x441028u;
    // 0x44102c: 0x8e248ef8  lw          $a0, -0x7108($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294938360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0C0u, 0x441028u, 0x441030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x441030u;
label_441030:
    // 0x441030: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x441030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_441034:
    // 0x441034: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x441034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x441038: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x441038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44103c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x44103cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x441040: 0x3e00008  jr          $ra
    ctx->pc = 0x441040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x441044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441040u;
        // 0x441044: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x441040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x441048u;
}
