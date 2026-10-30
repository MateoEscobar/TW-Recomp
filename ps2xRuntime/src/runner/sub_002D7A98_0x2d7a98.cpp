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

// Function: sub_002D7A98
// Address: 0x2d7a98 - 0x2d7b50
void sub_002D7A98_0x2d7a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7A98_0x2d7a98");
#endif

    switch (ctx->pc) {
        case 0x2d7ad8u: goto label_2d7ad8;
        case 0x2d7ae8u: goto label_2d7ae8;
        case 0x2d7af8u: goto label_2d7af8;
        case 0x2d7b10u: goto label_2d7b10;
        case 0x2d7b1cu: goto label_2d7b1c;
        case 0x2d7b38u: goto label_2d7b38;
        default: break;
    }

    ctx->pc = 0x2d7a98u;

    // 0x2d7a98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d7a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d7a9c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d7a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d7aa0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d7aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d7aa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d7aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7aa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d7aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d7aac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d7aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d7ab0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2d7ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2d7ab4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2d7ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2d7ab8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D7AB8u;
    {
        const bool branch_taken_0x2d7ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7AB8u;
        // 0x2d7abc: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7ab8) {
            ctx->pc = 0x2D7B10u;
            goto label_2d7b10;
        }
    }
    ctx->pc = 0x2D7AC0u;
    // 0x2d7ac0: 0x9202003d  lbu         $v0, 0x3D($s0)
    ctx->pc = 0x2d7ac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 61)));
    // 0x2d7ac4: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x2d7ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x2d7ac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d7ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7acc: 0x34a56a40  ori         $a1, $a1, 0x6A40
    ctx->pc = 0x2d7accu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27200);
    // 0x2d7ad0: 0xc089998  jal         func_226660
    ctx->pc = 0x2D7AD0u;
    SET_GPR_U32(ctx, 31, 0x2D7AD8u);
    ctx->pc = 0x2D7AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7AD0u;
    // 0x2d7ad4: 0xac62021c  sw          $v0, 0x21C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2D7AD0u, 0x2D7AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7AD8u;
label_2d7ad8:
    // 0x2d7ad8: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2D7AD8u;
    {
        const bool branch_taken_0x2d7ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7ad8) {
            ctx->pc = 0x2D7ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7AD8u;
            // 0x2d7adc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7B14u;
            goto label_2d7b14;
        }
    }
    ctx->pc = 0x2D7AE0u;
    // 0x2d7ae0: 0xc089f98  jal         func_227E60
    ctx->pc = 0x2D7AE0u;
    SET_GPR_U32(ctx, 31, 0x2D7AE8u);
    ctx->pc = 0x2D7AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7AE0u;
    // 0x2d7ae4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x2D7AE0u, 0x2D7AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7AE8u;
label_2d7ae8:
    // 0x2d7ae8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2D7AE8u;
    {
        const bool branch_taken_0x2d7ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7ae8) {
            ctx->pc = 0x2D7AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7AE8u;
            // 0x2d7aec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7B14u;
            goto label_2d7b14;
        }
    }
    ctx->pc = 0x2D7AF0u;
    // 0x2d7af0: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x2D7AF0u;
    SET_GPR_U32(ctx, 31, 0x2D7AF8u);
    ctx->pc = 0x2D7AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7AF0u;
    // 0x2d7af4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x2D7AF0u, 0x2D7AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7AF8u;
label_2d7af8:
    // 0x2d7af8: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x2d7af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x2d7afc: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x2d7afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2d7b00: 0x50440004  beql        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D7B00u;
    {
        const bool branch_taken_0x2d7b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2d7b00) {
            ctx->pc = 0x2D7B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7B00u;
            // 0x2d7b04: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7B14u;
            goto label_2d7b14;
        }
    }
    ctx->pc = 0x2D7B08u;
    // 0x2d7b08: 0xc097ddc  jal         func_25F770
    ctx->pc = 0x2D7B08u;
    SET_GPR_U32(ctx, 31, 0x2D7B10u);
    ctx->pc = 0x2D7B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7B08u;
    // 0x2d7b0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F770u, 0x2D7B08u, 0x2D7B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7B10u;
label_2d7b10:
    // 0x2d7b10: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d7b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d7b14:
    // 0x2d7b14: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2D7B14u;
    SET_GPR_U32(ctx, 31, 0x2D7B1Cu);
    ctx->pc = 0x2D7B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7B14u;
    // 0x2d7b18: 0x82050043  lb          $a1, 0x43($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 67)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2D7B14u, 0x2D7B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7B1Cu;
label_2d7b1c:
    // 0x2d7b1c: 0xa2000042  sb          $zero, 0x42($s0)
    ctx->pc = 0x2d7b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d7b20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d7b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7b24: 0xa200003b  sb          $zero, 0x3B($s0)
    ctx->pc = 0x2d7b24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 59), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d7b28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d7b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7b2c: 0xa200003c  sb          $zero, 0x3C($s0)
    ctx->pc = 0x2d7b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d7b30: 0xc087612  jal         func_21D848
    ctx->pc = 0x2D7B30u;
    SET_GPR_U32(ctx, 31, 0x2D7B38u);
    ctx->pc = 0x2D7B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7B30u;
    // 0x2d7b34: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D848u, 0x2D7B30u, 0x2D7B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7B38u;
label_2d7b38:
    // 0x2d7b38: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d7b38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7b3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d7b3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7b40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d7b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7b44: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B44u;
        // 0x2d7b48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7B4Cu;
    // 0x2d7b4c: 0x0  nop
    ctx->pc = 0x2d7b4cu;
    // NOP
    ctx->pc = 0x2d7b50u;
}
