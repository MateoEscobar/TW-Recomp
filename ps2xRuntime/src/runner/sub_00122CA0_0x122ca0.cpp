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

// Function: sub_00122CA0
// Address: 0x122ca0 - 0x122d38
void sub_00122CA0_0x122ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122CA0_0x122ca0");
#endif

    switch (ctx->pc) {
        case 0x122ca0u: goto label_122ca0;
        case 0x122ca4u: goto label_122ca4;
        case 0x122ca8u: goto label_122ca8;
        case 0x122cacu: goto label_122cac;
        case 0x122cb0u: goto label_122cb0;
        case 0x122cb4u: goto label_122cb4;
        case 0x122cb8u: goto label_122cb8;
        case 0x122cbcu: goto label_122cbc;
        case 0x122cc0u: goto label_122cc0;
        case 0x122cc4u: goto label_122cc4;
        case 0x122cc8u: goto label_122cc8;
        case 0x122cccu: goto label_122ccc;
        case 0x122cd0u: goto label_122cd0;
        case 0x122cd4u: goto label_122cd4;
        case 0x122cd8u: goto label_122cd8;
        case 0x122cdcu: goto label_122cdc;
        case 0x122ce0u: goto label_122ce0;
        case 0x122ce4u: goto label_122ce4;
        case 0x122ce8u: goto label_122ce8;
        case 0x122cecu: goto label_122cec;
        case 0x122cf0u: goto label_122cf0;
        case 0x122cf4u: goto label_122cf4;
        case 0x122cf8u: goto label_122cf8;
        case 0x122cfcu: goto label_122cfc;
        case 0x122d00u: goto label_122d00;
        case 0x122d04u: goto label_122d04;
        case 0x122d08u: goto label_122d08;
        case 0x122d0cu: goto label_122d0c;
        case 0x122d10u: goto label_122d10;
        case 0x122d14u: goto label_122d14;
        case 0x122d18u: goto label_122d18;
        case 0x122d1cu: goto label_122d1c;
        case 0x122d20u: goto label_122d20;
        case 0x122d24u: goto label_122d24;
        case 0x122d28u: goto label_122d28;
        case 0x122d2cu: goto label_122d2c;
        case 0x122d30u: goto label_122d30;
        case 0x122d34u: goto label_122d34;
        default: break;
    }

    ctx->pc = 0x122ca0u;

label_122ca0:
    // 0x122ca0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x122ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_122ca4:
    // 0x122ca4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x122ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_122ca8:
    // 0x122ca8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x122ca8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_122cac:
    // 0x122cac: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x122cacu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_122cb0:
    // 0x122cb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x122cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_122cb4:
    // 0x122cb4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x122cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_122cb8:
    // 0x122cb8: 0x2411003c  addiu       $s1, $zero, 0x3C
    ctx->pc = 0x122cb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_122cbc:
    // 0x122cbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x122cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_122cc0:
    // 0x122cc0: 0xe454b204  swc1        $f20, -0x4DFC($v0)
    ctx->pc = 0x122cc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294947332), bits); }
label_122cc4:
    // 0x122cc4: 0x112400  sll         $a0, $s1, 16
    ctx->pc = 0x122cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
label_122cc8:
    // 0x122cc8: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x122cc8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
label_122ccc:
    // 0x122ccc: 0xc0e4044  jal         func_390110
label_122cd0:
    if (ctx->pc == 0x122CD0u) {
        ctx->pc = 0x122CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122CCCu;
        // 0x122cd0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122CD4u;
        goto label_122cd4;
    }
    ctx->pc = 0x122CCCu;
    SET_GPR_U32(ctx, 31, 0x122CD4u);
    ctx->pc = 0x122CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122CCCu;
    // 0x122cd0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390110u, 0x122CCCu, 0x122CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122CD4u;
