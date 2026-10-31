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

// Function: sub_00168AA0
// Address: 0x168aa0 - 0x168b58
void sub_00168AA0_0x168aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168AA0_0x168aa0");
#endif

    switch (ctx->pc) {
        case 0x168ad0u: goto label_168ad0;
        case 0x168ae8u: goto label_168ae8;
        case 0x168b18u: goto label_168b18;
        default: break;
    }

    ctx->pc = 0x168aa0u;

    // 0x168aa0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x168aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x168aa4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x168aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x168aa8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x168aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x168aac: 0x24900640  addiu       $s0, $a0, 0x640
    ctx->pc = 0x168aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1600));
    // 0x168ab0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x168ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x168ab4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x168ab4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ab8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x168ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x168abc: 0x3c120001  lui         $s2, 0x1
    ctx->pc = 0x168abcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
    // 0x168ac0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x168ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x168ac4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x168ac4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ac8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168acc: 0x3c140001  lui         $s4, 0x1
    ctx->pc = 0x168accu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)1 << 16));
label_168ad0:
    // 0x168ad0: 0x92020050  lbu         $v0, 0x50($s0)
    ctx->pc = 0x168ad0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x168ad4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x168AD4u;
    {
        const bool branch_taken_0x168ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168AD4u;
        // 0x168ad8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ad4) {
            ctx->pc = 0x168AF8u;
            goto label_168af8;
        }
    }
    ctx->pc = 0x168ADCu;
    // 0x168adc: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x168adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x168ae0: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x168AE0u;
    SET_GPR_U32(ctx, 31, 0x168AE8u);
    ctx->pc = 0x168AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168AE0u;
    // 0x168ae4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x168AE0u, 0x168AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168AE8u;
label_168ae8:
    // 0x168ae8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x168AE8u;
    {
        const bool branch_taken_0x168ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168AE8u;
        // 0x168aec: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ae8) {
            ctx->pc = 0x168AF8u;
            goto label_168af8;
        }
    }
    ctx->pc = 0x168AF0u;
    // 0x168af0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x168AF0u;
    {
        const bool branch_taken_0x168af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168AF0u;
        // 0x168af4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168af0) {
            ctx->pc = 0x168B34u;
            goto label_168b34;
        }
    }
    ctx->pc = 0x168AF8u;
label_168af8:
    // 0x168af8: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x168af8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x168afc: 0x28c03  sra         $s1, $v0, 16
    ctx->pc = 0x168afcu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 16));
    // 0x168b00: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x168b00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x168b04: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x168B04u;
    {
        const bool branch_taken_0x168b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168B04u;
        // 0x168b08: 0x2549021  addu        $s2, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168b04) {
            ctx->pc = 0x168AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168ad0;
        }
    }
    ctx->pc = 0x168B0Cu;
    // 0x168b0c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x168b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x168b10: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x168b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x168b14: 0x0  nop
    ctx->pc = 0x168b14u;
    // NOP
label_168b18:
    // 0x168b18: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x168b18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b1c: 0x28c03  sra         $s1, $v0, 16
    ctx->pc = 0x168b1cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 16));
    // 0x168b20: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x168b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x168b24: 0x0  nop
    ctx->pc = 0x168b24u;
    // NOP
    // 0x168b28: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x168B28u;
    {
        const bool branch_taken_0x168b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168B28u;
        // 0x168b2c: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168b28) {
            ctx->pc = 0x168B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168b18;
        }
    }
    ctx->pc = 0x168B30u;
    // 0x168b30: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x168b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_168b34:
    // 0x168b34: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x168b34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x168b38: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x168b38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x168b3c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x168b3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168b40: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x168b40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168b44: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x168b44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168b48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x168B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168B4Cu;
        // 0x168b50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168B54u;
    // 0x168b54: 0x0  nop
    ctx->pc = 0x168b54u;
    // NOP
    ctx->pc = 0x168b58u;
}
