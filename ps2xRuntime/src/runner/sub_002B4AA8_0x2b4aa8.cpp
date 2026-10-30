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

// Function: sub_002B4AA8
// Address: 0x2b4aa8 - 0x2b4b88
void sub_002B4AA8_0x2b4aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4AA8_0x2b4aa8");
#endif

    switch (ctx->pc) {
        case 0x2b4accu: goto label_2b4acc;
        case 0x2b4adcu: goto label_2b4adc;
        case 0x2b4af4u: goto label_2b4af4;
        case 0x2b4afcu: goto label_2b4afc;
        case 0x2b4b20u: goto label_2b4b20;
        case 0x2b4b70u: goto label_2b4b70;
        default: break;
    }

    ctx->pc = 0x2b4aa8u;

    // 0x2b4aa8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b4aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b4aac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2b4aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2b4ab0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b4ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b4ab4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b4ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4ab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b4abc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b4abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b4ac0: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x2b4ac0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b4ac4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2B4AC4u;
    SET_GPR_U32(ctx, 31, 0x2B4ACCu);
    ctx->pc = 0x2B4AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4AC4u;
    // 0x2b4ac8: 0x24840124  addiu       $a0, $a0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B4AC4u, 0x2B4ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4ACCu;
label_2b4acc:
    // 0x2b4acc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B4ACCu;
    {
        const bool branch_taken_0x2b4acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4acc) {
            ctx->pc = 0x2B4AF4u;
            goto label_2b4af4;
        }
    }
    ctx->pc = 0x2B4AD4u;
    // 0x2b4ad4: 0xc087502  jal         func_21D408
    ctx->pc = 0x2B4AD4u;
    SET_GPR_U32(ctx, 31, 0x2B4ADCu);
    ctx->pc = 0x2B4AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4AD4u;
    // 0x2b4ad8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B4AD4u, 0x2B4ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4ADCu;
label_2b4adc:
    // 0x2b4adc: 0x904302d4  lbu         $v1, 0x2D4($v0)
    ctx->pc = 0x2b4adcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x2b4ae0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4AE0u;
    {
        const bool branch_taken_0x2b4ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4AE0u;
        // 0x2b4ae4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4ae0) {
            ctx->pc = 0x2B4AF4u;
            goto label_2b4af4;
        }
    }
    ctx->pc = 0x2B4AE8u;
    // 0x2b4ae8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b4ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b4aec: 0xc0a33f8  jal         func_28CFE0
    ctx->pc = 0x2B4AECu;
    SET_GPR_U32(ctx, 31, 0x2B4AF4u);
    ctx->pc = 0x2B4AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4AECu;
    // 0x2b4af0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2B4AECu, 0x2B4AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4AF4u;
label_2b4af4:
    // 0x2b4af4: 0xc088ee6  jal         func_223B98
    ctx->pc = 0x2B4AF4u;
    SET_GPR_U32(ctx, 31, 0x2B4AFCu);
    ctx->pc = 0x2B4AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4AF4u;
    // 0x2b4af8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x2B4AF4u, 0x2B4AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4AFCu;
label_2b4afc:
    // 0x2b4afc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B4AFCu;
    {
        const bool branch_taken_0x2b4afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4afc) {
            ctx->pc = 0x2B4B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4AFCu;
            // 0x2b4b00: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4B0Cu;
            goto label_2b4b0c;
        }
    }
    ctx->pc = 0x2B4B04u;
    // 0x2b4b04: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2B4B04u;
    {
        const bool branch_taken_0x2b4b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4B04u;
        // 0x2b4b08: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4b04) {
            ctx->pc = 0x2B4B74u;
            goto label_2b4b74;
        }
    }
    ctx->pc = 0x2B4B0Cu;
label_2b4b0c:
    // 0x2b4b0c: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2b4b0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x2b4b10: 0x1c400018  bgtz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B4B10u;
    {
        const bool branch_taken_0x2b4b10 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B4B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4B10u;
        // 0x2b4b14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4b10) {
            ctx->pc = 0x2B4B74u;
            goto label_2b4b74;
        }
    }
    ctx->pc = 0x2B4B18u;
    // 0x2b4b18: 0xc136b80  jal         func_4DAE00
    ctx->pc = 0x2B4B18u;
    SET_GPR_U32(ctx, 31, 0x2B4B20u);
    ctx->pc = 0x2B4B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4B18u;
    // 0x2b4b1c: 0x248401a4  addiu       $a0, $a0, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x2B4B18u, 0x2B4B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4B20u;
label_2b4b20:
    // 0x2b4b20: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B4B20u;
    {
        const bool branch_taken_0x2b4b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4B20u;
        // 0x2b4b24: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4b20) {
            ctx->pc = 0x2B4B70u;
            goto label_2b4b70;
        }
    }
    ctx->pc = 0x2B4B28u;
    // 0x2b4b28: 0x8e0a0014  lw          $t2, 0x14($s0)
    ctx->pc = 0x2b4b28u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b4b2c: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2b4b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x2b4b30: 0x240807d0  addiu       $t0, $zero, 0x7D0
    ctx->pc = 0x2b4b30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x2b4b34: 0x2407076c  addiu       $a3, $zero, 0x76C
    ctx->pc = 0x2b4b34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1900));
    // 0x2b4b38: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2b4b38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b4b3c: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2b4b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2b4b40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b4b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4b44: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b4b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b4b48: 0x2406002a  addiu       $a2, $zero, 0x2A
    ctx->pc = 0x2b4b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x2b4b4c: 0x6a1823  subu        $v1, $v1, $t2
    ctx->pc = 0x2b4b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2b4b50: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b4b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b4b54: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b4b54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b4b58: 0x286207d1  slti        $v0, $v1, 0x7D1
    ctx->pc = 0x2b4b58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2001) ? 1 : 0);
    // 0x2b4b5c: 0x62400b  movn        $t0, $v1, $v0
    ctx->pc = 0x2b4b5cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x2b4b60: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x2b4b60u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2b4b64: 0x127482a  slt         $t1, $t1, $a3
    ctx->pc = 0x2b4b64u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2b4b68: 0xc0a3892  jal         func_28E248
    ctx->pc = 0x2B4B68u;
    SET_GPR_U32(ctx, 31, 0x2B4B70u);
    ctx->pc = 0x2B4B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4B68u;
    // 0x2b4b6c: 0x9380a  movz        $a3, $zero, $t1 (Delay Slot)
    if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2B4B68u, 0x2B4B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4B70u;
label_2b4b70:
    // 0x2b4b70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b4b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4b74:
    // 0x2b4b74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2b4b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4b78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b4b78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4b7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4b80: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4B80u;
        // 0x2b4b84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4B88u;
}