label_122cd4:
    // 0x122cd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x122cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122cd8:
    // 0x122cd8: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_122cdc:
    if (ctx->pc == 0x122CDCu) {
        ctx->pc = 0x122CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122CD8u;
        // 0x122cdc: 0x2a22006c  slti        $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)108) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x122CE0u;
        goto label_122ce0;
    }
    ctx->pc = 0x122CD8u;
    {
        const bool branch_taken_0x122cd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x122CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122CD8u;
        // 0x122cdc: 0x2a22006c  slti        $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)108) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122cd8) {
            ctx->pc = 0x122D18u;
            goto label_122d18;
        }
    }
    ctx->pc = 0x122CE0u;
label_122ce0:
    // 0x122ce0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x122ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_122ce4:
    // 0x122ce4: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x122ce4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_122ce8:
    // 0x122ce8: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x122ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_122cec:
    // 0x122cec: 0x40f809  jalr        $v0
label_122cf0:
    if (ctx->pc == 0x122CF0u) {
        ctx->pc = 0x122CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122CECu;
        // 0x122cf0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122CF4u;
        goto label_122cf4;
    }
    ctx->pc = 0x122CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x122CF4u);
        ctx->pc = 0x122CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122CECu;
        // 0x122cf0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122CECu, 0x122CF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x122CF4u;
label_122cf4:
    // 0x122cf4: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x122cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_122cf8:
    // 0x122cf8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_122cfc:
    if (ctx->pc == 0x122CFCu) {
        ctx->pc = 0x122CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122CF8u;
        // 0x122cfc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x122D00u;
        goto label_122d00;
    }
    ctx->pc = 0x122CF8u;
    {
        const bool branch_taken_0x122cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122CF8u;
        // 0x122cfc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122cf8) {
            ctx->pc = 0x122D14u;
            goto label_122d14;
        }
    }
    ctx->pc = 0x122D00u;
label_122d00:
    // 0x122d00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x122d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_122d04:
    // 0x122d04: 0x84440198  lh          $a0, 0x198($v0)
    ctx->pc = 0x122d04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 408)));
label_122d08:
    // 0x122d08: 0x8c43019c  lw          $v1, 0x19C($v0)
    ctx->pc = 0x122d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 412)));
label_122d0c:
    // 0x122d0c: 0x60f809  jalr        $v1
label_122d10:
    if (ctx->pc == 0x122D10u) {
        ctx->pc = 0x122D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D0Cu;
        // 0x122d10: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122D14u;
        goto label_122d14;
    }
    ctx->pc = 0x122D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x122D14u);
        ctx->pc = 0x122D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D0Cu;
        // 0x122d10: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122D0Cu, 0x122D14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x122D14u;
label_122d14:
    // 0x122d14: 0x2a22006c  slti        $v0, $s1, 0x6C
    ctx->pc = 0x122d14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)108) ? 1 : 0);
label_122d18:
    // 0x122d18: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
label_122d1c:
    if (ctx->pc == 0x122D1Cu) {
        ctx->pc = 0x122D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D18u;
        // 0x122d1c: 0x112400  sll         $a0, $s1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122D20u;
        goto label_122d20;
    }
    ctx->pc = 0x122D18u;
    {
        const bool branch_taken_0x122d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x122d18) {
            ctx->pc = 0x122D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122D18u;
            // 0x122d1c: 0x112400  sll         $a0, $s1, 16 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122cc8;
        }
    }
    ctx->pc = 0x122D20u;
label_122d20:
    // 0x122d20: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x122d20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_122d24:
    // 0x122d24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x122d24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_122d28:
    // 0x122d28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x122d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_122d2c:
    // 0x122d2c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x122d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_122d30:
    // 0x122d30: 0x3e00008  jr          $ra
label_122d34:
    if (ctx->pc == 0x122D34u) {
        ctx->pc = 0x122D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D30u;
        // 0x122d34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122D38u;
        goto label_fallthrough_0x122d30;
    }
    ctx->pc = 0x122D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D30u;
        // 0x122d34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x122d30:
    ctx->pc = 0x122D38u;
}
