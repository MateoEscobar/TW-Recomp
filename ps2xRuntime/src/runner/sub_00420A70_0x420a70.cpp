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

// Function: sub_00420A70
// Address: 0x420a70 - 0x420b48
void sub_00420A70_0x420a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420A70_0x420a70");
#endif

    switch (ctx->pc) {
        case 0x420a9cu: goto label_420a9c;
        case 0x420aa8u: goto label_420aa8;
        case 0x420adcu: goto label_420adc;
        case 0x420aecu: goto label_420aec;
        case 0x420afcu: goto label_420afc;
        case 0x420b0cu: goto label_420b0c;
        case 0x420b1cu: goto label_420b1c;
        case 0x420b2cu: goto label_420b2c;
        default: break;
    }

    ctx->pc = 0x420a70u;

    // 0x420a70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x420a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x420a74: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x420a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x420a78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x420a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x420a7c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x420a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x420a80: 0x8c51489c  lw          $s1, 0x489C($v0)
    ctx->pc = 0x420a80u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x51489Cu));
    // 0x420a84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x420a84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420a88: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x420a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x420a8c: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x420A8Cu;
    {
        const bool branch_taken_0x420a8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x420A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420A8Cu;
        // 0x420a90: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420a8c) {
            ctx->pc = 0x420AC4u;
            goto label_420ac4;
        }
    }
    ctx->pc = 0x420A94u;
    // 0x420a94: 0xc136ad6  jal         func_4DAB58
    ctx->pc = 0x420A94u;
    SET_GPR_U32(ctx, 31, 0x420A9Cu);
    ctx->pc = 0x420A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420A94u;
    // 0x420a98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x420A94u, 0x420A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420A9Cu;
label_420a9c:
    // 0x420a9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x420a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420aa0: 0xc136ad4  jal         func_4DAB50
    ctx->pc = 0x420AA0u;
    SET_GPR_U32(ctx, 31, 0x420AA8u);
    ctx->pc = 0x420AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420AA0u;
    // 0x420aa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x420AA0u, 0x420AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420AA8u;
label_420aa8:
    // 0x420aa8: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x420aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x420aac: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x420aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x420ab0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x420ab0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x420ab4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x420ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x420ab8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x420ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x420abc: 0x50440001  beql        $v0, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x420ABCu;
    {
        const bool branch_taken_0x420abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x420abc) {
            ctx->pc = 0x420AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x420ABCu;
            // 0x420ac0: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x420AC4u;
            goto label_420ac4;
        }
    }
    ctx->pc = 0x420AC4u;
label_420ac4:
    // 0x420ac4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x420ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x420ac8: 0x26440008  addiu       $a0, $s2, 0x8
    ctx->pc = 0x420ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x420acc: 0xa24000bc  sb          $zero, 0xBC($s2)
    ctx->pc = 0x420accu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 188), (uint8_t)GPR_U32(ctx, 0));
    // 0x420ad0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x420ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420ad4: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x420AD4u;
    SET_GPR_U32(ctx, 31, 0x420ADCu);
    ctx->pc = 0x420AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420AD4u;
    // 0x420ad8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x420AD4u, 0x420ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420ADCu;
label_420adc:
    // 0x420adc: 0x26440024  addiu       $a0, $s2, 0x24
    ctx->pc = 0x420adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x420ae0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x420ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420ae4: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x420AE4u;
    SET_GPR_U32(ctx, 31, 0x420AECu);
    ctx->pc = 0x420AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420AE4u;
    // 0x420ae8: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x420AE4u, 0x420AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420AECu;
label_420aec:
    // 0x420aec: 0x26440014  addiu       $a0, $s2, 0x14
    ctx->pc = 0x420aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x420af0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x420af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420af4: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x420AF4u;
    SET_GPR_U32(ctx, 31, 0x420AFCu);
    ctx->pc = 0x420AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420AF4u;
    // 0x420af8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x420AF4u, 0x420AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420AFCu;
label_420afc:
    // 0x420afc: 0x26440058  addiu       $a0, $s2, 0x58
    ctx->pc = 0x420afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
    // 0x420b00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x420b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420b04: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x420B04u;
    SET_GPR_U32(ctx, 31, 0x420B0Cu);
    ctx->pc = 0x420B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420B04u;
    // 0x420b08: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x420B04u, 0x420B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420B0Cu;
label_420b0c:
    // 0x420b0c: 0x26440078  addiu       $a0, $s2, 0x78
    ctx->pc = 0x420b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
    // 0x420b10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x420b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420b14: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x420B14u;
    SET_GPR_U32(ctx, 31, 0x420B1Cu);
    ctx->pc = 0x420B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420B14u;
    // 0x420b18: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x420B14u, 0x420B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420B1Cu;
label_420b1c:
    // 0x420b1c: 0x264400a8  addiu       $a0, $s2, 0xA8
    ctx->pc = 0x420b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 168));
    // 0x420b20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x420b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420b24: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x420B24u;
    SET_GPR_U32(ctx, 31, 0x420B2Cu);
    ctx->pc = 0x420B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420B24u;
    // 0x420b28: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x420B24u, 0x420B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420B2Cu;
label_420b2c:
    // 0x420b2c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x420b2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x420b30: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x420b30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x420b34: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x420b34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x420b38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x420b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x420b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x420B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420B3Cu;
        // 0x420b40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420B44u;
    // 0x420b44: 0x0  nop
    ctx->pc = 0x420b44u;
    // NOP
    ctx->pc = 0x420b48u;
}
